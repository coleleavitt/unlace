/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410520
// Address: 0x00410520

//----- (00410520) --------------------------------------------------------
char __cdecl sub_410520(const CHAR *a1, unsigned __int8 a2)
{
  bool v2; // bl
  HMODULE LibraryA; // eax
  BOOL (__stdcall *AdjustTokenPrivileges)(HANDLE, BOOL, PTOKEN_PRIVILEGES, DWORD, PTOKEN_PRIVILEGES, PDWORD); // eax
  BOOL (__stdcall *v5)(HANDLE, DWORD, PHANDLE); // esi
  HANDLE CurrentProcess; // eax
  DWORD LastError; // esi
  HANDLE hObject; // [esp+30h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+34h] [ebp-1Ch] BYREF
  _DWORD v11[4]; // [esp+3Ch] [ebp-14h] BYREF

  if ( !byte_4B6ABC || VersionInformation.dwPlatformId != 2 )
    return 1;
  v2 = 0;
  LibraryA = LoadLibraryA("advapi32.dll");
  hLibModule = LibraryA;
  if ( LibraryA )
  {
    OpenProcessToken = (BOOL (__stdcall *)(HANDLE, DWORD, PHANDLE))GetProcAddress(LibraryA, "OpenProcessToken");
    LookupPrivilegeValueA = (BOOL (__stdcall *)(LPCSTR, LPCSTR, PLUID))GetProcAddress(
                                                                         hLibModule,
                                                                         "LookupPrivilegeValueA");
    AdjustTokenPrivileges = (BOOL (__stdcall *)(HANDLE, BOOL, PTOKEN_PRIVILEGES, DWORD, PTOKEN_PRIVILEGES, PDWORD))GetProcAddress(hLibModule, "AdjustTokenPrivileges");
    v5 = OpenProcessToken;
    dword_4B69DC = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))AdjustTokenPrivileges;
    if ( OpenProcessToken )
    {
      if ( LookupPrivilegeValueA )
      {
        if ( AdjustTokenPrivileges )
        {
          CurrentProcess = GetCurrentProcess();
          if ( v5(CurrentProcess, 40, &hObject) )
          {
            if ( LookupPrivilegeValueA(nullptr, a1, (PLUID)v10) )
            {
              v11[1] = v10[0];
              v11[2] = v10[1];
              v11[3] = 2 * a2;
              v11[0] = 1;
              v2 = dword_4B69DC(hObject, 0, v11, 16, 0, 0) != 0;
            }
            CloseHandle(hObject);
          }
        }
      }
    }
    if ( hLibModule )
    {
      LastError = GetLastError();
      FreeLibrary(hLibModule);
      SetLastError(LastError);
      hLibModule = nullptr;
    }
  }
  return v2;
}
// 4B69DC: using guessed type int (__stdcall *dword_4B69DC)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B6ABC: using guessed type char byte_4B6ABC;
