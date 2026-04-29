__int64 __fastcall sub_3DFC60(
        __m128i *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 i; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  __m128i v22; // xmm2
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  const char *v28; // rsi
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+10h] [rbp-48h] BYREF
  __m128i v32; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  sub_2B05F0((__int64)"Stock comments: detected corruption during %s, rebuilding and refreshing", a3);
  netnode_kill(&a1[18].m128i_u64[1]);
  v11 = s1;
  if ( a1[17].m128i_i64[1] )
    v11 = (const char *)a1[17].m128i_i64[0];
  netnode_check(&a1[18].m128i_u64[1], v11, 0, 1);
  sub_3DEB00((__int64)&v31, (__int64)a1[17].m128i_i64);
  v15 = _mm_loadu_si128(&v32);
  v16 = a1[15].m128i_i64[1];
  v17 = v31;
  v32 = 0;
  v31 = 0;
  v30 = v15;
  if ( v16 )
  {
    v18 = a1[16].m128i_i64[0];
    if ( v18 )
    {
      for ( i = 0; i != v18; ++i )
      {
        v20 = v16 + 32 * i;
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
        {
          *(_QWORD *)(v20 + 16) = 0;
          qfree(v21);
          v16 = a1[15].m128i_i64[1];
        }
      }
    }
    a1[16].m128i_i64[0] = 0;
    qfree(v16);
    v22 = _mm_load_si128(&v30);
    v23 = v31;
    a1[15].m128i_i64[1] = v17;
    a1[16] = v22;
    if ( v23 )
    {
      v24 = v32.m128i_i64[0];
      if ( v32.m128i_i64[0] )
      {
        v25 = 0;
        do
        {
          v26 = v23 + 32 * v25;
          v27 = *(_QWORD *)(v26 + 8);
          if ( v27 )
          {
            *(_QWORD *)(v26 + 16) = 0;
            qfree(v27);
            v23 = v31;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      v32.m128i_i64[0] = 0;
      qfree(v23);
    }
  }
  else
  {
    a1[15].m128i_i64[1] = v17;
    a1[16] = v15;
  }
  v28 = s1;
  if ( a1[1].m128i_i64[0] )
    v28 = (const char *)a1->m128i_i64[1];
  return callui(78, v28, callui, v12, v13, v14, a7, a8, a9, a10);
}
