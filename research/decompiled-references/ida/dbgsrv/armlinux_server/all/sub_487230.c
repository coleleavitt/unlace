/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487230
// Address: 0x0000000000487230

//----- (0000000000487230) ----------------------------------------------------
_WORD *__fastcall sub_487230(__int64 a1)
{
  _WORD *v1; // x3
  _WORD *result; // x0
  __int16 v3; // w1
  unsigned int v4; // w2
  bool v5; // zf
  unsigned int v6; // w2

  v1 = (_WORD *)(a1 + 4);
  result = (_WORD *)(a1 + 22);
  v3 = 0;
  do
  {
    v4 = (unsigned __int16)*v1;
    v5 = (v4 & 1) == 0;
    v6 = v4 >> 1;
    if ( !v5 )
      v3 |= 1u;
    v5 = (v3 & 2) == 0;
    v3 = 2 * (v3 & 0x7FFF);
    if ( !v5 )
      LOWORD(v6) = v6 | 0x8000;
    *v1++ = v6;
  }
  while ( v1 != result );
  return result;
}
