/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481D74
// Address: 0x00481D74

//----- (00481D74) --------------------------------------------------------
long double __usercall sub_481D74@<st0>(int a1@<ebp>, char a2@<ch>, long double a3@<st1>, long double a4@<st0>)
{
  long double v5; // st6
  long double v6; // st7
  long double v7; // st7
  char v8; // dl
  char v9; // ch
  long double v10; // st6
  int v11; // eax
  double v12; // st6
  long double v13; // rt1
  long double result; // st7

  *(_BYTE *)(a1 - 144) = -2;
  if ( !a2 )
  {
    v5 = a4;
    v6 = a3;
LABEL_3:
    v7 = __FYL2X__(v5, v6);
    sub_481EDD(a2, a1);
    v10 = v5 + 1.0;
    if ( (*(_BYTE *)(a1 - 159) & 1) != 0 )
      v10 = 1.0 / v10;
    if ( (v8 & 0x40) == 0 )
      v10 = __FSCALE__(v10, v7);
    if ( v9 )
      return -v10;
    return v10;
  }
  v12 = sub_481F20(a4);
  if ( v11 )
  {
    a2 = 0;
    if ( v11 != 2 )
      a2 = -1;
    v13 = v12;
    v6 = v13;
    v5 = fabs(a4);
    goto LABEL_3;
  }
  result = -2.0;
  if ( *(char *)(a1 - 144) > 0 )
    JUMPOUT(0x4821BA);
  sub_4821B3(a1);
  return result;
}
// 4821B1: control flows out of bounds to 4821BA
// 481DC3: variable 'v8' is possibly undefined
// 481DCC: variable 'v9' is possibly undefined
// 481DDC: variable 'v11' is possibly undefined
