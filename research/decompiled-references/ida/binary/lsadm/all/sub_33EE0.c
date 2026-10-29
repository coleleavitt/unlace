__int64 __fastcall sub_33EE0(__int64 a1, void **a2, __int64 a3, int a4)
{
  char *v4; // rax
  unsigned __int64 v5; // rbx
  char *v7; // r14
  void **v9; // r12
  int v11; // eax
  char *v12; // r15
  int v13; // eax
  char *v14; // r14
  int v15; // eax
  char *v16; // r15
  __int64 v17; // rax
  char *v18; // r9
  char *v19; // rax
  __int64 v20; // r15
  size_t v21; // r14
  size_t v22; // r10
  void *v23; // rsi
  unsigned __int64 v24; // rdx
  void *v25; // r14
  unsigned int v26; // eax
  void *v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r14
  __m128i *v30; // rax
  __m128i *v31; // rsi
  unsigned __int64 v32; // r11
  __m128i *v33; // rdi
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __int64 v40; // r12
  __int64 v41; // r14
  void *v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // r15d
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  void **v47; // rsi
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r12
  _BYTE *v53; // r8
  _BYTE *v54; // rax
  __int64 v55; // r15
  __int64 v56; // r10
  size_t v57; // r13
  size_t v58; // r11
  void *v59; // rsi
  unsigned __int64 v60; // rdx
  void *v61; // r15
  __int64 v62; // rax
  void *v63; // r14
  __int64 v64; // rax
  void *v65; // r15
  __int64 v66; // rax
  void *v67; // r14
  _BYTE *v68; // rax
  void *v69; // rax
  void *v70; // rax
  unsigned __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // r13
  __int64 v75; // rax
  void *v76; // rdi
  unsigned __int64 v77; // r14
  __int128 v78; // xmm0
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // rbx
  void **v81; // r13
  size_t v82; // r15
  void *v83; // rax
  void **v84; // rax
  __int64 v85; // r13
  __int64 v86; // rax
  size_t v87; // rbx
  __int64 v88; // r13
  __int64 v89; // r8
  __int64 v90; // r15
  __int64 v91; // rax
  void *v92; // rax
  void *v93; // rax
  __int64 v94; // [rsp+0h] [rbp-108h]
  void **v95; // [rsp+8h] [rbp-100h]
  unsigned __int64 v96; // [rsp+8h] [rbp-100h]
  unsigned __int64 v97; // [rsp+8h] [rbp-100h]
  unsigned __int64 v98; // [rsp+8h] [rbp-100h]
  void **v99; // [rsp+8h] [rbp-100h]
  char *v100; // [rsp+10h] [rbp-F8h]
  size_t v101; // [rsp+10h] [rbp-F8h]
  size_t v102; // [rsp+18h] [rbp-F0h]
  _BYTE *v103; // [rsp+18h] [rbp-F0h]
  __int64 v104; // [rsp+20h] [rbp-E8h]
  void **v105; // [rsp+28h] [rbp-E0h]
  void *v106; // [rsp+38h] [rbp-D0h] BYREF
  void *src; // [rsp+40h] [rbp-C8h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-C0h]
  int v109; // [rsp+64h] [rbp-A4h]
  __int16 v110; // [rsp+68h] [rbp-A0h]
  int v111; // [rsp+6Ah] [rbp-9Eh]
  __int16 v112; // [rsp+6Eh] [rbp-9Ah]
  __m128i v113; // [rsp+70h] [rbp-98h] BYREF
  __int16 v114; // [rsp+80h] [rbp-88h] BYREF
  __int128 v115; // [rsp+88h] [rbp-80h]
  __m128i v116; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v117; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v118; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v119; // [rsp+C8h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v4 = (char *)*a2;
  v106 = v4;
  v5 = (unsigned __int64)&v4[a3];
  if ( __CFADD__(v4, a3) )
    return 0;
  v7 = v4 + 6;
  if ( v5 < (unsigned __int64)(v4 + 6) )
    return 0;
  *(_DWORD *)a1 = *(_DWORD *)v4;
  *(_WORD *)(a1 + 4) = *((_WORD *)v4 + 2);
  if ( !a1 )
    return 0;
  v9 = a2;
  src = v4 + 6;
  v11 = sub_28F80((unsigned __int64 *)&src, v5);
  v12 = (char *)src;
  *(_DWORD *)(a1 + 8) = v11;
  v106 = v12;
  if ( v7 >= v12 )
    return 0;
  v13 = sub_28F80((unsigned __int64 *)&src, v5);
  v14 = (char *)src;
  *(_DWORD *)(a1 + 12) = v13;
  v106 = v14;
  if ( v12 >= v14 )
    return 0;
  v15 = sub_28F80((unsigned __int64 *)&src, v5);
  v16 = (char *)src;
  *(_DWORD *)(a1 + 16) = v15;
  v106 = v16;
  if ( v14 >= v16 )
    return 0;
  if ( a4 > 1 )
  {
    *(_DWORD *)(a1 + 20) = sub_28F80((unsigned __int64 *)&src, v5);
    v106 = src;
    if ( v16 >= src )
      return 0;
    v16 = (char *)src;
  }
  src = v16;
  v17 = sub_290A0((unsigned __int64 *)&src, v5);
  v18 = (char *)src;
  *(_QWORD *)(a1 + 24) = v17;
  v106 = v18;
  if ( v16 >= v18 )
    return 0;
  v19 = v18;
  do
  {
    if ( (unsigned __int64)v19 >= v5 )
      return 0;
    ++v19;
  }
  while ( *(v19 - 1) );
  v106 = v19;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = v19 - v18 - 1;
  v22 = v21;
  if ( v20 )
  {
    --v20;
    v22 = v21 + v20;
  }
  v23 = *(void **)(a1 + 32);
  v24 = v22 + 1;
  if ( *(_QWORD *)(a1 + 48) < v22 + 1 )
  {
    v102 = v22;
    v100 = v18;
    v97 = v22 + 1;
    v69 = sub_29E60(a1 + 32, v23, v24, 1u);
    v22 = v102;
    v18 = v100;
    *(_QWORD *)(a1 + 32) = v69;
    v24 = v97;
    v23 = v69;
  }
  *(_QWORD *)(a1 + 40) = v24;
  *((_BYTE *)v23 + v22) = 0;
  memmove((void *)(v20 + *(_QWORD *)(a1 + 32)), v18, v21);
  v25 = v106;
  src = v106;
  v26 = sub_28F80((unsigned __int64 *)&src, v5);
  v27 = src;
  v106 = src;
  if ( v25 >= src )
    return 0;
  v28 = *(_QWORD *)(a1 + 64);
  v29 = v26;
  if ( v26 != v28 )
  {
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v113.m128i_i32[0] = 0;
    v113.m128i_i16[2] = 0;
    v113.m128i_i64[1] = 0;
    v114 = 0;
    v115 = 0;
    if ( v26 >= v28 )
    {
      v30 = *(__m128i **)(a1 + 56);
      v31 = &v113;
      v32 = *(_QWORD *)(a1 + 72);
      if ( &v113 < v30 || &v113 >= (__m128i *)((char *)v30 + 40 * v32) )
      {
        v71 = v28;
        if ( v32 >= v29
          || (v30 = (__m128i *)sub_29E60(a1 + 56, *(void **)(a1 + 56), v29, 0x28u),
              v71 = *(_QWORD *)(a1 + 64),
              *(_QWORD *)(a1 + 56) = v30,
              v71 < v29) )
        {
          v72 = 5 * v71;
          while ( 1 )
          {
            ++v71;
            *(__m128i *)((char *)v30 + v72 * 8) = _mm_load_si128(&v113);
            *(__m128i *)((char *)v30 + v72 * 8 + 16) = _mm_load_si128((const __m128i *)&v114);
            v30[2].m128i_i64[v72] = *((_QWORD *)&v115 + 1);
            v72 += 5;
            if ( v29 == v71 )
              break;
            v30 = *(__m128i **)(a1 + 56);
          }
        }
      }
      else
      {
        v33 = &v116;
        v34 = 10;
        v35 = v28;
        while ( v34 )
        {
          v33->m128i_i32[0] = v31->m128i_i32[0];
          v31 = (__m128i *)((char *)v31 + 4);
          v33 = (__m128i *)((char *)v33 + 4);
          --v34;
        }
        if ( v32 >= v29
          || (v30 = (__m128i *)sub_29E60(a1 + 56, v30, v29, 0x28u),
              v35 = *(_QWORD *)(a1 + 64),
              *(_QWORD *)(a1 + 56) = v30,
              v35 < v29) )
        {
          v36 = 5 * v35;
          v37 = v118;
          v38 = _mm_load_si128(&v116);
          v39 = _mm_load_si128(&v117);
          while ( 1 )
          {
            ++v35;
            v30[2].m128i_i64[v36] = v37;
            *(__m128i *)((char *)v30 + v36 * 8) = v38;
            *(__m128i *)((char *)v30 + v36 * 8 + 16) = v39;
            v36 += 5;
            if ( v29 == v35 )
              break;
            v30 = *(__m128i **)(a1 + 56);
          }
        }
      }
      *(_QWORD *)(a1 + 64) = v29;
      v27 = v106;
LABEL_33:
      v95 = v9;
      v40 = 0;
      v41 = 40 * v29;
      while ( (unsigned __int8)sub_337A0(v40 + *(_QWORD *)(a1 + 56), &v106, v5 - (_QWORD)v27) )
      {
        v27 = v106;
        v40 += 40;
        v42 = v106;
        if ( v41 == v40 )
        {
          v9 = v95;
          goto LABEL_40;
        }
      }
      return 0;
    }
    *(_QWORD *)(a1 + 64) = v26;
  }
  if ( v26 )
    goto LABEL_33;
  v42 = v106;
LABEL_40:
  src = v42;
  v96 = (unsigned __int64)v42;
  v43 = sub_28F80((unsigned __int64 *)&src, v5);
  v44 = v43;
  v106 = src;
  if ( v96 < (unsigned __int64)src )
  {
    v45 = *(_QWORD *)(a1 + 88);
    v46 = v43;
    if ( v43 != v45 )
    {
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v43 < v45 )
      {
        v73 = v43;
        v74 = v45;
        do
        {
          v75 = *(_QWORD *)(a1 + 80) + 24 * v73;
          v76 = *(void **)v75;
          if ( *(_QWORD *)v75 )
          {
            *(_QWORD *)(v75 + 8) = 0;
            j__free(v76);
          }
          ++v73;
        }
        while ( v73 < v74 );
        v46 = v44;
      }
      else
      {
        v47 = *(void ***)(a1 + 80);
        v48 = a1 + 80;
        v49 = *(_QWORD *)(a1 + 96);
        if ( &src < v47 || &src >= &v47[3 * v49] )
        {
          v77 = v45;
          if ( v49 >= v44
            || (v84 = (void **)sub_29E60(v48, v47, v44, 0x18u),
                v77 = *(_QWORD *)(a1 + 88),
                v46 = v44,
                *(_QWORD *)(a1 + 80) = v84,
                v47 = v84,
                v77 < v44) )
          {
            v99 = v9;
            v78 = 0;
            v79 = v5;
            v80 = v46;
            while ( 1 )
            {
              v81 = &v47[3 * v77];
              *v81 = nullptr;
              *(_OWORD *)(v81 + 1) = v78;
              v82 = n[0];
              if ( n[0] )
              {
                v83 = sub_29E10(n[0]);
                v81[2] = (void *)v82;
                *v81 = v83;
                memcpy(v83, src, v82);
                v81[1] = (void *)v82;
                v78 = 0;
              }
              if ( v80 == ++v77 )
                break;
              v47 = *(void ***)(a1 + 80);
            }
            v46 = v80;
            v5 = v79;
            v9 = v99;
            *(_QWORD *)(a1 + 88) = v46;
          }
          else
          {
            *(_QWORD *)(a1 + 88) = v44;
          }
LABEL_52:
          v105 = v9;
          v51 = 24 * v46;
          v52 = 0;
LABEL_53:
          v53 = v106;
          v54 = v106;
          while ( (unsigned __int64)v54 < v5 )
          {
            if ( !*v54++ )
            {
              v106 = v54;
              if ( !v53 )
                return 0;
              v55 = v52 + *(_QWORD *)(a1 + 80);
              v56 = *(_QWORD *)(v55 + 8);
              v57 = v54 - v53 - 1;
              v58 = v57;
              if ( v56 )
              {
                --v56;
                v58 = v57 + v56;
              }
              v59 = *(void **)v55;
              v60 = v58 + 1;
              if ( *(_QWORD *)(v55 + 16) < v58 + 1 )
              {
                v104 = v56;
                v103 = v53;
                v101 = v58;
                v98 = v58 + 1;
                v70 = sub_29E60(v52 + *(_QWORD *)(a1 + 80), v59, v60, 1u);
                v56 = v104;
                v53 = v103;
                v58 = v101;
                v60 = v98;
                *(_QWORD *)v55 = v70;
                v59 = v70;
              }
              *(_QWORD *)(v55 + 8) = v60;
              v52 += 24;
              *((_BYTE *)v59 + v58) = 0;
              memmove((void *)(v56 + *(_QWORD *)v55), v53, v57);
              if ( v52 == v51 )
              {
                v9 = v105;
                goto LABEL_64;
              }
              goto LABEL_53;
            }
          }
          return 0;
        }
        if ( v49 < v44 )
        {
          v92 = sub_29E60(v48, v47, v44, 0x18u);
          v45 = *(_QWORD *)(a1 + 88);
          v46 = v44;
          *(_QWORD *)(a1 + 80) = v92;
        }
        while ( v45 < v46 )
        {
          v50 = *(_QWORD *)(a1 + 80) + 24 * v45++;
          *(_QWORD *)v50 = 0;
          *(_OWORD *)(v50 + 8) = 0;
        }
      }
      *(_QWORD *)(a1 + 88) = v46;
    }
    if ( !v44 )
    {
LABEL_64:
      v61 = v106;
      src = v106;
      v62 = sub_290A0((unsigned __int64 *)&src, v5);
      v63 = src;
      *(_QWORD *)(a1 + 104) = v62;
      v106 = v63;
      if ( v61 < v63 )
      {
        v64 = sub_290A0((unsigned __int64 *)&src, v5);
        v65 = src;
        *(_QWORD *)(a1 + 112) = v64;
        v106 = v65;
        if ( v63 < v65 )
        {
          v66 = sub_290A0((unsigned __int64 *)&src, v5);
          v67 = src;
          *(_QWORD *)(a1 + 120) = v66;
          v106 = v67;
          if ( v65 < v67 )
          {
            v68 = v67;
            while ( (unsigned __int64)v68 < v5 )
            {
              if ( !*v68++ )
              {
                v85 = *(_QWORD *)(a1 + 136);
                v106 = v68;
                v86 = v68 - (_BYTE *)v67;
                v87 = v86 - 1;
                v88 = (v85 == 0) + v85 - 1;
                v89 = v86 - 1 + v88;
                v90 = v86 + v88;
                if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)(v86 + v88) )
                {
                  v94 = v86 - 1 + v88;
                  v93 = sub_29E60(a1 + 128, *(void **)(a1 + 128), v86 + v88, 1u);
                  v89 = v94;
                  *(_QWORD *)(a1 + 128) = v93;
                }
                v91 = *(_QWORD *)(a1 + 128);
                *(_QWORD *)(a1 + 136) = v90;
                *(_BYTE *)(v91 + v89) = 0;
                memmove((void *)(v88 + *(_QWORD *)(a1 + 128)), v67, v87);
                *v9 = v106;
                return 1;
              }
            }
          }
        }
      }
      return 0;
    }
    goto LABEL_52;
  }
  return 0;
}

