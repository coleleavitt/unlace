/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C540
// Address: 0x0008C540

//----- (0008C540) --------------------------------------------------------
int *__fastcall sub_8C540(int *result, unsigned int a2, unsigned __int8 c)
{
  size_t v3; // r4
  int *v4; // r3
  int v5; // r2

  v3 = result[1];
  if ( v3 < a2 )
    return sub_8C478(result, v3, 0, a2 - v3, c);
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
