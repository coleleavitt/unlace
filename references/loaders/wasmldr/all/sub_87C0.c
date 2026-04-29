__int64 __fastcall sub_87C0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __m128i *v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int32 v23; // eax
  __int64 v24; // rsi
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r14
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  void *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r13
  const __m128i *v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rdx
  __m128i si128; // xmm0
  bool v45; // cf
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r13
  const __m128i *v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __m128i v53; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v54[2]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v55; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v56; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v57; // [rsp+50h] [rbp-A8h] BYREF
  __m256i v58; // [rsp+60h] [rbp-98h] BYREF
  __m128i v59; // [rsp+80h] [rbp-78h] BYREF
  __m128i v60; // [rsp+90h] [rbp-68h] BYREF
  __m128i v61; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+B8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v62 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 96)) == 0 )
    sub_3890((__int64)"data section: couldn't read data segment count");
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 96) == -1;
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  if ( v7 )
    sub_3890((__int64)"invalid data segment count", v4, v5);
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "data segment count", 0);
  v8 = *(unsigned int *)(a1 + 96);
  v9 = *(_QWORD *)(a1 + 296);
  v10 = *(_DWORD *)(a1 + 96);
  if ( v8 != v9 )
  {
    memset(v54, 0, sizeof(v54));
    v55 = 0;
    v56 = 0;
    v57 = 0;
    if ( v8 < v9 )
    {
      *(_QWORD *)(a1 + 296) = v8;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 288);
      v12 = *(_QWORD *)(a1 + 304);
      v13 = a1 + 288;
      if ( (unsigned __int64)v54 < v11 || (unsigned __int64)v54 >= 80 * v12 + v11 )
      {
        if ( v12 < v8 )
        {
          v38 = qvector_reserve(v13, 0, v8, 80);
          v39 = *(_QWORD *)(a1 + 296);
          v40 = *(_QWORD *)(a1 + 304);
          *(_QWORD *)(a1 + 304) = v12;
          v41 = *(const __m128i **)(a1 + 288);
          v42 = v38;
          v43 = v39 - 1;
          if ( v43 >= 0 )
          {
            do
            {
              si128 = _mm_load_si128(v41);
              v38 += 80;
              v41 += 5;
              *(__m128i *)(v38 - 80) = si128;
              *(__m128i *)(v38 - 64) = _mm_load_si128(v41 - 4);
              *(__m128i *)(v38 - 48) = _mm_load_si128(v41 - 3);
              *(__m128i *)(v38 - 32) = _mm_load_si128(v41 - 2);
              *(__m128i *)(v38 - 16) = _mm_load_si128(v41 - 1);
              v45 = v43-- == 0;
            }
            while ( !v45 );
            v41 = *(const __m128i **)(a1 + 288);
          }
          qfree(v41);
          *(_QWORD *)(a1 + 288) = v42;
          v9 = *(_QWORD *)(a1 + 296);
          *(_QWORD *)(a1 + 304) = v40;
        }
        v14 = 80 * v9;
        if ( v9 < v8 )
        {
          do
          {
            v15 = *(_QWORD *)(a1 + 288);
            ++v9;
            *(__m128i *)(v15 + v14) = _mm_load_si128(v54);
            *(__m128i *)(v15 + v14 + 16) = _mm_load_si128(&v54[1]);
            *(__m128i *)(v15 + v14 + 32) = _mm_load_si128(&v55);
            *(__m128i *)(v15 + v14 + 48) = _mm_load_si128(&v56);
            *(__m128i *)(v15 + v14 + 64) = _mm_load_si128(&v57);
            v14 += 80;
          }
          while ( v8 != v9 );
        }
      }
      else
      {
        *(__m128i *)v58.m256i_i8 = _mm_load_si128(v54);
        *(__m128i *)&v58.m256i_u64[2] = _mm_load_si128(&v54[1]);
        v59 = _mm_load_si128(&v55);
        v60 = _mm_load_si128(&v56);
        v61 = _mm_load_si128(&v57);
        if ( v12 < v8 )
        {
          v46 = qvector_reserve(v13, 0, v8, 80);
          v47 = *(_QWORD *)(a1 + 296);
          v48 = *(_QWORD *)(a1 + 304);
          *(_QWORD *)(a1 + 304) = v12;
          v49 = *(const __m128i **)(a1 + 288);
          v50 = v46;
          v51 = v47 - 1;
          if ( v51 >= 0 )
          {
            do
            {
              v52 = _mm_load_si128(v49);
              v46 += 80;
              v49 += 5;
              *(__m128i *)(v46 - 80) = v52;
              *(__m128i *)(v46 - 64) = _mm_load_si128(v49 - 4);
              *(__m128i *)(v46 - 48) = _mm_load_si128(v49 - 3);
              *(__m128i *)(v46 - 32) = _mm_load_si128(v49 - 2);
              *(__m128i *)(v46 - 16) = _mm_load_si128(v49 - 1);
              v45 = v51-- == 0;
            }
            while ( !v45 );
            v49 = *(const __m128i **)(a1 + 288);
          }
          qfree(v49);
          *(_QWORD *)(a1 + 288) = v50;
          v9 = *(_QWORD *)(a1 + 296);
          *(_QWORD *)(a1 + 304) = v48;
        }
        v36 = 80 * v9;
        if ( v9 < v8 )
        {
          do
          {
            v37 = *(_QWORD *)(a1 + 288);
            ++v9;
            *(__m128i *)(v37 + v36) = _mm_load_si128((const __m128i *)&v58);
            *(__m128i *)(v37 + v36 + 16) = _mm_load_si128((const __m128i *)&v58.m256i_u64[2]);
            *(__m128i *)(v37 + v36 + 32) = _mm_load_si128(&v59);
            *(__m128i *)(v37 + v36 + 48) = _mm_load_si128(&v60);
            *(__m128i *)(v37 + v36 + 64) = _mm_load_si128(&v61);
            v36 += 80;
          }
          while ( v8 != v9 );
        }
      }
      *(_QWORD *)(a1 + 296) = v8;
      v10 = *(_DWORD *)(a1 + 96);
    }
  }
  v16 = 0;
  if ( v10 )
  {
    do
    {
      v17 = (__m128i *)(*(_QWORD *)(a1 + 288) + 80 * v16);
      v17->m128i_i32[0] = v16;
      v18 = *(_QWORD *)(a1 + 8);
      v19 = v18 + *(_QWORD *)(a1 + 24);
      v20 = *(_QWORD *)(a1 + 32) + v18;
      if ( v19 >= v20 || (v21 = sub_E440(v19, v20, (char *)v17->m128i_i64 + 4)) == 0 )
        sub_3890((__int64)"data section: couldn't read data segment %u flags", v16);
      v22 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v22;
      *(_QWORD *)(a1 + 24) = v21 + v22;
      create_data(v22, 0, v21, -1);
      set_cmt(*(_QWORD *)(a1 + 40), "flags", 0);
      v23 = v17->m128i_i32[1];
      v17->m128i_i32[2] = 0;
      if ( (v23 & 2) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 8);
        v27 = v26 + *(_QWORD *)(a1 + 24);
        v28 = *(_QWORD *)(a1 + 32) + v26;
        if ( v27 >= v28 || (v29 = sub_E440(v27, v28, &v17->m128i_u64[1])) == 0 )
          sub_3890((__int64)"data section: couldn't read data segment %u memory index", v16);
        v30 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 40) = v30;
        *(_QWORD *)(a1 + 24) = v29 + v30;
        create_data(v30, 0, v29, -1);
        set_cmt(*(_QWORD *)(a1 + 40), "memory index", 0);
        v23 = v17->m128i_i32[1];
      }
      if ( (v23 & 1) == 0 )
      {
        auto_mark_range(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24) + 1LL, 20);
        sub_4A00((_QWORD *)a1, v17 + 1, 0);
      }
      sub_4400((_QWORD *)a1, (__m128i *)v17[3].m128i_i64, &v17[3].m128i_i64[1]);
      create_strlit(*(_QWORD *)(a1 + 40), v17[3].m128i_i64[1], 0);
      v17[4].m128i_i32[0] = *(_QWORD *)(a1 + 40);
      v24 = *(_QWORD *)(a1 + 40);
      memset(v54, 0, 24);
      get_ea_name(v54, v24, 0, 0);
      if ( v54[0].m128i_i64[1] <= 1uLL )
      {
        memset(&v58, 0, 24);
        v31 = qvector_reserve(&v58, 0, 6, 1);
        v58.m256i_i64[0] = v31;
        v58.m256i_i64[1] = 6;
        *(_DWORD *)v31 = 1635017060;
        *(_BYTE *)(v31 + 4) = 95;
        *(_BYTE *)(v58.m256i_i64[0] + 5) = 0;
        v32 = v58.m256i_i64[0];
        v33 = _mm_loadu_si128((const __m128i *)&v58.m256i_u64[1]);
        memset(&v58, 0, 24);
        if ( v54[0].m128i_i64[0] )
        {
          v53 = v33;
          v54[0].m128i_i64[1] = 0;
          qfree(v54[0].m128i_i64[0]);
          v34 = _mm_load_si128(&v53);
          v54[0].m128i_i64[0] = v32;
          *(__m128i *)((char *)v54 + 8) = v34;
          if ( v58.m256i_i64[0] )
          {
            v58.m256i_i64[1] = 0;
            qfree(v58.m256i_i64[0]);
          }
        }
        else
        {
          v54[0].m128i_i64[0] = v32;
          *(__m128i *)((char *)v54 + 8) = v33;
        }
        sub_4EE0(v54[0].m128i_i64, (__int64)"%u", v16);
        v35 = &unk_10F58;
        if ( v54[0].m128i_i64[1] )
          v35 = (void *)v54[0].m128i_i64[0];
        set_name(*(_QWORD *)(a1 + 40), v35, 0);
      }
      if ( v54[0].m128i_i64[0] )
      {
        v54[0].m128i_i64[1] = 0;
        qfree(v54[0].m128i_i64[0]);
      }
      ++v16;
    }
    while ( (unsigned int)v16 < *(_DWORD *)(a1 + 96) );
  }
  return 1;
}
