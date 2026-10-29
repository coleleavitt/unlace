unsigned __int64 __fastcall sub_543C60(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        __int64 a4,
        double a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        int a18,
        __int64 a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        __int64 a27,
        __int64 a28,
        int a29,
        int a30,
        __int64 a31,
        __int64 a32,
        int a33,
        __int64 a34,
        __int64 a35,
        int a36,
        int a37,
        int a38,
        int a39,
        __int64 a40)
{
  __int64 v41; // rdi
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 i; // rbp
  __int64 *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r15
  _QWORD *v50; // r13
  __int64 v51; // rbx
  __int64 v52; // rbp
  _QWORD *v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rdi
  char v56; // al
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rax
  __int64 *v61; // r14
  char v62; // r15
  __int64 *v63; // rax
  __int64 *v64; // rbx
  __int64 v65; // r13
  unsigned __int64 v66; // r14
  __int64 v67; // r9
  __int64 v68; // rsi
  __int64 v69; // rax
  unsigned __int64 v70; // r15
  __int64 v71; // r13
  __int64 v72; // rax
  _QWORD *v73; // rbp
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rbp
  __int64 v77; // r14
  unsigned __int64 v78; // r15
  __int64 v79; // r13
  __int64 *v80; // rax
  __int8 v81; // r9
  __int64 *v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r13
  __int64 v85; // rsi
  unsigned __int64 v86; // r15
  __int64 v87; // r13
  _QWORD *v88; // r13
  __int64 v89; // rax
  _QWORD *v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned __int64 v93; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v95; // rdi
  unsigned __int64 v96; // rbp
  __m128i v97; // xmm2
  __m128i v98; // xmm3
  char *v99; // r15
  __int64 v100; // r14
  int v101; // r13d
  _QWORD *v102; // rax
  __m128i v103; // xmm0
  char *v104; // rdi
  _QWORD *v105; // rax
  __m128i v106; // xmm0
  __int64 v107; // rdi
  _QWORD *v108; // rdi
  __m128i v109; // xmm5
  __int64 v110; // rdi
  __m128i v111; // xmm6
  __int64 v112; // rdx
  char *v113; // rdx
  char v114; // cl
  char v115; // si
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  int v122; // r9d
  __m128i v123; // [rsp+0h] [rbp-78h] BYREF
  __m128i v124; // [rsp+10h] [rbp-68h] BYREF
  __m128i v125; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v126; // [rsp+30h] [rbp-48h]
  __int64 v127; // [rsp+38h] [rbp-40h]

  v41 = *(_QWORD *)(a1 + 56);
  if ( v41 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      v43 = 0;
      for ( i = 0; i != v42; ++i )
      {
        v45 = (__int64 *)(v41 + v43);
        v46 = *(_QWORD *)(v41 + v43 + 24);
        if ( v46 )
        {
          v45[4] = 0;
          qfree(v46, a2);
        }
        v47 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v47, a2);
        }
        v41 = *(_QWORD *)(a1 + 56);
        v43 += 56;
      }
    }
    *(_QWORD *)(a1 + 64) = 0;
    a5 = qfree(v41, a2);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
  v48 = *(_QWORD *)(a1 + 16);
  v49 = *(_QWORD *)(a1 + 24);
  if ( *(_OWORD *)(a1 + 16) != 0 )
  {
    if ( !v48 )
      goto LABEL_42;
    while ( 1 )
    {
      v50 = *(_QWORD **)a1;
      v51 = v48 - 1;
      if ( !v49 )
        goto LABEL_30;
      while ( 1 )
      {
        v52 = v49 - 1;
        v123.m128i_i64[0] = v49 - 1;
LABEL_14:
        v53 = *(_QWORD **)(a1 + 8);
        v54 = v52 | v53[1];
        if ( v50[1] | v51 )
        {
          v55 = *(unsigned __int8 *)(*v50 + v51);
          v56 = 0;
          if ( !v54 )
            goto LABEL_17;
          goto LABEL_16;
        }
        if ( !v54 )
          break;
        v55 = 0;
LABEL_16:
        v56 = *(_BYTE *)(*v53 + v52);
LABEL_17:
        if ( v56 == (_BYTE)v55 )
          goto LABEL_36;
        v57 = *(_QWORD *)(a1 + 40);
        v58 = *(_QWORD *)(a1 + 24) + 1LL;
        v59 = v49 + v58 * v51;
        if ( v59 >= v57
          || (v55 = *(_QWORD *)(a1 + 32),
              v126 = *(_QWORD **)(a1 + 8),
              v124.m128i_i64[0] = v48,
              v59 = *(_QWORD *)(v55 + 8 * v59),
              v60 = v52 + v48 * v58,
              v60 >= v57) )
        {
          sub_543630(a5, v55, v59, a3, (__int64)v53);
          return html_diff_printer_t__::vfunc_2(
                   v55,
                   v59,
                   v119,
                   v120,
                   v121,
                   v122,
                   a8,
                   a9,
                   a10,
                   a11,
                   a12,
                   a13,
                   a14,
                   a15,
                   a16,
                   a17,
                   a18,
                   a19,
                   a20,
                   a21,
                   a22,
                   a23,
                   a24,
                   a25,
                   a26,
                   a27,
                   a28,
                   a29,
                   a30,
                   a31,
                   a32,
                   a33,
                   a34,
                   a35,
                   a36,
                   a37,
                   a38,
                   a39,
                   a40);
        }
        v61 = (__int64 *)(a1 + 56);
        if ( *(_QWORD *)(v55 + 8 * v60) < v59 )
        {
          v80 = (__int64 *)sub_543B50((__int64 *)(a1 + 56), 2);
          v81 = 0;
          v82 = v80;
          if ( v50[1] | v51 )
            v81 = *(_BYTE *)(*v50 + v51);
          v83 = v80[1];
          if ( v83 )
          {
            a3 = v83 + 1;
            v84 = v80[1];
            v85 = *v80;
            --v83;
            if ( v80[2] >= a3 )
              goto LABEL_47;
          }
          else
          {
            v85 = *v80;
            v84 = 1;
            a3 = 2;
            if ( (unsigned __int64)v80[2] >= 2 )
              goto LABEL_47;
          }
          v127 = v83;
          v125.m128i_i8[0] = v81;
          v126 = (_QWORD *)a3;
          v124.m128i_i64[0] = (__int64)v80;
          v117 = qvector_reserve(v80, v85, a3, 1);
          v83 = v127;
          v81 = v125.m128i_i8[0];
          a3 = (unsigned __int64)v126;
          v85 = v117;
          *v82 = v117;
LABEL_47:
          v82[1] = a3;
          *(_BYTE *)(v85 + v83) = v81;
          *(_BYTE *)(*v82 + v84) = 0;
          if ( !v51 )
          {
            while ( 1 )
            {
LABEL_52:
              v88 = *(_QWORD **)(a1 + 8);
              v89 = sub_543B50(v61, 1);
              v48 = 0;
              v90 = (_QWORD *)v89;
              if ( v88[1] | v52 )
                v48 = *(unsigned __int8 *)(*v88 + v52);
              v87 = *(_QWORD *)(v89 + 8);
              if ( v87 )
              {
                v86 = v87 + 1;
                a7 = *(_QWORD *)(v89 + 8);
                a2 = *(const char **)v89;
                --v87;
                if ( *(_QWORD *)(v89 + 16) >= v86 )
                  goto LABEL_50;
              }
              else
              {
                a2 = *(const char **)v89;
                a7 = 1;
                v86 = 2;
                if ( *(_QWORD *)(v89 + 16) >= 2u )
                  goto LABEL_50;
              }
              v124.m128i_i8[0] = v48;
              v123.m128i_i64[0] = a7;
              v91 = qvector_reserve(v89, a2, v86, 1);
              v48 = v124.m128i_u8[0];
              a7 = v123.m128i_i64[0];
              *v90 = v91;
              a2 = (const char *)v91;
LABEL_50:
              v90[1] = v86;
              a2[v87] = v48;
              *(_BYTE *)(*v90 + a7) = 0;
              if ( !v52 )
                goto LABEL_57;
              --v52;
            }
          }
          v48 = v51;
          v50 = *(_QWORD **)a1;
          --v51;
          goto LABEL_14;
        }
        v62 = 0;
        v63 = (__int64 *)sub_543B50((__int64 *)(a1 + 56), 1);
        v48 = v124.m128i_i64[0];
        v64 = v63;
        if ( v126[1] | v52 )
          v62 = *(_BYTE *)(*v126 + v52);
        v65 = v63[1];
        if ( v65 )
        {
          v66 = v65 + 1;
          v67 = v63[1];
          v68 = *v63;
          --v65;
          if ( v63[2] < v66 )
            goto LABEL_83;
        }
        else
        {
          v68 = *v63;
          v67 = 1;
          v66 = 2;
          if ( (unsigned __int64)v63[2] < 2 )
          {
LABEL_83:
            v124.m128i_i64[0] = v67;
            v123.m128i_i64[0] = v48;
            v118 = qvector_reserve(v63, v68, v66, 1);
            v67 = v124.m128i_i64[0];
            v48 = v123.m128i_i64[0];
            *v64 = v118;
            v68 = v118;
          }
        }
        v64[1] = v66;
        *(_BYTE *)(v68 + v65) = v62;
        v69 = *v64;
        v49 = v52;
        v51 = v48 - 1;
        *(_BYTE *)(v69 + v67) = 0;
        v50 = *(_QWORD **)a1;
        if ( !v52 )
        {
          while ( 1 )
          {
LABEL_30:
            v72 = sub_543B50((__int64 *)(a1 + 56), 2);
            v48 = 0;
            v73 = (_QWORD *)v72;
            if ( v50[1] | v51 )
              v48 = *(unsigned __int8 *)(*v50 + v51);
            v71 = *(_QWORD *)(v72 + 8);
            if ( v71 )
            {
              v70 = v71 + 1;
              a7 = *(_QWORD *)(v72 + 8);
              a2 = *(const char **)v72;
              --v71;
              if ( *(_QWORD *)(v72 + 16) >= v70 )
                goto LABEL_28;
            }
            else
            {
              a2 = *(const char **)v72;
              a7 = 1;
              v70 = 2;
              if ( *(_QWORD *)(v72 + 16) >= 2u )
                goto LABEL_28;
            }
            v124.m128i_i8[0] = v48;
            v123.m128i_i64[0] = a7;
            v74 = qvector_reserve(v72, a2, v70, 1);
            v48 = v124.m128i_u8[0];
            a7 = v123.m128i_i64[0];
            *v73 = v74;
            a2 = (const char *)v74;
LABEL_28:
            v73[1] = v70;
            a2[v71] = v48;
            *(_BYTE *)(*v73 + a7) = 0;
            if ( !v51 )
              goto LABEL_57;
            v50 = *(_QWORD **)a1;
            --v51;
          }
        }
      }
      v123.m128i_i64[0] = 0;
      v51 = 0;
LABEL_36:
      v75 = sub_543B50((__int64 *)(a1 + 56), 0);
      v48 = 0;
      v76 = (_QWORD *)v75;
      if ( v50[1] | v51 )
        v48 = *(unsigned __int8 *)(*v50 + v51);
      v77 = *(_QWORD *)(v75 + 8);
      if ( v77 )
      {
        v78 = v77 + 1;
        v79 = *(_QWORD *)(v75 + 8);
        a2 = *(const char **)v75;
        --v77;
        if ( *(_QWORD *)(v75 + 16) >= v78 )
          goto LABEL_40;
LABEL_79:
        v124.m128i_i8[0] = v48;
        v116 = qvector_reserve(v75, a2, v78, 1);
        v48 = v124.m128i_u8[0];
        *v76 = v116;
        a2 = (const char *)v116;
      }
      else
      {
        a2 = *(const char **)v75;
        v79 = 1;
        v78 = 2;
        if ( *(_QWORD *)(v75 + 16) < 2u )
          goto LABEL_79;
      }
LABEL_40:
      v76[1] = v78;
      a2[v77] = v48;
      *(_BYTE *)(*v76 + v79) = 0;
      if ( !(v51 | v123.m128i_i64[0]) )
        break;
      v48 = v51;
      v49 = v123.m128i_i64[0];
      if ( !v51 )
      {
LABEL_42:
        v52 = v49 - 1;
        v61 = (__int64 *)(a1 + 56);
        goto LABEL_52;
      }
    }
  }
