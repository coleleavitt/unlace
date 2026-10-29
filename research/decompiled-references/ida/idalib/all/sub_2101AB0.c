void __fastcall sub_2101AB0(__m128 *a1)
{
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 *v4; // r14
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rbp
  bool v8; // cf
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // rdi
  _QWORD *v13; // r12
  _QWORD *j; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 k; // rbx
  unsigned __int64 v17; // rdi

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
      v10 = v9 + v7;
      if ( v9 == *(_QWORD *)(v5 + 8 * v3 - 8) )
        v10 = a1->m128_u64[0];
      for ( i = ((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 216; v10 >= i; i += 216LL )
      {
        v12 = i - 216;
        sub_21196A0(v12);
      }
      if ( v4 == ++v2 )
        break;
      v5 = a1[1].m128_u64[0];
      v3 = a1[1].m128_u32[2];
    }
  }
  v13 = (_QWORD *)a1[4].m128_u64[0];
  for ( j = &v13[2 * a1[4].m128_u32[2]]; j != v13; v13 += 2 )
  {
    v15 = *v13 + v13[1];
    for ( k = ((*v13 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 216; v15 >= k; k += 216LL )
    {
      v17 = k - 216;
      sub_21196A0(v17);
    }
  }
  sub_A24B10(a1);
}
