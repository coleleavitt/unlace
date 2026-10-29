/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: decode_eht_entry
// Address: 0x00099010

//----- (00099010) --------------------------------------------------------
unsigned int *__fastcall decode_eht_entry(unsigned int *result, int *a2, int *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // t1
  int v5; // r12
  bool v6; // zf
  int v7; // r3
  int v8; // r12

  v3 = *result;
  if ( (*result & 0x80000000) == 0 )
  {
    *a2 = 1;
    v4 = result[1];
    *a3 = 4 * HIBYTE(v4) + 4;
    return ++result;
  }
  v5 = HIBYTE(v3) & 0xF;
  if ( v5 )
  {
    v6 = v5 == 3;
    if ( v5 != 3 )
      v6 = v5 == 1;
    if ( !v6 )
      return nullptr;
    v7 = 4 * BYTE2(v3) + 4;
    v8 = 2;
  }
  else
  {
    v8 = 1;
    v7 = 4;
  }
  *a3 = v7;
  *a2 = v8;
  return result;
}
