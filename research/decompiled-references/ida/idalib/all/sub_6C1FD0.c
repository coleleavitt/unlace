__m128i *__fastcall sub_6C1FD0(__int64 a1, __int64 *a2, __m128i *a3, __int64 a4, __int64 a5)
{
  __m128i v7; // xmm0
  size_t v8; // r13
  size_t v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // r15
  __int64 v14; // rdx
  __int8 v15; // al
  __m128i v16; // xmm0
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // r14
  __m128i v20; // xmm0
  size_t v21; // rbx
  size_t v22; // rbx
  __int64 v23; // rsi
  __m128i *v24; // rbx
  __int8 *v25; // r8
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rax
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
  void *v42; // rax
  const void *v43; // rsi
  void *v44; // rax
  const void *v45; // rsi
  size_t v46; // rbx
  __m128i v47; // xmm0
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int8 v50; // al
  __m128i v51; // xmm0
  __int8 *v52; // r15
  __int64 v53; // rax
  __m128i v54; // xmm0
  void *v55; // rax
  __m128i v56; // xmm0
  void *v57; // rax
  __m128i v58; // xmm1
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rax
  void *v62; // rax
  const void *v63; // rsi
  void *v64; // rax
  const void *v65; // rsi
  __int64 v67; // [rsp+20h] [rbp-178h]
  __m128i v68; // [rsp+30h] [rbp-168h] BYREF
  void *v69; // [rsp+40h] [rbp-158h] BYREF
  size_t v70[2]; // [rsp+48h] [rbp-150h]
  void *src; // [rsp+58h] [rbp-140h]
  size_t n[2]; // [rsp+60h] [rbp-138h]
  __int64 v73; // [rsp+70h] [rbp-128h] BYREF
  __m128i v74; // [rsp+78h] [rbp-120h] BYREF
  __m128i v75; // [rsp+88h] [rbp-110h] BYREF
  __m128i v76; // [rsp+98h] [rbp-100h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-F0h]
  __int64 v78; // [rsp+B0h] [rbp-E8h]
  __int8 v79; // [rsp+B8h] [rbp-E0h]
  __m128i v80; // [rsp+C0h] [rbp-D8h] BYREF
  void *v81; // [rsp+D0h] [rbp-C8h]
  __m128i v82; // [rsp+D8h] [rbp-C0h] BYREF
  void *ptr; // [rsp+E8h] [rbp-B0h]
  __m128i v84; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+100h] [rbp-98h] BYREF
  __m128i v86; // [rsp+108h] [rbp-90h] BYREF
  __m128i v87; // [rsp+118h] [rbp-80h] BYREF
  __m128i v88; // [rsp+128h] [rbp-70h] BYREF
  __int64 v89; // [rsp+138h] [rbp-60h]
  __int64 v90; // [rsp+140h] [rbp-58h]
  __int8 v91; // [rsp+148h] [rbp-50h]
  unsigned __int64 v92; // [rsp+158h] [rbp-40h]

  v7 = _mm_loadu_si128((const __m128i *)a4);
  v8 = *(_QWORD *)(a4 + 24);
  v92 = __readfsqword(0x28u);
  if ( a5 == 1 )
  {
    v80 = v7;
    v81 = nullptr;
    v82 = 0;
    if ( v8 )
    {
      v64 = (void *)qalloc_or_throw(v8);
      v65 = *(const void **)(a4 + 16);
      v82.m128i_i64[1] = v8;
      v81 = v64;
      memcpy(v64, v65, v8);
      v82.m128i_i64[0] = v8;
    }
    v46 = *(_QWORD *)(a4 + 48);
    ptr = nullptr;
    v84 = 0;
    if ( v46 )
    {
      v62 = (void *)qalloc_or_throw(v46);
      v63 = *(const void **)(a4 + 40);
      ptr = v62;
      v84.m128i_i64[1] = v46;
      memcpy(v62, v63, v46);
      v84.m128i_i64[0] = v46;
    }
    v85 = 0;
    copy_tinfo_t(&v85);
    v47 = _mm_loadu_si128((const __m128i *)(a4 + 72));
    v24 = a3;
    v48 = *(_QWORD *)(a4 + 128);
    v49 = *a2;
    v89 = *(_QWORD *)(a4 + 120);
    v50 = *(_BYTE *)(a4 + 136);
    v86 = v47;
    v51 = _mm_loadu_si128((const __m128i *)(a4 + 88));
    v52 = &a3->m128i_i8[-v49];
    v91 = v50;
    v53 = a2[1];
    v87 = v51;
    v54 = _mm_loadu_si128((const __m128i *)(a4 + 104));
    v90 = v48;
    v88 = v54;
    if ( a2[2] < (unsigned __int64)(v53 + 1) )
    {
      v61 = qvector_reserve(a2, v49, v53 + 1, 144);
      *a2 = v61;
      v24 = (__m128i *)&v52[v61];
      v53 = a2[1];
    }
    memmove(&v24[9], v24, 144 * v53 - (_QWORD)v52);
    *v24 = _mm_load_si128(&v80);
    v55 = v81;
    v56 = _mm_loadu_si128(&v82);
    v81 = nullptr;
    *(__m128i *)((char *)v24 + 24) = v56;
    v24[1].m128i_i64[0] = (__int64)v55;
    v57 = ptr;
    v58 = _mm_load_si128(&v84);
    v82 = 0;
    ptr = nullptr;
    v84 = 0;
    v24[2].m128i_i64[1] = (__int64)v57;
    v24[4].m128i_i64[0] = 0;
    v24[3] = v58;
    copy_tinfo_t(&v24[4]);
    v59 = v89;
    *(__m128i *)((char *)v24 + 72) = _mm_loadu_si128(&v86);
    v60 = _mm_loadu_si128(&v87);
    v24[7].m128i_i64[1] = v59;
    *(__m128i *)((char *)v24 + 88) = v60;
    *(__m128i *)((char *)v24 + 104) = _mm_loadu_si128(&v88);
    v24[8].m128i_i64[0] = v90;
    v24[8].m128i_i8[8] = v91;
    ++a2[1];
    clear_tinfo_t(&v85);
    if ( ptr )
    {
      v84.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v81 )
    {
      v82.m128i_i64[0] = 0;
      qfree(v81);
    }
    sub_6C1060((__int64 *)(a1 + 96), a4);
  }
  else
  {
    v68 = v7;
    v69 = nullptr;
    *(_OWORD *)v70 = 0;
    if ( v8 )
    {
      v44 = (void *)qalloc_or_throw(v8);
      v45 = *(const void **)(a4 + 16);
      v70[1] = v8;
      v69 = v44;
      memcpy(v44, v45, v8);
      v70[0] = v8;
    }
    v11 = *(_QWORD *)(a4 + 48);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v11 )
    {
      v42 = (void *)qalloc_or_throw(v11);
      v43 = *(const void **)(a4 + 40);
      src = v42;
      n[1] = v11;
      memcpy(v42, v43, v11);
      n[0] = v11;
    }
    v73 = 0;
    copy_tinfo_t(&v73);
    v12 = _mm_loadu_si128((const __m128i *)(a4 + 72));
    v13 = *(_QWORD *)(a4 + 24);
    v14 = *(_QWORD *)(a4 + 128);
    v77 = *(_QWORD *)(a4 + 120);
    v15 = *(_BYTE *)(a4 + 136);
    v74 = v12;
    v16 = _mm_loadu_si128((const __m128i *)(a4 + 88));
    v79 = v15;
    v17 = (v13 == 0) + v13 - 1;
    v67 = a5 - 1;
    v75 = v16;
    v18 = _mm_loadu_si128((const __m128i *)(a4 + 104));
    v19 = 0;
    v78 = v14;
    v76 = v18;
    sub_35A910((__int64 *)&v69);
    while ( 1 )
    {
      v20 = _mm_load_si128(&v68);
      v21 = v70[0];
      v81 = nullptr;
      v82 = 0;
      v80 = v20;
      if ( v70[0] )
      {
        v81 = (void *)qalloc_or_throw(v70[0]);
        v82.m128i_i64[1] = v21;
        memcpy(v81, v69, v21);
        v82.m128i_i64[0] = v21;
      }
      v22 = n[0];
      ptr = nullptr;
      v84 = 0;
      if ( n[0] )
      {
        ptr = (void *)qalloc_or_throw(n[0]);
        v84.m128i_i64[1] = v22;
        memcpy(ptr, src, v22);
        v84.m128i_i64[0] = v22;
      }
      v85 = 0;
      copy_tinfo_t(&v85);
      v23 = *a2;
      v24 = a3;
      v86 = _mm_loadu_si128(&v74);
      v25 = &a3->m128i_i8[-v23];
      v26 = _mm_loadu_si128(&v75);
      v89 = v77;
      v87 = v26;
      v27 = _mm_loadu_si128(&v76);
      v90 = v78;
      v88 = v27;
      v91 = v79;
      v28 = a2[1];
      if ( a2[2] < (unsigned __int64)(v28 + 1) )
      {
        v40 = qvector_reserve(a2, v23, v28 + 1, 144);
        v25 = &a3->m128i_i8[-v23];
        *a2 = v40;
        v24 = (__m128i *)((char *)a3 + v40 - v23);
        v28 = a2[1];
      }
      a3 = v24 + 9;
      memmove(&v24[9], v24, 144 * v28 - (_QWORD)v25);
      *v24 = _mm_load_si128(&v80);
      v29 = v81;
      v30 = _mm_loadu_si128(&v82);
      v81 = nullptr;
      v24[1].m128i_i64[0] = (__int64)v29;
      *(__m128i *)((char *)v24 + 24) = v30;
      v31 = ptr;
      v32 = _mm_load_si128(&v84);
      v82 = 0;
      ptr = nullptr;
      v84 = 0;
      v24[2].m128i_i64[1] = (__int64)v31;
      v24[4].m128i_i64[0] = 0;
      v24[3] = v32;
      copy_tinfo_t(&v24[4]);
      v33 = v89;
      *(__m128i *)((char *)v24 + 72) = _mm_loadu_si128(&v86);
      v34 = _mm_loadu_si128(&v87);
      v24[7].m128i_i64[1] = v33;
      *(__m128i *)((char *)v24 + 88) = v34;
      *(__m128i *)((char *)v24 + 104) = _mm_loadu_si128(&v88);
      v24[8].m128i_i64[0] = v90;
      v24[8].m128i_i8[8] = v91;
      ++a2[1];
      clear_tinfo_t(&v85);
      if ( ptr )
      {
        v84.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v81 )
      {
        v82.m128i_i64[0] = 0;
        qfree(v81);
      }
      sub_6C1060((__int64 *)(a1 + 96), (__int64)&v68);
      if ( v67 == v19 )
        break;
      v35 = _mm_load_si128(&v68);
      v36 = v69;
      v37 = (char *)v69;
      v68.m128i_i64[0] = _mm_add_epi64(v35, _mm_srli_si128(v35, 8)).m128i_u64[0];
      if ( v17 )
      {
        v38 = v70[0];
        v39 = v17 + 1;
        if ( v70[0] < v17 + 1 )
        {
          if ( v70[1] < v39 )
          {
            v37 = (char *)qvector_reserve(&v69, v69, v17 + 1, 1);
            v69 = v37;
            v38 = v70[0];
          }
          memset(&v37[v38], 0, v39 - v38);
          v70[0] = v17 + 1;
          v36 = v69;
        }
        else if ( v39 != v70[0] )
        {
          v70[0] = v17 + 1;
        }
        v36[v17] = 0;
      }
      else if ( v69 )
      {
        v70[0] = 0;
        qfree(v69);
        v69 = nullptr;
        v70[1] = 0;
      }
      ++v19;
      sub_35A910((__int64 *)&v69);
    }
    clear_tinfo_t(&v73);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v69 )
    {
      v70[0] = 0;
      qfree(v69);
    }
  }
  return v24;
}
