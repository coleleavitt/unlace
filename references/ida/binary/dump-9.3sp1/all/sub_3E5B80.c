__int64 __fastcall sub_3E5B80(__m128i *a1, unsigned __int64 a2)
{
  const __m128i *v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  const char *v11; // rsi
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  bool v21; // cf
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64); // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  const char *v28; // [rsp+10h] [rbp-48h] BYREF
  __int64 v29; // [rsp+18h] [rbp-40h]
  unsigned __int64 v30; // [rsp+28h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( a2 >= a1[16].m128i_i64[0] )
    return -1;
  v4 = (const __m128i *)(a1[15].m128i_i64[1] + 32 * a2);
  if ( !v4 )
    return -1;
  v5 = v4->m128i_i64[0];
  if ( v4->m128i_i64[0] == -1 || (v6 = netnode_suplast(), v6 == -1) || v6 < v5 || !(unsigned __int8)netnode_supdel() )
  {
    sub_3E5130((__int64)&v28);
    v10 = (__int64)v28;
    v11 = s1;
    if ( v29 )
      v11 = v28;
    sub_3E4B60(a1, (__int64)v11, "deletion", v7, v8, v9, v26, v27, (__int64)v28, v29);
    result = a2;
    if ( v10 )
    {
      qfree(v10);
      return a2;
    }
  }
  else
  {
    v13 = 83;
    v14 = netnode_suplast();
    if ( v5 < v14 )
    {
      netnode_supshift();
      v13 = v14;
      netnode_supdel();
    }
    v15 = v4->m128i_i64[1];
    if ( v15 )
    {
      v4[1].m128i_i64[0] = 0;
      qfree(v15);
    }
    v16 = a1[16].m128i_i64[0];
    v17 = ((a1[15].m128i_i64[1] + 32 * v16 - (__int64)v4) >> 5) - 2;
    if ( v17 >= 0 )
    {
      do
      {
        v18 = v4[2].m128i_i64[0];
        v19 = _mm_loadu_si128(v4 + 3);
        v4 += 2;
        v4[1].m128i_i64[1] = 0;
        v4[-2].m128i_i64[0] = v18;
        v20 = v4->m128i_i64[1];
        v4[-1] = v19;
        v4[-2].m128i_i64[1] = v20;
        v4->m128i_i64[1] = 0;
        v21 = v17-- == 0;
      }
      while ( !v21 );
      v16 = a1[16].m128i_i64[0];
    }
    v22 = a1[2].m128i_i64[0];
    v23 = v16 - 1;
    a1[16].m128i_i64[0] = v23;
    v24 = *(__int64 (__fastcall **)(__int64))(v22 + 40);
    if ( v24 != sub_3E31A0 )
      v23 = ((__int64 (__fastcall *)(__m128i *, __int64))v24)(&a1[2], v13);
    if ( v23 )
    {
      v25 = v23 - 1;
      v21 = a2 < v23;
      result = a2;
      if ( !v21 )
        return v25;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
