/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83ADC
// Address: 0x00083ADC

//----- (00083ADC) --------------------------------------------------------
int __fastcall sub_83ADC(int a1, unsigned int a2)
{
  unsigned int v3; // r1
  int v4; // r4
  int *v5; // r0
  int v6; // r2
  int *v7; // r6
  int v8; // r4
  double v9; // r0
  int v11; // r3

  if ( a2 <= 0xC )
  {
    v8 = *((unsigned __int8 *)dword_B6368 + a2);
    v9 = (double)v8;
    goto LABEL_11;
  }
  v3 = a2 + 1;
  v4 = 249;
  v5 = &std::__detail::__prime_list[6];
  while ( 1 )
  {
    v6 = v4 >> 1;
    v7 = &v5[v4 >> 1];
    if ( v3 <= *v7 )
      break;
    v11 = v4 >> 1;
    v6 = v4;
LABEL_13:
    v5 = v7 + 1;
    v4 = v6 - v11 - 1;
    if ( v4 <= 0 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    v11 = v6 >> 1;
    if ( !v6 )
      break;
    v7 = &v5[v11];
    if ( v3 > *v7 )
      goto LABEL_13;
    v6 >>= 1;
  }
LABEL_8:
  v8 = *v5;
  if ( v5 != &dword_B61AC[109] )
  {
    v9 = (double)(unsigned int)v8;
LABEL_11:
    *(_DWORD *)(a1 + 4) = (unsigned int)ceil(v9 * *(float *)a1);
    return v8;
  }
  *(_DWORD *)(a1 + 4) = -1;
  return v8;
}
// B5F64: using guessed type int std::__detail::__prime_list[115];
// B61AC: using guessed type int[111];
// B6368: using guessed type int dword_B6368[4];
