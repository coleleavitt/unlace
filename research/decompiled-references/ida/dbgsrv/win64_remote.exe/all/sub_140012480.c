/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140012480
// Address: 0x0000000140012480

//----- (0000000140012480) ----------------------------------------------------
char __fastcall sub_140012480(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  bool v4; // si
  HMODULE LibraryA; // rax
  BOOL (__stdcall *AdjustTokenPrivileges)(HANDLE, BOOL, PTOKEN_PRIVILEGES, DWORD, PTOKEN_PRIVILEGES, PDWORD); // rax
  BOOL (__stdcall *v7)(HANDLE, DWORD, PHANDLE); // rdi
  HANDLE CurrentProcess; // rax
  DWORD LastError; // ebx
  DWORD v10; // ebx
  HANDLE hObject; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+44h] [rbp-24h]
  int v16; // [rsp+4Ch] [rbp-1Ch]

  v3 = a2;
  if ( byte_1400CAFA4 && dword_1400CAF20 == 2 )
  {
    v4 = 0;
    LibraryA = LoadLibraryA("advapi32.dll");
    hLibModule = LibraryA;
    if ( LibraryA )
    {
      OpenProcessToken = (BOOL (__stdcall *)(HANDLE, DWORD, PHANDLE))GetProcAddress(LibraryA, "OpenProcessToken");
      LookupPrivilegeValueA = (BOOL (__stdcall *)(LPCSTR, LPCSTR, PLUID))GetProcAddress(
                                                                           hLibModule,
                                                                           "LookupPrivilegeValueA");
      AdjustTokenPrivileges = (BOOL (__stdcall *)(HANDLE, BOOL, PTOKEN_PRIVILEGES, DWORD, PTOKEN_PRIVILEGES, PDWORD))GetProcAddress(hLibModule, "AdjustTokenPrivileges");
      v7 = OpenProcessToken;
      qword_1400CAE50 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))AdjustTokenPrivileges;
      if ( OpenProcessToken && LookupPrivilegeValueA && AdjustTokenPrivileges )
      {
        CurrentProcess = GetCurrentProcess();
        if ( ((unsigned int (__fastcall *)(HANDLE, __int64, HANDLE *))v7)(CurrentProcess, 40, &hObject) )
        {
          if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))LookupPrivilegeValueA)(0, a1, &v13) )
          {
            v15 = v13;
            v14 = 1;
            v16 = 2 * v3;
            v4 = (unsigned int)qword_1400CAE50(hObject, 0, &v14, 16, 0, 0) != 0;
          }
          CloseHandle(hObject);
        }
        if ( !hLibModule )
          return v4;
        LastError = GetLastError();
        FreeLibrary(hLibModule);
        SetLastError(LastError);
        goto LABEL_15;
      }
      if ( hLibModule )
      {
        v10 = GetLastError();
        FreeLibrary(hLibModule);
        SetLastError(v10);
LABEL_15:
        hLibModule = nullptr;
      }
    }
    return v4;
  }
  return 1;
}
// 1400CAE50: using guessed type __int64 (__fastcall *qword_1400CAE50)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1400CAF20: using guessed type int dword_1400CAF20;
// 1400CAFA4: using guessed type char byte_1400CAFA4;
