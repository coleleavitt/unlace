/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414210
// Address: 0x00414210

//----- (00414210) --------------------------------------------------------
char __usercall sub_414210@<al>(__m128i a1@<xmm0>)
{
  int *v1; // edi
  _BYTE *v3; // eax
  int v4; // ecx
  int v5; // eax
  char v6; // al
  DWORD LastError; // eax
  HMODULE ModuleHandleA; // eax
  unsigned int v9; // esi
  FARPROC ProcAddress; // eax
  FARPROC *v11; // ecx
  HMODULE LibraryA; // eax
  HMODULE v13; // esi

  v1 = sub_4017B0();
  if ( *((_BYTE *)v1 + 8) )
    return 1;
  if ( !byte_4B6ABC )
    return 0;
  v3 = sub_418F20();
  if ( v3[28] )
  {
    v4 = *v1;
    v1[1] |= 1u;
    *v1 = v4;
  }
  if ( *((_DWORD *)v3 + 5) )
  {
    v5 = *v1;
    v1[1] |= 4u;
    *v1 = v5;
  }
  v6 = sub_410520("SeDebugPrivilege", 1u);
  *((_BYTE *)v1 + 9) = v6;
  if ( !v6 )
  {
    LastError = GetLastError();
    sub_453860(a1, LastError);
    sub_402760("Cannot set debug privilege: %s.\nDebugging of processes owned by another account won't be possible.\n");
  }
  byte_4B6C78 = 1;
  ModuleHandleA = GetModuleHandleA("ntdll.dll");
  dword_4B69F4 = (int)ModuleHandleA;
  if ( ModuleHandleA )
  {
    v9 = 0;
    while ( 1 )
    {
      ProcAddress = GetProcAddress(ModuleHandleA, (&off_48A0F8)[v9]);
      v11 = (FARPROC *)off_48A0FC[v9];
      v9 += 2;
      *v11 = ProcAddress;
      if ( v9 >= 12 )
        break;
      ModuleHandleA = (HMODULE)dword_4B69F4;
    }
  }
  LibraryA = LoadLibraryA("psapi.dll");
  hModule = LibraryA;
  if ( LibraryA )
  {
    GetMappedFileNameW = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                              LibraryA,
                                                                              "GetMappedFileNameW");
    GetModuleFileNameExW = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                                hModule,
                                                                                "GetModuleFileNameExW");
    if ( !GetMappedFileNameW )
    {
      FreeLibrary(hModule);
      hModule = nullptr;
    }
  }
  v13 = GetModuleHandleA("kernel32.dll");
  OpenThread = (HANDLE (__stdcall *)(DWORD, BOOL, DWORD))GetProcAddress(v13, "OpenThread");
  GetThreadDescription = (HRESULT (__stdcall *)(HANDLE, PWSTR *))GetProcAddress(v13, "GetThreadDescription");
  if ( *(_QWORD *)v1 )
  {
    *((_BYTE *)v1 + 8) = 1;
    return 1;
  }
  else
  {
    *((_BYTE *)v1 + 8) = 0;
    return 0;
  }
}
// 48A0F8: using guessed type char *off_48A0F8;
// 48A0FC: using guessed type int off_48A0FC[];
// 4B69E0: using guessed type int (__stdcall *GetMappedFileNameW)(_DWORD, _DWORD, _DWORD, _DWORD);
// 4B69E4: using guessed type int (__stdcall *GetModuleFileNameExW)(_DWORD, _DWORD, _DWORD, _DWORD);
// 4B69F4: using guessed type int dword_4B69F4;
// 4B6ABC: using guessed type char byte_4B6ABC;
// 4B6C78: using guessed type char byte_4B6C78;
