/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472647
// Address: 0x00472647

//----- (00472647) --------------------------------------------------------
int __cdecl sub_472647(LPCWSTR lpPathName)
{
  DWORD LastError; // eax

  if ( CreateDirectoryW(lpPathName, nullptr) )
    return 0;
  LastError = GetLastError();
  sub_46B94E(LastError);
  return -1;
}
