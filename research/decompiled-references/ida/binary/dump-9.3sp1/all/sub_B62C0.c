__int64 __fastcall sub_B62C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  unsigned int *v7; // rbx
  __int64 v9; // rdi
  unsigned int *v10; // r13
  unsigned __int64 v11; // r14
  unsigned int *v12; // r13
  unsigned __int64 v13; // r14
  int v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 *i; // rdi
  int v20; // eax
  unsigned int v21; // ebx
  __int64 j; // rsi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  __int64 v28; // r13
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  char v32; // si
  __int64 *v33; // rcx
  char v34; // r15
  char v35; // al
  bool v36; // zf
  char v37; // r15
  char v38; // al
  unsigned __int64 v39; // r15
  int v40; // eax
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  char v44; // r13
  char v45; // al
  int v46; // eax
  __int64 v47; // r14
  __int64 *v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // r15
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // r15
  unsigned __int64 v62; // r14
  __int64 v63; // rax
  char v64; // r14
  char v65; // al
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rdi
  unsigned __int64 v72; // [rsp+8h] [rbp-268h]
  _DWORD *v73; // [rsp+18h] [rbp-258h]
  _QWORD *v74; // [rsp+20h] [rbp-250h]
  size_t n; // [rsp+30h] [rbp-240h]
  size_t na; // [rsp+30h] [rbp-240h]
  __int64 nb; // [rsp+30h] [rbp-240h]
  __int64 nc; // [rsp+30h] [rbp-240h]
  int v79; // [rsp+44h] [rbp-22Ch]
  __int64 v80; // [rsp+48h] [rbp-228h]
  __int64 v81; // [rsp+50h] [rbp-220h]
  _QWORD *v82; // [rsp+60h] [rbp-210h]
  __int64 *v83; // [rsp+68h] [rbp-208h]
  __m128i v84; // [rsp+70h] [rbp-200h] BYREF
  __int64 v85; // [rsp+80h] [rbp-1F0h]
  _QWORD *v86; // [rsp+88h] [rbp-1E8h]
  __int64 v87; // [rsp+90h] [rbp-1E0h] BYREF
  __int64 v88; // [rsp+98h] [rbp-1D8h]
  void *v89; // [rsp+A0h] [rbp-1D0h] BYREF
  __m128i v90; // [rsp+A8h] [rbp-1C8h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-1B0h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-1A8h]
  void *v93; // [rsp+D0h] [rbp-1A0h] BYREF
  __m128i v94; // [rsp+D8h] [rbp-198h] BYREF
  _QWORD v95[2]; // [rsp+F0h] [rbp-180h] BYREF
  __int64 v96[2]; // [rsp+100h] [rbp-170h] BYREF
  void *src; // [rsp+110h] [rbp-160h]
  __m128i v98; // [rsp+118h] [rbp-158h]
  __int64 v99[2]; // [rsp+128h] [rbp-148h] BYREF
  void *v100; // [rsp+138h] [rbp-138h]
  __m128i v101; // [rsp+140h] [rbp-130h]
  _QWORD v102[2]; // [rsp+150h] [rbp-120h] BYREF
  _BYTE v103[16]; // [rsp+160h] [rbp-110h] BYREF
  __int64 v104[2]; // [rsp+170h] [rbp-100h] BYREF
  void *v105; // [rsp+180h] [rbp-F0h]
  __m128i v106; // [rsp+188h] [rbp-E8h] BYREF
  __int64 v107[2]; // [rsp+198h] [rbp-D8h] BYREF
  void *v108; // [rsp+1A8h] [rbp-C8h]
  __m128i v109; // [rsp+1B0h] [rbp-C0h] BYREF
  __int64 v110[2]; // [rsp+1C0h] [rbp-B0h] BYREF
  __int64 v111; // [rsp+1D0h] [rbp-A0h] BYREF
  __int128 v112; // [rsp+1D8h] [rbp-98h] BYREF
  __int64 v113; // [rsp+1F0h] [rbp-80h]
  __m128i v114; // [rsp+1F8h] [rbp-78h]
  __int64 v115; // [rsp+208h] [rbp-68h] BYREF
  __int64 v116; // [rsp+218h] [rbp-58h]
  __m128i v117; // [rsp+220h] [rbp-50h]
  unsigned __int64 v118; // [rsp+238h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 480);
  v7 = *(unsigned int **)(a1 + 48);
  v118 = __readfsqword(0x28u);
  v80 = *(_QWORD *)(v6 + 112);
  v74 = (_QWORD *)(v80 + 104);
  if ( !v7 )
  {
    v83 = nullptr;
    v81 = 0;
    v79 = 0;
    goto LABEL_42;
  }
  v82 = (_QWORD *)(v80 + 104);
  v81 = 0;
  v83 = nullptr;
  v79 = 0;
  do
  {
    v9 = *((_QWORD *)v7 + 2);
    if ( !v9
      || *(_QWORD *)(v9 + 24) != *((_QWORD *)v7 + 3)
      || *v7 != 4 && (*v7 != 67 || v7[17] != v7[9])
      || *(_DWORD *)v9 != 4 && (*(_DWORD *)v9 != 67 || *(_DWORD *)(v9 + 36) != *(_DWORD *)(v9 + 68))
      || (*(_BYTE *)(v9 + 6) & 2) == 0
      || (unsigned __int8)sub_1205A0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 1) )
    {
      goto LABEL_5;
    }
    v10 = v7 + 8;
    if ( *((_BYTE *)v7 + 32) == 1 )
    {
      if ( (unsigned __int8)sub_125B60(v7 + 8, *((_QWORD *)v7 + 2) + 64LL, 0)
        && (unsigned __int8)sub_64A10(v74, v7[10], v7[9]) )
      {
        sub_125180(*((_QWORD *)v7 + 2) + 64LL);
        sub_11CA10(v7 + 8, v7 + 16);
      }
LABEL_5:
      if ( *((_BYTE *)v7 + 32) == 1 && !sub_64930(v82, v7[10]) )
      {
        v12 = v7 + 12;
        if ( *((_BYTE *)v7 + 48) == 1 && !sub_64930(v82, v7[14]) || !v83 )
          goto LABEL_19;
        goto LABEL_14;
      }
      v10 = v7 + 8;
    }
    if ( !v83 )
    {
      v12 = v7 + 12;
      if ( *((_BYTE *)v7 + 48) == 1 )
        sub_64930(v82, v7[14]);
      goto LABEL_19;
    }
    v11 = *v83 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v11 )
    {
      if ( (*(_BYTE *)(*v83 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_13;
      while ( 1 )
      {
        if ( (int)sub_11DA40(v10, v11 + 24) >= 0 )
        {
          if ( (int)sub_11DA40(v11 + 24, v10) >= 0 )
          {
            if ( v83 != (__int64 *)v11 )
              break;
LABEL_13:
            v12 = v7 + 12;
            if ( *((_BYTE *)v7 + 48) != 1 )
              goto LABEL_14;
LABEL_82:
            if ( !sub_64930(v82, v7[14]) )
              goto LABEL_19;
            goto LABEL_14;
          }
          v11 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v11 = *(_QWORD *)(v11 + 8);
        }
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_13;
      }
    }
    v37 = *((_BYTE *)v7 + 33);
    sub_125180(v10);
    ++v79;
    v38 = v37 | *((_BYTE *)v7 + 33);
    v36 = *((_BYTE *)v7 + 32) == 4;
    *((_BYTE *)v7 + 33) = v38;
    if ( !v36 || (v38 & 2) == 0 )
      goto LABEL_13;
    v12 = v7 + 12;
    *(_BYTE *)(*((_QWORD *)v7 + 5) + 65LL) |= 2u;
    if ( *((_BYTE *)v7 + 48) == 1 )
      goto LABEL_82;
LABEL_14:
    v13 = *v83 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v13 )
      goto LABEL_75;
    if ( (*(_BYTE *)(*v83 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
    {
      do
      {
        if ( (int)sub_11DA40(v12, v13 + 24) >= 0 )
        {
          if ( (int)sub_11DA40(v13 + 24, v12) >= 0 )
          {
            if ( v83 != (__int64 *)v13 )
            {
LABEL_75:
              v34 = *((_BYTE *)v7 + 49);
              sub_125180(v12);
              ++v79;
              v35 = v34 | *((_BYTE *)v7 + 49);
              v36 = *((_BYTE *)v7 + 48) == 4;
              *((_BYTE *)v7 + 49) = v35;
              if ( v36 && (v35 & 2) != 0 )
                *(_BYTE *)(*((_QWORD *)v7 + 7) + 65LL) |= 2u;
            }
            break;
          }
          v13 = *(_QWORD *)(v13 + 16);
        }
        else
        {
          v13 = *(_QWORD *)(v13 + 8);
        }
      }
      while ( (*(_BYTE *)v13 & 2) == 0 );
    }
LABEL_19:
    if ( !(unsigned __int8)sub_11E8C0(v7) )
    {
      if ( *((_BYTE *)v7 + 64) == 1 && !sub_64930(v82, v7[18]) || !v83 )
        goto LABEL_41;
      a3 = (__int64)(v7 + 16);
      v39 = *v83 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v39 )
        goto LABEL_102;
      if ( (*(_BYTE *)(*v83 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_41;
      while ( 1 )
      {
        n = a3;
        v40 = sub_11DA40(a3, v39 + 24);
        a3 = n;
        if ( v40 >= 0 )
        {
          v46 = sub_11DA40(v39 + 24, n);
          a3 = n;
          if ( v46 >= 0 )
          {
            if ( v83 == (__int64 *)v39 )
              goto LABEL_41;
LABEL_102:
            v44 = *((_BYTE *)v7 + 65);
            sub_125180(a3);
            ++v79;
            v45 = v44 | *((_BYTE *)v7 + 65);
            v36 = *((_BYTE *)v7 + 64) == 4;
            *((_BYTE *)v7 + 65) = v45;
            if ( v36 && (v45 & 2) != 0 )
              *(_BYTE *)(*((_QWORD *)v7 + 9) + 65LL) |= 2u;
            goto LABEL_41;
          }
          v39 = *(_QWORD *)(v39 + 16);
        }
        else
        {
          v39 = *(_QWORD *)(v39 + 8);
        }
        if ( (*(_BYTE *)v39 & 2) != 0 )
          goto LABEL_41;
      }
    }
    sub_167810(a1, v7, 0);
    v14 = *v7;
    if ( *v7 != 2 )
      goto LABEL_21;
    if ( *((_BYTE *)v7 + 48) != 1 )
      goto LABEL_22;
    if ( sub_64930(v82, v7[14]) || !v83 )
      goto LABEL_128;
    v61 = 24;
    v62 = *v83 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v62 )
    {
LABEL_190:
      if ( *(_BYTE *)(v61 + 16) != 10 )
        goto LABEL_128;
      v63 = *(_QWORD *)(v61 + 24);
      if ( *(_BYTE *)v63 != 6 || !(unsigned __int8)sub_342B40(*(_QWORD *)(v80 + 96), *(_QWORD *)(v63 + 8), (int)v7[17]) )
        goto LABEL_128;
      v64 = *((_BYTE *)v7 + 49);
      sub_125180(v12);
      v65 = v64 | *((_BYTE *)v7 + 49);
      v36 = *((_BYTE *)v7 + 48) == 4;
      *((_BYTE *)v7 + 49) = v65;
      if ( v36 && (v65 & 2) != 0 )
        *(_BYTE *)(*((_QWORD *)v7 + 7) + 65LL) |= 2u;
      v7[1] |= 0x20000u;
      sub_167810(a1, v7, 0);
      ++v79;
      v14 = *v7;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(*v83 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_128;
    while ( 1 )
    {
      v61 = v62 + 24;
      if ( (int)sub_11DA40(v12, v62 + 24) >= 0 )
        break;
      v62 = *(_QWORD *)(v62 + 8);
LABEL_187:
      if ( (*(_BYTE *)v62 & 2) != 0 )
      {
        v14 = *v7;
        goto LABEL_21;
      }
    }
    if ( (int)sub_11DA40(v62 + 24, v12) < 0 )
    {
      v62 = *(_QWORD *)(v62 + 16);
      goto LABEL_187;
    }
    if ( v83 != (__int64 *)v62 )
      goto LABEL_190;
LABEL_128:
    v14 = *v7;
LABEL_21:
    if ( v14 == 20 )
    {
      if ( (unsigned __int8)sub_11FD80(v12, v102, 1) )
      {
        if ( v102[0] )
        {
          v72 = -v102[0];
          if ( (~v102[0] & -v102[0]) == 0 )
          {
            v47 = (__int64)v7;
            v73 = *(_DWORD **)(*(_QWORD *)(a1 + 480) + 112LL);
            if ( (unsigned __int64)(4 * v73[20]) >= -v102[0] )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v47 + 36) == v73[21] && *(_BYTE *)(v47 + 32) == 1 && v73[15] == *(_DWORD *)(v47 + 40) )
                {
                  *v7 = 4;
                  sub_11CDA0(v12);
                  sub_167810(a1, v7, 0);
                  goto LABEL_22;
                }
                v110[0] = 0;
                na = v47 + 32;
                v110[1] = 0;
                v111 = 0;
                v112 = 0;
                sub_123EA0(a1, v110, v47 + 32, 1, 4294901760LL);
                v47 = sub_129150(a1, (unsigned int)v110, *(_QWORD *)(v47 + 16), 0, 0, 0, 257);
                if ( !v47 || !(unsigned __int8)sub_125B60(v47 + 64, na, 0) )
                  break;
                if ( *(_DWORD *)v47 == 13 )
                {
                  if ( !(unsigned __int8)sub_11FD80(v47 + 48, v102, 0) || v102[0] % v72 )
                    break;
                }
                else if ( *(_DWORD *)v47 != 4 )
                {
                  break;
                }
                if ( v111 )
                {
                  *(_QWORD *)&v112 = 0;
                  qfree(v111);
                }
                qfree(v110[0]);
              }
              if ( v111 )
              {
                *(_QWORD *)&v112 = 0;
                qfree(v111);
              }
              qfree(v110[0]);
            }
          }
        }
      }
    }
LABEL_22:
    sub_127A20(&v87, a1, v7, 1);
    sub_124680(&v91, a1, v7, 1);
    if ( v83 )
    {
      if ( v81 )
      {
        v15 = (__int64 *)v83[1];
        if ( v15 != v83 )
        {
          while ( 2 )
          {
            if ( (unsigned __int8)sub_64780(v15 + 12, &v87)
              || (unsigned __int8)sub_318470(v15 + 14, &v89)
              || (unsigned __int8)sub_64780(v15 + 7, &v87) )
            {
              v16 = *v15;
            }
            else
            {
              v32 = sub_318470(v15 + 9, &v89);
              v16 = *v15;
              if ( !v32 )
              {
                if ( (*v15 & 2) == 0 )
                {
                  v33 = (__int64 *)v15[2];
                  if ( (*(_BYTE *)v33 & 2) != 0 )
                  {
                    v48 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                    v49 = *v48;
                    if ( (*v48 & 2) == 0 )
                    {
                      while ( (__int64 *)v48[2] == v15 )
                      {
                        v15 = v48;
                        v50 = v49 & 0xFFFFFFFFFFFFFFFCLL;
                        v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v49 & 2) != 0 )
                        {
                          v15 = (__int64 *)v50;
                          goto LABEL_33;
                        }
                        v48 = (__int64 *)v50;
                      }
                    }
                    v15 = v48;
                  }
                  else
                  {
                    do
                    {
                      v15 = v33;
                      v33 = (__int64 *)v33[1];
                    }
                    while ( (*(_BYTE *)v33 & 2) == 0 );
                  }
                }
LABEL_33:
                if ( v83 == v15 )
                  goto LABEL_34;
                continue;
              }
            }
            break;
          }
          v17 = (unsigned __int64)v15;
          if ( (v16 & 2) == 0 )
          {
            v17 = v15[2];
            if ( (*(_BYTE *)v17 & 2) == 0 )
            {
              v18 = *(_QWORD *)(v17 + 8);
              for ( i = v83; (*(_BYTE *)v18 & 2) == 0; v18 = *(_QWORD *)(v18 + 8) )
                v17 = v18;
              goto LABEL_31;
            }
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            v41 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v41 & 2) == 0 )
            {
              i = v83;
              v42 = (unsigned __int64)v15;
              while ( *(_QWORD *)(v17 + 16) == v42 )
              {
                v43 = v41 & 0xFFFFFFFFFFFFFFFCLL;
                v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v41 & 2) != 0 )
                {
                  v17 = v43;
                  goto LABEL_32;
                }
                v42 = v17;
                v17 = v43;
              }
LABEL_31:
              v83 = i;
            }
          }
LABEL_32:
          v84.m128i_i64[0] = (__int64)v83;
          v84.m128i_i64[1] = v81;
          v85 = v80;
          v86 = v82;
          sub_B2090((unsigned __int64 **)&v84, v15);
          v15 = (__int64 *)v17;
          v81 = v84.m128i_i64[1];
          v83 = (__int64 *)v84.m128i_i64[0];
          v80 = v85;
          v82 = v86;
          goto LABEL_33;
        }
      }
    }