LABEL_57:
  v92 = *(_QWORD *)(a1 + 64);
  v93 = *(_QWORD *)(a1 + 56);
  result = 7 * v92;
  v95 = v93 + 56 * v92;
  if ( v93 != v95 )
  {
    v96 = v95 - 56;
    if ( v93 >= v95 - 56 )
      goto LABEL_87;
    do
    {
      v97 = _mm_loadu_si128((const __m128i *)(v93 + 8));
      v98 = _mm_loadu_si128((const __m128i *)(v93 + 32));
      *(_OWORD *)(v93 + 8) = 0;
      v99 = *(char **)v93;
      v100 = *(_QWORD *)(v93 + 24);
      *(_QWORD *)v93 = 0;
      v101 = *(_DWORD *)(v93 + 48);
      *(_QWORD *)(v93 + 24) = 0;
      *(_OWORD *)(v93 + 32) = 0;
      v102 = *(_QWORD **)v96;
      v103 = _mm_loadu_si128((const __m128i *)(v96 + 8));
      *(_QWORD *)v96 = 0;
      *(_OWORD *)(v96 + 8) = 0;
      v104 = *(char **)v93;
      v124 = v97;
      v123 = v98;
      if ( v104 )
      {
        *(_QWORD *)(v93 + 8) = 0;
        v126 = v102;
        qfree(v104, a2, v92, a4, v48, a7, *(_OWORD *)&v123, *(_OWORD *)&v124, *(_OWORD *)&v103);
        v103 = _mm_load_si128(&v125);
        v102 = v126;
      }
      *(_QWORD *)v93 = v102;
      *(__m128i *)(v93 + 8) = v103;
      v105 = *(_QWORD **)(v96 + 24);
      v106 = _mm_loadu_si128((const __m128i *)(v96 + 32));
      *(_QWORD *)(v96 + 24) = 0;
      *(_OWORD *)(v96 + 32) = 0;
      v107 = *(_QWORD *)(v93 + 24);
      if ( v107 )
      {
        *(_QWORD *)(v93 + 32) = 0;
        v126 = v105;
        v125 = v106;
        qfree(v107, a2);
        v106 = _mm_load_si128(&v125);
        v105 = v126;
      }
      *(_QWORD *)(v93 + 24) = v105;
      *(__m128i *)(v93 + 32) = v106;
      *(_DWORD *)(v93 + 48) = *(_DWORD *)(v96 + 48);
      v108 = *(_QWORD **)v96;
      if ( *(_QWORD *)v96 )
      {
        *(_QWORD *)(v96 + 8) = 0;
        *(double *)v106.m128i_i64 = qfree(v108, a2);
      }
      v109 = _mm_load_si128(&v124);
      v110 = *(_QWORD *)(v96 + 24);
      *(_QWORD *)v96 = v99;
      *(__m128i *)(v96 + 8) = v109;
      if ( v110 )
      {
        *(_QWORD *)(v96 + 32) = 0;
        qfree(v110, a2, *(double *)v106.m128i_i64);
      }
      v111 = _mm_load_si128(&v123);
      *(_QWORD *)(v96 + 24) = v100;
      v93 += 56LL;
      v96 -= 56LL;
      *(_DWORD *)(v96 + 104) = v101;
      *(__m128i *)(v96 + 88) = v111;
    }
    while ( v93 < v96 );
    v112 = *(_QWORD *)(a1 + 64);
    v93 = *(_QWORD *)(a1 + 56);
    result = 7 * v112;
    v95 = v93 + 56 * v112;
    if ( v93 != v95 )
    {
LABEL_87:
      do
      {
        result = *(_QWORD *)(v93 + 8);
        if ( result > 1 )
        {
          v113 = *(char **)v93;
          result += *(_QWORD *)v93;
          if ( *(_QWORD *)v93 != result - 1 )
          {
            for ( result -= 2LL; (unsigned __int64)v113 < result; *(_BYTE *)(result + 1) = v114 )
            {
              v114 = *v113;
              v115 = *(_BYTE *)result;
              ++v113;
              --result;
              *(v113 - 1) = v115;
            }
          }
        }
        v93 += 56LL;
      }
      while ( v95 != v93 );
    }
  }
  return result;
}
