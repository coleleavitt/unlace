/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47621A
// Address: 0x0047621A

//----- (0047621A) --------------------------------------------------------
int __cdecl sub_47621A(LPCWSTR lpFileName)
{
  DWORD LastError; // eax

  if ( DeleteFileW(lpFileName) )
    return 0;
  LastError = GetLastError();
  sub_46B94E(LastError);
  return -1;
}
