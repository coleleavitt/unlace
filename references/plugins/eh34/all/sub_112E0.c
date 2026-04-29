__int64 __fastcall sub_112E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed __int32 a5,
        signed __int32 a6,
        int a7)
{
  unsigned __int32 v9; // r15d
  __int64 v10; // rbx
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // r13
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  unsigned __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  __int64 *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  const __m128i *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // xmm0
  bool v53; // cf
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rsi
  const __m128i *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r14
  const __m128i *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r14
  const __m128i *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  __m128i v74; // xmm0
  __int64 v75; // rdx
  __int64 v76; // r14
  const __m128i *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  __m128i v80; // xmm0
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r14
  const __m128i *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  __m128i v87; // xmm0
  __int64 v88; // [rsp+8h] [rbp-110h]
  __int64 v90; // [rsp+18h] [rbp-100h]
  __int64 v93; // [rsp+38h] [rbp-E0h]
  __int64 v94; // [rsp+38h] [rbp-E0h]
  __int64 v95; // [rsp+38h] [rbp-E0h]
  __int64 v96; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v97; // [rsp+38h] [rbp-E0h]
  __int64 v98; // [rsp+38h] [rbp-E0h]
  __int64 v99; // [rsp+38h] [rbp-E0h]
  __int64 v100; // [rsp+38h] [rbp-E0h]
  __int64 v101; // [rsp+38h] [rbp-E0h]
  __int64 v102; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v103; // [rsp+48h] [rbp-D0h]
  __int64 v104; // [rsp+48h] [rbp-D0h]
  __m128i v105; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+60h] [rbp-B8h]
  __int64 v107; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v108; // [rsp+78h] [rbp-A0h]
  unsigned int v109; // [rsp+7Ch] [rbp-9Ch]
  char v110; // [rsp+80h] [rbp-98h]
  bool v111; // [rsp+81h] [rbp-97h]
  __int64 v112; // [rsp+88h] [rbp-90h]
  __m128i v113; // [rsp+90h] [rbp-88h] BYREF
  __m128i v114; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v115; // [rsp+B0h] [rbp-68h]
  char v116; // [rsp+B8h] [rbp-60h]
  bool v117; // [rsp+B9h] [rbp-5Fh]
  __int64 v118; // [rsp+C0h] [rbp-58h]
  __m128i v119; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-40h]

  v120 = __readfsqword(0x28u);
  v9 = a5;
  v88 = a2 + 592;
  v10 = 32LL * a5;
  *(_BYTE *)(a2 + 188) = 1;
  v90 = a2 + 1040;
  if ( a5 >= a6 )
  {
LABEL_24:
    *(_BYTE *)(a2 + 188) = 0;
    *(_BYTE *)a1 = 1;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_26340(v88, v9) )
      goto LABEL_23;
    hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v88, v9);
    if ( !hexdsp(205, a4, v9) )
      goto LABEL_23;
    v12 = v10 + *(_QWORD *)(a2 + 456);
    sub_51630(&v107, v9, v12);
    v13 = *(_DWORD *)(v12 + 8);
    v14 = v112;
    v114.m128i_i32[0] = v9;
    v109 = v13;
    v111 = v13 == a7;
    v115 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v108), _mm_cvtsi32_si128(v13)).m128i_u64[0];
    v15 = v90;
    v16 = _mm_load_si128(&v113);
    v116 = v110;
    v17 = *(_QWORD *)(a2 + 1048);
    v114.m128i_i64[1] = v107;
    v117 = v111;
    v118 = v112;
    v112 = 0;
    v119 = v16;
    v113 = 0;
    if ( !v17 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        v19 = *(_QWORD *)(v17 + 24);
        if ( *(_DWORD *)(v17 + 32) < (signed __int32)v9 )
          break;
        v15 = v17;
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v18 )
          goto LABEL_9;
      }
      v17 = *(_QWORD *)(v17 + 24);
    }
    while ( v19 );
