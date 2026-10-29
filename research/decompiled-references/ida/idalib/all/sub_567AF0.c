__int64 __fastcall sub_567AF0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        unsigned __int8 **a6,
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
  __m128i v20; // xmm0
  __int64 v21; // rbx
  void *v22; // rax
  __m128i v23; // xmm0
  void *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm0
  void *v28; // rdi
  __int16 v29; // ax
  int v30; // edx
  __m128i v31; // xmm0
  size_t v32; // r15
  size_t v33; // rbx
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rsi
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rbx
  void *v40; // rax
  __m128i v41; // xmm0
  void *v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm0
  char v47; // dl
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // edx
  unsigned __int64 v51; // [rsp+0h] [rbp-1A0h]
  int v52; // [rsp+Ch] [rbp-194h]
  int v56; // [rsp+38h] [rbp-168h]
  int v57; // [rsp+3Ch] [rbp-164h]
  int v58; // [rsp+3Ch] [rbp-164h]
  __m128i v59; // [rsp+40h] [rbp-160h] BYREF
  void *v60; // [rsp+50h] [rbp-150h] BYREF
  size_t v61[2]; // [rsp+58h] [rbp-148h]
  void *src; // [rsp+68h] [rbp-138h] BYREF
  size_t n[2]; // [rsp+70h] [rbp-130h]
  __int128 v64; // [rsp+80h] [rbp-120h] BYREF
  __m128i v65; // [rsp+98h] [rbp-108h] BYREF
  __m128i v66; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-E8h]
  int v68[2]; // [rsp+C0h] [rbp-E0h] BYREF
  char v69; // [rsp+C8h] [rbp-D8h]
  int v70[4]; // [rsp+D0h] [rbp-D0h] BYREF
  void *v71; // [rsp+E0h] [rbp-C0h]
  __m128i v72; // [rsp+E8h] [rbp-B8h] BYREF
  void *ptr; // [rsp+F8h] [rbp-A8h]
  __m128i v74; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+110h] [rbp-90h] BYREF
  __m128i v76; // [rsp+118h] [rbp-88h] BYREF
  __m128i v77; // [rsp+128h] [rbp-78h] BYREF
  __m128i v78; // [rsp+138h] [rbp-68h] BYREF
  __int64 v79; // [rsp+148h] [rbp-58h]
  __int64 v80; // [rsp+150h] [rbp-50h]
  char v81; // [rsp+158h] [rbp-48h]
  unsigned __int64 v82; // [rsp+168h] [rbp-38h]

  v82 = __readfsqword(0x28u);
  if ( a9 || (**a6 & 0xCF ^ 0xC0u) > 1 )
  {
    v11 = *(_DWORD *)(a2 + 44);
  }
  else
  {
    v58 = a5;
    if ( !(unsigned __int8)sub_5383A0(a6, (_DWORD *)(a2 + 44), nullptr) )
      return 0;
    a5 = v58;
    v11 = *(_DWORD *)(a2 + 44) & 0xFFFFFFF0;
    v50 = *(_DWORD *)(a2 + 44) & 0xF;
    *(_DWORD *)(a2 + 44) = v11;
    *(_BYTE *)(a2 + 49) = v50;
  }
  if ( *(_BYTE *)(a2 + 51) && (v11 & 0x400) != 0 )
    return 0;
  v12 = v11;
  BYTE1(v11) &= ~2u;
  v52 = a5 >> 3;
  v56 = v12 & 0x200;
  *(_DWORD *)(a2 + 44) = v11;
  *(_BYTE *)(a2 + 50) = a5 & 7;
  if ( a5 >> 3 > 0 )
  {
    v57 = 0;
    v51 = 0;
    while ( 1 )
    {
      v60 = nullptr;
      src = nullptr;
      v66.m128i_i64[1] = 1;
      LODWORD(v67) = -1;
      *(_QWORD *)v68 = 0;
      v69 = 0;
      v59 = 0;
      *(_OWORD *)v61 = 0;
      *(_OWORD *)n = 0;
      v64 = 0;
      if ( a7 && !(unsigned __int8)sub_567540((__int64)&v60, a7)
        || a8 && !(unsigned __int8)sub_567540((__int64)&src, a8)
        || !(unsigned __int8)sub_53B270(
                               *(__int64 **)(a1 + 1672),
                               (unsigned __int64 *)&v64,
                               a4,
                               a6,
                               (__int64)a7,
                               (__int64)a8,
                               nullptr)
        || v56 && !(unsigned __int8)sub_581390((char *)&v64 + 8, a6) )
      {
LABEL_49:
        clear_tinfo_t(&v64);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        if ( v60 )
        {
          v61[0] = 0;
          qfree(v60);
        }
        return 0;
      }
      if ( (**a6 & 0xCF ^ 0xC0u) <= 1 )
      {
        *(_QWORD *)v70 = 0;
        if ( !(unsigned __int8)sub_5383A0(a6, &v68[1], (__int64 **)v70) )
          goto LABEL_49;
        v29 = v68[1] & 0xFFF0;
        v47 = v68[1] & 0xF;
        v68[1] &= 0xFFFFFFF0;
        v69 = v47;
        if ( *(_QWORD *)v70 )
          goto LABEL_49;
      }
      else
      {
        v29 = v68[1];
      }
      v30 = *(_DWORD *)(a2 + 44);
      if ( (v30 & 0x400) != 0 )
      {
        if ( (v29 & 0x200) != 0 )
        {
          if ( (v29 & 0x20) != 0 )
          {
            LOBYTE(v30) = v30 | 0x80;
            *(_DWORD *)(a2 + 44) = v30;
          }
          goto LABEL_10;
        }
        if ( !(unsigned __int8)sub_6B3810(a6, &v59) )
          goto LABEL_49;
        v51 += v59.m128i_i64[0];
        v59.m128i_i64[0] = v51;
        v29 = v68[1];
      }
      if ( (v29 & 0x20) != 0 )
        *(_DWORD *)(a2 + 44) |= 0x80u;
      if ( (v29 & 0x200) == 0 )
      {
        v31 = _mm_load_si128(&v59);
        v32 = v61[0];
        v71 = nullptr;
        v72 = 0;
        *(__m128i *)v70 = v31;
        if ( v61[0] )
        {
          v71 = (void *)qalloc_or_throw(v61[0]);
          v72.m128i_i64[1] = v32;
          memcpy(v71, v60, v32);
          v72.m128i_i64[0] = v32;
        }
        v33 = n[0];
        ptr = nullptr;
        v74 = 0;
        if ( n[0] )
        {
          ptr = (void *)qalloc_or_throw(n[0]);
          v74.m128i_i64[1] = v33;
          memcpy(ptr, src, v33);
          v74.m128i_i64[0] = v33;
        }
        v75 = 0;
        copy_tinfo_t(&v75);
        v34 = _mm_loadu_si128((const __m128i *)((char *)&v64 + 8));
        v79 = v67;
        v76 = v34;
        v35 = *(_QWORD *)(a2 + 8);
        v36 = *(_QWORD *)a2;
        v37 = _mm_loadu_si128(&v65);
        v80 = *(_QWORD *)v68;
        v77 = v37;
        v38 = _mm_loadu_si128(&v66);
        v81 = v69;
        v78 = v38;
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v35 + 1) )
        {
          v49 = qvector_reserve(a2, v36, v35 + 1, 144);
          *(_QWORD *)a2 = v49;
          v35 = *(_QWORD *)(a2 + 8);
          v36 = v49;
        }
        v39 = v36 + 144 * v35;
        *(__m128i *)v39 = _mm_load_si128((const __m128i *)v70);
        v40 = v71;
        v41 = _mm_loadu_si128(&v72);
        v71 = nullptr;
        *(_QWORD *)(v39 + 16) = v40;
        *(__m128i *)(v39 + 24) = v41;
        v42 = ptr;
        v43 = _mm_load_si128(&v74);
        v72 = 0;
        ptr = nullptr;
        v74 = 0;
        *(_QWORD *)(v39 + 40) = v42;
        *(_QWORD *)(v39 + 64) = 0;
        *(__m128i *)(v39 + 48) = v43;
        copy_tinfo_t(v39 + 64);
        v44 = v79;
        *(__m128i *)(v39 + 72) = _mm_loadu_si128(&v76);
        v45 = _mm_loadu_si128(&v77);
        *(_QWORD *)(v39 + 120) = v44;
        *(__m128i *)(v39 + 88) = v45;
        *(__m128i *)(v39 + 104) = _mm_loadu_si128(&v78);
        *(_QWORD *)(v39 + 128) = v80;
        *(_BYTE *)(v39 + 136) = v81;
        ++*(_QWORD *)(a2 + 8);
        clear_tinfo_t(&v75);
        if ( ptr )
        {
          v74.m128i_i64[0] = 0;
          qfree(ptr);
        }
        v28 = v71;
        if ( !v71 )
          goto LABEL_21;
        goto LABEL_20;
      }
