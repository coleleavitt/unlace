/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::align
// Address: 0x0008FB34

//----- (0008FB34) --------------------------------------------------------
_BYTE *__fastcall std::align(unsigned int a1, unsigned int a2, void **a3, unsigned int *a4)
{
  int v4; // r12
  unsigned int v5; // r4
  _BYTE *result; // r0
  unsigned int v7; // r1

  v4 = *a4;
  if ( *a4 < a2 )
    return nullptr;
  v5 = v4 - a2;
  result = (_BYTE *)(-a1 & ((unsigned int)*a3 + a1 - 1));
  v7 = result - (_BYTE *)*a3;
  if ( v7 > v5 )
    return nullptr;
  *a3 = result;
  *a4 = v4 - v7;
  return result;
}
