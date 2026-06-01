__int64 __fastcall sub_54E3B0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        const char **a6,
        char **a7,
        char **a8,
        char a9)
{
  unsigned int v11; // eax
  __int16 v12; // si
  __m128i v13; // xmm0
  size_t v14; // r15
  size_t v15; // rbx
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rbx
  void *v21; // rax
  __m128i v22; // xmm0
  void *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  void *v27; // rdi
  __int16 v28; // ax
  int v29; // edx
  __m128i v30; // xmm0
  size_t v31; // r15
  size_t v32; // rbx
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __int64 v37; // rbx
  void *v38; // rax
  __m128i v39; // xmm0
  void *v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i v43; // xmm0
  char v45; // dl
  __int64 v46; // rax
  void *v47; // rax
  const char *v48; // rsi
  void *v49; // rax
  __int64 v50; // rax
  int v51; // edx
  unsigned __int64 v52; // [rsp+0h] [rbp-180h]
  int v53; // [rsp+Ch] [rbp-174h]
  int v57; // [rsp+38h] [rbp-148h]
  int v58; // [rsp+3Ch] [rbp-144h]
  int v59; // [rsp+3Ch] [rbp-144h]
  __m128i v60; // [rsp+40h] [rbp-140h] BYREF
  void *v61; // [rsp+50h] [rbp-130h] BYREF
  size_t v62[2]; // [rsp+58h] [rbp-128h]
  void *src; // [rsp+68h] [rbp-118h] BYREF
  size_t n[2]; // [rsp+70h] [rbp-110h]
  __int128 v65; // [rsp+80h] [rbp-100h] BYREF
  __m128i v66; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-D8h]
  int v68[2]; // [rsp+B0h] [rbp-D0h] BYREF
  char v69; // [rsp+B8h] [rbp-C8h]
  int v70[4]; // [rsp+C0h] [rbp-C0h] BYREF
  void *v71; // [rsp+D0h] [rbp-B0h]
  __m128i v72; // [rsp+D8h] [rbp-A8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-98h]
  __m128i v74; // [rsp+F0h] [rbp-90h] BYREF
  __int64 v75; // [rsp+100h] [rbp-80h] BYREF
  __m128i v76; // [rsp+108h] [rbp-78h] BYREF
  __m128i v77; // [rsp+118h] [rbp-68h] BYREF
  __int64 v78; // [rsp+128h] [rbp-58h]
  __int64 v79; // [rsp+130h] [rbp-50h]
  char v80; // [rsp+138h] [rbp-48h]
  unsigned __int64 v81; // [rsp+148h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  if ( a9 || (**a6 & 0xCF ^ 0xC0u) > 1 )
  {
    v11 = *(_DWORD *)(a2 + 44);
  }
  else
  {
    v59 = a5;
    if ( !(unsigned __int8)sub_51F860(a6, (_DWORD *)(a2 + 44), nullptr) )
      return 0;
    a5 = v59;
    v11 = *(_DWORD *)(a2 + 44) & 0xFFFFFFF0;
    v51 = *(_DWORD *)(a2 + 44) & 0xF;
    *(_DWORD *)(a2 + 44) = v11;
    *(_BYTE *)(a2 + 49) = v51;
  }
  if ( *(_BYTE *)(a2 + 51) && (v11 & 0x400) != 0 )
    return 0;
  v12 = v11;
  BYTE1(v11) &= ~2u;
  v53 = a5 >> 3;
  v57 = v12 & 0x200;
  *(_DWORD *)(a2 + 44) = v11;
  *(_BYTE *)(a2 + 50) = a5 & 7;
  if ( a5 >> 3 > 0 )
  {
    v58 = 0;
    v52 = 0;
    while ( 1 )
    {
      v61 = nullptr;
      src = nullptr;
      v66.m128i_i64[1] = 1;
      LODWORD(v67) = -1;
      *(_QWORD *)v68 = 0;
      v69 = 0;
      v60 = 0;
      *(_OWORD *)v62 = 0;
      *(_OWORD *)n = 0;
      v65 = 0;
      if ( a7 && !(unsigned __int8)sub_54DE00((__int64)&v61, a7)
        || a8 && !(unsigned __int8)sub_54DE00((__int64)&src, a8)
        || (v48 = (const char *)&v65,
            !(unsigned __int8)sub_5225A0(
                                *(__int64 **)(a1 + 1480),
                                (unsigned __int64 *)&v65,
                                a4,
                                a6,
                                (__int64)a7,
                                (__int64)a8,
                                nullptr))
        || v57 && (v48 = (const char *)a6, !(unsigned __int8)sub_567A90((char *)&v65 + 8, a6)) )
      {
LABEL_49:
        clear_tinfo_t(&v65);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        if ( v61 )
        {
          v62[0] = 0;
          qfree(v61);
        }
        return 0;
      }
      if ( (**a6 & 0xCF ^ 0xC0u) <= 1 )
      {
        v48 = (const char *)&v68[1];
        *(_QWORD *)v70 = 0;
        if ( !(unsigned __int8)sub_51F860(a6, &v68[1], (__int64 **)v70) )
          goto LABEL_49;
        v28 = v68[1] & 0xFFF0;
        v45 = v68[1] & 0xF;
        v68[1] &= 0xFFFFFFF0;
        v69 = v45;
        if ( *(_QWORD *)v70 )
          goto LABEL_49;
      }
      else
      {
        v28 = v68[1];
      }
      v29 = *(_DWORD *)(a2 + 44);
      if ( (v29 & 0x400) != 0 )
      {
        if ( (v28 & 0x200) != 0 )
        {
          if ( (v28 & 0x20) != 0 )
          {
            LOBYTE(v29) = v29 | 0x80;
            *(_DWORD *)(a2 + 44) = v29;
          }
          goto LABEL_10;
        }
        if ( !(unsigned __int8)sub_693090(a6, &v60) )
          goto LABEL_49;
        v48 = (const char *)v60.m128i_i64[0];
        v52 += v60.m128i_i64[0];
        v60.m128i_i64[0] = v52;
        v28 = v68[1];
      }
      if ( (v28 & 0x20) != 0 )
        *(_DWORD *)(a2 + 44) |= 0x80u;
      if ( (v28 & 0x200) == 0 )
      {
        v30 = _mm_load_si128(&v60);
        v31 = v62[0];
        v71 = nullptr;
        v72 = 0;
        *(__m128i *)v70 = v30;
        if ( v62[0] )
        {
          v49 = (void *)qalloc_or_throw(v62[0], v48);
          v48 = (const char *)v61;
          v71 = v49;
          v72.m128i_i64[1] = v31;
          memcpy(v49, v61, v31);
          v72.m128i_i64[0] = v31;
        }
        v32 = n[0];
        ptr = nullptr;
        v74 = 0;
        if ( n[0] )
        {
          ptr = (void *)qalloc_or_throw(n[0], v48);
          v74.m128i_i64[1] = v32;
          memcpy(ptr, src, v32);
          v74.m128i_i64[0] = v32;
        }
        v75 = 0;
        copy_tinfo_t(&v75);
        v33 = _mm_loadu_si128((const __m128i *)((char *)&v65 + 8));
        v78 = v67;
        v34 = *(_QWORD *)(a2 + 8);
        v76 = v33;
        v35 = _mm_loadu_si128(&v66);
        v79 = *(_QWORD *)v68;
        v36 = *(_QWORD *)a2;
        v77 = v35;
        v80 = v69;
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v34 + 1) )
        {
          v50 = qvector_reserve(a2, v36, v34 + 1, 128);
          *(_QWORD *)a2 = v50;
          v34 = *(_QWORD *)(a2 + 8);
          v36 = v50;
        }
        v37 = v36 + (v34 << 7);
        *(__m128i *)v37 = _mm_load_si128((const __m128i *)v70);
        v38 = v71;
        v39 = _mm_loadu_si128(&v72);
        v71 = nullptr;
        *(_QWORD *)(v37 + 16) = v38;
        *(__m128i *)(v37 + 24) = v39;
        v40 = ptr;
        v41 = _mm_load_si128(&v74);
        v72 = 0;
        ptr = nullptr;
        v74 = 0;
        *(_QWORD *)(v37 + 40) = v40;
        *(_QWORD *)(v37 + 64) = 0;
        *(__m128i *)(v37 + 48) = v41;
        copy_tinfo_t(v37 + 64);
        v42 = v78;
        *(__m128i *)(v37 + 72) = _mm_loadu_si128(&v76);
        v43 = _mm_loadu_si128(&v77);
        *(_QWORD *)(v37 + 104) = v42;
        *(__m128i *)(v37 + 88) = v43;
        *(_QWORD *)(v37 + 112) = v79;
        *(_BYTE *)(v37 + 120) = v80;
        ++*(_QWORD *)(a2 + 8);
        clear_tinfo_t(&v75);
        if ( ptr )
        {
          v74.m128i_i64[0] = 0;
          qfree(ptr);
        }
        v27 = v71;
        if ( !v71 )
          goto LABEL_21;
        goto LABEL_20;
      }