LABEL_10:
      if ( !a3 )
        goto LABEL_21;
      v13 = _mm_load_si128(&v59);
      v14 = v61[0];
      v71 = nullptr;
      v72 = 0;
      *(__m128i *)v70 = v13;
      if ( v61[0] )
      {
        v71 = (void *)qalloc_or_throw(v61[0]);
        v72.m128i_i64[1] = v14;
        memcpy(v71, v60, v14);
        v72.m128i_i64[0] = v14;
      }
      v15 = n[0];
      ptr = nullptr;
      v74 = 0;
      if ( n[0] )
      {
        ptr = (void *)qalloc_or_throw(n[0]);
        v74.m128i_i64[1] = v15;
        memcpy(ptr, src, v15);
        v74.m128i_i64[0] = v15;
      }
      v75 = 0;
      copy_tinfo_t(&v75);
      v16 = _mm_loadu_si128((const __m128i *)((char *)&v64 + 8));
      v17 = a3[1];
      v18 = *a3;
      v79 = v67;
      v76 = v16;
      v19 = _mm_loadu_si128(&v65);
      v80 = *(_QWORD *)v68;
      v77 = v19;
      v20 = _mm_loadu_si128(&v66);
      v81 = v69;
      v78 = v20;
      if ( a3[2] < (unsigned __int64)(v17 + 1) )
      {
        v48 = qvector_reserve(a3, v18, v17 + 1, 144);
        *a3 = v48;
        v17 = a3[1];
        v18 = v48;
      }
      v21 = v18 + 144 * v17;
      *(__m128i *)v21 = _mm_load_si128((const __m128i *)v70);
      v22 = v71;
      v23 = _mm_loadu_si128(&v72);
      v71 = nullptr;
      *(_QWORD *)(v21 + 16) = v22;
      *(__m128i *)(v21 + 24) = v23;
      v24 = ptr;
      v25 = _mm_load_si128(&v74);
      v72 = 0;
      ptr = nullptr;
      v74 = 0;
      *(_QWORD *)(v21 + 40) = v24;
      *(_QWORD *)(v21 + 64) = 0;
      *(__m128i *)(v21 + 48) = v25;
      copy_tinfo_t(v21 + 64);
      v26 = v79;
      *(__m128i *)(v21 + 72) = _mm_loadu_si128(&v76);
      v27 = _mm_loadu_si128(&v77);
      *(_QWORD *)(v21 + 120) = v26;
      *(__m128i *)(v21 + 88) = v27;
      *(__m128i *)(v21 + 104) = _mm_loadu_si128(&v78);
      *(_QWORD *)(v21 + 128) = v80;
      *(_BYTE *)(v21 + 136) = v81;
      ++a3[1];
      clear_tinfo_t(&v75);
      if ( ptr )
      {
        v74.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v28 = v71;
      if ( !v71 )
        goto LABEL_21;
LABEL_20:
      v72.m128i_i64[0] = 0;
      qfree(v28);
LABEL_21:
      clear_tinfo_t(&v64);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( v60 )
      {
        v61[0] = 0;
        qfree(v60);
      }
      if ( v52 == ++v57 )
      {
        v11 = *(_DWORD *)(a2 + 44);
        goto LABEL_65;
      }
    }
  }
  v51 = 0;
LABEL_65:
  if ( (v11 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)sub_6B3810(a6, v70) )
      return 0;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)v70 + (v51 >> 3);
  }
  return 1;
}
