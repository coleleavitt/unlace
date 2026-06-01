__int64 __fastcall sub_1A48AA0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // r14d
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // eax
  size_t v21; // rdx
  bool v22; // zf
  __int64 *v23; // r13
  int v24; // r14d
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rax
  unsigned int v28; // ebp
  size_t v29; // rdi
  __int64 *v30; // rax
  unsigned __int64 v31; // rbx
  __int64 *v32; // rax
  char v33; // cl
  __int64 v34; // rax
  char v35; // bl
  __int64 v36; // rdi
  __int64 *v37; // rbp
  unsigned __int64 v38; // rdi
  __int64 v39; // rcx
  char v40; // al
  unsigned __int64 v41; // rbp
  _QWORD *v42; // rbx
  int v43; // edx
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int8 v49; // cl
  bool v50; // r12
  unsigned int v51; // eax
  __int64 v52; // r14
  __int64 v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // edx
  __int64 v60; // rbp
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // eax
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r14
  __int64 v74; // rdx
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __m128 *v79; // rdi
  __m128 *v80; // r8
  __m128 *i; // r9
  __m128 *v82; // rcx
  __m128i *v83; // rax
  unsigned int v84; // eax
  __int64 v85; // r14
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // rax
  __m128 *v96; // r14
  __int64 v97; // rbx
  unsigned __int64 v98; // rax
  __int64 *v99; // r12
  __int64 *v100; // rbx
  __int64 *v101; // rbp
  __m128i *v102; // rax
  __m128 *v103; // rbp
  __m128 *v104; // r12
  __int64 *v105; // rbx
  unsigned __int64 v106; // r14
  __m128i *v107; // rax
  __int64 *v108; // rbx
  __m128i *v109; // rax
  int v110; // edx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 *v114; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 *v115; // [rsp+20h] [rbp-1A8h]
  __m128 *v116; // [rsp+28h] [rbp-1A0h] BYREF
  char v117; // [rsp+37h] [rbp-191h]
  int v118; // [rsp+38h] [rbp-190h]
  unsigned int v119; // [rsp+3Ch] [rbp-18Ch]
  __m128 *v120; // [rsp+40h] [rbp-188h]
  unsigned __int64 v121; // [rsp+48h] [rbp-180h]
  int v122; // [rsp+50h] [rbp-178h]
  int v123; // [rsp+54h] [rbp-174h]
  __int64 *v124; // [rsp+58h] [rbp-170h]
  __m128 *v125; // [rsp+60h] [rbp-168h]
  unsigned __int64 v126; // [rsp+68h] [rbp-160h]
  __int64 v127; // [rsp+70h] [rbp-158h] BYREF
  char v128; // [rsp+78h] [rbp-150h] BYREF
  __int64 *v129; // [rsp+80h] [rbp-148h] BYREF
  char v130; // [rsp+90h] [rbp-138h]
  __int64 v131; // [rsp+A0h] [rbp-128h] BYREF
  void *ptr; // [rsp+A8h] [rbp-120h]
  __int64 v133; // [rsp+B0h] [rbp-118h]
  _BYTE v134[128]; // [rsp+B8h] [rbp-110h] BYREF
  void *v135[2]; // [rsp+138h] [rbp-90h] BYREF
  int v136; // [rsp+148h] [rbp-80h]
  char v137; // [rsp+14Ch] [rbp-7Ch]
  char v138; // [rsp+150h] [rbp-78h] BYREF

  v9 = *(_QWORD *)(a2 + 120);
  v10 = *(_DWORD *)(a2 + 152);
  v114 = a3;
  v11 = v9 & 7;
  v118 = v10;
  if ( v11 == 7 )
    goto LABEL_12;
  if ( v11 >= 3 )
  {
    if ( v11 > 4 )
    {
      if ( v11 != 6 )
        goto LABEL_10;
      if ( *(_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL) != 15 || !v114 )
        goto LABEL_12;
    }
    else if ( !v114 )
    {
      goto LABEL_10;
    }
    v12 = v114;
    do
    {
      if ( *((char *)v12 + 8) >= 0 )
      {
        v13 = v12[45];
        if ( v13 )
          sub_1A3D950(a1, v9, *(unsigned int *)(a2 + 128), v13, a7, a8, a4, a5);
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 );
  }
LABEL_10:
  if ( v11 == 5
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    *(_DWORD *)a2 = 1;
    return 0;
  }
LABEL_12:
  v14 = (__int64 *)v9;
  v15 = sub_15C1650(a1 + 2608, v9);
  v18 = *(_DWORD *)(a2 + 156);
  v131 = a1;
  v127 = v15;
  ptr = v134;
  v19 = v18;
  v133 = 0x800000000LL;
  BYTE1(v19) = BYTE1(v18) | 8;
  v135[0] = &v138;
  v119 = v18 & 0x800;
  v20 = v18;
  BYTE1(v20) = BYTE1(v18) & 0xF7;
  v21 = v18 & 0x420;
  v135[1] = byte_8;
  if ( (_DWORD)v21 )
    v20 = v19;
  v22 = v114 == nullptr;
  v136 = 0;
  v137 = 1;
  *(_DWORD *)(a2 + 156) = v20;
  if ( v22 )
  {
    v33 = 1;
    v26 = 0;
    goto LABEL_125;
  }
  v117 = 0;
  v23 = v114;
  v115 = &v127;
  v121 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  LOBYTE(v116) = 0;
  v120 = (__m128 *)&v129;
  v122 = v9 & 7;
  v24 = v118;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( *((char *)v23 + 8) >= 0 )
      {
        v25 = v23[45];
        if ( v25 )
        {
          LOBYTE(v19) = (*(_BYTE *)(v25 + 8) & 0x7F) == 24 || (*(_BYTE *)(v25 + 8) & 0x7F) == 0;
          if ( (_BYTE)v19 )
          {
            v26 = v19;
            if ( v118 == 3 )
              goto LABEL_72;
            if ( !(_BYTE)v116 )
            {
              v14 = v114;
              sub_1A46980((__int64)&v131, v114, (__int64)v23, v19, (__int64)v16, v17);
              v96 = (__m128 *)ptr;
              v97 = 16LL * (unsigned int)v133;
              v16 = (__int64 *)((char *)ptr + v97);
              if ( ptr != (char *)ptr + v97 )
              {
                v14 = (__int64 *)((char *)ptr + v97);
                v114 = (__int64 *)((char *)ptr + v97);
                _BitScanReverse64(&v98, v97 >> 4);
                sub_1A38290((__m128i *)ptr, (__m128i *)((char *)ptr + v97), 2LL * (int)(63 - (v98 ^ 0x3F)));
                v19 = (unsigned __int64)&v96[1];
                v16 = v114;
                if ( (unsigned __int64)v97 > 0x100 )
                {
                  LOBYTE(v116) = v26;
                  v103 = v96;
                  v115 = v114;
                  v104 = v96 + 16;
                  do
                  {
                    v105 = *(__int64 **)(v19 + 8);
                    v106 = v19 + 16;
                    v114 = *(__int64 **)v19;
                    if ( (unsigned __int64)v105 < v103->m128_u64[1] )
                    {
                      v21 = v19 - (_QWORD)v103;
                      if ( (__int64)(v19 - (_QWORD)v103) > 0 )
                      {
                        v14 = (__int64 *)(v19 - 16 * ((__int64)(v19 - (_QWORD)v103) >> 4));
                        memmove((void *)(v106 - 16 * ((__int64)(v19 - (_QWORD)v103) >> 4)), v14, v21);
                      }
                      v114 = v105;
                      *v103 = _mm_loadh_ps((const double *)&v114);
                    }
                    else
                    {
                      v107 = (__m128i *)(v19 - 16);
                      if ( *(_QWORD *)(v19 - 8) > (unsigned __int64)v105 )
                      {
                        while ( 1 )
                        {
                          v21 = (size_t)&v107[-1];
                          v107[1] = _mm_loadu_si128(v107);
                          if ( (unsigned __int64)v105 >= v107[-1].m128i_i64[1] )
                            break;
                          --v107;
                        }
                      }
                      else
                      {
                        v107 = (__m128i *)v19;
                      }
                      v114 = v105;
                      *(__m128 *)v107 = _mm_loadh_ps((const double *)&v114);
                    }
                    v19 = v106;
                  }
                  while ( v104 != (__m128 *)v106 );
                  v16 = v115;
                  v108 = (__int64 *)v104;
                  v26 = (unsigned __int8)v116;
                  if ( v115 != v108 )
                  {
                    do
                    {
                      v19 = v108[1];
                      v109 = (__m128i *)(v108 - 2);
                      if ( v19 < *(v108 - 1) )
                      {
                        while ( 1 )
                        {
                          v21 = (size_t)&v109[-1];
                          v109[1] = _mm_loadu_si128(v109);
                          if ( v19 >= v109[-1].m128i_i64[1] )
                            break;
                          --v109;
                        }
                      }
                      else
                      {
                        v109 = (__m128i *)v108;
                      }
                      v114 = (__int64 *)v19;
                      v108 += 2;
                      *(__m128 *)v109 = _mm_loadh_ps((const double *)&v114);
                    }
                    while ( v16 != v108 );
                  }
                }
                else if ( v114 != (__int64 *)v19 )
                {
                  LOBYTE(v115) = v26;
                  v99 = v114;
                  do
                  {
                    v100 = *(__int64 **)(v19 + 8);
                    v101 = (__int64 *)(v19 + 16);
                    v114 = *(__int64 **)v19;
                    if ( (unsigned __int64)v100 < v96->m128_u64[1] )
                    {
                      v21 = v19 - (_QWORD)v96;
                      if ( (__int64)(v19 - (_QWORD)v96) > 0 )
                      {
                        v14 = (__int64 *)(v19 - 16 * ((__int64)(v19 - (_QWORD)v96) >> 4));
                        memmove(&v101[-2 * ((__int64)(v19 - (_QWORD)v96) >> 4)], v14, v21);
                      }
                      v114 = v100;
                      *v96 = _mm_loadh_ps((const double *)&v114);
                    }
                    else
                    {
                      v102 = (__m128i *)(v19 - 16);
                      if ( *(_QWORD *)(v19 - 8) > (unsigned __int64)v100 )
                      {
                        while ( 1 )
                        {
                          v21 = (size_t)&v102[-1];
                          v102[1] = _mm_loadu_si128(v102);
                          if ( (unsigned __int64)v100 >= v102[-1].m128i_i64[1] )
                            break;
                          --v102;
                        }
                      }
                      else
                      {
                        v102 = (__m128i *)v19;
                      }
                      v114 = v100;
                      *(__m128 *)v102 = _mm_loadh_ps((const double *)&v114);
                    }
                    v19 = (unsigned __int64)v101;
                  }
                  while ( v99 != v101 );
                  v26 = (unsigned __int8)v115;
                }
              }
            }
            if ( !*(_BYTE *)(a2 + 160) )
            {
              v84 = *(_DWORD *)(a2 + 156);
              v16 = (__int64 *)v119;
              v21 = v84;
              BYTE1(v84) |= 8u;
              BYTE1(v21) &= ~8u;
              if ( !v119 )
                v84 = v21;
              *(_DWORD *)(a2 + 156) = v84;
            }
            v114 = &v127;
            while ( 1 )
            {
              v27 = v127;
              if ( v127 )
                break;
              v31 = v23[45];
              v32 = (__int64 *)*v23;
              if ( v31 )
              {
                if ( !v32 )
                  goto LABEL_150;
                LOBYTE(v28) = 0;
                goto LABEL_111;
              }
LABEL_40:
              v23 = v32;
LABEL_41:
              if ( !v23 )
              {
                v20 = *(_DWORD *)(a2 + 156);
                v33 = v137;
                LOBYTE(v26) = *(_DWORD *)(a2 + 16) != 0;
                goto LABEL_125;
              }
            }
            v28 = 0;
            while ( 1 )
            {
              v14 = (__int64 *)v27;
              v19 = v27 & 1;
              if ( (v27 & 1) != 0 )
                v14 = *(__int64 **)(v27 & 0xFFFFFFFFFFFFFFFELL);
              if ( *((_BYTE *)v23 + 100) )
              {
                v21 = v23[10];
                v29 = v21 + 8LL * *((unsigned int *)v23 + 23);
                if ( v21 == v29 )
                  goto LABEL_38;
                while ( v14 != *(__int64 **)v21 )
                {
                  v21 += 8LL;
                  if ( v29 == v21 )
                    goto LABEL_38;
                }
              }
              else
              {
                if ( !sub_2236570(v23 + 10, v14) )
                  goto LABEL_38;
                v27 = v127;
                v19 = v127 & 1;
              }
              v14 = (__int64 *)v27;
              if ( v19 )
                v14 = *(__int64 **)(v27 & 0xFFFFFFFFFFFFFFFELL);
              v30 = sub_1A47770(a2, (__int64)v14, v21, v19, (__int64)v16, v17);
              if ( v30 )
              {
                v28 = v26;
                v129 = (__int64 *)((unsigned __int64)v30 | (*((_BYTE *)v30 + 29) >> 5) & 3);
                v14 = v129;
                sub_1743080(a2 + 8, (__int64)v129);
                *(_DWORD *)a2 = 2;
              }
              if ( (v127 & 1) == 0 )
                break;
              sub_15C20B0(v114);
              v27 = v127;
              if ( !v127 )
              {
                if ( (_BYTE)v28 )
                  goto LABEL_106;
LABEL_39:
                v31 = v23[45];
                v32 = (__int64 *)*v23;
                if ( !v31 )
                  goto LABEL_40;
                if ( !v32 )
                  goto LABEL_150;
LABEL_111:
                while ( 1 )
                {
                  v52 = v32[45];
                  if ( v52 )
                    break;
                  v32 = (__int64 *)*v32;
                  if ( !v32 )
                  {
                    if ( (_BYTE)v28 )
                      goto LABEL_121;
LABEL_150:
                    while ( 1 )
                    {
                      if ( !sub_B8E490(v31) )
                      {
                        v14 = (__int64 *)a2;
                        if ( (unsigned __int8)sub_1A5B730(a1, a2, v31, &v131) )
                          goto LABEL_124;
                        if ( *(_BYTE *)(a2 + 160) && !sub_B8E490(v31) )
                          goto LABEL_72;
                      }
                      v31 = sub_B8ED10(v31);
                      if ( !v31 )
                        goto LABEL_119;
                    }
                  }
                }
                if ( (_BYTE)v28 )
                {
                  while ( 1 )
                  {
                    v53 = sub_B91570(v31, (__int64)v14, v21, v19, (__int64)v16, v17);
                    if ( v53 == sub_B91570(v52, (__int64)v14, v54, v55, v56, v57) )
                      break;
                    if ( !sub_B8E490(v31) )
                      goto LABEL_122;
                    v31 = sub_B8ED10(v31);
                    if ( !v31 )
                      goto LABEL_119;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v60 = sub_B91570(v31, (__int64)v14, v21, v19, (__int64)v16, v17);
                    if ( sub_B91570(v52, (__int64)v14, v61, v62, v63, v64) == v60 )
                      break;
                    if ( !sub_B8E490(v31) )
                    {
                      v14 = (__int64 *)a2;
                      if ( (unsigned __int8)sub_1A5B730(a1, a2, v31, &v131) )
                        goto LABEL_124;
                      if ( *(_BYTE *)(a2 + 160) && !sub_B8E490(v31) )
                        goto LABEL_72;
                    }
                    v31 = sub_B8ED10(v31);
                    if ( !v31 )
                      goto LABEL_119;
                  }
                }
                if ( *(_BYTE *)(a2 + 160) && !sub_B8E490(v31) )
                  goto LABEL_72;
LABEL_119:
                v23 = (__int64 *)*v23;
                goto LABEL_41;
              }
            }
            v127 = 0;
LABEL_38:
            if ( !(_BYTE)v28 )
              goto LABEL_39;
LABEL_106:
            if ( *((char *)v23 + 8) < 0 )
            {
              v26 = v28;
              sub_1A43500(a2);
              v20 = *(_DWORD *)(a2 + 156);
              v33 = v137;
            }
            else
            {
              v31 = v23[45];
              v32 = (__int64 *)*v23;
              if ( !v31 )
                goto LABEL_40;
              if ( v32 )
                goto LABEL_111;
LABEL_121:
              while ( sub_B8E490(v31) )
              {
                v31 = sub_B8ED10(v31);
                if ( !v31 )
                  goto LABEL_119;
              }
LABEL_122:
              if ( *((char *)v23 + 8) >= 0 )
                sub_1A5B730(a1, a2, v31, &v131);
LABEL_124:
              sub_1A43500(a2);
              v20 = *(_DWORD *)(a2 + 156);
              v33 = v137;
            }
            goto LABEL_125;
          }
        }
      }
      v34 = v127;
      if ( !v127 )
        goto LABEL_69;
      v35 = 1;
      while ( 1 )
      {
        v14 = (__int64 *)v34;
        v36 = v34 & 1;
        if ( (v34 & 1) != 0 )
          v14 = *(__int64 **)(v34 & 0xFFFFFFFFFFFFFFFELL);
        if ( *((_BYTE *)v23 + 100) )
        {
          v21 = v23[10];
          v19 = v21 + 8LL * *((unsigned int *)v23 + 23);
          if ( v21 == v19 )
            goto LABEL_68;
          while ( v14 != *(__int64 **)v21 )
          {
            v21 += 8LL;
            if ( v19 == v21 )
              goto LABEL_68;
          }
        }
        else
        {
          if ( !sub_2236570(v23 + 10, v14) )
            goto LABEL_68;
          v34 = v127;
          v36 = v127 & 1;
        }
        v14 = (__int64 *)v34;
        if ( v36 )
          v14 = *(__int64 **)(v34 & 0xFFFFFFFFFFFFFFFELL);
        v37 = sub_1A47770(a2, (__int64)v14, v21, v19, (__int64)v16, v17);
        if ( v37 )
          break;
LABEL_66:
        if ( (v127 & 1) == 0 )
          goto LABEL_67;
LABEL_96:
        sub_15C20B0(v115);
        v34 = v127;
        if ( !v127 )
          goto LABEL_68;
      }
      if ( v24 != 9 )
        goto LABEL_64;
      v38 = v127;
      v14 = (__int64 *)v127;
      v39 = v127 & 1;
      if ( (v127 & 1) != 0 )
        v14 = *(__int64 **)(v127 & 0xFFFFFFFFFFFFFFFELL);
      v40 = *((_BYTE *)v14 + 28) & 0x7F;
      if ( ((v40 + 61) & 0x7Fu) <= 1 || v40 == 47 )
      {
LABEL_64:
        v35 = 0;
LABEL_65:
        v129 = (__int64 *)((unsigned __int64)v37 | (*((_BYTE *)v37 + 29) >> 5) & 3);
        v14 = v129;
        sub_1743080(a2 + 8, (__int64)v129);
        *(_DWORD *)a2 = 2;
        goto LABEL_66;
      }
      if ( !v117 )
      {
        if ( sub_A5F460((__int64)(v114 + 10), (__int64)v14) )
          goto LABEL_65;
        v38 = v127;
        v39 = v127 & 1;
      }
      if ( v39 )
        v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFELL);
      v117 = sub_B843B0((_BYTE *)v38);
      if ( v117 )
        goto LABEL_65;
      *(_BYTE *)(a2 + 166) = 1;
      v117 = 1;
      if ( (v127 & 1) != 0 )
        goto LABEL_96;
