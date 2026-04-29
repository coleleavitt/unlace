unsigned __int64 __fastcall sub_136E0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  __int64 v8; // r13
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int128 v14; // rax
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  const char *v21; // r14
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  unsigned __int64 v30; // rdi
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rax
  __m128i v34; // [rsp+0h] [rbp-4C0h] BYREF
  __int8 *v35; // [rsp+10h] [rbp-4B0h]
  __int64 v36; // [rsp+18h] [rbp-4A8h]
  __int64 v37; // [rsp+20h] [rbp-4A0h]
  __m128i v38; // [rsp+28h] [rbp-498h] BYREF
  __int64 v39; // [rsp+40h] [rbp-480h] BYREF
  __int128 v40; // [rsp+48h] [rbp-478h]
  __int64 v41; // [rsp+60h] [rbp-460h] BYREF
  __m128i v42; // [rsp+68h] [rbp-458h] BYREF
  _BYTE v43[1032]; // [rsp+80h] [rbp-440h] BYREF
  unsigned __int64 v44; // [rsp+488h] [rbp-38h]

  v37 = a1;
  v34.m128i_i64[1] = a4;
  v44 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a4 + 8);
  v36 = v6;
  if ( v6 )
  {
    v8 = 0;
    sub_19260(a1, (unsigned int)"Number of %s CONSTANT_%s: %zu\n", a2, a3, v6, a6, v34.m128i_i8[0]);
    v35 = &v38.m128i_i8[12];
    do
    {
      v39 = 0;
      v40 = 0;
      v9 = *(_DWORD *)(*(_QWORD *)v34.m128i_i64[1] + 4 * v8);
      if ( netnode_supval(*(_QWORD *)(v37 + 33336), (unsigned __int16)v9, v35, 12, 83) == 12 )
      {
        sub_19640(v37, &v39, v35, (unsigned __int16)v9, 0);
        v38.m128i_i64[0] = v40;
        if ( (_QWORD)v40 )
          goto LABEL_12;
        v42 = 0;
        v41 = 0;
        v27 = qvector_reserve(&v41, 0, 27, 1);
        v41 = v27;
        v42.m128i_i64[0] = 27;
        *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_24E60);
        v12 = v39;
        *(__m128i *)(v27 + 10) = _mm_load_si128((const __m128i *)&xmmword_24E70);
        v28 = v41;
        *((_QWORD *)&v14 + 1) = *((_QWORD *)&v40 + 1);
        *(_BYTE *)(v41 + 26) = 0;
        v29 = v28;
        *(_QWORD *)&v14 = v40;
        v30 = v40 + 1;
        if ( (unsigned __int64)&v41 >= v12 )
        {
          v11 = v12 + 24LL * *((_QWORD *)&v14 + 1);
          if ( (unsigned __int64)&v41 < v11 )
          {
            v31 = _mm_loadl_epi64(&v42);
            v32 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
            v41 = 0;
            v42 = 0;
            if ( *((_QWORD *)&v14 + 1) < v30 )
            {
              v34.m128i_i64[0] = v32.m128i_i64[0];
              v38.m128i_i64[0] = v31.m128i_i64[0];
              v39 = qvector_reserve(&v39, v12, v40 + 1, 24);
              v12 = v39;
              v32 = _mm_loadl_epi64(&v34);
              v31 = _mm_loadl_epi64(&v38);
              *(_QWORD *)&v14 = v40;
            }
            v33 = v12 + 24 * v14;
            *(_QWORD *)v33 = v29;
            *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64(v31, v32);
            v19 = v41;
            v38.m128i_i64[0] = v40 + 1;
            *(_QWORD *)&v40 = v40 + 1;
            if ( v41 )
            {
LABEL_10:
              v42.m128i_i64[0] = 0;
              qfree(v19, v12, *((_QWORD *)&v14 + 1), v11);
              v38.m128i_i64[0] = v40;
            }
LABEL_11:
            if ( !v38.m128i_i64[0] )
              goto LABEL_32;
            goto LABEL_12;
          }
        }
        if ( *((_QWORD *)&v14 + 1) < v30 )
        {
          v39 = qvector_reserve(&v39, v12, v40 + 1, 24);
          v12 = v39;
          v29 = v41;
          *(_QWORD *)&v14 = v40;
        }
        v26 = v12 + 24 * v14;
        *(_QWORD *)v26 = v29;
      }
      else
      {
        v38.m128i_i8[12] = 0;
        v42 = 0;
        v41 = 0;
        v10 = qvector_reserve(&v41, 0, 29, 1);
        v41 = v10;
        v42.m128i_i64[0] = 29;
        *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_24E80);
        v12 = v39;
        *(__m128i *)(v10 + 12) = _mm_load_si128((const __m128i *)&xmmword_24E90);
        v13 = v41;
        v14 = v40;
        *(_BYTE *)(v41 + 28) = 0;
        v15 = v14 + 1;
        if ( (unsigned __int64)&v41 >= v12 )
        {
          v11 = v12 + 24LL * *((_QWORD *)&v14 + 1);
          if ( (unsigned __int64)&v41 < v11 )
          {
            v16 = _mm_loadl_epi64(&v42);
            v17 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
            v41 = 0;
            v42 = 0;
            if ( *((_QWORD *)&v14 + 1) < v15 )
            {
              v34.m128i_i64[0] = v17.m128i_i64[0];
              v38.m128i_i64[0] = v16.m128i_i64[0];
              v39 = qvector_reserve(&v39, v12, v15, 24);
              v12 = v39;
              v17 = _mm_loadl_epi64(&v34);
              v16 = _mm_loadl_epi64(&v38);
              *(_QWORD *)&v14 = v40;
            }
            v18 = v12 + 24 * v14;
            *(_QWORD *)v18 = v13;
            *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
            v19 = v41;
            v38.m128i_i64[0] = v40 + 1;
            *(_QWORD *)&v40 = v40 + 1;
            if ( v41 )
              goto LABEL_10;
            goto LABEL_11;
          }
        }
        if ( *((_QWORD *)&v14 + 1) < v15 )
        {
          v39 = qvector_reserve(&v39, v12, v15, 24);
          v12 = v39;
          v13 = v41;
          *(_QWORD *)&v14 = v40;
        }
        v26 = v12 + 24 * v14;
        *(_QWORD *)v26 = v13;
      }
      *(__m128i *)(v26 + 8) = _mm_loadu_si128(&v42);
      v38.m128i_i64[0] = v40 + 1;
      *(_QWORD *)&v40 = v40 + 1;
      if ( !(_QWORD)v40 )
      {
LABEL_32:
        *(_QWORD *)&v14 = v39;
        if ( !v39 )
          goto LABEL_26;
        goto LABEL_25;
      }