LABEL_34:
    if ( (unsigned __int8)sub_32ED70(*v7)
      && (*((_BYTE *)v7 + 6) & 2) == 0
      && !(unsigned __int8)sub_1205A0(v7, v80, 0)
      && !(unsigned __int8)sub_64780(&v91, &v87)
      && !(unsigned __int8)sub_318470(&v93, &v89)
      && ((unsigned __int8)sub_64780(&v87, v82)
       || (unsigned __int8)sub_318470(&v89, v82 + 2)
       || (*v7 == 4 || *v7 == 67 && v7[9] == v7[17])
       && *((_BYTE *)v7 + 64) == 1
       && *((_BYTE *)v7 + 32) == 10
       && **((_BYTE **)v7 + 5) == 6) )
    {
      v51 = _mm_loadu_si128(&v94);
      v52 = _mm_loadu_si128(&v90);
      v95[0] = 0xFFFFFFFF00000000LL;
      v101 = v51;
      v99[0] = v91;
      v95[1] = 0;
      v99[1] = v92;
      v91 = 0;
      v100 = v93;
      v92 = 0;
      v96[0] = v87;
      v93 = nullptr;
      v96[1] = v88;
      v87 = 0;
      src = v89;
      v88 = 0;
      v89 = nullptr;
      v94 = 0;
      v98 = v52;
      v90 = 0;
      sub_1262E0(v95, v7);
      sub_123A40(v102);
      sub_123A40(v103);
      sub_64000(v104, (__int64)v96);
      v54 = v98.m128i_i64[0];
      v105 = nullptr;
      v106 = 0;
      if ( v98.m128i_i64[0] )
      {
        nb = 16 * v98.m128i_i64[0];
        v105 = (void *)qalloc_or_throw(16 * v98.m128i_i64[0], (__int64)v96, 16 * v98.m128i_i64[0], v53);
        v106.m128i_i64[1] = v54;
        memcpy(v105, src, nb);
        v106.m128i_i64[0] = v54;
      }
      sub_64000(v107, (__int64)v99);
      v56 = v101.m128i_i64[0];
      v108 = nullptr;
      v109 = 0;
      if ( v101.m128i_i64[0] )
      {
        nc = 16 * v101.m128i_i64[0];
        v108 = (void *)qalloc_or_throw(16 * v101.m128i_i64[0], (__int64)v99, 16 * v101.m128i_i64[0], v55);
        v109.m128i_i64[1] = v56;
        memcpy(v108, v100, nc);
        v109.m128i_i64[0] = v56;
      }
      sub_123A40(v110);
      sub_123A40(&v111);
      sub_64000((__int64 *)&v112 + 1, (__int64)v104);
      v57 = _mm_loadu_si128(&v106);
      v58 = (__int64)v105;
      v105 = nullptr;
      v114 = v57;
      v113 = v58;
      v106 = 0;
      sub_64000(&v115, (__int64)v107);
      v59 = (__int64)v108;
      v60 = _mm_load_si128(&v109);
      v108 = nullptr;
      v116 = v59;
      v117 = v60;
      v84.m128i_i64[0] = (__int64)v83;
      v109 = 0;
      v84.m128i_i64[1] = v81;
      v85 = v80;
      v86 = v82;
      sub_B60F0(&v84, (__int64)v110);
      v81 = v84.m128i_i64[1];
      v83 = (__int64 *)v84.m128i_i64[0];
      v80 = v85;
      v82 = v86;
      if ( v116 )
      {
        v117.m128i_i64[0] = 0;
        qfree(v116);
      }
      qfree(v115);
      if ( v113 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v113);
      }
      qfree(*((__int64 *)&v112 + 1));
      sub_11CDA0(&v111);
      sub_11CDA0(v110);
      if ( v108 )
      {
        v109.m128i_i64[0] = 0;
        qfree((__int64)v108);
      }
      qfree(v107[0]);
      if ( v105 )
      {
        v106.m128i_i64[0] = 0;
        qfree((__int64)v105);
      }
      qfree(v104[0]);
      sub_11CDA0(v103);
      sub_11CDA0(v102);
      if ( v100 )
      {
        v101.m128i_i64[0] = 0;
        qfree((__int64)v100);
      }
      qfree(v99[0]);
      if ( src )
      {
        v98.m128i_i64[0] = 0;
        qfree((__int64)src);
      }
      qfree(v96[0]);
      sub_11CDA0(v95);
    }
    if ( v93 )
    {
      v94.m128i_i64[0] = 0;
      qfree((__int64)v93);
    }
    qfree(v91);
    if ( v89 )
    {
      v90.m128i_i64[0] = 0;
      qfree((__int64)v89);
    }
    qfree(v87);