LABEL_9:
    if ( v90 == v15 || *(_DWORD *)(v15 + 32) > (signed __int32)v9 )
    {
LABEL_11:
      v20 = sub_11100((_QWORD *)(a2 + 1032), v15, (__int64)&v114);
      v14 = v118;
      v15 = v20;
    }
    if ( v14 )
      qfree(v14);
    v21 = *(_QWORD *)(v12 + 16);
    if ( v21 == -1 )
    {
      v114 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v29 = v15 + 64;
      v30 = *(_QWORD *)(v15 + 72);
      v31 = *(_QWORD *)(v15 + 64);
      v32 = *(_QWORD *)(v15 + 80);
      v33 = v30 + 1;
      if ( (unsigned __int64)&v114 >= v31 && (unsigned __int64)&v114 < v31 + 16 * v32 )
      {
        if ( v32 < v33 )
        {
          v54 = qvector_reserve(v29, 0, v30 + 1, 16);
          v55 = *(_QWORD *)(v15 + 72);
          v56 = *(_QWORD *)(v15 + 80);
          *(_QWORD *)(v15 + 80) = v32;
          v57 = *(const __m128i **)(v15 + 64);
          v58 = v55 - 1;
          if ( v58 >= 0 )
          {
            v59 = v54;
            do
            {
              v60 = _mm_loadu_si128(v57);
              v59 += 16;
              ++v57;
              *(__m128i *)(v59 - 16) = v60;
              v53 = v58-- == 0;
            }
            while ( !v53 );
            v57 = *(const __m128i **)(v15 + 64);
          }
          v94 = v54;
          qfree(v57);
          v31 = v94;
          v30 = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 64) = v94;
          *(_QWORD *)(v15 + 80) = v56;
        }
        v43 = (_QWORD *)(v31 + 16 * v30);
        *v43 = -1;
        v43[1] = 0;
      }
      else
      {
        if ( v32 < v33 )
        {
          v46 = qvector_reserve(v29, 0, v30 + 1, 16);
          v47 = *(_QWORD *)(v15 + 72);
          v48 = *(_QWORD *)(v15 + 80);
          *(_QWORD *)(v15 + 80) = v32;
          v49 = *(const __m128i **)(v15 + 64);
          v50 = v47 - 1;
          if ( v50 >= 0 )
          {
            v51 = v46;
            do
            {
              v52 = _mm_loadu_si128(v49);
              v51 += 16;
              ++v49;
              *(__m128i *)(v51 - 16) = v52;
              v53 = v50-- == 0;
            }
            while ( !v53 );
            v49 = *(const __m128i **)(v15 + 64);
          }
          v93 = v46;
          qfree(v49);
          v31 = v93;
          v30 = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 64) = v93;
          *(_QWORD *)(v15 + 80) = v48;
        }
        *(__m128i *)(v31 + 16 * v30) = _mm_load_si128(&v114);
      }
      ++*(_QWORD *)(v15 + 72);
      goto LABEL_31;
    }
    sub_60AE0(&v105, a2, *(_QWORD *)(a3 + 8), v21, v9);
    if ( v105.m128i_i32[0] )
    {
      v114.m128i_i32[0] = 1;
      v116 = 0;
LABEL_17:
      v22 = *(_QWORD *)(v15 + 72);
      v23 = *(_QWORD *)(v15 + 64);
      v105 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v24 = v15 + 64;
      v25 = *(_QWORD *)(v15 + 80);
      v26 = v22 + 1;
      if ( (unsigned __int64)&v105 < v23 || (unsigned __int64)&v105 >= v23 + 16 * v25 )
      {
        if ( v25 < v26 )
        {
          v95 = *(_QWORD *)(v15 + 80);
          v61 = qvector_reserve(v24, 0, v26, 16);
          v62 = *(_QWORD *)(v15 + 72);
          v63 = *(_QWORD *)(v15 + 80);
          v64 = *(const __m128i **)(v15 + 64);
          *(_QWORD *)(v15 + 80) = v95;
          v65 = v62 - 1;
          if ( v65 >= 0 )
          {
            v66 = v61;
            do
            {
              v67 = _mm_loadu_si128(v64);
              v66 += 16;
              ++v64;
              *(__m128i *)(v66 - 16) = v67;
              v53 = v65-- == 0;
            }
            while ( !v53 );
            v64 = *(const __m128i **)(v15 + 64);
          }
          v96 = v61;
          qfree(v64);
          v23 = v96;
          v22 = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 80) = v63;
          *(_QWORD *)(v15 + 64) = v96;
        }
        *(__m128i *)(v23 + 16 * v22) = _mm_load_si128(&v105);
      }
      else
      {
        if ( v25 < v26 )
        {
          v100 = *(_QWORD *)(v15 + 80);
          v81 = qvector_reserve(v24, 0, v26, 16);
          v82 = *(_QWORD *)(v15 + 72);
          v83 = *(_QWORD *)(v15 + 80);
          v84 = *(const __m128i **)(v15 + 64);
          *(_QWORD *)(v15 + 80) = v100;
          v85 = v82 - 1;
          if ( v85 >= 0 )
          {
            v86 = v81;
            do
            {
              v87 = _mm_loadu_si128(v84);
              v86 += 16;
              ++v84;
              *(__m128i *)(v86 - 16) = v87;
              v53 = v85-- == 0;
            }
            while ( !v53 );
            v84 = *(const __m128i **)(v15 + 64);
          }
          v101 = v81;
          qfree(v84);
          v23 = v101;
          v22 = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 80) = v83;
          *(_QWORD *)(v15 + 64) = v101;
        }
        v44 = (_QWORD *)(v23 + 16 * v22);
        *v44 = -1;
        v44[1] = 0;
      }
      goto LABEL_20;
    }
    sub_60DE0(&v114, a2, a3, v105.m128i_i64[1], v106);
    if ( v116 )
      break;
    if ( v114.m128i_i32[0] == 1 )
      goto LABEL_17;
    if ( v114.m128i_i32[0] == 2 )
    {
      *(_BYTE *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_50;
    }
    if ( v114.m128i_i32[0] )
    {
LABEL_31:
      v27 = v112;
      if ( !v112 )
        goto LABEL_23;
LABEL_32:
      ++v9;
      v10 += 32;
      v113.m128i_i64[0] = 0;
      qfree(v27);
      if ( v9 == a6 )
        goto LABEL_24;
    }
    else
    {
      v34 = *(_QWORD *)(a2 + 288);
      v35 = *(_QWORD *)(v15 + 64);
      v36 = v15 + 64;
      v37 = *(_QWORD *)(v15 + 80);
      v38 = *(_QWORD *)(v34 + 32);
      v39 = *(_QWORD *)(v34 + 8);
      v40 = *(_QWORD *)(v15 + 72);
      v105.m128i_i64[0] = v38;
      v105.m128i_i64[1] = v39;
      v41 = v40 + 1;
      if ( (unsigned __int64)&v105 < v35 || (unsigned __int64)&v105 >= v35 + 16 * v37 )
      {
        if ( v37 < v41 )
        {
          v97 = v37;
          v68 = qvector_reserve(v36, 0, v40 + 1, 16);
          v69 = *(_QWORD *)(v15 + 72);
          v70 = *(_QWORD *)(v15 + 80);
          v71 = *(const __m128i **)(v15 + 64);
          *(_QWORD *)(v15 + 80) = v97;
          v72 = v69 - 1;
          if ( v72 >= 0 )
          {
            v73 = v68;
            do
            {
              v74 = _mm_loadu_si128(v71);
              v73 += 16;
              ++v71;
              *(__m128i *)(v73 - 16) = v74;
              v53 = v72-- == 0;
            }
            while ( !v53 );
            v71 = *(const __m128i **)(v15 + 64);
          }
          v98 = v68;
          qfree(v71);
          v35 = v98;
          v40 = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 80) = v70;
          *(_QWORD *)(v15 + 64) = v98;
        }
        *(__m128i *)(v35 + 16 * v40) = _mm_load_si128(&v105);
      }
      else
      {
        if ( v37 < v41 )
        {
          v103 = v37;
          v102 = v39;
          v99 = v38;
          v75 = qvector_reserve(v36, 0, v40 + 1, 16);
          v76 = *(_QWORD *)(v15 + 80);
          v77 = *(const __m128i **)(v15 + 64);
          v78 = *(_QWORD *)(v15 + 72) - 1LL;
          *(_QWORD *)(v15 + 80) = v103;
          if ( v78 >= 0 )
          {
            v79 = v75;
            do
            {
              v80 = _mm_loadu_si128(v77);
              v79 += 16;
              ++v77;
              *(__m128i *)(v79 - 16) = v80;
              v53 = v78-- == 0;
            }
            while ( !v53 );
            v77 = *(const __m128i **)(v15 + 64);
          }
          v104 = v75;
          qfree(v77);
          v35 = v104;
          v40 = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 80) = v76;
          v39 = v102;
          v38 = v99;
          *(_QWORD *)(v15 + 64) = v104;
        }
        v42 = (__int64 *)(v35 + 16 * v40);
        *v42 = v38;
        v42[1] = v39;
      }
LABEL_20:
      ++*(_QWORD *)(v15 + 72);
      if ( !v116 || !v114.m128i_i64[0] )
        goto LABEL_31;
      v114.m128i_i64[1] = 0;
      qfree(v114.m128i_i64[0]);
      v27 = v112;
      if ( v112 )
        goto LABEL_32;
LABEL_23:
      ++v9;
      v10 += 32;
      if ( v9 == a6 )
        goto LABEL_24;
    }
  }
  v45 = _mm_loadu_si128((const __m128i *)&v114.m128i_u64[1]);
  *(_QWORD *)a1 = v114.m128i_i64[0];
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v45;
LABEL_50:
  if ( v112 )
  {
    v113.m128i_i64[0] = 0;
    qfree(v112);
  }
  return a1;
}
