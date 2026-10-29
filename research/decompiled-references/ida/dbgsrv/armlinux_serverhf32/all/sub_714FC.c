/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_714FC
// Address: 0x000714FC

//----- (000714FC) --------------------------------------------------------
__int16 *__fastcall sub_714FC(_WORD *a1, int a2)
{
  _WORD *v2; // r2
  unsigned int v3; // r3
  __int16 *v4; // r3
  __int16 *result; // r0
  __int16 v6; // t1

  v2 = (_WORD *)(a2 + 12);
  v3 = (unsigned __int16)a1[1];
  if ( *a1 )
    v3 = ~(~(v3 << 17) >> 17);
  *(_WORD *)(a2 + 14) = v3;
  v4 = a1 + 3;
  result = a1 + 10;
  do
  {
    v6 = *v4++;
    *v2-- = v6;
  }
  while ( result != v4 );
  return result;
}
