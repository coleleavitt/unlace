__int64 __fastcall sub_3D8B00(__int64 a1)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __int64 v10; // r8
  __m128i *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rsi
  __m128i *v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  const __m128i *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rsi
  __m128i v25; // xmm0
  bool v26; // cf
  __int64 *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r10
  const __m128i *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // xmm2_8
  __int64 v35; // rsi
  __int64 v36; // rsi
  __m128i v37; // xmm1
  __int64 v38; // [rsp+8h] [rbp-B0h]
  const __m128i *v39; // [rsp+8h] [rbp-B0h]
  __int64 v40; // [rsp+8h] [rbp-B0h]
  const __m128i *v41; // [rsp+8h] [rbp-B0h]
  __int64 v42; // [rsp+10h] [rbp-A8h]
  __m128i v43; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+28h] [rbp-90h]
  const __m128i *v45; // [rsp+30h] [rbp-88h]
  __m128i v46; // [rsp+38h] [rbp-80h] BYREF
  __int64 v47; // [rsp+50h] [rbp-68h] BYREF
  __int64 v48; // [rsp+58h] [rbp-60h] BYREF
  __m128i v49; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  sub_3D8480((__int64)&v47);
  if ( v49.m128i_i8[8] )
  {
    v2 = v47;
    v3 = _mm_loadu_si128((const __m128i *)&v48);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v2;
    *(__m128i *)(a1 + 8) = v3;
  }
  else
  {
    v45 = 0;
    v46 = 0;
    v5 = netnode_altval();
    v6 = v5 - 1;
    if ( v5 )
    {
      do
      {
        v47 = v6;
        v48 = 0;
        v49 = 0;
        netnode_qsupstr();
        v13 = v46.m128i_i64[0];
        v14 = (__int64 *)v45;
        v15 = v46.m128i_i64[0] + 1;
        if ( &v47 < (__int64 *)v45 || &v47 >= v45[2 * v46.m128i_i64[1]].m128i_i64 )
        {
          if ( v46.m128i_i64[1] < v15 )
          {
            v38 = v46.m128i_i64[1];
            v18 = qvector_reserve();
            v19 = v18;
            v20 = v46.m128i_i64[1];
            v21 = v45;
            v46.m128i_i64[1] = v38;
            v22 = v46.m128i_i64[0] - 1;
            if ( v46.m128i_i64[0] - 1 >= 0 )
            {
              do
              {
                v23 = v21->m128i_i64[0];
                v18 += 32;
                v21 += 2;
                *(_QWORD *)(v18 - 32) = v23;
                v24 = v21[-2].m128i_i64[1];
                v25 = _mm_loadu_si128(v21 - 1);
                v21[-2].m128i_i64[1] = 0;
                *(_QWORD *)(v18 - 24) = v24;
                *(__m128i *)(v18 - 16) = v25;
                v21[-1].m128i_i64[1] = 0;
                v26 = v22-- == 0;
              }
              while ( !v26 );
            }
            v39 = (const __m128i *)v19;
            qfree();
            v14 = (__int64 *)v39;
            v13 = v46.m128i_i64[0];
            v46.m128i_i64[1] = v20;
            v45 = v39;
          }
          v16 = (__m128i *)&v14[4 * v13];
          v16->m128i_i64[0] = v47;
          v17 = _mm_load_si128(&v49);
          v16->m128i_i64[1] = v48;
          v16[1] = v17;
          ++v46.m128i_i64[0];
        }
        else
        {
          v7 = v48;
          v8 = _mm_loadl_epi64(&v49);
          v48 = 0;
          v9 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
          v10 = v47;
          v49 = 0;
          if ( v46.m128i_i64[1] < v15 )
          {
            v43.m128i_i64[1] = v46.m128i_i64[1];
            v40 = v47;
            v43.m128i_i64[0] = v9.m128i_i64[0];
            v29 = qvector_reserve();
            v30 = v29;
            v31 = v46.m128i_i64[1];
            v32 = v45;
            v33 = v46.m128i_i64[0] - 1;
            v46.m128i_i64[1] = v43.m128i_i64[1];
            v34 = v43.m128i_i64[0];
            if ( v46.m128i_i64[0] - 1 >= 0 )
            {
              do
              {
                v35 = v32->m128i_i64[0];
                v29 += 32;
                v32 += 2;
                *(_QWORD *)(v29 - 32) = v35;
                v36 = v32[-2].m128i_i64[1];
                v37 = _mm_loadu_si128(v32 - 1);
                v32[-2].m128i_i64[1] = 0;
                *(_QWORD *)(v29 - 24) = v36;
                *(__m128i *)(v29 - 16) = v37;
                v32[-1].m128i_i64[1] = 0;
                v26 = v33-- == 0;
              }
              while ( !v26 );
            }
            v44 = v31;
            v42 = v40;
            v41 = (const __m128i *)v30;
            v43.m128i_i64[1] = v34;
            v43.m128i_i64[0] = v8.m128i_i64[0];
            qfree();
            v14 = (__int64 *)v41;
            v13 = v46.m128i_i64[0];
            v9 = _mm_loadl_epi64((const __m128i *)&v43.m128i_u64[1]);
            v45 = v41;
            v8 = _mm_loadl_epi64(&v43);
            v46.m128i_i64[1] = v44;
            v10 = v42;
          }
          v11 = (__m128i *)&v14[4 * v13];
          v11->m128i_i64[0] = v10;
          v11->m128i_i64[1] = v7;
          v11[1] = _mm_unpacklo_epi64(v8, v9);
          ++v46.m128i_i64[0];
          if ( v48 )
          {
            v49.m128i_i64[0] = 0;
            qfree();
          }
        }
        v12 = netnode_altval();
        v6 = v12 - 1;
      }
      while ( v12 );
    }
    v27 = (__int64 *)v45;
    v28 = _mm_loadu_si128(&v46);
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v27;
    *(__m128i *)(a1 + 8) = v28;
  }
  return a1;
}
