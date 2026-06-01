__int64 __fastcall sub_222CE40(__int64 *a1, __int16 *a2)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int8 *v10; // rax
  int v11; // r13d
  __int64 v12; // rcx
  size_t v13; // r12
  unsigned __int64 v14; // r15
  __int64 v15; // r8
  int v16; // ecx
  char v17; // r9
  unsigned __int8 *v18; // rsi
  size_t v19; // rax
  char *v20; // rcx
  size_t v21; // rdx
  size_t v22; // rax
  unsigned int v23; // r15d
  double v24; // xmm0_8
  __int16 *v25; // r9
  char *v26; // rdi
  unsigned int v27; // eax
  __int16 *v28; // r9
  unsigned __int64 v29; // rdx
  __int16 *v30; // rax
  unsigned __int8 *v31; // rsi
  unsigned __int8 *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned __int8 *v35; // rax
  __int64 v36; // rbp
  unsigned __int16 *v37; // rsi
  __int64 v38; // rsi
  unsigned __int8 *v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int8 *v41; // rax
  unsigned __int64 v42; // rdx
  __int16 *v44; // r9
  _BYTE *v45; // rdx
  _BYTE *v46; // rax
  unsigned int v47; // eax
  void **v48; // r8
  void *v49; // rdi
  __int64 *v50; // rax
  unsigned __int8 *v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v53; // rbx
  unsigned __int8 *v54; // rdi
  unsigned __int8 *v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int8 *v57; // rax
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rax
  unsigned __int8 *v60; // rax
  unsigned __int64 v61; // rdx
  size_t v62; // rax
  __m128i *v63; // rax
  __m128i *v64; // rdx
  __int64 v65; // rsi
  size_t v66; // rdi
  unsigned __int8 *v67; // rsi
  char *v68; // rax
  void **v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  char *v73; // r15
  unsigned __int8 *v74; // r10
  unsigned __int8 *v75; // rdx
  unsigned __int64 v76; // rax
  unsigned __int8 *v77; // rax
  unsigned __int64 v78; // rsi
  unsigned __int8 *v79; // rsi
  __int16 *v80; // r9
  _BYTE *v81; // rdx
  _BYTE *v82; // rax
  __int16 *v83; // r9
  _BYTE *v84; // rdx
  _BYTE *v85; // rax
  __int64 v86; // rdi
  unsigned __int8 *v87; // rax
  char *v88; // rdi
  __int16 *v89; // r8
  char *v90; // rdx
  __int64 v91; // rcx
  unsigned __int8 *v92; // rsi
  char *v93; // rax
  char v94; // al
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  void ***v97; // rax
  void **v98; // rdi
  __m128i v99; // xmm5
  unsigned __int64 v100; // rax
  unsigned __int8 *v101; // rdx
  unsigned __int64 v102; // rax
  void *v103; // r15
  char *v104; // rax
  unsigned __int8 *v105; // rdi
  size_t v106; // rdx
  __m128i *v107; // rax
  char *v108; // rdi
  __m128 v109; // xmm0
  __int64 v110; // rdx
  size_t v111; // rdx
  size_t v112; // rdx
  char *v113; // [rsp+8h] [rbp-F0h] BYREF
  __int64 *v114; // [rsp+10h] [rbp-E8h]
  void **v115; // [rsp+18h] [rbp-E0h]
  void *v116; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v117; // [rsp+28h] [rbp-D0h] BYREF
  char *endptr; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v119[24]; // [rsp+48h] [rbp-B0h] BYREF
  void *src; // [rsp+60h] [rbp-98h] BYREF
  size_t n; // [rsp+68h] [rbp-90h]
  __m128i v122[2]; // [rsp+70h] [rbp-88h] BYREF
  char *nptr; // [rsp+90h] [rbp-68h] BYREF
  size_t v124[2]; // [rsp+98h] [rbp-60h] BYREF
  _OWORD v125[5]; // [rsp+A8h] [rbp-50h] BYREF

  v4 = (unsigned __int8 *)a1[4];
  v5 = (unsigned __int8 *)a1[3];
  if ( v4 == v5 )
    return (unsigned int)sub_22286E0(a1, (__int64)"Unexpected EOF");
  v6 = *v5;
  if ( (unsigned __int8)v6 <= 0x20u )
  {
    v7 = 0x100002600LL;
    if ( _bittest64(&v7, v6) )
    {
      v8 = v5 + 1;
      while ( 1 )
      {
        v5 = v8;
        a1[3] = (__int64)v8;
        if ( v8 == v4 )
          return (unsigned int)sub_22286E0(a1, (__int64)"Unexpected EOF");
        v9 = *v8;
        if ( (unsigned __int8)v9 <= 0x20u )
        {
          ++v8;
          if ( _bittest64(&v7, v9) )
            continue;
        }
        break;
      }
    }
  }
  v10 = v5 + 1;
  a1[3] = (__int64)(v5 + 1);
  v11 = *v5;
  if ( (_BYTE)v11 == 102 )
  {
    LOBYTE(v124[0]) = 0;
    LOWORD(nptr) = 1;
    sub_222B2A0(a2);
    sub_2229580((__int64)a2, (unsigned __int16 *)&nptr);
    sub_222B2A0(v80);
    v81 = (_BYTE *)a1[4];
    v82 = (_BYTE *)a1[3];
    if ( v81 == v82 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    a1[3] = (__int64)(v82 + 1);
    if ( *v82 != 97 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    if ( v81 == v82 + 1 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    a1[3] = (__int64)(v82 + 2);
    if ( v82[1] != 108 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    if ( v81 == v82 + 2 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    a1[3] = (__int64)(v82 + 3);
    if ( v82[2] != 115 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    if ( v81 == v82 + 3 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    a1[3] = (__int64)(v82 + 4);
    if ( v82[3] != 101 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (false?)");
    return 1;
  }
  if ( (char)v11 <= 102 )
  {
    if ( (_BYTE)v11 != 34 )
    {
      if ( (_BYTE)v11 != 91 )
        goto LABEL_13;
      *(_QWORD *)&v125[0] = 0;
      *(_OWORD *)v124 = 0;
      LOWORD(nptr) = 8;
      sub_222B2A0(a2);
      sub_2229580((__int64)a2, (unsigned __int16 *)&nptr);
      sub_222B2A0(v28);
      v29 = (unsigned __int64)(a2 + 4);
      v30 = nullptr;
      if ( *a2 == 8 )
        v30 = a2 + 4;
      v31 = (unsigned __int8 *)a1[4];
      v32 = (unsigned __int8 *)a1[3];
      v33 = (__int64)v30;
      if ( v31 != v32 )
      {
        v29 = *v32;
        if ( (unsigned __int8)v29 > 0x20u )
        {
LABEL_45:
          if ( (_BYTE)v29 == 93 )
            goto LABEL_160;
        }
        else
        {
          v34 = 0x100002600LL;
          if ( _bittest64(&v34, v29) )
          {
            v35 = v32 + 1;
            do
            {
              v32 = v35;
              a1[3] = (__int64)v35;
              if ( v31 == v35 )
                break;
              v29 = *v35;
              if ( (unsigned __int8)v29 > 0x20u )
                goto LABEL_45;
              ++v35;
            }
            while ( _bittest64(&v34, v29) );
          }
        }
      }
      v36 = 0x100002600LL;
      while ( 1 )
      {
        v37 = *(unsigned __int16 **)(v33 + 8);
        if ( v37 == *(unsigned __int16 **)(v33 + 16) )
        {
          sub_222C110(v33, v37);
          v38 = *(_QWORD *)(v33 + 8) - 40LL;
        }
        else
        {
          *v37 = 0;
          v38 = *(_QWORD *)(v33 + 8);
          *(_QWORD *)(v33 + 8) = v38 + 40;
        }
        v23 = sub_222CE40(a1, v38, v29, v32);
        if ( !(_BYTE)v23 )
          return v23;
        v39 = (unsigned __int8 *)a1[4];
        v32 = (unsigned __int8 *)a1[3];
        if ( v39 == v32 )
          return (unsigned int)sub_22286E0(a1, (__int64)"Expected , or ] after array element");
        v40 = *v32;
        if ( (unsigned __int8)v40 <= 0x20u )
        {
          if ( _bittest64(&v36, v40) )
            break;
        }
LABEL_56:
        v29 = (unsigned __int64)(v32 + 1);
        a1[3] = (__int64)(v32 + 1);
        if ( *v32 != 44 )
        {
          if ( *v32 == 93 )
            return v23;
          return (unsigned int)sub_22286E0(a1, (__int64)"Expected , or ] after array element");
        }
        if ( v39 != (unsigned __int8 *)v29 )
        {
          v95 = v32[1];
          if ( (unsigned __int8)v95 <= 0x20u )
          {
            if ( _bittest64(&v36, v95) )
            {
              v32 += 2;
              do
              {
                a1[3] = (__int64)v32;
                if ( v39 == v32 )
                  break;
                v96 = *v32;
                if ( (unsigned __int8)v96 > 0x20u )
                  break;
                ++v32;
              }
              while ( _bittest64(&v36, v96) );
            }
          }
        }
      }
      v41 = v32 + 1;
      while ( 1 )
      {
        v32 = v41;
        a1[3] = (__int64)v41;
        if ( v41 == v39 )
          return (unsigned int)sub_22286E0(a1, (__int64)"Expected , or ] after array element");
        v42 = *v41;
        if ( (unsigned __int8)v42 <= 0x20u )
        {
          ++v41;
          if ( _bittest64(&v36, v42) )
            continue;
        }
        goto LABEL_56;
      }
    }
    v117.m128i_i64[0] = 0;
    v113 = (char *)&v116;
    v116 = &v117.m128i_u64[1];
    v117.m128i_i8[8] = 0;
    v47 = sub_222A0A0(a1, (char *)&v116);
    v48 = &v116;
    v23 = v47;
    if ( !(_BYTE)v47 )
    {
LABEL_66:
      v49 = v116;
      if ( v116 == v48 + 2 )
        return v23;
LABEL_67:
      operator delete(v49);
      return v23;
    }
    v90 = (char *)v116;
    endptr = &v119[8];
    if ( v116 == &v117.m128i_u64[1] )
    {
      v90 = &v119[8];
      *(__m128i *)&v119[8] = _mm_load_si128((const __m128i *)&v117.m128i_u64[1]);
    }
    else
    {
      endptr = (char *)v116;
      *(_QWORD *)&v119[8] = v117.m128i_i64[1];
    }
    v91 = v117.m128i_i64[0];
    v117.m128i_i64[0] = 0;
    v116 = v113 + 16;
    v92 = (unsigned __int8 *)&v90[v91];
    *(_QWORD *)v119 = v91;
    v117.m128i_i8[8] = 0;
    LOWORD(nptr) = 6;
    if ( &v90[v91] == v90 )
    {
LABEL_172:
      v124[0] = (size_t)v125;
      if ( v90 == &v119[8] )
      {
        v125[0] = _mm_load_si128((const __m128i *)&v119[8]);
      }
      else
      {
        v124[0] = (size_t)v90;
        *(_QWORD *)&v125[0] = *(_QWORD *)&v119[8];
      }
      v113 = (char *)v48;
      v124[1] = v91;
      endptr = &v119[8];
      *(_QWORD *)v119 = 0;
      v119[8] = 0;
      sub_222B2A0(a2);
      sub_2229580((__int64)a2, (unsigned __int16 *)&nptr);
      sub_222B2A0((__int16 *)&nptr);
      v48 = (void **)v113;
      if ( endptr != &v119[8] )
      {
        operator delete(endptr);
        v48 = (void **)v113;
      }
      goto LABEL_66;
    }
    if ( *v90 >= 0 )
    {
      v93 = v90;
      while ( v92 != (unsigned __int8 *)++v93 )
      {
        if ( *v93 < 0 )
          goto LABEL_170;
      }
      goto LABEL_172;
    }
LABEL_170:
    src = v90;
    v94 = sub_22189B0((unsigned __int8 **)&src, v92);
    v48 = (void **)v113;
    if ( v94 )
    {
LABEL_171:
      v90 = endptr;
      v91 = *(_QWORD *)v119;
      goto LABEL_172;
    }
    sub_222A8E0(&src, (unsigned __int8 *)endptr, *(unsigned __int64 *)v119);
    v107 = (__m128i *)endptr;
    v48 = (void **)v113;
    v108 = endptr;
    if ( src == v122 )
    {
      v111 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *endptr = v122[0].m128i_i8[0];
          v108 = endptr;
          v111 = n;
        }
        else
        {
          memcpy(endptr, src, n);
          v108 = endptr;
          v111 = n;
          v48 = (void **)v113;
        }
      }
      *(_QWORD *)v119 = v111;
      v108[v111] = 0;
      v107 = (__m128i *)src;
      goto LABEL_218;
    }
    v113 = (char *)v122[0].m128i_i64[0];
    if ( endptr == &v119[8] )
    {
      endptr = (char *)src;
      *(__m128 *)v119 = _mm_loadh_ps((const double *)&v113);
    }
    else
    {
      v109 = _mm_loadh_ps((const double *)&v113);
      v110 = *(_QWORD *)&v119[8];
      endptr = (char *)src;
      *(__m128 *)v119 = v109;
      if ( v107 )
      {
        src = v107;
        v122[0].m128i_i64[0] = v110;
        goto LABEL_218;
      }
    }
    v107 = v122;
    src = v122;
LABEL_218:
    n = 0;
    v107->m128i_i8[0] = 0;
    if ( src != v122 )
    {
      v113 = (char *)v48;
      operator delete(src);
      v48 = (void **)v113;
    }
    goto LABEL_171;
  }
  if ( (_BYTE)v11 == 116 )
  {
    LOBYTE(v124[0]) = 1;
    LOWORD(nptr) = 1;
    sub_222B2A0(a2);
    sub_2229580((__int64)a2, (unsigned __int16 *)&nptr);
    sub_222B2A0(v83);
    v84 = (_BYTE *)a1[4];
    v85 = (_BYTE *)a1[3];
    if ( v84 == v85 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (true?)");
    a1[3] = (__int64)(v85 + 1);
    if ( *v85 != 114 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (true?)");
    if ( v84 == v85 + 1 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (true?)");
    a1[3] = (__int64)(v85 + 2);
    if ( v85[1] != 117 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (true?)");
    if ( v84 == v85 + 2 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (true?)");
    a1[3] = (__int64)(v85 + 3);
    if ( v85[2] != 101 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (true?)");
    return 1;
  }
  if ( (_BYTE)v11 != 123 )
  {
    if ( (_BYTE)v11 != 110 )
    {
LABEL_13:
      if ( (unsigned __int8)(v11 - 43) > 0x3Au )
        return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value");
      v12 = 0x400000004007FEDLL;
      if ( !_bittest64(&v12, (unsigned int)(v11 - 43)) )
        return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value");
      LOBYTE(v125[0]) = v11;
      v13 = 1;
      v14 = 24;
      v15 = 0x400000004007FE1LL;
      nptr = (char *)v125;
      *(__m128i *)v124 = _mm_load_si128((const __m128i *)&xmmword_23ABB00);
      if ( v4 != v10 )
      {
        do
        {
          v16 = *v10;
          if ( (unsigned __int8)(v16 - 43) > 0x3Au
            || !_bittest64(&v15, (unsigned int)(v16 - 43)) && (unsigned __int8)(v16 - 45) > 1u )
          {
            break;
          }
          a1[3] = (__int64)(v10 + 1);
          v17 = *v10;
          if ( v13 + 1 > v14 )
          {
            LOBYTE(v113) = *v10;
            sub_2236E10(&nptr, v125, v13 + 1, 1);
            v13 = v124[0];
            v15 = 0x400000004007FE1LL;
            v17 = (char)v113;
          }
          nptr[v13] = v17;
          v18 = (unsigned __int8 *)a1[4];
          v14 = v124[1];
          v13 = v124[0] + 1;
          v10 = (unsigned __int8 *)a1[3];
          ++v124[0];
        }
        while ( v18 != v10 );
      }
      v113 = (char *)__errno_location();
      *(_DWORD *)v113 = 0;
      if ( v13 + 1 > v14 )
      {
        sub_2236E10(&nptr, v125, v13 + 1, 1);
        v13 = v124[0];
      }
      nptr[v13] = 0;
      v19 = strtoll(nptr, &endptr, 10);
      v20 = &nptr[v124[0]];
      if ( &nptr[v124[0]] == endptr && *(_DWORD *)v113 != 34 )
      {
        LOWORD(src) = 3;
        goto LABEL_157;
      }
      v21 = v124[0] + 1;
      v22 = v124[1];
      if ( (_BYTE)v11 != 45 )
      {
        *(_DWORD *)v113 = 0;
        if ( v21 > v22 )
        {
          sub_2236E10(&nptr, v125, v21, 1);
          v20 = &nptr[v124[0]];
        }
        *v20 = 0;
        v19 = strtoull(nptr, &endptr, 10);
        v20 = &nptr[v124[0]];
        if ( &nptr[v124[0]] == endptr && *(_DWORD *)v113 != 34 )
        {
          LOWORD(src) = 4;
LABEL_157:
          n = v19;
          v23 = 1;
          sub_222B2A0(a2);
          sub_2229580((__int64)a2, (unsigned __int16 *)&src);
          sub_222B2A0(v89);
          v26 = nptr;
LABEL_33:
          if ( v26 != (char *)v125 )
            free(v26);
          return v23;
        }
        v22 = v124[1];
        v21 = v124[0] + 1;
      }
      if ( v22 < v21 )
      {
        sub_2236E10(&nptr, v125, v21, 1);
        v20 = &nptr[v124[0]];
      }
      *v20 = 0;
      v23 = 1;
      v24 = strtod(nptr, &endptr);
      LOWORD(src) = 2;
      n = *(_QWORD *)&v24;
      sub_222B2A0(a2);
      sub_2229580((__int64)a2, (unsigned __int16 *)&src);
      sub_222B2A0(v25);
      v26 = nptr;
      if ( endptr != &nptr[v124[0]] )
      {
        v27 = sub_22286E0(a1, (__int64)"Invalid JSON value (number?)");
        v26 = nptr;
        v23 = v27;
      }
      goto LABEL_33;
    }
    LOWORD(nptr) = 0;
    sub_222B2A0(a2);
    sub_2229580((__int64)a2, (unsigned __int16 *)&nptr);
    sub_222B2A0(v44);
    v45 = (_BYTE *)a1[4];
    v46 = (_BYTE *)a1[3];
    if ( v45 == v46 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (null?)");
    a1[3] = (__int64)(v46 + 1);
    if ( *v46 != 117 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (null?)");
    if ( v45 == v46 + 1 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (null?)");
    a1[3] = (__int64)(v46 + 2);
    if ( v46[1] != 108 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (null?)");
    if ( v45 == v46 + 2 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (null?)");
    a1[3] = (__int64)(v46 + 3);
    if ( v46[2] != 108 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Invalid JSON value (null?)");
    return 1;
  }
  LOWORD(nptr) = 7;
  src = nullptr;
  n = 0;
  v122[0].m128i_i64[0] = 0;
  v124[0] = 0;
  v124[1] = 0;
  LODWORD(v125[0]) = 0;
  sub_222B2A0(a2);
  sub_2229580((__int64)a2, (unsigned __int16 *)&nptr);
  sub_222B2A0((__int16 *)&nptr);
  sub_222B0E0((__int64 *)&src);
  operator delete(src, (unsigned __int64)v122[0].m128i_u32[0] << 6, 8);
  v50 = nullptr;
  if ( *a2 == 7 )
    v50 = (__int64 *)(a2 + 4);
  v51 = (unsigned __int8 *)a1[4];
  v32 = (unsigned __int8 *)a1[3];
  v114 = v50;
  if ( v51 == v32 )
    return (unsigned int)sub_22286E0(a1, (__int64)"Expected object key");
  v52 = *v32;
  if ( (unsigned __int8)v52 > 0x20u )
  {
LABEL_72:
    if ( (_BYTE)v52 != 125 )
      goto LABEL_73;
LABEL_160:
    a1[3] = (__int64)(v32 + 1);
    return 1;
  }
  v86 = 0x100002600LL;
  if ( _bittest64(&v86, v52) )
  {
    v87 = v32 + 1;
    do
    {
      v32 = v87;
      a1[3] = (__int64)v87;
      if ( v51 == v87 )
        return (unsigned int)sub_22286E0(a1, (__int64)"Expected object key");
      v52 = *v87;
      if ( (unsigned __int8)v52 > 0x20u )
        goto LABEL_72;
      ++v87;
    }
    while ( _bittest64(&v86, v52) );
  }
LABEL_73:
  a1[3] = (__int64)(v32 + 1);
  if ( *v32 != 34 )
    return (unsigned int)sub_22286E0(a1, (__int64)"Expected object key");
  v53 = 0x100002600LL;
  v113 = &v119[8];
  v115 = &v116;
  while ( 1 )
  {
    v119[8] = 0;
    *(_QWORD *)v119 = 0;
    endptr = v113;
    if ( !(unsigned __int8)sub_222A0A0(a1, (char *)&endptr) )
    {
LABEL_220:
      v23 = 0;
      goto LABEL_131;
    }
    v54 = (unsigned __int8 *)a1[4];
    v55 = (unsigned __int8 *)a1[3];
    if ( v54 == v55 )
      goto LABEL_130;
    v56 = *v55;
    if ( (unsigned __int8)v56 <= 0x20u )
    {
      if ( _bittest64(&v53, v56) )
        break;
    }
LABEL_83:
    a1[3] = (__int64)(v55 + 1);
    if ( *v55 != 58 )
      goto LABEL_130;
    if ( v54 != v55 + 1 )
    {
      v59 = v55[1];
      if ( (unsigned __int8)v59 <= 0x20u )
      {
        if ( _bittest64(&v53, v59) )
        {
          v60 = v55 + 2;
          do
          {
            a1[3] = (__int64)v60;
            if ( v54 == v60 )
              break;
            v61 = *v60;
            if ( (unsigned __int8)v61 > 0x20u )
              break;
            ++v60;
          }
          while ( _bittest64(&v53, v61) );
        }
      }
    }
    src = v122;
    if ( endptr == v113 )
    {
      v122[0] = _mm_load_si128((const __m128i *)&v119[8]);
    }
    else
    {
      src = endptr;
      v122[0].m128i_i64[0] = *(_QWORD *)&v119[8];
    }
    v62 = *(_QWORD *)v119;
    v119[8] = 0;
    *(_QWORD *)v119 = 0;
    n = v62;
    endptr = v113;
    v63 = (__m128i *)operator new(0x20u);
    v64 = (__m128i *)src;
    v63->m128i_i64[0] = (__int64)v63[1].m128i_i64;
    if ( v64 == v122 )
    {
      v64 = v63 + 1;
      v63[1] = _mm_load_si128(v122);
    }
    else
    {
      v65 = v122[0].m128i_i64[0];
      v63->m128i_i64[0] = (__int64)v64;
      v63[1].m128i_i64[0] = v65;
    }
    v66 = n;
    v122[0].m128i_i8[0] = 0;
    src = v122;
    v67 = &v64->m128i_u8[n];
    v63->m128i_i64[1] = n;
    n = 0;
    v116 = v63;
    v117 = 0u;
    if ( v64 != (__m128i *)v67 )
    {
      if ( v64->m128i_i8[0] < 0 )
      {
LABEL_100:
        nptr = (char *)v64;
        if ( (unsigned __int8)sub_22189B0((unsigned __int8 **)&nptr, v67) )
        {
LABEL_101:
          v64 = *(__m128i **)v116;
          v66 = *((_QWORD *)v116 + 1);
          goto LABEL_102;
        }
        sub_222A8E0(&nptr, *(unsigned __int8 **)v116, *((_QWORD *)v116 + 1));
        v103 = v116;
        v104 = *(char **)v116;
        v105 = *(unsigned __int8 **)v116;
        if ( nptr == (char *)&v124[1] )
        {
          v112 = v124[0];
          if ( v124[0] )
          {
            if ( v124[0] == 1 )
              *v105 = v124[1];
            else
              memcpy(v105, nptr, v124[0]);
            v105 = *(unsigned __int8 **)v103;
            v112 = v124[0];
          }
          *((_QWORD *)v103 + 1) = v112;
          v105[v112] = 0;
          v104 = nptr;
          goto LABEL_210;
        }
        if ( v104 == (char *)v116 + 16 )
        {
          *(_QWORD *)v116 = nptr;
          *((_QWORD *)v103 + 1) = v124[0];
          *((_QWORD *)v103 + 2) = v124[1];
        }
        else
        {
          *(_QWORD *)v116 = nptr;
          v106 = *((_QWORD *)v103 + 2);
          *((_QWORD *)v103 + 1) = v124[0];
          *((_QWORD *)v103 + 2) = v124[1];
          if ( v104 )
          {
            nptr = v104;
            v124[1] = v106;
            goto LABEL_210;
          }
        }
        v104 = (char *)&v124[1];
        nptr = (char *)&v124[1];
LABEL_210:
        v124[0] = 0;
        *v104 = 0;
        if ( nptr != (char *)&v124[1] )
          operator delete(nptr);
        goto LABEL_101;
      }
      v68 = (char *)v64;
      while ( v67 != (unsigned __int8 *)++v68 )
      {
        if ( *v68 < 0 )
          goto LABEL_100;
      }
    }
LABEL_102:
    v117.m128i_i64[1] = v66;
    v117.m128i_i64[0] = (__int64)v64;
    if ( (unsigned __int8)sub_E5E370(v114, (__int64)v115, &nptr) )
    {
      v73 = nptr;
    }
    else
    {
      v97 = (void ***)sub_100D5B0((__int64)v114, (__int64)v115, (__int64)nptr, v70, v71, v72);
      v69 = (void **)v116;
      v116 = nullptr;
      v98 = *v97;
      v73 = (char *)v97;
      *v97 = v69;
      if ( v98 )
        sub_22287B0(v98);
      v99 = _mm_loadu_si128(&v117);
      *((_WORD *)v73 + 12) = 0;
      *(__m128i *)(v73 + 8) = v99;
    }
    v23 = sub_222CE40(a1, v73 + 24, v69, v70);
    if ( v116 )
      sub_22287B0((void **)v116);
    if ( src != v122 )
      operator delete(src);
    if ( !(_BYTE)v23 )
      goto LABEL_220;
    v74 = (unsigned __int8 *)a1[4];
    v75 = (unsigned __int8 *)a1[3];
    if ( v74 == v75 )
      goto LABEL_117;
    v76 = *v75;
    if ( (unsigned __int8)v76 <= 0x20u && _bittest64(&v53, v76) )
    {
      v77 = v75 + 1;
      while ( 1 )
      {
        v75 = v77;
        a1[3] = (__int64)v77;
        if ( v74 == v77 )
          break;
        v78 = *v77;
        if ( (unsigned __int8)v78 <= 0x20u )
        {
          ++v77;
          if ( _bittest64(&v53, v78) )
            continue;
        }
        goto LABEL_115;
      }
LABEL_117:
      v23 = sub_22286E0(a1, (__int64)"Expected , or } after object property");
      goto LABEL_131;
    }
LABEL_115:
    v79 = v75 + 1;
    a1[3] = (__int64)(v75 + 1);
    if ( *v75 != 44 )
    {
      if ( *v75 == 125 )
        goto LABEL_131;
      goto LABEL_117;
    }
    if ( v74 == v79 )
    {
      v88 = endptr;
      if ( endptr == v113 )
        return (unsigned int)sub_22286E0(a1, (__int64)"Expected object key");
LABEL_200:
      operator delete(v88);
      v74 = (unsigned __int8 *)a1[4];
      v79 = (unsigned __int8 *)a1[3];
LABEL_201:
      if ( v74 == v79 )
        return (unsigned int)sub_22286E0(a1, (__int64)"Expected object key");
      goto LABEL_202;
    }
    v100 = v75[1];
    if ( (unsigned __int8)v100 <= 0x20u && _bittest64(&v53, v100) )
    {
      v101 = v75 + 2;
      do
      {
        v79 = v101;
        a1[3] = (__int64)v101;
        if ( v74 == v101 )
          break;
        v102 = *v101;
        if ( (unsigned __int8)v102 > 0x20u )
          break;
        ++v101;
      }
      while ( _bittest64(&v53, v102) );
      v88 = endptr;
      if ( endptr != v113 )
        goto LABEL_200;
      goto LABEL_201;
    }
    v88 = endptr;
    if ( endptr != v113 )
      goto LABEL_200;
LABEL_202:
    a1[3] = (__int64)(v79 + 1);
    if ( *v79 != 34 )
      return (unsigned int)sub_22286E0(a1, (__int64)"Expected object key");
  }
  v57 = v55 + 1;
  while ( 1 )
  {
    v55 = v57;
    a1[3] = (__int64)v57;
    if ( v54 == v57 )
      break;
    v58 = *v57;
    if ( (unsigned __int8)v58 <= 0x20u )
    {
      ++v57;
      if ( _bittest64(&v53, v58) )
        continue;
    }
    goto LABEL_83;
  }
LABEL_130:
  v23 = sub_22286E0(a1, (__int64)"Expected : after object key");
LABEL_131:
  v49 = endptr;
  if ( endptr != &v119[8] )
    goto LABEL_67;
  return v23;
}
