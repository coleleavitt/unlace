/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF410
// Address: 0x00000000000BF410

//----- (00000000000BF410) ----------------------------------------------------
__int64 __fastcall sub_BF410(_QWORD *a1, __int64 a2, char *a3, signed __int64 a4)
{
  unsigned __int64 v5; // rax
  char *v6; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // ecx
  size_t v13; // rax
  char *v14; // r13

  if ( a1[7] != a2 )
  {
    set_qerrno(3u);
    return -1;
  }
  v5 = a1[6];
  v6 = a3;
  if ( v5 >= a1[4] )
    goto LABEL_22;
  v8 = a1[8];
  v6 = a3;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1[3] + 8 * v5);
    v10 = -1;
    v11 = -1;
    if ( v9 )
    {
      if ( *(int *)v9 >= 2 )
      {
        *(_QWORD *)(v9 + 24) = v8;
        if ( v8 != a1[8] )
          return v10;
        goto LABEL_11;
      }
      v12 = qfseek(*(FILE **)(v9 + 8), v8, 0);
      v11 = -1;
      if ( !v12 )
        v11 = qftell(*(FILE **)(v9 + 8));
    }
    if ( v11 != a1[8] )
      return v10;
LABEL_11:
    if ( v9 )
    {
      if ( *(int *)v9 < 2 )
      {
        v13 = qfread(*(FILE **)(v9 + 8), v6, a4);
        if ( v13 != -1 )
          goto LABEL_17;
      }
      else
      {
        v13 = sub_BE3E0(v9, v6, a4);
        if ( v13 != -1 )
          goto LABEL_17;
      }
    }
    v13 = 0;
LABEL_17:
    v6 += v13;
    a4 -= v13;
    if ( !a4 )
      break;
    v5 = a1[6] + 1LL;
    a1[6] = v5;
    a1[8] = 0;
    v8 = 0;
    if ( v5 >= a1[4] )
      goto LABEL_22;
  }
  a1[8] += v13;
LABEL_22:
  v14 = (char *)(v6 - a3);
  a1[7] += v14;
  return (__int64)v14;
}
