void __fastcall sub_21022E0(__m128 *a1)
{
  __int64 *v1; // r13
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rbp
  bool v6; // cf
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // r15
  char *v13; // rdi
  char *v14; // rdi
  char *v15; // rdi
  char *v16; // rdi
  _QWORD *v17; // r13
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r15
  void *v21; // rdi
  _QWORD *v22; // r14
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 *v28; // [rsp+8h] [rbp-40h]
  _QWORD *i; // [rsp+8h] [rbp-40h]

  v1 = (__int64 *)a1[1].m128_u64[0];
  v2 = a1[1].m128_u32[2];
  v28 = &v1[v2];
  if ( v28 != v1 )
  {
    v3 = a1[1].m128_u64[0];
    while ( 1 )
    {
      v4 = (unsigned int)((__int64)((__int64)v1 - v3) >> 3) >> 7;
      v5 = 4096LL << v4;
      v6 = v4 < 0x1E;
      v7 = *v1;
      if ( !v6 )
        v5 = 0x40000000000LL;
      v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v7 + v5;
      if ( v7 == *(_QWORD *)(v3 + 8 * v2 - 8) )
        v9 = a1->m128_u64[0];
      v10 = (_QWORD *)(v8 + 216);
      if ( v9 < v8 + 216 )
      {
LABEL_18:
        if ( v28 == ++v1 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v11 = (_QWORD *)*(v10 - 2);
            v12 = v10 - 27;
            *(v10 - 27) = off_2C730C8;
            if ( v11 != v10 )
              free(v11);
            v13 = (char *)v12[17];
            *v12 = &off_2C73050;
            if ( v13 != (char *)(v10 - 8) )
              free(v13);
            v14 = (char *)v12[15];
            if ( v14 != (char *)(v10 - 10) )
              free(v14);
            v15 = (char *)v12[12];
            if ( v15 != (char *)(v10 - 12) )
              free(v15);
            v16 = (char *)v12[7];
            if ( v16 == (char *)(v10 - 18) )
              break;
            free(v16);
            v10 += 27;
            if ( v9 < (unsigned __int64)v10 )
              goto LABEL_18;
          }
          v10 += 27;
        }
        while ( v9 >= (unsigned __int64)v10 );
        if ( v28 == ++v1 )
          break;
      }
      v3 = a1[1].m128_u64[0];
      v2 = a1[1].m128_u32[2];
    }
  }
  v17 = (_QWORD *)a1[4].m128_u64[0];
  v18 = 2LL * a1[4].m128_u32[2];
  for ( i = &v17[v18]; i != v17; v17 += 2 )
  {
    while ( 1 )
    {
      v19 = *v17 + v17[1];
      v20 = ((*v17 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 216;
      if ( v19 >= v20 )
        break;
LABEL_34:
      v17 += 2;
      if ( i == v17 )
        goto LABEL_35;
    }
    do
    {
      while ( 1 )
      {
        v21 = *(void **)(v20 - 16);
        v22 = (_QWORD *)(v20 - 216);
        *(_QWORD *)(v20 - 216) = off_2C730C8;
        if ( (void *)v20 != v21 )
          free(v21);
        v23 = (void *)v22[17];
        *v22 = &off_2C73050;
        if ( v23 != (void *)(v20 - 64) )
          free(v23);
        v24 = (void *)v22[15];
        if ( v24 != (void *)(v20 - 80) )
          free(v24);
        v25 = (void *)v22[12];
        if ( v25 != (void *)(v20 - 96) )
          free(v25);
        v26 = (void *)v22[7];
        if ( v26 == (void *)(v20 - 144) )
          break;
        free(v26);
        v20 += 216LL;
        if ( v19 < v20 )
          goto LABEL_34;
      }
      v20 += 216LL;
    }
    while ( v19 >= v20 );
  }
LABEL_35:
  sub_A24B10(a1);
}
