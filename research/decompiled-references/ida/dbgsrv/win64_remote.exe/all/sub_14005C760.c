/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005C760
// Address: 0x000000014005C760

//----- (000000014005C760) ----------------------------------------------------
__int64 __fastcall sub_14005C760(HANDLE hObject, DWORD *a2, DWORD a3)
{
  DWORD v4; // edx
  DWORD v6; // eax
  DWORD v7; // edi
  DWORD LastError; // eax
  DWORD ExitCode; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1;
  if ( a3 != 1 )
    v4 = a3;
  v6 = WaitForSingleObject(hObject, v4);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 == 258 )
      return 1;
    goto LABEL_7;
  }
  if ( !GetExitCodeProcess(hObject, &ExitCode) )
  {
LABEL_7:
    if ( !a2 )
      return 0xFFFFFFFFLL;
    LastError = GetLastError();
    *a2 = LastError;
    if ( v7 || LastError != 6 )
      return 0xFFFFFFFFLL;
    *a2 = -9;
    return 0;
  }
  if ( a2 )
    *a2 = ExitCode;
  CloseHandle(hObject);
  return 0;
}