LABEL_10:
      if ( !a3 )
        goto LABEL_21;
      v13 = _mm_load_si128(&v60);
      v14 = v62[0];
      v71 = nullptr;
      v72 = 0;
      *(__m128i *)v70 = v13;
      if ( v62[0] )
      {
        v47 = (void *)qalloc_or_throw(v62[0], v48);
        v48 = (const char *)v61;
        v71 = v47;
        v72.m128i_i64[1] = v14;
        memcpy(v47, v61, v14);
        v72.m128i_i64[0] = v14;
      }
      v15 = n[0];
      ptr = nullptr;
      v74 = 0;
      if ( n[0] )
      {
        ptr = (void *)qalloc_or_throw(n[0], v48);
        v74.m128i_i64[1] = v15;
        memcpy(ptr, src, v15);
        v74.m128i_i64[0] = v15;
      }
      v75 = 0;
      copy_tinfo_t(&v75);
      v16 = _mm_loadu_si128((const __m128i *)((char *)&v65 + 8));
      v17 = a3[1];
      v18 = *a3;
      v78 = v67;
      v76 = v16;
      v19 = _mm_loadu_si128(&v66);
      v79 = *(_QWORD *)v68;
      v77 = v19;
      v80 = v69;
      if ( a3[2] < (unsigned __int64)(v17 + 1) )
      {
        v46 = qvector_reserve(a3, v18, v17 + 1, 128);
        *a3 = v46;
        v17 = a3[1];
        v18 = v46;
      }
      v20 = v18 + (v17 << 7);
      *(__m128i *)v20 = _mm_load_si128((const __m128i *)v70);
      v21 = v71;
      v22 = _mm_loadu_si128(&v72);
      v71 = nullptr;
      *(_QWORD *)(v20 + 16) = v21;
      *(__m128i *)(v20 + 24) = v22;
      v23 = ptr;
      v24 = _mm_load_si128(&v74);
      v72 = 0;
      ptr = nullptr;
      v74 = 0;
      *(_QWORD *)(v20 + 40) = v23;
      *(_QWORD *)(v20 + 64) = 0;
      *(__m128i *)(v20 + 48) = v24;
      copy_tinfo_t(v20 + 64);
      v25 = v78;
      *(__m128i *)(v20 + 72) = _mm_loadu_si128(&v76);
      v26 = _mm_loadu_si128(&v77);
      *(_QWORD *)(v20 + 104) = v25;
      *(__m128i *)(v20 + 88) = v26;
      *(_QWORD *)(v20 + 112) = v79;
      *(_BYTE *)(v20 + 120) = v80;
      ++a3[1];
      clear_tinfo_t(&v75);
      if ( ptr )
      {
        v74.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v27 = v71;
      if ( !v71 )
        goto LABEL_21;
LABEL_20:
      v72.m128i_i64[0] = 0;
      qfree(v27);
LABEL_21:
      clear_tinfo_t(&v65);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( v61 )
      {
        v62[0] = 0;
        qfree(v61);
      }
      if ( v53 == ++v58 )
      {
        v11 = *(_DWORD *)(a2 + 44);
        goto LABEL_65;
      }
    }
  }
  v52 = 0;
LABEL_65:
  if ( (v11 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)sub_693090(a6, v70) )
      return 0;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)v70 + (v52 >> 3);
  }
  return 1;
}