LABEL_41:
    v7 = *((unsigned int **)v7 + 1);
  }
  while ( v7 );
LABEL_42:
  v20 = sub_A7590(a1, 1, a3, a4, a5, a6);
  *(_DWORD *)(a1 + 24) |= 0x80u;
  v21 = v20 + v79;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1344LL) + 8LL) )
  {
    for ( j = *(_QWORD *)(a1 + 48); j; j = *((_QWORD *)sub_A6830(a1, j) + 1) )
      ;
  }
  sub_A6B60((_QWORD *)a1);
  sub_138440(*(_QWORD *)(a1 + 64));
  if ( !v83 )
    return v21;
  if ( !v81 )
    goto LABEL_65;
  v23 = *v83;
  v24 = *v83 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v24 & 2) != 0 )
    goto LABEL_65;
  v25 = *(_QWORD *)(v24 + 8);
  if ( (*(_BYTE *)v25 & 2) != 0 )
  {
    v28 = *(_QWORD *)(v24 + 16);
    if ( (*(_BYTE *)v28 & 2) == 0 )
      goto LABEL_56;
LABEL_196:
    v66 = *(_QWORD *)(v24 + 112);
    if ( v66 )
    {
      *(_QWORD *)(v24 + 120) = 0;
      qfree(v66);
    }
    qfree(*(_QWORD *)(v24 + 96));
    v67 = *(_QWORD *)(v24 + 72);
    if ( v67 )
    {
      *(_QWORD *)(v24 + 80) = 0;
      qfree(v67);
    }
    qfree(*(_QWORD *)(v24 + 56));
    sub_11CDA0(v24 + 40);
    sub_11CDA0(v24 + 24);
    *(_QWORD *)v24 |= 2uLL;
    goto LABEL_63;
  }
  v26 = *(_QWORD **)(v25 + 8);
  if ( (*(_BYTE *)v26 & 2) != 0 )
  {
    v27 = *(_QWORD **)(v25 + 16);
    if ( (*(_BYTE *)v27 & 2) == 0 )
    {
LABEL_51:
      sub_A1CC0(v27);
      goto LABEL_52;
    }
    goto LABEL_204;
  }
  sub_A1CC0(v26);
  v27 = *(_QWORD **)(v25 + 16);
  if ( (*(_BYTE *)v27 & 2) == 0 )
    goto LABEL_51;
