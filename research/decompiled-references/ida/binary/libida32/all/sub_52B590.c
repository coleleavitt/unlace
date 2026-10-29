unsigned __int64 __fastcall sub_52B590(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  _BOOL8 v6; // r8
  bool v7; // zf
  __int64 v8; // rdi
  const char *v9; // rax
  const char *v12; // rsi
  int v13; // r14d
  size_t v14; // r12
  size_t v15; // r12
  __m128i v16; // xmm0
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  char v19; // al
  __m128i v20; // xmm0
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r15
  void *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  void *v30; // rax
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  unsigned __int64 v34; // r14
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rbp
  void *v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // rax
  __m128i v42; // xmm0
  void *v43; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // r14
  unsigned __int64 v47; // rbp
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  int v53; // eax
  __m128i v54; // xmm0
  int v55; // eax
  void *v56; // rdi
  void *v57; // rdi
  bool v58; // cf
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r13
  __int64 v62; // r14
  __int64 v63; // rbp
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  int v69; // eax
  __m128i v70; // xmm0
  int v71; // eax
  void *v72; // rdi
  void *v73; // rdi
  __int64 v74; // [rsp+10h] [rbp-158h]
  __int64 v75; // [rsp+10h] [rbp-158h]
  __int64 v76; // [rsp+18h] [rbp-150h]
  __m128i v77; // [rsp+20h] [rbp-148h] BYREF
  void *v78; // [rsp+30h] [rbp-138h]
  __m128i v79; // [rsp+38h] [rbp-130h] BYREF
  void *v80; // [rsp+48h] [rbp-120h]
  __m128i v81; // [rsp+50h] [rbp-118h] BYREF
  __int64 v82; // [rsp+60h] [rbp-108h] BYREF
  __m128i v83; // [rsp+68h] [rbp-100h] BYREF
  __m128i v84; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v85; // [rsp+88h] [rbp-E0h]
  __int64 v86; // [rsp+90h] [rbp-D8h]
  char v87; // [rsp+98h] [rbp-D0h]
  int v88; // [rsp+9Ch] [rbp-CCh]
  __m128i v89; // [rsp+A0h] [rbp-C8h] BYREF
  void *v90; // [rsp+B0h] [rbp-B8h]
  __m128i v91; // [rsp+B8h] [rbp-B0h] BYREF
  void *v92; // [rsp+C8h] [rbp-A0h]
  __m128i v93; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v95; // [rsp+E8h] [rbp-80h] BYREF
  __m128i v96; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v97; // [rsp+108h] [rbp-60h]
  __int64 v98; // [rsp+110h] [rbp-58h]
  char v99; // [rsp+118h] [rbp-50h]
  int v100; // [rsp+11Ch] [rbp-4Ch]
  unsigned __int64 v101; // [rsp+128h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  if ( a3 < a2[1] )
  {
    v3 = *a2 + (a3 << 7);
    if ( (*(_BYTE *)(v3 + 117) & 4) == 0 )
    {
      v6 = *(_DWORD *)(a1 + 56) != -1;
      v7 = *(_QWORD *)(a1 + 40) == 0;
      v8 = *(_QWORD *)(qword_2CA1698 + 1480);
      v9 = haystack;
      if ( !v7 )
        v9 = *(const char **)(a1 + 32);
      v12 = v9;
      v78 = nullptr;
      v13 = sub_69C1F0(v8, v9, a2, a3, v6);
      v77 = _mm_loadu_si128((const __m128i *)v3);
      v79 = 0;
      v14 = *(_QWORD *)(v3 + 24);
      if ( v14 )
      {
        v43 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 24), v12);
        v79.m128i_i64[1] = v14;
        v78 = v43;
        v12 = *(const char **)(v3 + 16);
        memcpy(v43, v12, v14);
        v79.m128i_i64[0] = v14;
      }
      v80 = nullptr;
      v81 = 0;
      v15 = *(_QWORD *)(v3 + 48);
      if ( v15 )
      {
        v80 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 48), v12);
        v81.m128i_i64[1] = v15;
        memcpy(v80, *(const void **)(v3 + 40), v15);
        v81.m128i_i64[0] = v15;
      }
      v82 = 0;
      copy_tinfo_t(&v82);
      v16 = _mm_loadu_si128((const __m128i *)(v3 + 72));
      v17 = *(_QWORD *)(v3 + 112);
      v18 = *(_QWORD *)(a1 + 72);
      v85 = *(_QWORD *)(v3 + 104);
      v19 = *(_BYTE *)(v3 + 120);
      v83 = v16;
      v20 = _mm_loadu_si128((const __m128i *)(v3 + 88));
      v87 = v19;
      v88 = v13;
      v21 = *(_QWORD *)(a1 + 88);
      v86 = v17;
      v84 = v20;
      if ( (unsigned __int64)&v77 < v18 || (unsigned __int64)&v77 >= v18 + (v21 << 7) )
      {
        v22 = *(_QWORD *)(a1 + 80);
        if ( v21 < v22 + 1 )
        {
          v18 = qvector_reserve(a1 + 72, 0, v22 + 1, 128);
          v44 = *(_QWORD *)(a1 + 88);
          v45 = *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 88) = v21;
          v75 = v44;
          v46 = *(_QWORD *)(a1 + 80) - 1LL;
          if ( v46 >= 0 )
          {
            v47 = v18;
            do
            {
              *(__m128i *)v47 = _mm_loadu_si128((const __m128i *)v45);
              v48 = *(_QWORD *)(v45 + 16);
              v49 = _mm_loadu_si128((const __m128i *)(v45 + 24));
              *(_QWORD *)(v45 + 16) = 0;
              *(_QWORD *)(v47 + 16) = v48;
              *(__m128i *)(v47 + 24) = v49;
              v50 = *(_QWORD *)(v45 + 40);
              v51 = _mm_loadu_si128((const __m128i *)(v45 + 48));
              *(_OWORD *)(v45 + 24) = 0;
              *(_QWORD *)(v45 + 40) = 0;
              *(_OWORD *)(v45 + 48) = 0;
              *(_QWORD *)(v47 + 40) = v50;
              *(_QWORD *)(v47 + 64) = 0;
              *(__m128i *)(v47 + 48) = v51;
              copy_tinfo_t(v47 + 64);
              v52 = _mm_loadu_si128((const __m128i *)(v45 + 72));
              *(_QWORD *)(v47 + 104) = *(_QWORD *)(v45 + 104);
              v53 = *(_DWORD *)(v45 + 112);
              *(__m128i *)(v47 + 72) = v52;
              v54 = _mm_loadu_si128((const __m128i *)(v45 + 88));
              *(_DWORD *)(v47 + 112) = v53;
              v55 = *(_DWORD *)(v45 + 116);
              *(__m128i *)(v47 + 88) = v54;
              *(_DWORD *)(v47 + 116) = v55;
              *(_BYTE *)(v47 + 120) = *(_BYTE *)(v45 + 120);
              *(_DWORD *)(v47 + 124) = *(_DWORD *)(v45 + 124);
              clear_tinfo_t(v45 + 64);
              v56 = *(void **)(v45 + 40);
              if ( v56 )
              {
                *(_QWORD *)(v45 + 48) = 0;
                qfree(v56);
              }
              v57 = *(void **)(v45 + 16);
              if ( v57 )
              {
                *(_QWORD *)(v45 + 24) = 0;
                qfree(v57);
              }
              v45 += 128;
              v47 += 128LL;
              v58 = v46-- == 0;
            }
            while ( !v58 );
            v45 = *(_QWORD *)(a1 + 72);
          }
          qfree((void *)v45);
          *(_QWORD *)(a1 + 72) = v18;
          *(_QWORD *)(a1 + 88) = v75;
          v22 = *(_QWORD *)(a1 + 80);
        }
        v23 = (v22 << 7) + v18;
        *(__m128i *)v23 = _mm_load_si128(&v77);
        v24 = v78;
        v25 = _mm_loadu_si128(&v79);
        *(_QWORD *)(v23 + 64) = 0;
        *(__m128i *)(v23 + 24) = v25;
        *(_QWORD *)(v23 + 16) = v24;
        v26 = _mm_load_si128(&v81);
        v79 = 0;
        *(_QWORD *)(v23 + 40) = v80;
        *(__m128i *)(v23 + 48) = v26;
        v78 = nullptr;
        v80 = nullptr;
        v81 = 0;
        copy_tinfo_t(v23 + 64);
        v27 = v85;
        *(__m128i *)(v23 + 72) = _mm_loadu_si128(&v83);
        v28 = _mm_loadu_si128(&v84);
        *(_QWORD *)(v23 + 104) = v27;
        *(__m128i *)(v23 + 88) = v28;
        *(_QWORD *)(v23 + 112) = v86;
        *(_BYTE *)(v23 + 120) = v87;
        *(_DWORD *)(v23 + 124) = v88;
      }
      else
      {
        v29 = _mm_load_si128(&v77);
        v30 = v78;
        v78 = nullptr;
        v31 = _mm_load_si128(&v81);
        v94 = 0;
        v89 = v29;
        v32 = _mm_loadu_si128(&v79);
        v90 = v30;
        v91 = v32;
        v92 = v80;
        v80 = nullptr;
        v79 = 0;
        v93 = v31;
        v81 = 0;
        copy_tinfo_t(&v94);
        v33 = _mm_loadu_si128(&v83);
        v34 = *(_QWORD *)(a1 + 88);
        v97 = v85;
        v95 = v33;
        v35 = _mm_loadu_si128(&v84);
        v98 = v86;
        v96 = v35;
        v99 = v87;
        v100 = v88;
        v36 = *(_QWORD *)(a1 + 80);
        if ( v34 < v36 + 1 )
        {
          v59 = qvector_reserve(a1 + 72, 0, v36 + 1, 128);
          v60 = *(_QWORD *)(a1 + 88);
          v61 = *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 88) = v34;
          v74 = v59;
          v76 = v60;
          v62 = *(_QWORD *)(a1 + 80) - 1LL;
          if ( v62 >= 0 )
          {
            v63 = v59;
            do
            {
              *(__m128i *)v63 = _mm_loadu_si128((const __m128i *)v61);
              v64 = *(_QWORD *)(v61 + 16);
              v65 = _mm_loadu_si128((const __m128i *)(v61 + 24));
              *(_QWORD *)(v61 + 16) = 0;
              *(_QWORD *)(v63 + 16) = v64;
              *(__m128i *)(v63 + 24) = v65;
              v66 = *(_QWORD *)(v61 + 40);
              v67 = _mm_loadu_si128((const __m128i *)(v61 + 48));
              *(_OWORD *)(v61 + 24) = 0;
              *(_QWORD *)(v61 + 40) = 0;
              *(_OWORD *)(v61 + 48) = 0;
              *(_QWORD *)(v63 + 40) = v66;
              *(_QWORD *)(v63 + 64) = 0;
              *(__m128i *)(v63 + 48) = v67;
              copy_tinfo_t(v63 + 64);
              v68 = _mm_loadu_si128((const __m128i *)(v61 + 72));
              *(_QWORD *)(v63 + 104) = *(_QWORD *)(v61 + 104);
              v69 = *(_DWORD *)(v61 + 112);
              *(__m128i *)(v63 + 72) = v68;
              v70 = _mm_loadu_si128((const __m128i *)(v61 + 88));
              *(_DWORD *)(v63 + 112) = v69;
              v71 = *(_DWORD *)(v61 + 116);
              *(__m128i *)(v63 + 88) = v70;
              *(_DWORD *)(v63 + 116) = v71;
              *(_BYTE *)(v63 + 120) = *(_BYTE *)(v61 + 120);
              *(_DWORD *)(v63 + 124) = *(_DWORD *)(v61 + 124);
              clear_tinfo_t(v61 + 64);
              v72 = *(void **)(v61 + 40);
              if ( v72 )
              {
                *(_QWORD *)(v61 + 48) = 0;
                qfree(v72);
              }
              v73 = *(void **)(v61 + 16);
              if ( v73 )
              {
                *(_QWORD *)(v61 + 24) = 0;
                qfree(v73);
              }
              v61 += 128;
              v63 += 128;
              v58 = v62-- == 0;
            }
            while ( !v58 );
            v61 = *(_QWORD *)(a1 + 72);
          }
          qfree((void *)v61);
          *(_QWORD *)(a1 + 72) = v74;
          *(_QWORD *)(a1 + 88) = v76;
          v36 = *(_QWORD *)(a1 + 80);
        }
        else
        {
          v74 = *(_QWORD *)(a1 + 72);
        }
        v37 = (v36 << 7) + v74;
        *(__m128i *)v37 = _mm_load_si128(&v89);
        v38 = v90;
        v39 = _mm_loadu_si128(&v91);
        *(_QWORD *)(v37 + 64) = 0;
        *(__m128i *)(v37 + 24) = v39;
        *(_QWORD *)(v37 + 16) = v38;
        v40 = _mm_load_si128(&v93);
        v90 = nullptr;
        *(_QWORD *)(v37 + 40) = v92;
        *(__m128i *)(v37 + 48) = v40;
        v92 = nullptr;
        v91 = 0;
        v93 = 0;
        copy_tinfo_t(v37 + 64);
        v41 = v97;
        *(__m128i *)(v37 + 72) = _mm_loadu_si128(&v95);
        v42 = _mm_loadu_si128(&v96);
        *(_QWORD *)(v37 + 104) = v41;
        *(__m128i *)(v37 + 88) = v42;
        *(_QWORD *)(v37 + 112) = v98;
        *(_BYTE *)(v37 + 120) = v99;
        *(_DWORD *)(v37 + 124) = v100;
        clear_tinfo_t(&v94);
        if ( v92 )
        {
          v93.m128i_i64[0] = 0;
          qfree(v92);
        }
        if ( v90 )
        {
          v91.m128i_i64[0] = 0;
          qfree(v90);
        }
      }
      ++*(_QWORD *)(a1 + 80);
      clear_tinfo_t(&v82);
      if ( v80 )
      {
        v81.m128i_i64[0] = 0;
        qfree(v80);
      }
      if ( v78 )
      {
        v79.m128i_i64[0] = 0;
        qfree(v78);
      }
    }
  }
  return v101 - __readfsqword(0x28u);
}

