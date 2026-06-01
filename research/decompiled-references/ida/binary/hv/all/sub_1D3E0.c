__int64 __fastcall sub_1D3E0(_QWORD *a1, __int64 *a2, const char *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  void **v6; // rsi
  void *v7; // r13
  __int64 v8; // rbx
  unsigned __int64 i; // r14
  void **v10; // rbp
  void *v11; // rdi
  _BYTE *v13; // r12
  char v14; // r13
  const void **v15; // rax
  unsigned __int64 v16; // r12
  size_t v17; // r10
  unsigned __int64 v18; // r12
  size_t v19; // r10
  const void *v20; // r15
  void *v21; // rdi
  const void *v22; // r15
  void *v23; // rax
  __int64 v24; // rax
  const void **v28; // [rsp+20h] [rbp-48h]

  v3 = 0;
  v4 = *a2;
  v5 = a2[1];
  v6 = (void **)(v4 + 24);
  v7 = (void *)(v4 + 24);
  v28 = (const void **)(a1 + 19);
  if ( v5 <= 1 )
    goto LABEL_10;
  v8 = 24;
  for ( i = 1; i < v5; i += 2LL )
  {
    v6 = (void **)(v4 + v8);
    if ( !*(_QWORD *)(v4 + v8 + 8) )
      goto LABEL_4;
    v13 = *v6;
    if ( *(_BYTE *)*v6 != 45 )
      goto LABEL_4;
    v14 = v13[1];
    if ( !strchr(a3, v14) )
    {
      sub_1D110((__int64)"wrong option %s", v13);
      return 33;
    }
    if ( i + 1 >= v5 )
    {
      sub_1D110((__int64)"missing argument to %s", v13);
      return 33;
    }
    v15 = (const void **)(v4 + v8 + 24);
    if ( v14 == 115 )
    {
      if ( v28 != v15 )
      {
        v18 = *(_QWORD *)(v4 + v8 + 32);
        if ( v18 && (v19 = v18 - 1, v18 != 1) )
        {
          v20 = *v15;
          v21 = (void *)a1[19];
          if ( a1[21] < v18 )
          {
            v24 = sub_96080(v28, a1[19], v18, 1);
            v19 = v18 - 1;
            v21 = (void *)v24;
            a1[19] = v24;
          }
          a1[20] = v18;
          memmove(v21, v20, v19);
          *(_BYTE *)(a1[19] + v18 - 1) = 0;
          v4 = *a2;
        }
        else
        {
          a1[20] = 0;
          v4 = *a2;
        }
      }
    }
    else
    {
      if ( v14 != 117 )
      {
        if ( !byte_1671A1 )
          sub_96F80(2681);
        BUG();
      }
      if ( a1 + 16 != v15 )
      {
        v16 = *(_QWORD *)(v4 + v8 + 32);
        if ( v16 && (v17 = v16 - 1, v16 != 1) )
        {
          v22 = *v15;
          v23 = (void *)a1[16];
          if ( a1[18] < v16 )
          {
            v23 = (void *)sub_96080(a1 + 16, v23, v16, 1);
            v17 = v16 - 1;
            a1[16] = v23;
          }
          a1[17] = v16;
          memmove(v23, v22, v17);
          *(_BYTE *)(a1[16] + v16 - 1) = 0;
          v4 = *a2;
        }
        else
        {
          a1[17] = 0;
          v4 = *a2;
        }
      }
    }
    v8 += 48;
  }
  v8 = 24 * i;
  v6 = (void **)(v4 + 24 * i);
LABEL_4:
  v7 = (void *)(v4 + 24);
  if ( v8 == 24 )
  {
    v3 = 0;
    v5 = a2[1];
  }
  else
  {
    v10 = (void **)(v4 + 24);
    do
    {
      v11 = *v10;
      if ( *v10 )
      {
        v10[1] = nullptr;
        j__free(v11);
      }
      v10 += 3;
    }
    while ( v10 != v6 );
    v4 = *a2;
    v5 = a2[1];
    v3 = 0xAAAAAAAAAAAAAAABLL * ((v8 - 24) >> 3);
  }
LABEL_10:
  memmove(v7, v6, v4 + 24 * v5 - (_QWORD)v6);
  a2[1] -= v3;
  return 0;
}

