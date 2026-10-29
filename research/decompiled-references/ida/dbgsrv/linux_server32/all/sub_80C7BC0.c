/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7BC0
// Address: 0x080C7BC0

//----- (080C7BC0) --------------------------------------------------------
int __cdecl sub_80C7BC0(char a1)
{
  unsigned int v1; // eax
  int v2; // edx

  v1 = __readgsdword(0) - 132;
  v2 = *(unsigned __int8 *)(v1 + 128);
  *(_BYTE *)(v1 + 128) = a1;
  return v2;
}