LABEL_12:
      v20 = 0;
      do
      {
        if ( v38.m128i_i64[0] == 1 )
          v43[0] = 0;
        else
          qsnprintf(v43, 1024, ".%zu", v20);
        v21 = s1;
        v22 = v39 + 24 * v20;
        if ( *(_QWORD *)(v22 + 8) )
          v21 = *(const char **)v22;
        v23 = sub_19620(v38.m128i_u8[12]);
        sub_19260(
          v37,
          (unsigned int)"  #%zu%s, index=%d, type=%s: %s",
          v8,
          (unsigned int)v43,
          (unsigned __int16)v9,
          v23,
          (char)v21);
        ++v20;
      }
      while ( v20 != v38.m128i_i64[0] );
      v24 = v39;
      *(_QWORD *)&v14 = v39;
      if ( !v39 )
        goto LABEL_26;
      v12 = v40;
      if ( (_QWORD)v40 )
      {
        v25 = 0;
        do
        {
          *((_QWORD *)&v14 + 1) = v24 + 24 * v25;
          *(_QWORD *)&v14 = **((_QWORD **)&v14 + 1);
          if ( **((_QWORD **)&v14 + 1) )
          {
            *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL) = 0;
            qfree(v14, v12, *((_QWORD *)&v14 + 1), v11);
            v24 = v39;
          }
          ++v25;
          *(_QWORD *)&v14 = v24;
        }
        while ( v12 != v25 );
      }
LABEL_25:
      *(_QWORD *)&v40 = 0;
      qfree(v14, v12, *((_QWORD *)&v14 + 1), v11);
LABEL_26:
      ++v8;
    }
    while ( v8 != v36 );
  }
  return v44 - __readfsqword(0x28u);
}
