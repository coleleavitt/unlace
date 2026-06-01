__int128 __usercall CoinModel::getDoubleFromString@<xmm0>(__int64 a1@<rdi>, __int64 a2@<rsi>, const char *a3@<rdx>)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  double (__fastcall **v6)(double); // r13
  const char *v7; // r12
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  size_t v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+24h] [rbp-44h] BYREF
  char *v17; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a2 + 16) )
  {
    v3 = *(unsigned __int64 *)(a2 + 24);
  }
  else
  {
    v6 = &off_4D1828;
    v7 = "sin";
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v8 = nullptr;
    do
    {
      v6 += 2;
      v9 = malloc(0x20u);
      v10 = strlen(v7);
      v11 = (char *)malloc(v10 + 1);
      *v9 = v11;
      strcpy(v11, v7);
      v12 = (__int64)*(v6 - 2);
      v7 = (const char *)*(v6 - 1);
      v9[3] = v8;
      *((_DWORD *)v9 + 2) = 260;
      v8 = v9;
      *(_QWORD *)a2 = v9;
      v9[2] = v12;
    }
    while ( v7 );
    v3 = 0xABD0E07EC39EA8F1LL;
    *(_QWORD *)(a2 + 24) = 0xABD0E07EC39EA8F1LL;
  }
  v14 = 0;
  *(double *)&v3 = sub_1F8760(
                     (char **)a2,
                     (__int64)a3,
                     (char **)(a2 + 8),
                     (int *)(a2 + 16),
                     *(_QWORD *)(a1 + 624),
                     (CoinModelHash *)(a1 + 248),
                     *(double *)&v3,
                     &v14,
                     &v15,
                     &v17,
                     &v16);
  v4 = v3;
  if ( v14 )
  {
    if ( *(int *)(a1 + 96) > 0 )
      printf("string %s returns value %g and error-code %d\n", a3, *(double *)&v3, v14);
    return *(unsigned __int64 *)(a2 + 24);
  }
  else if ( *(int *)(a1 + 96) > 1 )
  {
    printf("%s computes as %g\n", a3, *(double *)&v3);
    return (unsigned __int64)v3;
  }
  return v4;
}

