/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_711A8
// Address: 0x000711A8

//----- (000711A8) --------------------------------------------------------
_WORD *__fastcall sub_711A8(int a1)
{
  _WORD *v1; // r1
  __int16 v2; // r2
  _WORD *result; // r0
  __int16 v4; // t1
  __int16 v5; // r3
  bool v6; // zf

  v1 = (_WORD *)(a1 + 22);
  v2 = 0;
  result = (_WORD *)(a1 + 4);
  do
  {
    v4 = *--v1;
    v5 = 2 * v4;
    if ( v4 < 0 )
      v2 |= 1u;
    v6 = (v2 & 2) == 0;
    v2 *= 2;
    if ( v6 )
      *v1 = v5;
    else
      *v1 = v5 | 1;
  }
  while ( result != v1 );
  return result;
}
