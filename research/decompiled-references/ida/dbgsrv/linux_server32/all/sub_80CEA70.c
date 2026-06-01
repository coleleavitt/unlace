/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEA70
// Address: 0x080CEA70

//----- (080CEA70) --------------------------------------------------------
int __cdecl sub_80CEA70(int a1, int a2, int a3)
{
  int result; // eax

  result = ftruncate64(a1, a2, a3);
  if ( result )
  {
    sub_80C7880(1);
    return -1;
  }
  return result;
}
// 804BCE0: using guessed type int __cdecl ftruncate64(_DWORD, _DWORD, _DWORD);
