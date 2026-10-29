/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C67C
// Address: 0x0008C67C

//----- (0008C67C) --------------------------------------------------------
int *__fastcall sub_8C67C(int *result, unsigned int a2, unsigned __int8 c)
{
  size_t v3; // r4
  int *v4; // r3
  int v5; // r2

  v3 = result[1];
  if ( v3 < a2 )
    return sub_8C5B4(result, v3, 0, a2 - v3, c);
  if ( v3 > a2 )
  {
    v4 = result;
    result = nullptr;
    v5 = *v4;
    v4[1] = a2;
    *(_BYTE *)(v5 + a2) = 0;
  }
  return result;
}
