/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0280
// Address: 0x080C0280

//----- (080C0280) --------------------------------------------------------
char *__cdecl sub_80C0280(int a1, int a2, int a3)
{
  char *result; // eax

  result = (char *)sub_80CF710(40);
  *(_OWORD *)(result + 8) = 0;
  *(_DWORD *)result = a2;
  *(_OWORD *)(result + 24) = 0;
  *((_DWORD *)result + 1) = a3;
  return result;
}
