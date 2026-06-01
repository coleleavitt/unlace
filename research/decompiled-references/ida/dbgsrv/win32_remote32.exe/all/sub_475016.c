/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475016
// Address: 0x00475016

//----- (00475016) --------------------------------------------------------
int __cdecl sub_475016(HANDLE hFindFile)
{
  if ( FindClose(hFindFile) )
    return 0;
  *sub_46B984() = 22;
  return -1;
}
