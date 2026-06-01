void __fastcall sub_2101980(__m128 *a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 *v4; // r12
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r15
  bool v8; // cf
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  void *v12; // rdi
  _QWORD *v13; // r12
  _QWORD *i; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  void *v17; // rdi

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
        v10 += 128LL;
        if ( v11 < v10 )
          break;
        while ( 1 )
        {
          v12 = *(void **)(v10 - 112);
          if ( v12 == (void *)(v10 - 96) )
            break;
          free(v12);
          v10 += 128LL;
          if ( v11 < v10 )
            goto LABEL_10;
        }
      }
LABEL_10:
      if ( v4 == ++v2 )
        break;
      v5 = a1[1].m128_u64[0];
      v3 = a1[1].m128_u32[2];
    }
  }
  v13 = (_QWORD *)a1[4].m128_u64[0];
  for ( i = &v13[2 * a1[4].m128_u32[2]]; i != v13; v13 += 2 )
  {
    v15 = *v13 + v13[1];
    v16 = (*v13 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      v16 += 128LL;
      if ( v15 < v16 )
        break;
      while ( 1 )
      {
        v17 = *(void **)(v16 - 112);
        if ( v17 == (void *)(v16 - 96) )
          break;
        free(v17);
        v16 += 128LL;
        if ( v15 < v16 )
          goto LABEL_17;
      }
    }
LABEL_17:
    ;
  }
  sub_A24B10(a1);
}
