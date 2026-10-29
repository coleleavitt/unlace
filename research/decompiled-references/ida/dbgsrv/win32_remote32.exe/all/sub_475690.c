/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475690
// Address: 0x00475690

//----- (00475690) --------------------------------------------------------
char __usercall sub_475690@<al>(int a1@<ebx>, int a2@<edi>, int *a3, __int64 a4, int a5)
{
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  int *v9; // esi
  __int64 v11; // rax
  int v12; // edi

  if ( a5 == 2 )
    return 0;
  if ( (a3[3] & 0x4C0) == 0 )
    return 0;
  if ( (a3[3] & 6) != 0 )
    return 0;
  if ( a3[2] <= 0 )
    return 0;
  v5 = a3[4];
  v6 = 56 * (v5 & 0x3F);
  v7 = (int)*(&dword_4B7B38 + (v5 >> 6));
  if ( *(char *)(v7 + v6 + 40) < 0 || *(_BYTE *)(v7 + v6 + 41) )
    return 0;
  if ( a5 )
  {
    v9 = a3;
  }
  else
  {
    LODWORD(v8) = sub_474CB1(a1, a2, v5, 0, 0, 1u);
    if ( v8 < 0 )
      return 0;
    v9 = a3;
    if ( sub_47558B(a4, v8 - a3[2], &a4) < 0 )
      return 0;
  }
  v11 = v9[1] - *v9;
  if ( SHIDWORD(v11) > SHIDWORD(a4) )
    return 0;
  v12 = a4;
  if ( SHIDWORD(v11) >= SHIDWORD(a4) && (unsigned int)v11 > (unsigned int)a4 )
    return 0;
  if ( a4 > v9[2] )
    return 0;
  *v9 += a4;
  a3[2] -= v12;
  return 1;
}
// 475702: variable 'v8' is possibly undefined
