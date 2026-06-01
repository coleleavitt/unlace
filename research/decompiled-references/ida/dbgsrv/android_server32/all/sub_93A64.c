/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93A64
// Address: 0x00093A64

//----- (00093A64) --------------------------------------------------------
int __fastcall sub_93A64(unsigned __int8 **a1, unsigned int *a2)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *v3; // r12
  unsigned int v4; // r2
  bool v5; // cc
  unsigned int i; // lr
  unsigned int v7; // r2
  int v8; // r5

  v3 = a1[1];
  v2 = *a1;
  if ( v3 == *a1 )
    return 1;
  v4 = *v2;
  if ( v4 < 0x30 )
    return 1;
  v5 = v4 > 0x3A;
  if ( v4 >= 0x3A )
    v5 = (unsigned __int8)(v4 - 65) > 0x19u;
  if ( v5 )
    return 1;
  for ( i = 0; v3 != v2; i = v8 + 36 * i + v7 )
  {
    v7 = *v2;
    if ( v7 < 0x30 )
      break;
    if ( v7 >= 0x3A )
    {
      if ( (unsigned __int8)(v7 - 65) >= 0x1Au )
        break;
      v8 = -55;
    }
    else
    {
      v8 = -48;
    }
    *a1 = ++v2;
  }
  *a2 = i;
  return 0;
}
