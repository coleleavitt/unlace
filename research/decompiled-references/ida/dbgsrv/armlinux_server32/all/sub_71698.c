/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71698
// Address: 0x00071698

//----- (00071698) --------------------------------------------------------
int __fastcall sub_71698(int a1, _WORD *a2)
{
  int v2; // r2
  _WORD *v3; // r3
  __int16 v4; // r0
  int result; // r0
  __int16 v6; // t1

  v2 = a1 + 14;
  v3 = a2 + 3;
  *a2 = *(__int16 *)(a1 + 14) >> 15;
  v4 = *(_WORD *)(a1 + 14);
  a2[2] = 0;
  result = v4 & 0x7FFF;
  a2[1] = result;
  do
  {
    v6 = *(_WORD *)(v2 - 2);
    v2 -= 2;
    *v3++ = v6;
  }
  while ( v3 != a2 + 10 );
  *v3 = 0;
  return result;
}
