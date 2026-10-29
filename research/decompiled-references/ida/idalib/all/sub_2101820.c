void __fastcall sub_2101820(__m128 *a1)
{
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 *v4; // r14
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rbp
  bool v8; // cf
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  void *v12; // rdi
  void **v13; // r15
  _QWORD *v14; // r12
  _QWORD *i; // r14
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  void *v18; // rdi
  void **v19; // r15

  v2 = (__int64 *)a1[1].m128_u64[0];
  v3 = a1[1].m128_u32[2];
  v4 = &v2[v3];
  if ( v4 != v2 )
  {
    v5 = a1[1].m128_u64[0];
    while ( 1 )
    {
      v6 = (unsigned int)((__int64)((__int64)v2 - v5) >> 3) >> 7;
      v7 = 4096LL << v6;
      v8 = v6 < 0x1E;
      v9 = *v2;
      if ( !v8 )
        v7 = 0x40000000000LL;
      v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v9 + v7;
      if ( v9 == *(_QWORD *)(v5 + 8 * v3 - 8) )
        v11 = a1->m128_u64[0];
      while ( 1 )
      {
        v10 += 64LL;
        if ( v11 < v10 )
          break;
        while ( 1 )
        {
          v12 = *(void **)(v10 - 40);
          v13 = (void **)(v10 - 64);
          if ( v12 != (void *)(v10 - 24) )
            free(v12);
          if ( *v13 == (void *)(v10 - 48) )
            break;
          free(*v13);
          v10 += 64LL;
          if ( v11 < v10 )
            goto LABEL_12;
        }
      }
LABEL_12:
      if ( v4 == ++v2 )
        break;
      v5 = a1[1].m128_u64[0];
      v3 = a1[1].m128_u32[2];
    }
  }
  v14 = (_QWORD *)a1[4].m128_u64[0];
  for ( i = &v14[2 * a1[4].m128_u32[2]]; i != v14; v14 += 2 )
  {
    v16 = *v14 + v14[1];
    v17 = (*v14 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      v17 += 64LL;
      if ( v16 < v17 )
        break;
      while ( 1 )
      {
        v18 = *(void **)(v17 - 40);
        v19 = (void **)(v17 - 64);
        if ( v18 != (void *)(v17 - 24) )
          free(v18);
        if ( *v19 == (void *)(v17 - 48) )
          break;
        free(*v19);
        v17 += 64LL;
        if ( v16 < v17 )
          goto LABEL_21;
      }
    }
LABEL_21:
    ;
  }
  sub_A24B10(a1);
}