LABEL_67:
      v127 = 0;
LABEL_68:
      if ( !v35 )
      {
        v26 = 1;
        sub_1A43500(a2);
        v110 = *((_DWORD *)v23 + 2);
        v20 = *(_DWORD *)(a2 + 156);
        v33 = v137;
        if ( (v110 & 0x20) != 0 && (v110 & 0x80) == 0 )
        {
          v111 = v23[45];
          if ( v111 )
          {
            if ( (*(_BYTE *)(v111 + 8) & 0x7Fu) - 59 <= 2 )
            {
              v112 = v111 - 64;
              if ( v112 )
                *(_QWORD *)(a2 + 96) = v112;
            }
          }
        }
        goto LABEL_125;
      }
LABEL_69:
      if ( v24 == 10 && (v23[1] & 0x20) == 0 )
        goto LABEL_72;
      v41 = v23[45];
      v42 = (_QWORD *)*v23;
      if ( !v41 )
      {
        v23 = (__int64 *)*v23;
        if ( !v42 )
          goto LABEL_72;
        continue;
      }
      break;
    }
    while ( v42 )
    {
      if ( v42[45] )
      {
        v42 = (_QWORD *)v42[45];
        break;
      }
      v42 = (_QWORD *)*v42;
    }
    v123 = v24;
    v124 = (__int64 *)&v128;
    while ( 2 )
    {
      if ( !v42
        || (v44 = sub_B91570(v41, (__int64)v14, v21, v19, (__int64)v16, v17),
            v44 != sub_B91570((__int64)v42, (__int64)v14, v45, v46, v47, v48)) )
      {
        if ( !sub_B8E490(v41) )
        {
          v49 = *(_BYTE *)(v41 + 8) & 0x7F;
          if ( v49 <= 0x12u )
          {
            v43 = v49;
            if ( ((1LL << v49) & 0x40182) != 0 )
            {
              if ( v49 == 18 && v41 != 48 )
              {
                LOBYTE(v125) = (*(_BYTE *)(v41 + 10) & 2) != 0 && v122 == 0;
                if ( (_BYTE)v125 )
                {
                  v85 = v121;
                  if ( v121 )
                  {
                    v86 = sub_BA85D0(v41 - 48);
                    if ( v86 )
                    {
                      v14 = (__int64 *)v85;
                      v90 = sub_BAE3D0(v86, v85, v124, v87, v88, v89);
                      if ( v90 )
                      {
                        v14 = (__int64 *)v90;
                        v95 = sub_1A47770(a2, v90, v91, v92, v93, v94);
                        if ( v95 )
                        {
                          v26 = (unsigned __int8)v125;
                          v129 = (__int64 *)((unsigned __int64)v95 | (*((_BYTE *)v95 + 29) >> 5) & 3);
                          sub_1743080(a2 + 8, (__int64)v129);
                          *(_DWORD *)a2 = 2;
                          sub_1A43500(a2);
                          v20 = *(_DWORD *)(a2 + 156);
                          v33 = v137;
                          goto LABEL_125;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
LABEL_87:
              v50 = v43 == 0 || v43 == 24;
              if ( v50 )
              {
                if ( !(_BYTE)v116 )
                {
                  v66 = v41;
                  do
                  {
                    while ( 1 )
                    {
                      if ( !sub_B8E490(v66) )
                      {
                        sub_1A3A280(v120, (__int64)v135, v66);
                        if ( v130 )
                          sub_1A45F40((__int64)&v131, v66, v66, v67, v68, v69);
                      }
                      v73 = *(_QWORD *)(sub_B8C1B0(v66) + 16);
                      if ( (v73 & 4) != 0 )
                        break;
                      v66 = v73 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( !v66 )
                        goto LABEL_163;
                    }
                    v66 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
                  }
                  while ( v66 );
LABEL_163:
                  v74 = (__int64)v23;
                  do
                  {
                    if ( *(char *)(v74 + 8) >= 0 )
                    {
                      v75 = *(_QWORD *)(v74 + 360);
                      if ( v75 )
                      {
                        v76 = *(_BYTE *)(v75 + 8) & 0x7F;
                        if ( !v76 || v76 == 24 )
                          break;
                      }
                    }
                    v74 = *(_QWORD *)v74;
                  }
                  while ( v74 );
                  sub_1A46980((__int64)&v131, v114, v74, v70, v71, v72);
                  v77 = 16LL * (unsigned int)v133;
                  if ( ptr != (char *)ptr + v77 )
                  {
                    v126 = 16LL * (unsigned int)v133;
                    v125 = (__m128 *)((char *)ptr + v77);
                    _BitScanReverse64(&v78, v77 >> 4);
                    v116 = (__m128 *)ptr;
                    sub_1A38290((__m128i *)ptr, (__m128i *)((char *)ptr + v77), 2LL * (int)(63 - (v78 ^ 0x3F)));
                    if ( v126 <= 0x100 )
                    {
                      sub_1A38020(v116, v125);
                    }
                    else
                    {
                      v79 = v116;
                      v116 += 16;
                      sub_1A38020(v79, v116);
                      v80 = v116;
                      for ( i = v125; i != v80; *(__m128 *)v83 = _mm_loadh_ps((const double *)&v116) )
                      {
                        v82 = (__m128 *)v80->m128_u64[1];
                        v83 = (__m128i *)&v80[-1];
                        if ( (unsigned __int64)v82 < v80[-1].m128_u64[1] )
                        {
                          while ( 1 )
                          {
                            v83[1] = _mm_loadu_si128(v83);
                            if ( (unsigned __int64)v82 >= v83[-1].m128i_i64[1] )
                              break;
                            --v83;
                          }
                        }
                        else
                        {
                          v83 = (__m128i *)v80;
                        }
                        v116 = v82;
                        ++v80;
                      }
                    }
                  }
                }
                v14 = (__int64 *)a2;
                v51 = sub_1A5B730(a1, a2, v41, &v131);
                if ( (_BYTE)v51 )
                {
                  v26 = v51;
                  sub_1A43500(a2);
                  v20 = *(_DWORD *)(a2 + 156);
                  v33 = v137;
                  goto LABEL_125;
                }
                LOBYTE(v116) = v50;
              }
              else
              {
                v14 = (__int64 *)a2;
                v65 = sub_1A48440(a1, a2, v41, 1u);
                if ( (_BYTE)v65 )
                {
                  v26 = v65;
                  v33 = v137;
                  v20 = *(_DWORD *)(a2 + 156);
                  goto LABEL_125;
                }
              }
            }
          }
          else
          {
            v43 = v49;
            if ( ((v49 + 94) & 0x7Fu) > 5 )
              goto LABEL_87;
          }
        }
        v41 = sub_B8ED10(v41);
        if ( !v41 )
          break;
        continue;
      }
      break;
    }
    v24 = v123;
    v23 = (__int64 *)*v23;
    if ( v23 )
      continue;
    break;
  }
LABEL_72:
  v20 = *(_DWORD *)(a2 + 156);
  v33 = v137;
  v26 = 0;
LABEL_125:
  v58 = v20;
  BYTE1(v20) &= ~8u;
  BYTE1(v58) |= 8u;
  if ( v119 )
    v20 = v58;
  *(_DWORD *)(a2 + 156) = v20;
  if ( !v33 )
    free(v135[0]);
  if ( ptr != v134 )
    free(ptr);
  return v26;
}