LABEL_52:
  if ( (*(_BYTE *)v25 & 2) == 0 )
  {
LABEL_204:
    v68 = *(_QWORD *)(v25 + 112);
    if ( v68 )
    {
      *(_QWORD *)(v25 + 120) = 0;
      qfree(v68);
    }
    qfree(*(_QWORD *)(v25 + 96));
    v69 = *(_QWORD *)(v25 + 72);
    if ( v69 )
    {
      *(_QWORD *)(v25 + 80) = 0;
      qfree(v69);
    }
    qfree(*(_QWORD *)(v25 + 56));
    sub_11CDA0(v25 + 40);
    sub_11CDA0(v25 + 24);
    *(_QWORD *)v25 |= 2uLL;
  }
  if ( v25 )
    qfree(v25);
  v28 = *(_QWORD *)(v24 + 16);
  if ( (*(_BYTE *)v28 & 2) == 0 )
  {
LABEL_56:
    v29 = *(_QWORD **)(v28 + 8);
    if ( (*(_BYTE *)v29 & 2) != 0 )
    {
      v30 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v30 & 2) == 0 )
      {
LABEL_58:
        sub_A1CC0(v30);
        goto LABEL_59;
      }
    }
    else
    {
      sub_A1CC0(v29);
      v30 = *(_QWORD **)(v28 + 16);
      if ( (*(_BYTE *)v30 & 2) == 0 )
        goto LABEL_58;
LABEL_59:
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
LABEL_60:
        if ( v28 )
          qfree(v28);
        goto LABEL_62;
      }
    }
    v70 = *(_QWORD *)(v28 + 112);
    if ( v70 )
    {
      *(_QWORD *)(v28 + 120) = 0;
      qfree(v70);
    }
    qfree(*(_QWORD *)(v28 + 96));
    v71 = *(_QWORD *)(v28 + 72);
    if ( v71 )
    {
      *(_QWORD *)(v28 + 80) = 0;
      qfree(v71);
    }
    qfree(*(_QWORD *)(v28 + 56));
    sub_11CDA0(v28 + 40);
    sub_11CDA0(v28 + 24);
    *(_QWORD *)v28 |= 2uLL;
    goto LABEL_60;
  }
LABEL_62:
  if ( (*(_BYTE *)v24 & 2) == 0 )
    goto LABEL_196;
LABEL_63:
  if ( v23 > 3 )
    qfree(v24);
LABEL_65:
  qfree((__int64)v83);
  return v21;
}
