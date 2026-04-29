__int64 __fastcall sub_3E5280(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v4; // rax
  const char *v5; // rdx
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  __m128i *v13; // r13
  __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  const __m128i *v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __m128i v23; // xmm1
  bool v24; // cf
  __int64 v25; // rax
  __int64 v26; // rcx
  const __m128i *v27; // rdi
  __int64 v28; // r14
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rcx
  const __m128i *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  __m128i v35; // xmm1
  __m128i v36; // [rsp+0h] [rbp-88h] BYREF
  const char *v37; // [rsp+10h] [rbp-78h] BYREF
  __m128i v38; // [rsp+18h] [rbp-70h] BYREF
  __int64 v39; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+38h] [rbp-50h]
  __m128i v41; // [rsp+40h] [rbp-48h]
  unsigned __int64 v42; // [rsp+58h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v38 = 0;
  v37 = nullptr;
  if ( (unsigned __int8)sub_382FA0(
                          (__int64)&v37,
                          1023,
                          (__int64)&unk_412793,
                          (__int64)"Please enter the new stock comment")
    && (sub_3E3D30((__int64 *)&v37, 32), v38.m128i_i64[0] > 1uLL) )
  {
    v4 = netnode_suplast(a1[37], 83);
    if ( v4 != -1 )
      netnode_supshift(a1[37], 0, 1, v4 + 1, 83);
    v5 = s1;
    if ( v38.m128i_i64[0] )
      v5 = v37;
    netnode_supset(a1[37], 0, v5, 0, 83);
    v6 = (__int64)v37;
    v7 = _mm_loadu_si128(&v38);
    v8 = a1[32];
    v38 = 0;
    v9 = a1[31];
    v10 = a1 + 31;
    v40 = (__int64)v37;
    v11 = a1[33];
    v39 = 0;
    v12 = v8 + 1;
    v37 = nullptr;
    v41 = v7;
    if ( (unsigned __int64)&v39 >= v9 && (unsigned __int64)&v39 < v9 + 32 * v11 )
    {
      v40 = 0;
      v41 = 0;
      if ( v11 < v12 )
      {
        v36 = v7;
        v25 = qvector_reserve(v10, 0, v8 + 1, 32);
        v26 = a1[32];
        v9 = v25;
        v27 = (const __m128i *)a1[31];
        v28 = a1[33];
        v29 = _mm_load_si128(&v36);
        a1[33] = v11;
        v30 = v25;
        v31 = v26 - 1;
        v32 = v27;
        if ( v31 >= 0 )
        {
          do
          {
            v33 = v32->m128i_i64[0];
            v30 += 32;
            v32 += 2;
            *(_QWORD *)(v30 - 32) = v33;
            v34 = v32[-2].m128i_i64[1];
            v35 = _mm_loadu_si128(v32 - 1);
            v32[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v30 - 24) = v34;
            *(__m128i *)(v30 - 16) = v35;
            v32[-1].m128i_i64[1] = 0;
            v24 = v31-- == 0;
          }
          while ( !v24 );
          v27 = (const __m128i *)a1[31];
        }
        v36 = v29;
        qfree(v27);
        a1[31] = v9;
        v7 = _mm_load_si128(&v36);
        a1[33] = v28;
        v8 = a1[32];
      }
      v14 = (__m128i *)(v9 + 32 * v8);
      v14->m128i_i64[0] = 0;
      v14->m128i_i64[1] = v6;
      v14[1] = v7;
    }
    else
    {
      if ( v11 < v12 )
      {
        v36 = v7;
        v15 = qvector_reserve(v10, 0, v8 + 1, 32);
        v16 = a1[32];
        v17 = a1[33];
        v9 = v15;
        a1[33] = v11;
        v18 = (const __m128i *)a1[31];
        v19 = _mm_load_si128(&v36);
        v20 = v16 - 1;
        if ( v20 >= 0 )
        {
          do
          {
            v21 = v18->m128i_i64[0];
            v15 += 32;
            v18 += 2;
            *(_QWORD *)(v15 - 32) = v21;
            v22 = v18[-2].m128i_i64[1];
            v23 = _mm_loadu_si128(v18 - 1);
            v18[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v15 - 24) = v22;
            *(__m128i *)(v15 - 16) = v23;
            v18[-1].m128i_i64[1] = 0;
            v24 = v20-- == 0;
          }
          while ( !v24 );
          v18 = (const __m128i *)a1[31];
        }
        v36 = v19;
        qfree(v18);
        a1[31] = v9;
        v8 = a1[32];
        a1[33] = v17;
        v7 = _mm_load_si128(&v36);
      }
      v13 = (__m128i *)(32 * v8 + v9);
      v13->m128i_i64[0] = 0;
      v13->m128i_i64[1] = v6;
      v13[1] = v7;
    }
    ++a1[32];
    v2 = 0;
  }
  else
  {
    v2 = -1;
  }
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v37);
  }
  return v2;
}
