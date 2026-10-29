unsigned __int64 __fastcall sub_4E01E0(_QWORD *a1, __int64 a2, __int32 a3)
{
  int v3; // r13d
  __int64 *v5; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r15
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm2
  __int64 v20; // rbx
  int v21; // eax
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i *v28; // rax
  __int64 v29; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r13
  __m128i *v36; // rdi
  __int64 v37; // rdx
  __m128i v38; // xmm0
  bool v39; // cf
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // rax
  __m128i *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  __m128i *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r13
  __m128i *v59; // rdi
  __int64 v60; // rdx
  __m128i v61; // xmm0
  __m128i v62; // [rsp+0h] [rbp-70h] BYREF
  __int64 v63; // [rsp+10h] [rbp-60h]
  __m128i v64; // [rsp+18h] [rbp-58h] BYREF
  __int32 v65; // [rsp+28h] [rbp-48h]
  unsigned __int64 v66; // [rsp+30h] [rbp-40h]

  v3 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)(unsigned __int64)a2, 229));
  v5 = (__int64 *)a1[20];
  v62.m128i_i64[0] = a2;
  v66 = __readfsqword(0x28u);
  v7 = sub_4DFFA0(v5);
  v8 = *(_QWORD *)a1[20] + 48 * v7;
  v9 = operator new(0x58u);
  v10 = a1[23];
  *(_QWORD *)(v9 + 8) = -1;
  *(_QWORD *)v9 = v10;
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_DWORD *)(v9 + 80) = -1;
  *(_OWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 56) = 0;
  v11 = *(_QWORD **)(v8 + 32);
  *(_QWORD *)(v8 + 32) = v9;
  if ( v11 )
  {
    if ( v11[4] )
    {
      if ( !under_debugger )
        interr(2871);
      BUG();
    }
    v12 = (void *)v11[6];
    v11[9] = 0;
    if ( v12 )
    {
      v11[7] = 0;
      qfree(v12);
    }
    v13 = (void *)v11[3];
    if ( v13 )
    {
      v11[4] = 0;
      qfree(v13);
    }
    operator delete(v11, 0x58u);
  }
  v14 = a1[23];
  v15 = a1[22];
  v64.m128i_i64[0] = v7;
  v64.m128i_i32[2] = 0;
  v16 = a1[24];
  v17 = a1 + 22;
  v18 = v14 + 1;
  if ( (unsigned __int64)&v64 >= v15 && (unsigned __int64)&v64 < v15 + 16 * v16 )
  {
    if ( v16 < v18 )
    {
      v62.m128i_i64[1] = a1[24];
      v48 = qvector_reserve(v17, 0, v18, 16);
      v49 = a1[24];
      v50 = v48;
      v51 = a1[23];
      v52 = (__m128i *)a1[22];
      a1[24] = v62.m128i_i64[1];
      v53 = v51 - 1;
      if ( v53 >= 0 )
      {
        v54 = v50;
        do
        {
          v55 = _mm_loadu_si128(v52);
          v54 += 16;
          ++v52;
          *(__m128i *)(v54 - 16) = v55;
          v39 = v53-- == 0;
        }
        while ( !v39 );
        v52 = (__m128i *)a1[22];
      }
      v63 = v49;
      v62.m128i_i64[1] = v50;
      qfree(v52);
      v15 = v62.m128i_u64[1];
      v14 = a1[23];
      a1[22] = v62.m128i_i64[1];
      a1[24] = v49;
    }
    v32 = v15 + 16 * v14;
    *(_QWORD *)v32 = v7;
    *(_DWORD *)(v32 + 8) = 0;
  }
  else
  {
    if ( v16 < v18 )
    {
      v62.m128i_i64[1] = a1[24];
      v40 = qvector_reserve(v17, 0, v18, 16);
      v41 = a1[24];
      v42 = v40;
      v43 = a1[23];
      v44 = (__m128i *)a1[22];
      a1[24] = v62.m128i_i64[1];
      v45 = v43 - 1;
      if ( v45 >= 0 )
      {
        v46 = v42;
        do
        {
          v47 = _mm_loadu_si128(v44);
          v46 += 16;
          ++v44;
          *(__m128i *)(v46 - 16) = v47;
          v39 = v45-- == 0;
        }
        while ( !v39 );
        v44 = (__m128i *)a1[22];
      }
      v62.m128i_i64[1] = v42;
      qfree(v44);
      v15 = v62.m128i_u64[1];
      a1[24] = v41;
      v14 = a1[23];
      a1[22] = v15;
    }
    *(__m128i *)(v15 + 16 * v14) = _mm_load_si128(&v64);
  }
  v19 = _mm_loadl_epi64(&v62);
  ++a1[23];
  v20 = *(_QWORD *)(v8 + 32);
  v64.m128i_i32[2] = 0;
  v21 = _mm_cvtsi128_si32(v19);
  v64.m128i_i32[3] = a3;
  if ( v3 == -1 )
    v3 = v21;
  v22 = *(_QWORD *)(v20 + 48);
  v23 = *(_QWORD *)(v20 + 56);
  v24 = v20 + 48;
  LOBYTE(v65) = 1;
  v25 = *(_QWORD *)(v20 + 64);
  *(_DWORD *)(v20 + 80) = v3;
  v26 = v23 + 1;
  v64.m128i_i64[0] = v19.m128i_i64[0];
  if ( (unsigned __int64)&v64 >= v22 && (unsigned __int64)&v64 < v22 + 20 * v25 )
  {
    if ( v25 < v26 )
    {
      v56 = qvector_reserve(v24, 0, v26, 20);
      v57 = *(_QWORD *)(v20 + 56);
      v58 = *(_QWORD *)(v20 + 64);
      *(_QWORD *)(v20 + 64) = v25;
      v59 = *(__m128i **)(v20 + 48);
      v22 = v56;
      v60 = v57 - 1;
      if ( v60 >= 0 )
      {
        do
        {
          v61 = _mm_loadu_si128(v59);
          v56 += 20;
          v59 = (__m128i *)((char *)v59 + 20);
          *(__m128i *)(v56 - 20) = v61;
          *(_DWORD *)(v56 - 4) = v59[-1].m128i_i32[3];
          v39 = v60-- == 0;
        }
        while ( !v39 );
        v59 = *(__m128i **)(v20 + 48);
      }
      qfree(v59);
      *(_QWORD *)(v20 + 48) = v22;
      v23 = *(_QWORD *)(v20 + 56);
      *(_QWORD *)(v20 + 64) = v58;
    }
    v31 = v22 + 20 * v23;
    *(_QWORD *)v31 = v62.m128i_i64[0];
    *(_DWORD *)(v31 + 8) = 0;
    *(_DWORD *)(v31 + 12) = a3;
    *(_BYTE *)(v31 + 16) = 1;
  }
  else
  {
    if ( v25 < v26 )
    {
      v33 = qvector_reserve(v24, 0, v26, 20);
      v34 = *(_QWORD *)(v20 + 56);
      v35 = *(_QWORD *)(v20 + 64);
      *(_QWORD *)(v20 + 64) = v25;
      v36 = *(__m128i **)(v20 + 48);
      v22 = v33;
      v37 = v34 - 1;
      if ( v37 >= 0 )
      {
        do
        {
          v38 = _mm_loadu_si128(v36);
          v33 += 20;
          v36 = (__m128i *)((char *)v36 + 20);
          *(__m128i *)(v33 - 20) = v38;
          *(_DWORD *)(v33 - 4) = v36[-1].m128i_i32[3];
          v39 = v37-- == 0;
        }
        while ( !v39 );
        v36 = *(__m128i **)(v20 + 48);
      }
      qfree(v36);
      *(_QWORD *)(v20 + 48) = v22;
      v23 = *(_QWORD *)(v20 + 56);
      *(_QWORD *)(v20 + 64) = v35;
    }
    v27 = _mm_load_si128(&v64);
    v28 = (__m128i *)(v22 + 20 * v23);
    v28[1].m128i_i32[0] = v65;
    *v28 = v27;
  }
  v29 = *(_QWORD *)(v20 + 48);
  ++*(_QWORD *)(v20 + 56);
  *(_QWORD *)(v20 + 72) = v29;
  return v66 - __readfsqword(0x28u);
}

