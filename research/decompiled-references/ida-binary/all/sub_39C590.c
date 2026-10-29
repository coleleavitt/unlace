__int64 __fastcall sub_39C590(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // r14
  const __m128i *v5; // rdi
  __m128i *v7; // rax
  __m128i *v8; // rdx
  __m128i *v9; // rcx
  __m128i *v10; // rdx
  __m128i *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  __m128i v15; // xmm0
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r12
  signed __int64 v22; // r13
  __int64 v23; // rax
  __m128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v29; // rdi
  _QWORD *v30; // rax
  __m128 v31; // xmm0
  __m128i *v32; // rdx
  __int64 v33; // rax
  const char *v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // rcx
  __m128 v42; // xmm0
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  void *v46; // rdi
  _QWORD **v47; // rbx
  __int64 v48; // rax
  void *v49; // rdi
  __int64 v50; // [rsp+0h] [rbp-98h]
  __int64 v51; // [rsp+8h] [rbp-90h]
  int v52; // [rsp+18h] [rbp-80h] BYREF
  void *v53; // [rsp+20h] [rbp-78h]
  __m128i *v54; // [rsp+28h] [rbp-70h] BYREF
  __m128i *v55; // [rsp+30h] [rbp-68h]
  __int64 v56; // [rsp+38h] [rbp-60h]
  __m128i v57; // [rsp+40h] [rbp-58h] BYREF
  __int64 v58; // [rsp+50h] [rbp-48h]
  unsigned __int64 v59; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v5 = (const __m128i *)a3[1].m128i_i64[0];
  v59 = __readfsqword(0x28u);
  v52 = 0;
  v53 = nullptr;
  v54 = (__m128i *)&v52;
  v55 = (__m128i *)&v52;
  v56 = 0;
  if ( v5 )
  {
    v7 = sub_398A00(v5, (__int64)&v52);
    v8 = v7;
    do
    {
      v9 = v8;
      v8 = (__m128i *)v8[1].m128i_i64[0];
    }
    while ( v8 );
    v54 = v9;
    v10 = v7;
    do
    {
      v11 = v10;
      v10 = (__m128i *)v10[1].m128i_i64[1];
    }
    while ( v10 );
    v12 = a3[2].m128i_i64[1];
    v55 = v11;
    v53 = v7;
    v56 = v12;
  }
  v13 = a3[4].m128i_i64[0];
  v14 = *a1;
  v15 = _mm_loadu_si128(a3 + 3);
  v16 = a1[2];
  v58 = v13;
  v57 = v15;
  v50 = a2 - v14;
  v17 = a1[1];
  if ( v16 < v17 + 1 )
  {
    v35 = nullptr;
    v14 = qvector_reserve(a1, 0, v17 + 1, 72);
    v36 = a1[1];
    v37 = a1[2];
    a1[2] = v16;
    v38 = *a1;
    v51 = v37;
    v39 = v36 - 1;
    if ( v39 >= 0 )
    {
      v40 = v14 + 8;
      do
      {
        v41 = *(_QWORD *)(v38 + 16);
        if ( v41 )
        {
          v42 = _mm_loadh_ps((const double *)(v38 + 24));
          *(_DWORD *)v40 = *(_DWORD *)(v38 + 8);
          v35 = *(const char **)(v38 + 32);
          *(__m128 *)(v40 + 8) = v42;
          *(_QWORD *)(v40 + 24) = v35;
          *(_QWORD *)(v41 + 8) = v40;
          v43 = *(_QWORD *)(v38 + 40);
          *(_QWORD *)(v38 + 16) = 0;
          *(_QWORD *)(v40 + 32) = v43;
          *(_QWORD *)(v38 + 24) = v38 + 8;
          *(_QWORD *)(v38 + 32) = v38 + 8;
          *(_QWORD *)(v38 + 40) = 0;
        }
        else
        {
          *(_DWORD *)v40 = 0;
          *(_QWORD *)(v40 + 8) = 0;
          *(_QWORD *)(v40 + 16) = v40;
          *(_QWORD *)(v40 + 24) = v40;
          *(_QWORD *)(v40 + 32) = 0;
        }
        v44 = *(_QWORD *)(v38 + 64);
        *(__m128i *)(v40 + 40) = _mm_loadu_si128((const __m128i *)(v38 + 48));
        *(_QWORD *)(v40 + 56) = v44;
        v45 = *(_QWORD *)(v38 + 16);
        while ( v45 )
        {
          sub_398830(*(_QWORD **)(v45 + 24));
          v46 = (void *)v45;
          v45 = *(_QWORD *)(v45 + 16);
          v35 = (const char *)&dword_30;
          operator delete(v46, 0x30u);
        }
        --v39;
        v38 += 72;
        v40 += 72;
      }
      while ( v39 != -1 );
      v38 = *a1;
    }
    qfree(v38, v35);
    *a1 = v14;
    a1[2] = v51;
    v4 = v14 + v50;
    v17 = a1[1];
  }
  v18 = 72 * v17;
  v19 = v14 + v18;
  v20 = v18 - v50;
  v21 = v4 + v20 + 8;
  v22 = 0x8E38E38E38E38E39LL * (v20 >> 3) - 1;
  if ( v22 >= 0 )
  {
    do
    {
      v23 = *(_QWORD *)(v19 - 56);
      v19 -= 72;
      if ( v23 )
      {
        v24 = _mm_loadh_ps((const double *)(v19 + 24));
        *(_DWORD *)v21 = *(_DWORD *)(v19 + 8);
        v25 = *(_QWORD *)(v19 + 32);
        *(__m128 *)(v21 + 8) = v24;
        *(_QWORD *)(v21 + 24) = v25;
        *(_QWORD *)(v23 + 8) = v21;
        v26 = *(_QWORD *)(v19 + 40);
        *(_QWORD *)(v19 + 16) = 0;
        *(_QWORD *)(v21 + 32) = v26;
        *(_QWORD *)(v19 + 24) = v19 + 8;
        *(_QWORD *)(v19 + 32) = v19 + 8;
        *(_QWORD *)(v19 + 40) = 0;
      }
      else
      {
        *(_DWORD *)v21 = 0;
        *(_QWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = v21;
        *(_QWORD *)(v21 + 24) = v21;
        *(_QWORD *)(v21 + 32) = 0;
      }
      v27 = *(_QWORD *)(v19 + 64);
      *(__m128i *)(v21 + 40) = _mm_loadu_si128((const __m128i *)(v19 + 48));
      *(_QWORD *)(v21 + 56) = v27;
      v28 = *(_QWORD *)(v19 + 16);
      while ( v28 )
      {
        sub_398830(*(_QWORD **)(v28 + 24));
        v29 = (void *)v28;
        v28 = *(_QWORD *)(v28 + 16);
        operator delete(v29, 0x30u);
      }
      --v22;
      v21 -= 72;
    }
    while ( v22 != -1 );
  }
  v30 = v53;
  if ( v53 )
  {
    v31 = _mm_loadh_ps((const double *)&v54);
    *(_DWORD *)(v4 + 8) = v52;
    v32 = v55;
    *(__m128 *)(v4 + 16) = v31;
    *(_QWORD *)(v4 + 32) = v32;
    v30[1] = v4 + 8;
    *(_QWORD *)(v4 + 40) = v56;
    v33 = v58;
    *(__m128i *)(v4 + 48) = _mm_load_si128(&v57);
    *(_QWORD *)(v4 + 64) = v33;
    ++a1[1];
  }
  else
  {
    *(_DWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 16) = 0;
    v47 = (_QWORD **)v53;
    *(_QWORD *)(v4 + 24) = v4 + 8;
    *(_QWORD *)(v4 + 32) = v4 + 8;
    *(_QWORD *)(v4 + 40) = 0;
    v48 = v58;
    *(__m128i *)(v4 + 48) = _mm_load_si128(&v57);
    *(_QWORD *)(v4 + 64) = v48;
    ++a1[1];
    while ( v47 )
    {
      sub_398830(v47[3]);
      v49 = v47;
      v47 = (_QWORD **)v47[2];
      operator delete(v49, 0x30u);
    }
  }
  return v4;
}
