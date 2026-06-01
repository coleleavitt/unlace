unsigned __int64 __fastcall sub_544310(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r13
  const char *v7; // rsi
  _BOOL8 v8; // r8
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // r14
  size_t v12; // r12
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbp
  void *v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  void *v28; // rax
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  unsigned __int64 v32; // r14
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rbp
  void *v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int64 v40; // rax
  __m128i v41; // xmm0
  void *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // r14
  unsigned __int64 v46; // rbp
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rax
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  int v52; // eax
  __m128i v53; // xmm0
  int v54; // eax
  __m128i v55; // xmm0
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
  __m128i v72; // xmm0
  void *v73; // rdi
  void *v74; // rdi
  __int64 v75; // [rsp+10h] [rbp-188h]
  __int64 v76; // [rsp+10h] [rbp-188h]
  __int64 v77; // [rsp+18h] [rbp-180h]
  __m128i v78; // [rsp+20h] [rbp-178h] BYREF
  void *v79; // [rsp+30h] [rbp-168h]
  __m128i v80; // [rsp+38h] [rbp-160h] BYREF
  void *v81; // [rsp+48h] [rbp-150h]
  __m128i v82; // [rsp+50h] [rbp-148h] BYREF
  __int64 v83; // [rsp+60h] [rbp-138h] BYREF
  __m128i v84; // [rsp+68h] [rbp-130h] BYREF
  __m128i v85; // [rsp+78h] [rbp-120h] BYREF
  __m128i v86; // [rsp+88h] [rbp-110h] BYREF
  __int64 v87; // [rsp+98h] [rbp-100h]
  __int64 v88; // [rsp+A0h] [rbp-F8h]
  char v89; // [rsp+A8h] [rbp-F0h]
  __int64 v90; // [rsp+B0h] [rbp-E8h]
  __m128i v91; // [rsp+C0h] [rbp-D8h] BYREF
  void *v92; // [rsp+D0h] [rbp-C8h]
  __m128i v93; // [rsp+D8h] [rbp-C0h] BYREF
  void *v94; // [rsp+E8h] [rbp-B0h]
  __m128i v95; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+100h] [rbp-98h] BYREF
  __m128i v97; // [rsp+108h] [rbp-90h] BYREF
  __m128i v98; // [rsp+118h] [rbp-80h] BYREF
  __m128i v99; // [rsp+128h] [rbp-70h] BYREF
  __int64 v100; // [rsp+138h] [rbp-60h]
  __int64 v101; // [rsp+140h] [rbp-58h]
  char v102; // [rsp+148h] [rbp-50h]
  __int64 v103; // [rsp+150h] [rbp-48h]
  unsigned __int64 v104; // [rsp+158h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  if ( a3 < a2[1] )
  {
    v4 = *a2 + 144 * a3;
    if ( (*(_BYTE *)(v4 + 133) & 4) == 0 )
    {
      v7 = haystack;
      v8 = a1[7] != -1;
      v9 = a1[5] == 0;
      v10 = *(_QWORD *)(qword_2CCB598 + 1672);
      if ( !v9 )
        v7 = (const char *)a1[4];
      v79 = nullptr;
      v11 = sub_6BCC40(v10, v7, a2, a3, v8);
      v78 = _mm_loadu_si128((const __m128i *)v4);
      v80 = 0;
      v12 = *(_QWORD *)(v4 + 24);
      if ( v12 )
      {
        v42 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 24));
        v80.m128i_i64[1] = v12;
        v79 = v42;
        memcpy(v42, *(const void **)(v4 + 16), v12);
        v80.m128i_i64[0] = v12;
      }
      v81 = nullptr;
      v82 = 0;
      v13 = *(_QWORD *)(v4 + 48);
      if ( v13 )
      {
        v81 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 48));
        v82.m128i_i64[1] = v13;
        memcpy(v81, *(const void **)(v4 + 40), v13);
        v82.m128i_i64[0] = v13;
      }
      v83 = 0;
      copy_tinfo_t(&v83);
      v14 = *(_QWORD *)(v4 + 120);
      v15 = *(_QWORD *)(v4 + 128);
      v16 = a1[9];
      v84 = _mm_loadu_si128((const __m128i *)(v4 + 72));
      v17 = _mm_loadu_si128((const __m128i *)(v4 + 88));
      v87 = v14;
      LOBYTE(v14) = *(_BYTE *)(v4 + 136);
      v85 = v17;
      v18 = _mm_loadu_si128((const __m128i *)(v4 + 104));
      v89 = v14;
      v90 = v11;
      v19 = a1[11];
      v88 = v15;
      v86 = v18;
      if ( (unsigned __int64)&v78 < v16 || (unsigned __int64)&v78 >= v16 + 152 * v19 )
      {
        v20 = a1[10];
        if ( v19 < v20 + 1 )
        {
          v16 = qvector_reserve(a1 + 9, 0, v20 + 1, 152);
          v43 = a1[11];
          v44 = a1[9];
          a1[11] = v19;
          v76 = v43;
          v45 = a1[10] - 1LL;
          if ( v45 >= 0 )
          {
            v46 = v16;
            do
            {
              *(__m128i *)v46 = _mm_loadu_si128((const __m128i *)v44);
              v47 = *(_QWORD *)(v44 + 16);
              v48 = _mm_loadu_si128((const __m128i *)(v44 + 24));
              *(_QWORD *)(v44 + 16) = 0;
              *(_QWORD *)(v46 + 16) = v47;
              *(__m128i *)(v46 + 24) = v48;
              v49 = *(_QWORD *)(v44 + 40);
              v50 = _mm_loadu_si128((const __m128i *)(v44 + 48));
              *(_OWORD *)(v44 + 24) = 0;
              *(_QWORD *)(v44 + 40) = 0;
              *(_OWORD *)(v44 + 48) = 0;
              *(_QWORD *)(v46 + 40) = v49;
              *(_QWORD *)(v46 + 64) = 0;
              *(__m128i *)(v46 + 48) = v50;
              copy_tinfo_t(v46 + 64);
              v51 = _mm_loadu_si128((const __m128i *)(v44 + 72));
              *(_QWORD *)(v46 + 120) = *(_QWORD *)(v44 + 120);
              v52 = *(_DWORD *)(v44 + 128);
              *(__m128i *)(v46 + 72) = v51;
              v53 = _mm_loadu_si128((const __m128i *)(v44 + 88));
              *(_DWORD *)(v46 + 128) = v52;
              v54 = *(_DWORD *)(v44 + 132);
              *(__m128i *)(v46 + 88) = v53;
              v55 = _mm_loadu_si128((const __m128i *)(v44 + 104));
              *(_DWORD *)(v46 + 132) = v54;
              LOBYTE(v54) = *(_BYTE *)(v44 + 136);
              *(__m128i *)(v46 + 104) = v55;
              *(_BYTE *)(v46 + 136) = v54;
              *(_QWORD *)(v46 + 144) = *(_QWORD *)(v44 + 144);
              clear_tinfo_t(v44 + 64);
              v56 = *(void **)(v44 + 40);
              if ( v56 )
              {
                *(_QWORD *)(v44 + 48) = 0;
                qfree(v56);
              }
              v57 = *(void **)(v44 + 16);
              if ( v57 )
              {
                *(_QWORD *)(v44 + 24) = 0;
                qfree(v57);
              }
              v44 += 152;
              v46 += 152LL;
              v58 = v45-- == 0;
            }
            while ( !v58 );
            v44 = a1[9];
          }
          qfree((void *)v44);
          a1[9] = v16;
          a1[11] = v76;
          v20 = a1[10];
        }
        v21 = v16 + 152 * v20;
        *(__m128i *)v21 = _mm_load_si128(&v78);
        v22 = v79;
        v23 = _mm_loadu_si128(&v80);
        *(_QWORD *)(v21 + 64) = 0;
        *(__m128i *)(v21 + 24) = v23;
        *(_QWORD *)(v21 + 16) = v22;
        v24 = _mm_load_si128(&v82);
        v80 = 0;
        *(_QWORD *)(v21 + 40) = v81;
        *(__m128i *)(v21 + 48) = v24;
        v79 = nullptr;
        v81 = nullptr;
        v82 = 0;
        copy_tinfo_t(v21 + 64);
        v25 = v87;
        *(__m128i *)(v21 + 72) = _mm_loadu_si128(&v84);
        v26 = _mm_loadu_si128(&v85);
        *(_QWORD *)(v21 + 120) = v25;
        *(__m128i *)(v21 + 88) = v26;
        *(__m128i *)(v21 + 104) = _mm_loadu_si128(&v86);
        *(_QWORD *)(v21 + 128) = v88;
        *(_BYTE *)(v21 + 136) = v89;
        *(_QWORD *)(v21 + 144) = v90;
      }
      else
      {
        v27 = _mm_load_si128(&v78);
        v28 = v79;
        v79 = nullptr;
        v29 = _mm_load_si128(&v82);
        v96 = 0;
        v91 = v27;
        v30 = _mm_loadu_si128(&v80);
        v92 = v28;
        v93 = v30;
        v94 = v81;
        v81 = nullptr;
        v80 = 0;
        v95 = v29;
        v82 = 0;
        copy_tinfo_t(&v96);
        v31 = _mm_loadu_si128(&v84);
        v32 = a1[11];
        v100 = v87;
        v97 = v31;
        v33 = _mm_loadu_si128(&v85);
        v101 = v88;
        v98 = v33;
        v34 = _mm_loadu_si128(&v86);
        v102 = v89;
        v99 = v34;
        v103 = v90;
        v35 = a1[10];
        if ( v32 < v35 + 1 )
        {
          v59 = qvector_reserve(a1 + 9, 0, v35 + 1, 152);
          v60 = a1[11];
          v61 = a1[9];
          a1[11] = v32;
          v75 = v59;
          v77 = v60;
          v62 = a1[10] - 1LL;
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
              *(_QWORD *)(v63 + 120) = *(_QWORD *)(v61 + 120);
              v69 = *(_DWORD *)(v61 + 128);
              *(__m128i *)(v63 + 72) = v68;
              v70 = _mm_loadu_si128((const __m128i *)(v61 + 88));
              *(_DWORD *)(v63 + 128) = v69;
              v71 = *(_DWORD *)(v61 + 132);
              *(__m128i *)(v63 + 88) = v70;
              v72 = _mm_loadu_si128((const __m128i *)(v61 + 104));
              *(_DWORD *)(v63 + 132) = v71;
              LOBYTE(v71) = *(_BYTE *)(v61 + 136);
              *(__m128i *)(v63 + 104) = v72;
              *(_BYTE *)(v63 + 136) = v71;
              *(_QWORD *)(v63 + 144) = *(_QWORD *)(v61 + 144);
              clear_tinfo_t(v61 + 64);
              v73 = *(void **)(v61 + 40);
              if ( v73 )
              {
                *(_QWORD *)(v61 + 48) = 0;
                qfree(v73);
              }
              v74 = *(void **)(v61 + 16);
              if ( v74 )
              {
                *(_QWORD *)(v61 + 24) = 0;
                qfree(v74);
              }
              v61 += 152;
              v63 += 152;
              v58 = v62-- == 0;
            }
            while ( !v58 );
            v61 = a1[9];
          }
          qfree((void *)v61);
          a1[9] = v75;
          a1[11] = v77;
          v35 = a1[10];
        }
        else
        {
          v75 = a1[9];
        }
        v36 = v75 + 152 * v35;
        *(__m128i *)v36 = _mm_load_si128(&v91);
        v37 = v92;
        v38 = _mm_loadu_si128(&v93);
        *(_QWORD *)(v36 + 64) = 0;
        *(__m128i *)(v36 + 24) = v38;
        *(_QWORD *)(v36 + 16) = v37;
        v39 = _mm_load_si128(&v95);
        v92 = nullptr;
        *(_QWORD *)(v36 + 40) = v94;
        *(__m128i *)(v36 + 48) = v39;
        v94 = nullptr;
        v93 = 0;
        v95 = 0;
        copy_tinfo_t(v36 + 64);
        v40 = v100;
        *(__m128i *)(v36 + 72) = _mm_loadu_si128(&v97);
        v41 = _mm_loadu_si128(&v98);
        *(_QWORD *)(v36 + 120) = v40;
        *(__m128i *)(v36 + 88) = v41;
        *(__m128i *)(v36 + 104) = _mm_loadu_si128(&v99);
        *(_QWORD *)(v36 + 128) = v101;
        *(_BYTE *)(v36 + 136) = v102;
        *(_QWORD *)(v36 + 144) = v103;
        clear_tinfo_t(&v96);
        if ( v94 )
        {
          v95.m128i_i64[0] = 0;
          qfree(v94);
        }
        if ( v92 )
        {
          v93.m128i_i64[0] = 0;
          qfree(v92);
        }
      }
      ++a1[10];
      clear_tinfo_t(&v83);
      if ( v81 )
      {
        v82.m128i_i64[0] = 0;
        qfree(v81);
      }
      if ( v79 )
      {
        v80.m128i_i64[0] = 0;
        qfree(v79);
      }
    }
  }
  return v104 - __readfsqword(0x28u);
}
