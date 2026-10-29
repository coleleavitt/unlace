/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C8760
// Address: 0x080C8760

//----- (080C8760) --------------------------------------------------------
int __cdecl sub_80C8760(int a1, _WORD *a2)
{
  int v2; // edx
  __int16 v3; // ax
  _WORD *v4; // eax
  __int16 v5; // cx

  v2 = a1 + 14;
  *a2 = *(__int16 *)(a1 + 14) >> 15;
  v3 = *(_WORD *)(a1 + 14);
  a2[2] = 0;
  a2[1] = v3 & 0x7FFF;
  v4 = a2 + 3;
  do
  {
    v5 = *(_WORD *)(v2 - 2);
    ++v4;
    v2 -= 2;
    *(v4 - 1) = v5;
  }
  while ( v4 != a2 + 10 );
  a2[10] = 0;
  return 0;
}
