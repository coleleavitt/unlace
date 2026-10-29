/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140017CA0
// Address: 0x0000000140017CA0

//----- (0000000140017CA0) ----------------------------------------------------
bool sub_140017CA0()
{
  __int64 *v0; // rdi
  bool result; // al
  _BYTE *v2; // rax
  char v3; // al
  DWORD LastError; // eax
  const char *v5; // rax
  HMODULE ModuleHandleA; // rax
  HMODULE LibraryA; // rax
  HMODULE v8; // rbx

  v0 = sub_1400019C0();
  if ( *((_BYTE *)v0 + 8) )
    return 1;
  if ( !byte_1400CAFA4 )
    return 0;
  v2 = sub_14001E600();
  if ( v2[56] )
    *v0 |= 0x100000000uLL;
  if ( *((_QWORD *)v2 + 5) )
    *v0 |= 0x400000000uLL;
  v3 = sub_140012480((__int64)"SeDebugPrivilege", 1u);
  *((_BYTE *)v0 + 9) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v5 = (const char *)sub_14005A890(LastError);
    sub_140002CE0(
      (struct __crt_locale_pointers *)"Cannot set debug privilege: %s.\n"
                                      "Debugging of processes owned by another account won't be possible.\n",
      v5);
  }
  byte_1400CB120 = 1;
  ModuleHandleA = GetModuleHandleA("ntdll.dll");
  hModule = ModuleHandleA;
  if ( ModuleHandleA )
  {
    NtSystemDebugControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))GetProcAddress(ModuleHandleA, "NtSystemDebugControl");
    NtLoadDriver = (__int64 (__fastcall *)(_QWORD))GetProcAddress(hModule, "NtLoadDriver");
    NtUnloadDriver = (__int64 (__fastcall *)(_QWORD))GetProcAddress(hModule, "NtUnloadDriver");
    RtlAdjustPrivilege = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GetProcAddress(
                                                                                   hModule,
                                                                                   "RtlAdjustPrivilege");
    NtCreateFile = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, PLARGE_INTEGER, ULONG, ULONG, ULONG, ULONG, PVOID, ULONG))GetProcAddress(hModule, "NtCreateFile");
    NtDeviceIoControlFile = (NTSTATUS (__stdcall *)(HANDLE, HANDLE, PIO_APC_ROUTINE, PVOID, PIO_STATUS_BLOCK, ULONG, PVOID, ULONG, PVOID, ULONG))GetProcAddress(hModule, "NtDeviceIoControlFile");
  }
  LibraryA = LoadLibraryA("psapi.dll");
  qword_1400CAE68 = LibraryA;
  if ( LibraryA )
  {
    GetMappedFileNameW = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GetProcAddress(
                                                                                   LibraryA,
                                                                                   "GetMappedFileNameW");
    GetModuleFileNameExW = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GetProcAddress(
                                                                                     qword_1400CAE68,
                                                                                     "GetModuleFileNameExW");
    if ( !GetMappedFileNameW )
    {
      FreeLibrary(qword_1400CAE68);
      qword_1400CAE68 = nullptr;
    }
  }
  v8 = GetModuleHandleA("kernel32.dll");
  OpenThread = (HANDLE (__stdcall *)(DWORD, BOOL, DWORD))GetProcAddress(v8, "OpenThread");
  GetThreadDescription = (HRESULT (__stdcall *)(HANDLE, PWSTR *))GetProcAddress(v8, "GetThreadDescription");
  Wow64GetThreadContext = (BOOL (__stdcall *)(HANDLE, PWOW64_CONTEXT))GetProcAddress(v8, "Wow64GetThreadContext");
  Wow64SetThreadContext = (BOOL (__stdcall *)(HANDLE, const WOW64_CONTEXT *))GetProcAddress(v8, "Wow64SetThreadContext");
  Wow64GetThreadSelectorEntry = (BOOL (__stdcall *)(HANDLE, DWORD, PWOW64_LDT_ENTRY))GetProcAddress(
                                                                                       v8,
                                                                                       "Wow64GetThreadSelectorEntry");
  result = *v0 != 0;
  *((_BYTE *)v0 + 8) = result;
  return result;
}
// 1400CAE58: using guessed type __int64 (__fastcall *GetMappedFileNameW)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400CAE60: using guessed type __int64 (__fastcall *GetModuleFileNameExW)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400CAEA0: using guessed type __int64 (__fastcall *NtSystemDebugControl)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD);
// 1400CAEA8: using guessed type __int64 (__fastcall *NtLoadDriver)(_QWORD);
// 1400CAEB0: using guessed type __int64 (__fastcall *NtUnloadDriver)(_QWORD);
// 1400CAEB8: using guessed type __int64 (__fastcall *RtlAdjustPrivilege)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400CAFA4: using guessed type char byte_1400CAFA4;
// 1400CB120: using guessed type char byte_1400CB120;
