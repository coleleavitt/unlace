/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140080508
// Address: 0x0000000140080508

//----- (0000000140080508) ----------------------------------------------------
__int64 __fastcall sub_140080508(const WCHAR *a1)
{
  DWORD LastError; // eax

  if ( DeleteFileW(a1) )
    return 0;
  LastError = GetLastError();
  _acrt_errno_map_os_error(LastError);
  return 0xFFFFFFFFLL;
}
// 140073D84: using guessed type __int64 __fastcall _acrt_errno_map_os_error(_QWORD);
