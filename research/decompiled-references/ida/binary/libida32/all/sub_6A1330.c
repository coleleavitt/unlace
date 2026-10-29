__m128i *__fastcall sub_6A1330(__int64 a1, const char *a2, __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbp
  __m128i v7; // xmm0
  size_t v8; // r13
  size_t v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // r15
  __int64 v14; // rdx
  __int8 v15; // al
  __m128i v16; // xmm0
  __int64 v17; // r15
  __int64 v18; // r14
  const char *v19; // rsi
  __int64 v20; // rdx
  __m128i v21; // xmm0
  size_t v22; // rbx
  size_t v23; // rbx
  __int64 v24; // rsi
  __m128i *v25; // rbx
  __int64 v26; // rdx
  __int8 *v27; // r8
  __m128i v28; // xmm0
  void *v29; // rax
  __m128i v30; // xmm0
  void *v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  _BYTE *v36; // rdi
  char *v37; // rax
  size_t v38; // rdx
  size_t v39; // rbx
  __int64 v40; // rax
  void *v41; // rax
  void *v43; // rax
  const void *v44; // rsi
  void *v45; // rax
  size_t v46; // rbx
  __m128i v47; // xmm0
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int8 v50; // al
  __int64 v51; // rdx
  __int8 *v52; // r15
  __m128i v53; // xmm0
  void *v54; // rax
  __m128i v55; // xmm0
  void *v56; // rax
  __m128i v57; // xmm1
  __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  void *v61; // rax
  const void *v62; // rsi
  void *v63; // rax
  __int64 v65; // [rsp+20h] [rbp-158h]
  __m128i v66; // [rsp+30h] [rbp-148h] BYREF
  void *v67; // [rsp+40h] [rbp-138h] BYREF
  size_t v68[2]; // [rsp+48h] [rbp-130h]
  void *src; // [rsp+58h] [rbp-120h]
  size_t n[2]; // [rsp+60h] [rbp-118h]
  __int64 v71; // [rsp+70h] [rbp-108h] BYREF
  __m128i v72; // [rsp+78h] [rbp-100h] BYREF
  __m128i v73; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v74; // [rsp+98h] [rbp-E0h]
  __int64 v75; // [rsp+A0h] [rbp-D8h]
  __int8 v76; // [rsp+A8h] [rbp-D0h]
  __m128i v77; // [rsp+B0h] [rbp-C8h] BYREF
  void *v78; // [rsp+C0h] [rbp-B8h]
  __m128i v79; // [rsp+C8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+D8h] [rbp-A0h]
  __m128i v81; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v83; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v84; // [rsp+108h] [rbp-70h] BYREF
  __int64 v85; // [rsp+118h] [rbp-60h]
  __int64 v86; // [rsp+120h] [rbp-58h]
  __int8 v87; // [rsp+128h] [rbp-50h]
  unsigned __int64 v88; // [rsp+138h] [rbp-40h]

  v6 = (__int64 *)a2;
  v7 = _mm_loadu_si128((const __m128i *)a4);
  v8 = *(_QWORD *)(a4 + 24);
  v88 = __readfsqword(0x28u);
  if ( a5 == 1 )
  {
    v77 = v7;
    v78 = nullptr;
    v79 = 0;
    if ( v8 )
    {
      v63 = (void *)qalloc_or_throw(v8, a2);
      a2 = *(const char **)(a4 + 16);
      v79.m128i_i64[1] = v8;
      v78 = v63;
      memcpy(v63, a2, v8);
      v79.m128i_i64[0] = v8;
    }
    v46 = *(_QWORD *)(a4 + 48);
    ptr = nullptr;
    v81 = 0;
    if ( v46 )
    {
      v61 = (void *)qalloc_or_throw(v46, a2);
      v62 = *(const void **)(a4 + 40);
      ptr = v61;
      v81.m128i_i64[1] = v46;
      memcpy(v61, v62, v46);
      v81.m128i_i64[0] = v46;
    }
    v82 = 0;
    copy_tinfo_t(&v82);
    v47 = _mm_loadu_si128((const __m128i *)(a4 + 72));
    v25 = a3;
    v48 = *(_QWORD *)(a4 + 112);
    v49 = *v6;
    v85 = *(_QWORD *)(a4 + 104);
    v50 = *(_BYTE *)(a4 + 120);
    v86 = v48;
    v51 = v6[1];
    v52 = &a3->m128i_i8[-v49];
    v83 = v47;
    v53 = _mm_loadu_si128((const __m128i *)(a4 + 88));
    v87 = v50;
    v84 = v53;
    if ( v6[2] < (unsigned __int64)(v51 + 1) )
    {
      v60 = qvector_reserve(v6, v49, v51 + 1, 128);
      *v6 = v60;
      v51 = v6[1];
      v25 = (__m128i *)&v52[v60];
    }
    memmove(&v25[8], v25, (v51 << 7) - (_QWORD)v52);
    *v25 = _mm_load_si128(&v77);
    v54 = v78;
    v55 = _mm_loadu_si128(&v79);
    v78 = nullptr;
    *(__m128i *)((char *)v25 + 24) = v55;
    v25[1].m128i_i64[0] = (__int64)v54;
    v56 = ptr;
    v57 = _mm_load_si128(&v81);
    v79 = 0;
    ptr = nullptr;
    v81 = 0;
    v25[2].m128i_i64[1] = (__int64)v56;
    v25[4].m128i_i64[0] = 0;
    v25[3] = v57;
    copy_tinfo_t(&v25[4]);
    v58 = v85;
    *(__m128i *)((char *)v25 + 72) = _mm_loadu_si128(&v83);
    v59 = _mm_loadu_si128(&v84);
    v25[6].m128i_i64[1] = v58;
    *(__m128i *)((char *)v25 + 88) = v59;
    v25[7].m128i_i64[0] = v86;
    v25[7].m128i_i8[8] = v87;
    ++v6[1];
    clear_tinfo_t(&v82);
    if ( ptr )
    {
      v81.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v78 )
    {
      v79.m128i_i64[0] = 0;
      qfree(v78);
    }
    sub_6A0430((__int64 *)(a1 + 96), (const __m128i *)a4);
  }
  else
  {
    v66 = v7;
    v67 = nullptr;
    *(_OWORD *)v68 = 0;
    if ( v8 )
    {
      v45 = (void *)qalloc_or_throw(v8, a2);
      a2 = *(const char **)(a4 + 16);
      v68[1] = v8;
      v67 = v45;
      memcpy(v45, a2, v8);
      v68[0] = v8;
    }
    v11 = *(_QWORD *)(a4 + 48);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v11 )
    {
      v43 = (void *)qalloc_or_throw(v11, a2);
      v44 = *(const void **)(a4 + 40);
      src = v43;
      n[1] = v11;
      memcpy(v43, v44, v11);
      n[0] = v11;
    }
    v71 = 0;
    copy_tinfo_t(&v71);
    v12 = _mm_loadu_si128((const __m128i *)(a4 + 72));
    v13 = *(_QWORD *)(a4 + 24);
    v14 = *(_QWORD *)(a4 + 112);
    v74 = *(_QWORD *)(a4 + 104);
    v15 = *(_BYTE *)(a4 + 120);
    v72 = v12;
    v16 = _mm_loadu_si128((const __m128i *)(a4 + 88));
    v76 = v15;
    v17 = (v13 == 0) + v13 - 1;
    v18 = 0;
    v65 = a5 - 1;
    v75 = v14;
    v73 = v16;
    while ( 1 )
    {
      v19 = "_%llX";
      sub_357520((__int64 *)&v67);
      v21 = _mm_load_si128(&v66);
      v22 = v68[0];
      v78 = nullptr;
      v79 = 0;
      v77 = v21;
      if ( v68[0] )
      {
        v41 = (void *)qalloc_or_throw(v68[0], "_%llX", v20);
        v19 = (const char *)v67;
        v78 = v41;
        v79.m128i_i64[1] = v22;
        memcpy(v41, v67, v22);
        v79.m128i_i64[0] = v22;
      }
      v23 = n[0];
      ptr = nullptr;
      v81 = 0;
      if ( n[0] )
      {
        ptr = (void *)qalloc_or_throw(n[0], v19);
        v81.m128i_i64[1] = v23;
        memcpy(ptr, src, v23);
        v81.m128i_i64[0] = v23;
      }
      v82 = 0;
      copy_tinfo_t(&v82);
      v24 = *v6;
      v25 = a3;
      v26 = v6[1];
      v83 = _mm_loadu_si128(&v72);
      v27 = &a3->m128i_i8[-v24];
      v28 = _mm_loadu_si128(&v73);
      v85 = v74;
      v84 = v28;
      v86 = v75;
      v87 = v76;
      if ( v6[2] < (unsigned __int64)(v26 + 1) )
      {
        v40 = qvector_reserve(v6, v24, v26 + 1, 128);
        v27 = &a3->m128i_i8[-v24];
        v26 = v6[1];
        *v6 = v40;
        v25 = (__m128i *)((char *)a3 + v40 - v24);
      }
      a3 = v25 + 8;
      memmove(&v25[8], v25, (v26 << 7) - (_QWORD)v27);
      *v25 = _mm_load_si128(&v77);
      v29 = v78;
      v30 = _mm_loadu_si128(&v79);
      v78 = nullptr;
      v25[1].m128i_i64[0] = (__int64)v29;
      *(__m128i *)((char *)v25 + 24) = v30;
      v31 = ptr;
      v32 = _mm_load_si128(&v81);
      v79 = 0;
      ptr = nullptr;
      v81 = 0;
      v25[2].m128i_i64[1] = (__int64)v31;
      v25[4].m128i_i64[0] = 0;
      v25[3] = v32;
      copy_tinfo_t(&v25[4]);
      v33 = v85;
      *(__m128i *)((char *)v25 + 72) = _mm_loadu_si128(&v83);
      v34 = _mm_loadu_si128(&v84);
      v25[6].m128i_i64[1] = v33;
      *(__m128i *)((char *)v25 + 88) = v34;
      v25[7].m128i_i64[0] = v86;
      v25[7].m128i_i8[8] = v87;
      ++v6[1];
      clear_tinfo_t(&v82);
      if ( ptr )
      {
        v81.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v78 )
      {
        v79.m128i_i64[0] = 0;
        qfree(v78);
      }
      sub_6A0430((__int64 *)(a1 + 96), &v66);
      if ( v65 == v18 )
        break;
      v35 = _mm_load_si128(&v66);
      v36 = v67;
      v37 = (char *)v67;
      v66.m128i_i64[0] = _mm_add_epi64(v35, _mm_srli_si128(v35, 8)).m128i_u64[0];
      if ( v17 )
      {
        v38 = v68[0];
        v39 = v17 + 1;
        if ( v68[0] < v17 + 1 )
        {
          if ( v68[1] < v39 )
          {
            v37 = (char *)qvector_reserve(&v67, v67, v17 + 1, 1);
            v67 = v37;
            v38 = v68[0];
          }
          memset(&v37[v38], 0, v39 - v38);
          v68[0] = v17 + 1;
          v36 = v67;
        }
        else if ( v39 != v68[0] )
        {
          v68[0] = v17 + 1;
        }
        v36[v17] = 0;
      }
      else if ( v67 )
      {
        v68[0] = 0;
        qfree(v67);
        v67 = nullptr;
        v68[1] = 0;
      }
      ++v18;
    }
    clear_tinfo_t(&v71);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v67 )
    {
      v68[0] = 0;
      qfree(v67);
    }
  }
  return v25;
}

