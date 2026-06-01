unsigned __int64 __fastcall sub_4F6FC0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int32 a4)
{
  unsigned __int64 v5; // rbp
  __int64 *v7; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i *v13; // rdx
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rax
  __m128i *v17; // rcx
  unsigned __int64 v18; // r9
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rbx
  __m128i v22; // xmm3
  __int64 v23; // rax
  _QWORD *v24; // rdi
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdx
  __m128i *v28; // rbp
  __int64 v29; // rax
  __m128i v31; // xmm4
  __m128i *v32; // rax
  __int64 *m128i_i64; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __m128i *v37; // rdi
  __int64 v38; // rdx
  __m128i v39; // xmm0
  bool v40; // cf
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r13
  __m128i *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // rax
  __m128i *v50; // rsi
  __m128i *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r13
  __m128i *v58; // rdi
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __m128i v61; // [rsp+0h] [rbp-98h] BYREF
  __m128i *v62; // [rsp+18h] [rbp-80h]
  __m128i *v63; // [rsp+20h] [rbp-78h]
  __m128i *v64; // [rsp+28h] [rbp-70h]
  __m128i v65; // [rsp+30h] [rbp-68h] BYREF
  __m128i v66; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-40h]

  v5 = a3;
  v7 = (__int64 *)a1[24];
  v67 = __readfsqword(0x28u);
  v61 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a3);
  v9 = sub_4F6D80(v7);
  v10 = *(_QWORD *)a1[24] + 48 * v9;
  v11 = operator new(0x58u);
  v12 = a1[27];
  *(_QWORD *)(v11 + 8) = -1;
  *(_QWORD *)v11 = v12;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = -1;
  *(_OWORD *)(v11 + 32) = 0;
  *(_OWORD *)(v11 + 56) = 0;
  v13 = *(__m128i **)(v10 + 32);
  *(_QWORD *)(v10 + 32) = v11;
  if ( v13 )
  {
    if ( v13[2].m128i_i64[0] )
    {
      if ( !under_debugger )
        interr(2871);
      BUG();
    }
    v14 = (void *)v13[3].m128i_i64[0];
    v13[4].m128i_i64[1] = 0;
    if ( v14 )
    {
      v13[3].m128i_i64[1] = 0;
      v62 = v13;
      qfree(v14);
      v13 = v62;
    }
    v15 = (void *)v13[1].m128i_i64[1];
    if ( v15 )
    {
      v13[2].m128i_i64[0] = 0;
      v62 = v13;
      qfree(v15);
      v13 = v62;
    }
    operator delete(v13, 0x58u);
  }
  v16 = a1[27];
  v17 = (__m128i *)a1[26];
  v65 = (__m128i)(unsigned __int64)v9;
  v18 = a1[28];
  v19 = a1 + 26;
  v20 = v16 + 1;
  if ( &v65 >= v17 && &v65 < &v17[v18] )
  {
    if ( v18 < v20 )
    {
      v63 = &v65;
      v62 = (__m128i *)v18;
      v48 = qvector_reserve(v19, 0, v20, 16);
      v49 = a1[27];
      v50 = (__m128i *)a1[28];
      v51 = (__m128i *)a1[26];
      a1[28] = v62;
      v52 = v49 - 1;
      if ( v52 >= 0 )
      {
        v53 = v48;
        do
        {
          v54 = _mm_loadu_si128(v51);
          v53 += 16;
          ++v51;
          *(__m128i *)(v53 - 16) = v54;
          v40 = v52-- == 0;
        }
        while ( !v40 );
        v51 = (__m128i *)a1[26];
      }
      v64 = &v65;
      v63 = v50;
      v62 = (__m128i *)v48;
      qfree(v51);
      v17 = v62;
      v16 = a1[27];
      a1[26] = v62;
      a1[28] = v50;
    }
    m128i_i64 = v17[v16].m128i_i64;
    *m128i_i64 = v9;
    m128i_i64[1] = 0;
  }
  else
  {
    if ( v18 < v20 )
    {
      v63 = &v65;
      v62 = (__m128i *)v18;
      v41 = qvector_reserve(v19, 0, v20, 16);
      v42 = a1[27];
      v43 = a1[28];
      v44 = (__m128i *)a1[26];
      a1[28] = v62;
      v45 = v42 - 1;
      if ( v45 >= 0 )
      {
        v46 = v41;
        do
        {
          v47 = _mm_loadu_si128(v44);
          v46 += 16;
          ++v44;
          *(__m128i *)(v46 - 16) = v47;
          v40 = v45-- == 0;
        }
        while ( !v40 );
        v44 = (__m128i *)a1[26];
      }
      v63 = &v65;
      v62 = (__m128i *)v41;
      qfree(v44);
      v17 = v62;
      a1[28] = v43;
      v16 = a1[27];
      a1[26] = v17;
    }
    v17[v16] = _mm_load_si128(&v65);
  }
  ++a1[27];
  v21 = *(_QWORD **)(v10 + 32);
  if ( v5 == -1 )
    v5 = a2;
  v22 = _mm_load_si128(&v61);
  v66.m128i_i32[2] = a4;
  v23 = v21[7];
  v66.m128i_i8[12] = 1;
  v24 = v21 + 6;
  v21[10] = v5;
  v25 = v21[6];
  v26 = v21[8];
  v65 = v22;
  v27 = v23 + 1;
  v66.m128i_i64[0] = 0;
  if ( (unsigned __int64)&v65 >= v25 && (unsigned __int64)&v65 < v25 + 32 * v26 )
  {
    if ( v26 < v27 )
    {
      v55 = qvector_reserve(v24, 0, v27, 32);
      v56 = v21[7];
      v57 = v21[8];
      v21[8] = v26;
      v58 = (__m128i *)v21[6];
      v25 = v55;
      v59 = v56 - 1;
      if ( v59 >= 0 )
      {
        do
        {
          v60 = _mm_loadu_si128(v58);
          v55 += 32;
          v58 += 2;
          *(__m128i *)(v55 - 32) = v60;
          *(__m128i *)(v55 - 16) = _mm_loadu_si128(v58 - 1);
          v40 = v59-- == 0;
        }
        while ( !v40 );
        v58 = (__m128i *)v21[6];
      }
      qfree(v58);
      v21[6] = v25;
      v23 = v21[7];
      v21[8] = v57;
    }
    v31 = _mm_load_si128(&v61);
    v32 = (__m128i *)(v25 + 32 * v23);
    v32[1].m128i_i64[0] = 0;
    v32[1].m128i_i32[2] = a4;
    v32[1].m128i_i8[12] = 1;
    *v32 = v31;
  }
  else
  {
    if ( v26 < v27 )
    {
      v34 = qvector_reserve(v24, 0, v27, 32);
      v35 = v21[7];
      v36 = v21[8];
      v21[8] = v26;
      v37 = (__m128i *)v21[6];
      v25 = v34;
      v38 = v35 - 1;
      if ( v38 >= 0 )
      {
        do
        {
          v39 = _mm_loadu_si128(v37);
          v34 += 32;
          v37 += 2;
          *(__m128i *)(v34 - 32) = v39;
          *(__m128i *)(v34 - 16) = _mm_loadu_si128(v37 - 1);
          v40 = v38-- == 0;
        }
        while ( !v40 );
        v37 = (__m128i *)v21[6];
      }
      qfree(v37);
      v21[6] = v25;
      v23 = v21[7];
      v21[8] = v36;
    }
    v28 = (__m128i *)(32 * v23 + v25);
    *v28 = _mm_load_si128(&v65);
    v28[1] = _mm_load_si128(&v66);
  }
  v29 = v21[6];
  ++v21[7];
  v21[9] = v29;
  return v67 - __readfsqword(0x28u);
}
