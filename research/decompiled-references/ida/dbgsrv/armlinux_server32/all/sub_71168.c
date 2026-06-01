/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71168
// Address: 0x00071168

//----- (00071168) --------------------------------------------------------
_WORD *__fastcall sub_71168(int a1)
{
  _WORD *v1; // r1
  _WORD *result; // r0
  __int16 v3; // r3
  unsigned int v4; // t1
  unsigned int v5; // r2
  bool v6; // zf

  v1 = (_WORD *)(a1 + 2);
  result = (_WORD *)(a1 + 20);
  v3 = 0;
  do
  {
    v4 = (unsigned __int16)v1[1];
    ++v1;
    v5 = v4 >> 1;
    if ( (v4 & 1) != 0 )
      v3 |= 1u;
    v6 = (v3 & 2) == 0;
    v3 *= 2;
    if ( v6 )
      *v1 = v5;
    else
      *v1 = v5 | 0x8000;
  }
  while ( v1 != result );
  return result;
}
