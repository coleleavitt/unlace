/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487278
// Address: 0x0000000000487278

//----- (0000000000487278) ----------------------------------------------------
_WORD *__fastcall sub_487278(__int64 a1)
{
  _WORD *v1; // x3
  _WORD *result; // x0
  __int16 v3; // w1
  __int16 v4; // w2
  bool v5; // zf

  v1 = (_WORD *)(a1 + 20);
  result = (_WORD *)(a1 + 2);
  v3 = 0;
  do
  {
    v4 = 2 * (*v1 & 0x7FFF);
    if ( (*v1 & 0x8000) != 0 )
      v3 |= 1u;
    v5 = (v3 & 2) == 0;
    v3 = 2 * (v3 & 0x7FFF);
    if ( !v5 )
      v4 |= 1u;
    *v1-- = v4;
  }
  while ( result != v1 );
  return result;
}
