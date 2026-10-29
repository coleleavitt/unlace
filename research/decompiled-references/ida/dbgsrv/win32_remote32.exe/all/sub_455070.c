/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455070
// Address: 0x00455070

//----- (00455070) --------------------------------------------------------
int __stdcall sub_455070(HANDLE hHandle, DWORD *a2, DWORD dwMilliseconds)
{
  DWORD v3; // ecx
  DWORD v4; // eax
  DWORD v5; // edi
  DWORD LastError; // eax

  v3 = -1;
  if ( dwMilliseconds != 1 )
    v3 = dwMilliseconds;
  v4 = WaitForSingleObject(hHandle, v3);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 == 258 )
      return 1;
    goto LABEL_7;
  }
  if ( !GetExitCodeProcess(hHandle, &dwMilliseconds) )
  {
LABEL_7:
    if ( !a2 )
      return -1;
    LastError = GetLastError();
    *a2 = LastError;
    if ( v5 || LastError != 6 )
      return -1;
    *a2 = -9;
    return 0;
  }
  if ( a2 )
    *a2 = dwMilliseconds;
  CloseHandle(hHandle);
  return 0;
}
