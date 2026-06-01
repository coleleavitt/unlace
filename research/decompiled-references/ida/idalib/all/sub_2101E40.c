void __fastcall sub_2101E40(__m128 *a1)
{
  __int64 *v2; // r12
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rbx
  bool v7; // cf
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  void *v12; // rdi
  _QWORD *v13; // r14
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  _QWORD *v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbx
  void *v21; // rdi
  _QWORD *v22; // r15
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  __int64 *v26; // [rsp+8h] [rbp-40h]
  _QWORD *i; // [rsp+8h] [rbp-40h]

  v2 = (__int64 *)a1[1].m128_u64[0];
  v3 = a1[1].m128_u32[2];
  v26 = &v2[v3];
  if ( v26 != v2 )
  {
    v4 = a1[1].m128_u64[0];
    while ( 1 )
    {
      v5 = (unsigned int)((__int64)((__int64)v2 - v4) >> 3) >> 7;
      v6 = 4096LL << v5;
      v7 = v5 < 0x1E;
      v8 = *v2;
      if ( !v7 )
        v6 = 0x40000000000LL;
      v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v8 + v6;
      if ( v8 == *(_QWORD *)(v4 + 8 * v3 - 8) )
        v10 = a1->m128_u64[0];
      v11 = v9 + 176;
      if ( v10 < v9 + 176 )
      {
LABEL_16:
        if ( v26 == ++v2 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v12 = *(void **)(v11 - 40);
            v13 = (_QWORD *)(v11 - 176);
            *(_QWORD *)(v11 - 176) = &off_2C73050;
            if ( v12 != (void *)(v11 - 24) )
              free(v12);
            v14 = (void *)v13[15];
            if ( v14 != (void *)(v11 - 40) )
              free(v14);
            v15 = (void *)v13[12];
            if ( v15 != (void *)(v11 - 56) )
              free(v15);
            v16 = (void *)v13[7];
            if ( v16 == (void *)(v11 - 104) )
              break;
            free(v16);
            v11 += 176LL;
            if ( v10 < v11 )
              goto LABEL_16;
          }
          v11 += 176LL;
        }
        while ( v10 >= v11 );
        if ( v26 == ++v2 )
          break;
      }
      v4 = a1[1].m128_u64[0];
      v3 = a1[1].m128_u32[2];
    }
  }
  v17 = (_QWORD *)a1[4].m128_u64[0];
  v18 = 2LL * a1[4].m128_u32[2];
  for ( i = &v17[v18]; i != v17; v17 += 2 )
  {
    while ( 1 )
    {
      v19 = *v17 + v17[1];
      v20 = ((*v17 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 176;
      if ( v19 >= v20 )
        break;
LABEL_30:
      v17 += 2;
      if ( i == v17 )
        goto LABEL_31;
    }
    do
    {
      while ( 1 )
      {
        v21 = *(void **)(v20 - 40);
        v22 = (_QWORD *)(v20 - 176);
        *(_QWORD *)(v20 - 176) = &off_2C73050;
        if ( v21 != (void *)(v20 - 24) )
          free(v21);
        v23 = (void *)v22[15];
        if ( v23 != (void *)(v20 - 40) )
          free(v23);
        v24 = (void *)v22[12];
        if ( v24 != (void *)(v20 - 56) )
          free(v24);
        v25 = (void *)v22[7];
        if ( v25 == (void *)(v20 - 104) )
          break;
        free(v25);
        v20 += 176LL;
        if ( v19 < v20 )
          goto LABEL_30;
      }
      v20 += 176LL;
    }
    while ( v19 >= v20 );
  }
LABEL_31:
  sub_A24B10(a1);
}
