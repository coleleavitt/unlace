__int64 __fastcall sub_B36D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  _DWORD *v11; // r13
  __int64 v12; // r12
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __int64 v15; // r12
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // edx
  int v26; // esi
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  int v31; // r14d
  const char *v32; // rax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // r11
  int v36; // r8d
  int v37; // r9d
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // r9d
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rsi
  _DWORD *v46; // rax
  _DWORD *v47; // r12
  __int64 func; // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r12
  char v52; // al
  int v53; // r12d
  __int64 v54; // rsi
  __int64 v55; // r10
  __int64 v56; // r14
  unsigned int *v57; // rax
  unsigned int v58; // eax
  char v59; // al
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdi
  int v66; // eax
  __int64 v67; // r12
  __int64 v68; // rsi
  __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  const char *v73; // rax
  int v74; // eax
  __int64 v75; // rdi
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // r14
  bool v80; // al
  __int64 v81; // r10
  int v82; // eax
  __int64 v83; // rdi
  __int64 v84; // r14
  __int64 v85; // rax
  int v86; // eax
  const char *v87; // rax
  char v88; // al
  char v89; // al
  char v90; // al
  __int64 v91; // rax
  __int64 v92; // r11
  int v93; // eax
  const char *v94; // rax
  char v95; // al
  char v96; // al
  __int64 v97; // rax
  int v98; // r10d
  char v99; // al
  __int64 v100; // r11
  int v101; // r8d
  int v102; // r9d
  int v103; // edx
  int v104; // eax
  __int64 v105; // rdi
  __int64 v106; // rax
  char v107; // al
  __int64 v108; // rax
  char v109; // al
  char v110; // al
  char v111; // al
  char v112; // al
  int v113; // eax
  __int64 v114; // rax
  int v115; // eax
  int v116; // eax
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // eax
  int v121; // [rsp-10h] [rbp-170h]
  int v122; // [rsp-8h] [rbp-168h]
  int v123; // [rsp+0h] [rbp-160h]
  int v124; // [rsp+0h] [rbp-160h]
  __int64 v125; // [rsp+8h] [rbp-158h]
  __int64 *v126; // [rsp+8h] [rbp-158h]
  __m128i v127; // [rsp+10h] [rbp-150h] BYREF
  _DWORD *v128; // [rsp+20h] [rbp-140h]
  __int64 v129; // [rsp+28h] [rbp-138h]
  __int64 v130; // [rsp+38h] [rbp-128h] BYREF
  __int64 v131[2]; // [rsp+40h] [rbp-120h] BYREF
  __int64 v132; // [rsp+50h] [rbp-110h] BYREF
  __m128i v133; // [rsp+58h] [rbp-108h]
  __int64 v134[2]; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v135; // [rsp+80h] [rbp-E0h]
  __m128i v136; // [rsp+88h] [rbp-D8h]
  __int64 v137[2]; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v138; // [rsp+B0h] [rbp-B0h]
  __int128 v139; // [rsp+B8h] [rbp-A8h]
  __int64 v140; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v141; // [rsp+D8h] [rbp-88h]
  __int64 v142; // [rsp+E0h] [rbp-80h]
  __int128 v143; // [rsp+E8h] [rbp-78h]
  __int64 v144[2]; // [rsp+100h] [rbp-60h] BYREF
  __int64 v145; // [rsp+110h] [rbp-50h] BYREF
  __m128i v146; // [rsp+118h] [rbp-48h] BYREF
  unsigned __int64 v147; // [rsp+128h] [rbp-38h]

  v147 = __readfsqword(0x28u);
  if ( !a2
    || (v2 = (__int64)a2, (*((_DWORD *)a2 + 1) & 0x40010) != 0)
    || (*((_BYTE *)a2 + 65) & 2) != 0
    || (LOBYTE(v129) = sub_A2650(*(_QWORD *)(a1 + 64), (__int64)a2), (_BYTE)v129) )
  {
    LOBYTE(v129) = 0;
    return (unsigned __int8)v129;
  }
  v7 = sub_33E140(*(_QWORD *)(a1 + 480), 12, a1, (_DWORD)a2, v5, v6);
  if ( v7 )
  {
    LOBYTE(v129) = v7 != -1;
    return (unsigned __int8)v129;
  }
  v10 = *(_QWORD *)(a1 + 480);
  v131[0] = 0;
  v131[1] = 0;
  v132 = 0;
  v11 = *(_DWORD **)(v10 + 112);
  v134[0] = 0;
  v134[1] = 0;
  v135 = 0;
  v133 = 0;
  v136 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      if ( *((_BYTE *)a2 + 48) == 1
        && v11[14] == *((_DWORD *)a2 + 14)
        && *((_BYTE *)a2 + 64) == 1
        && v11[15] == *((_DWORD *)a2 + 18)
        && (v67 = sub_129320(a1, v131, v134, a2, 0)) != 0
        && *(_QWORD *)(v67 + 24) == a2[3]
        && *(_DWORD *)v67 == 13
        && *(_BYTE *)(v67 + 32) == 1
        && v11[15] == *(_DWORD *)(v67 + 40)
        && (unsigned __int8)sub_125B60(v67 + 32, v67 + 64, 0)
        && sub_A2350(v67 + 48, *((int *)a2 + 9), 1u)
        && (a2 = v131, sub_B02D0(a1, v131, (__int64)v134, v67, v2)) )
      {
        sub_11D5A0(v67);
        *(_DWORD *)v2 = 59;
        sub_11CDA0(v2 + 48);
        sub_11CDA0(v2 + 64);
        *(_DWORD *)(a1 + 24) |= 0x10u;
        v31 = 1;
      }
      else
      {
        a2 = (__int64 *)v2;
        if ( (unsigned __int8)sub_9AAF0(a1, v2) )
        {
          v31 = 37;
        }
        else
        {
          a2 = (__int64 *)v2;
          if ( !(unsigned __int8)sub_18AD00(a1, v2) )
            goto LABEL_67;
          v31 = 59;
        }
      }
      goto LABEL_43;
    case 2:
LABEL_67:
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_186F90(a1, v2) )
        goto LABEL_68;
      goto LABEL_33;
    case 4:
      v143 = 0;
      v137[0] = 0;
      v137[1] = 0;
      v138 = 0;
      v140 = 0;
      v141 = 0;
      v142 = 0;
      v139 = 0;
      sub_127FE0(
        a1,
        (__int64)v137,
        (__int64)(a2 + 8),
        1u,
        v8,
        v9,
        v123,
        v125,
        (int)v137,
        v127.m128i_i32[2],
        (__int64)(a2 + 8));
      v35 = sub_129150(a1, (unsigned int)v137, a2[2], 0, (unsigned int)&v140, 128, 257);
      if ( !v35 )
        goto LABEL_55;
      if ( *(_BYTE *)(v35 + 64) != *((_BYTE *)a2 + 64) || *(_DWORD *)v35 != 4 )
        goto LABEL_52;
      v74 = *((_DWORD *)a2 + 17);
      if ( *(_DWORD *)(v35 + 68) <= v74 )
      {
        if ( v74 > 4 )
          goto LABEL_55;
LABEL_54:
        a2 = (__int64 *)v35;
        if ( !(unsigned __int8)sub_AE450(a1, v35, v2, v127.m128i_i64[0], v33, v34) )
          goto LABEL_55;
        v31 = 44;
LABEL_252:
        sub_93B40(&v140);
        sub_93B40((__int64 *)v127.m128i_i64[0]);
        goto LABEL_43;
      }
      v125 = v35;
      v95 = sub_A2310(&v140, v127.m128i_i64[0]);
      v35 = v125;
      if ( v95 )
      {
        v96 = sub_1205A0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0);
        v35 = v125;
        if ( !v96 )
        {
          v97 = sub_A9AA0(a1, v127.m128i_i64[0], *(_QWORD *)(v125 + 8), (__int64)a2, 1u);
          v35 = v125;
          if ( !v97 )
          {
            v122 = v98;
            v99 = sub_12FF70(
                    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                    (unsigned int)&v130,
                    a1,
                    v125,
                    (int)v125 + 64,
                    (_DWORD)a2,
                    (__int64)v128);
            v33 = v121;
            v35 = v125;
            v34 = v122;
            if ( v99 )
            {
              sub_123A40(v144);
              v100 = v125;
              if ( v130 >= 0 && v130 < SHIDWORD(v144[0]) )
              {
                v110 = sub_126F10(v144, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), (unsigned int)v130);
                v100 = v125;
                if ( v110 )
                {
                  v111 = sub_125B60(v144, a2 + 4, 0);
                  v100 = v125;
                  if ( v111 )
                  {
                    a2 = v144;
                    v112 = sub_A9CB0(a1, (__int64)v144, *(_QWORD *)(v125 + 8), v2);
                    v100 = v125;
                    if ( !v112 )
                    {
                      sub_11D5A0(v2);
                      v113 = *(_DWORD *)(a1 + 24);
                      v31 = 6;
                      BYTE1(v113) &= ~2u;
                      LOBYTE(v113) = v113 | 0x80;
                      *(_DWORD *)(a1 + 24) = v113;
                      sub_11CDA0(v144);
                      goto LABEL_252;
                    }
                  }
                }
              }
              v125 = v100;
              sub_11CDA0(v144);
              v35 = v125;
            }
          }
        }
      }
LABEL_52:
      if ( *(int *)(v2 + 68) <= 4 )
      {
        if ( (unsigned int)(*(_DWORD *)v35 - 8) <= 1 )
        {
          v125 = v35;
          v89 = sub_125B60(v35 + 32, v2 + 32, 0);
          v35 = v125;
          if ( v89 )
          {
            if ( *(_BYTE *)(v2 + 32) != 4 || (v109 = sub_1205A0(*(_QWORD *)(v2 + 40), v11, 0), v35 = v125, !v109) )
            {
              v125 = v35;
              v90 = sub_127420(v128, v11, v35 + 64);
              v35 = v125;
              if ( v90 )
              {
                if ( *(_DWORD *)(v125 + 68) >= *(_DWORD *)(v2 + 68) )
                {
                  v128 = (_DWORD *)v125;
                  sub_124680(v144, a1, v125, 1);
                  v91 = sub_A9AA0(a1, v127.m128i_i64[0], *(_QWORD *)(v125 + 8), v2, 1u);
                  v92 = v125;
                  if ( !v91 )
                  {
                    a2 = v144;
                    v114 = sub_A9AA0(a1, v144, *((_QWORD *)v128 + 1), v2, 1u);
                    v92 = (__int64)v128;
                    if ( !v114 )
                    {
                      sub_11D5A0(v2);
                      v115 = *(_DWORD *)(a1 + 24);
                      v31 = 8;
                      BYTE1(v115) &= ~2u;
                      LOBYTE(v115) = v115 | 0x80;
                      *(_DWORD *)(a1 + 24) = v115;
                      sub_93B40(v144);
                      goto LABEL_252;
                    }
                  }
                  v128 = (_DWORD *)v92;
                  sub_93B40(v144);
                  v35 = (__int64)v128;
                }
              }
            }
          }
        }
        goto LABEL_54;
      }
LABEL_55:
      if ( v142 )
      {
        *(_QWORD *)&v143 = 0;
        qfree(v142);
      }
      qfree(v140);
      if ( v138 )
      {
        *(_QWORD *)&v139 = 0;
        qfree(v138);
      }
      qfree(v137[0]);
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_186F90(a1, v2) )
      {
LABEL_68:
        v31 = 33;
LABEL_43:
        v32 = (const char *)sub_1B5B40(v2, a2);
        sub_A2520(a1, (__int64)"cmb%d: %s", v31, v32);
LABEL_44:
        LOBYTE(v129) = 1;
        goto LABEL_35;
      }
LABEL_60:
      if ( *(int *)(v2 + 68) <= 2 && (!(unsigned __int8)sub_11FD80(v2 + 32, v144, 0) || v144[0]) )
      {
        v127.m128i_i64[0] = v2 + 64;
        sub_123A40(&v140);
        if ( !(unsigned __int8)sub_131730(v11, a1, v2, &v140, (unsigned int)(2 * HIDWORD(v140)), 0, 0) )
        {
          sub_11CDA0(&v140);
          goto LABEL_35;
        }
        sub_127FE0(
          a1,
          (__int64)v134,
          (__int64)&v140,
          1u,
          v36,
          v37,
          v123,
          v125,
          v127.m128i_i32[0],
          v127.m128i_i32[2],
          (__int64)v128);
        v38 = (_DWORD *)sub_129150(a1, (unsigned int)v134, *(_QWORD *)(v2 + 16), 0, 0, 0, 257);
        v128 = v38;
        if ( v38 )
        {
          if ( *v38 == 4 )
          {
            if ( sub_A2350((__int64)(v38 + 8), 0, 0) )
            {
              v103 = v128[17];
              v104 = (*(int *)(v2 + 4) >> 8) & 7;
              if ( (!v104 || 1 << (v104 - 1) >= v103) && *(_DWORD *)(v2 + 68) < v103 )
              {
                v144[0] = 0;
                v144[1] = 0;
                v145 = 0;
                v146 = 0;
                sub_127FE0(
                  a1,
                  (__int64)v144,
                  (__int64)(v128 + 16),
                  0,
                  v101,
                  v102,
                  v124,
                  (_DWORD)v128 + 64,
                  v127.m128i_i32[0],
                  v127.m128i_i32[2],
                  (__int64)v128);
                if ( !sub_A9D90(a1, v144, *((_QWORD *)v128 + 1), *(_QWORD *)(v2 + 8), 1u)
                  && (unsigned __int8)sub_127420(v127.m128i_i64[0], v11, v126) )
                {
                  a2 = v126;
                  sub_125180(v127.m128i_i64[0]);
                  v119 = (__int64)v128;
                  *(_DWORD *)v2 = 9;
                  if ( *(char *)(v119 + 4) >= 0 )
                  {
                    sub_11D5A0(v119);
                    v120 = *(_DWORD *)(a1 + 24);
                    BYTE1(v120) &= ~2u;
                    LOBYTE(v120) = v120 | 0x80;
                    *(_DWORD *)(a1 + 24) = v120;
                  }
                  v31 = 7;
                  sub_93B40(v144);
                  sub_11CDA0(&v140);
                  goto LABEL_43;
                }
                sub_93B40(v144);
              }
            }
          }
        }
        sub_11CDA0(&v140);
      }
LABEL_33:
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_AC200(a1, (unsigned int *)v2) )
      {
        v31 = 26;
        goto LABEL_43;
      }
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_18AA30(a1, v2) )
      {
        v31 = 53;
        goto LABEL_43;
      }
LABEL_35:
      if ( v135 )
      {
        v136.m128i_i64[0] = 0;
        qfree(v135);
      }
      qfree(v134[0]);
      if ( v132 )
      {
        v133.m128i_i64[0] = 0;
        qfree(v132);
      }
      qfree(v131[0]);
      return (unsigned __int8)v129;
    case 5:
      if ( (unsigned __int8)sub_9ED70(a1, (__int64)a2) )
        goto LABEL_239;
      if ( (unsigned __int8)sub_99C40(a1, (int *)a2) )
        goto LABEL_98;
      goto LABEL_33;
    case 9:
      goto LABEL_60;
    case 0xA:
      if ( (unsigned __int8)sub_9B160(a1, (__int64)a2) )
      {
        v31 = 20;
      }
      else if ( (unsigned __int8)sub_A02B0(a1, (__int64)a2) )
      {
        v31 = 25;
      }
      else if ( (unsigned __int8)sub_9B2C0(a1, (__int64)a2) )
      {
        v31 = 43;
      }
      else
      {
        if ( !(unsigned __int8)sub_98A40(a1, (__int64)a2) )
          goto LABEL_33;
        v31 = 55;
      }
      goto LABEL_43;
    case 0xB:
      if ( (unsigned __int8)sub_9FDC0(a1, (__int64)a2) )
      {
        v31 = 19;
      }
      else if ( (unsigned __int8)sub_9CFB0(a1, (__int64)a2) )
      {
        v31 = 22;
      }
      else if ( (unsigned __int8)sub_9B900(a1, (__int64)a2) )
      {
        v31 = 32;
      }
      else if ( (unsigned __int8)sub_9D2D0(a1, (__int64)a2) )
      {
        v31 = 51;
      }
      else
      {
        if ( !(unsigned __int8)sub_A0610(a1, (__int64)a2) )
          goto LABEL_33;
        v31 = 54;
      }
      goto LABEL_43;
    case 0xC:
      if ( *((_BYTE *)a2 + 32) != 1 )
        goto LABEL_77;
      if ( v11[15] != *((_DWORD *)a2 + 10) )
        goto LABEL_77;
      v127.m128i_i64[0] = (__int64)(a2 + 8);
      if ( !(unsigned __int8)sub_125B60(a2 + 4, a2 + 8, 0) )
        goto LABEL_77;
      if ( *((_BYTE *)a2 + 48) != 2 )
        goto LABEL_77;
      v61 = sub_129B40(a1, v131, v134, a2, 0);
      if ( !v61 )
        goto LABEL_77;
      v62 = *(int *)(v61 + 68);
      v128 = (_DWORD *)(v2 + 48);
      if ( !sub_A2350(v2 + 48, v62, 1u) )
        goto LABEL_77;
      if ( *(_DWORD *)v61 == 2 )
      {
        if ( *(_BYTE *)(v61 + 32) != 1
          || v11[14] != *(_DWORD *)(v61 + 40)
          || *(_BYTE *)(v61 + 48) != 1
          || v11[15] != *(_DWORD *)(v61 + 56) )
        {
          goto LABEL_77;
        }
      }
      else
      {
        if ( *(_DWORD *)v61 != 4 )
          goto LABEL_77;
        if ( *(_BYTE *)(v61 + 32) != 4 )
          goto LABEL_77;
        v63 = *(_QWORD *)(v61 + 40);
        if ( *(_DWORD *)v63 != 2
          || *(_BYTE *)(v63 + 32) != 1
          || v11[14] != *(_DWORD *)(v63 + 40)
          || *(_BYTE *)(v63 + 48) != 1
          || v11[15] != *(_DWORD *)(v63 + 56) )
        {
          goto LABEL_77;
        }
      }
      if ( sub_B02D0(a1, v131, (__int64)v134, v61, v2) )
      {
        *(_DWORD *)v2 = 60;
        v64 = *(_QWORD *)(v2 + 24);
        a2 = (__int64 *)(v61 + 64);
        v65 = v127.m128i_i64[0];
        *(_QWORD *)(v2 + 24) = *(_QWORD *)(v61 + 24);
        *(_QWORD *)(v61 + 24) = v64;
        sub_11CA10(v65, v61 + 64);
        sub_11CDA0(v2 + 32);
        sub_11CDA0(v128);
        sub_11D5A0(v61);
        v66 = *(_DWORD *)(a1 + 24);
        v31 = 2;
        BYTE1(v66) &= ~2u;
        LOBYTE(v66) = v66 | 0x90;
        *(_DWORD *)(a1 + 24) = v66;
        goto LABEL_43;
      }
LABEL_77:
      a2 = (__int64 *)v2;
      if ( sub_9C9E0(a1, v2) )
      {
LABEL_152:
        v31 = 50;
      }
      else
      {
        a2 = (__int64 *)v2;
        if ( (unsigned __int8)sub_9DED0(a1, v2) )
        {
          v31 = 16;
        }
        else
        {
          a2 = (__int64 *)v2;
          if ( (unsigned __int8)sub_99410(a1, v2) )
          {
            v31 = 40;
          }
          else
          {
            a2 = (__int64 *)v2;
            if ( (unsigned __int8)sub_9F370(a1, v2) )
            {
              v31 = 17;
            }
            else
            {
              a2 = (__int64 *)v2;
              if ( (unsigned __int8)sub_9CB20(a1, v2) )
              {
                v31 = 23;
              }
              else
              {
                a2 = (__int64 *)v2;
                if ( (unsigned __int8)sub_96180(a1, v2, v39, v40, v41, v42) )
                {
                  v31 = 30;
                }
                else
                {
                  a2 = (__int64 *)v2;
                  if ( !(unsigned __int8)sub_96550(a1, v2) )
                    goto LABEL_33;
                  v31 = 45;
                }
              }
            }
          }
        }
      }
      goto LABEL_43;
    case 0xD:
      if ( sub_9C9E0(a1, (__int64)a2) )
        goto LABEL_152;
      if ( (unsigned __int8)sub_99C40(a1, (int *)a2) )
      {
LABEL_98:
        v31 = 18;
      }
      else if ( (unsigned __int8)sub_9ED70(a1, (__int64)a2) )
      {
LABEL_239:
        v31 = 24;
      }
      else
      {
        if ( !(unsigned __int8)sub_97260(a1, a2) )
          goto LABEL_33;
        v31 = 56;
      }
      goto LABEL_43;
    case 0xE:
      if ( !(unsigned __int8)sub_97480(a1, (__int64)a2) )
        goto LABEL_33;
      v31 = 42;
      goto LABEL_43;
    case 0x13:
      goto LABEL_45;
    case 0x17:
      if ( (unsigned __int8)sub_96C00(a1, (unsigned int *)a2) )
      {
        v31 = 41;
      }
      else
      {
LABEL_45:
        if ( (unsigned __int8)sub_9B500(a1, (__int64)a2) )
        {
          v31 = 21;
        }
        else if ( (unsigned __int8)sub_968F0(a1, a2) )
        {
          v31 = 39;
        }
        else if ( (unsigned __int8)sub_98540(a1, (int *)a2) )
        {
          v31 = 49;
        }
        else
        {
          if ( !(unsigned __int8)sub_97770(a1, a2) )
            goto LABEL_33;
          v31 = 57;
        }
      }
      goto LABEL_43;
    case 0x18:
      if ( (unsigned __int8)sub_9EA00(a1, (__int64)a2) )
      {
        v31 = 31;
      }
      else
      {
        if ( !(unsigned __int8)sub_986E0(a1, (__int64)a2) )
          goto LABEL_33;
        v31 = 52;
      }
      goto LABEL_43;
    case 0x1D:
    case 0x1E:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x2D:
    case 0x2E:
    case 0x32:
    case 0x33:
      if ( !(unsigned __int8)sub_98280(a1, (unsigned int *)a2) )
        goto LABEL_33;
      v31 = 47;
      goto LABEL_43;
    case 0x2A:
      if ( !(unsigned __int8)sub_B2870(a1, (__int64)a2) )
        goto LABEL_33;
      v31 = 35;
      goto LABEL_43;
    case 0x36:
      v53 = *((_DWORD *)a2 + 17);
      v54 = (unsigned int)v11[15];
      v55 = v2;
      v56 = 0;
      while ( 2 )
      {
        v57 = (unsigned int *)sub_124B60(a1, v54, v55, 0, 0, 1);
        v55 = (__int64)v57;
        if ( !v57 )
          goto LABEL_33;
        v58 = *v57;
        if ( v58 == 59 )
        {
          if ( *(_DWORD *)(v55 + 36) != v11[21] )
            goto LABEL_33;
          v75 = *(_QWORD *)(a1 + 64);
          v127.m128i_i64[0] = v55;
          v76 = v55 + 32;
          v77 = sub_A25E0(v75);
          if ( !sub_A2350(v76, v77, 0) )
            goto LABEL_33;
          v78 = (unsigned int)v11[15];
          v129 = v127.m128i_i64[0];
          v79 = sub_124B60(a1, v78, v127.m128i_i64[0], 0, 0, 1);
          v80 = sub_A2620((__int64)v11, v79);
          v81 = v127.m128i_i64[0];
          if ( v80 )
          {
            sub_11D5A0(v79);
            v82 = *(_DWORD *)(a1 + 24);
            v83 = *(_QWORD *)(a1 + 64);
            BYTE1(v82) &= ~2u;
            LOBYTE(v82) = v82 | 0x80;
            *(_DWORD *)(a1 + 24) = v82;
            v84 = sub_1CFBB0(v83, *(_QWORD *)(v79 + 24));
            v85 = sub_1CFBB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v2 + 24));
            v81 = v129;
            if ( v84 != v85 )
              *(_DWORD *)(v2 + 4) |= 0x20u;
          }
          sub_11D5A0(v81);
          v86 = *(_DWORD *)(a1 + 24);
          BYTE1(v86) &= ~2u;
          LOBYTE(v86) = v86 | 0x80;
          *(_DWORD *)(a1 + 24) = v86;
          *(_DWORD *)v2 = 57;
          sub_125180(v2 + 32);
          sub_125180(v2 + 48);
          sub_11CDA0(v2 + 64);
          v87 = (const char *)sub_1B5B40(v2, v2 + 64);
          sub_A2520(a1, (__int64)"cmb%d: %s", 6, v87);
          sub_167810(a1, v2, 6);
          goto LABEL_44;
        }
        if ( v58 <= 0x3B )
        {
          if ( v58 != 12 )
          {
            if ( v58 != 13 )
              goto LABEL_33;
            if ( *(_BYTE *)(v55 + 32) != 1 )
              goto LABEL_33;
            v54 = (unsigned int)v11[15];
            if ( (_DWORD)v54 != *(_DWORD *)(v55 + 40) )
              goto LABEL_33;
            continue;
          }
          if ( *(_BYTE *)(v55 + 32) == 1 && v11[15] == *(_DWORD *)(v55 + 40) )
          {
            v127.m128i_i64[0] = v55;
            v88 = sub_125B60(v55 + 32, v55 + 64, 0);
            v55 = v127.m128i_i64[0];
            if ( v88 && *(_BYTE *)(v127.m128i_i64[0] + 48) == 2 && *(_DWORD *)(v127.m128i_i64[0] + 36) == v53 )
              v56 = v127.m128i_i64[0];
            v54 = (unsigned int)v11[15];
            continue;
          }
          goto LABEL_33;
        }
        break;
      }
      if ( v58 != 60 )
        goto LABEL_33;
      if ( *(_BYTE *)(v2 + 64) != 1 )
        goto LABEL_198;
      if ( *(_BYTE *)(v55 + 64) != 1 )
        goto LABEL_33;
      if ( *(_DWORD *)(v2 + 72) == *(_DWORD *)(v55 + 72) && v53 == *(_DWORD *)(v55 + 68) )
      {
        v105 = *(_QWORD *)(a1 + 64);
        v127.m128i_i64[0] = v55;
        v128 = (_DWORD *)(v2 + 48);
        sub_330F80(v105);
        v106 = getseg();
        v107 = sub_A2350(v2 + 48, *(_QWORD *)(v106 + 48), 0);
        v55 = v127.m128i_i64[0];
        if ( v107 )
          goto LABEL_280;
        if ( *(_BYTE *)(v2 + 48) != 1 )
          goto LABEL_33;
        if ( v11[16] == *(_DWORD *)(v2 + 56) )
        {
LABEL_280:
          v108 = sub_129010(a1, *(unsigned int *)(v2 + 72), *(_QWORD *)(v2 + 16), 0, 0);
          v55 = v127.m128i_i64[0];
          if ( v127.m128i_i64[0] == v108 )
          {
LABEL_208:
            sub_11D5A0(v55);
            v71 = *(_DWORD *)(a1 + 24);
            BYTE1(v71) &= ~2u;
            LOBYTE(v71) = v71 | 0x80;
            *(_DWORD *)(a1 + 24) = v71;
            sub_330990(a1, v2);
            if ( v56 )
            {
              sub_11D5A0(v56);
              v72 = *(_DWORD *)(a1 + 24);
              BYTE1(v72) &= ~2u;
              LOBYTE(v72) = v72 | 0x80;
              *(_DWORD *)(a1 + 24) = v72;
            }
            v73 = (const char *)sub_1B5B40(v2, v2);
            sub_A2520(a1, (__int64)"cmb%d: %s", 5, v73);
            goto LABEL_44;
          }
LABEL_198:
          if ( *(_BYTE *)(v2 + 48) != 1 )
            goto LABEL_33;
        }
        if ( *(_BYTE *)(v55 + 64) != 1 )
          goto LABEL_33;
      }
      else if ( *(_BYTE *)(v2 + 48) != 1 )
      {
        goto LABEL_33;
      }
      if ( *(_DWORD *)(v55 + 72) != *(_DWORD *)(v2 + 56) )
        goto LABEL_33;
      if ( v53 != *(_DWORD *)(v55 + 68) )
        goto LABEL_33;
      v68 = (unsigned int)v11[15];
      v127.m128i_i64[0] = v55;
      v69 = sub_124B60(a1, v68, v55, 0, 0, 1);
      if ( !v69
        || *(_BYTE *)(v2 + 64) != 1
        || *(_BYTE *)(v69 + 64) != 1
        || *(_DWORD *)(v2 + 72) != *(_DWORD *)(v69 + 72)
        || v53 != *(_DWORD *)(v69 + 68) )
      {
        goto LABEL_33;
      }
      v129 = v127.m128i_i64[0];
      sub_11D5A0(v69);
      v70 = *(_DWORD *)(a1 + 24);
      v55 = v127.m128i_i64[0];
      BYTE1(v70) &= ~2u;
      LOBYTE(v70) = v70 | 0x80;
      *(_DWORD *)(a1 + 24) = v70;
      goto LABEL_208;
    case 0x37:
      if ( *((_BYTE *)a2 + 32) != 6 )
        goto LABEL_33;
      v44 = *(_QWORD *)(a1 + 64);
      v45 = a2[5];
      if ( *(_QWORD *)(v44 + 40) != v45 )
      {
        if ( (unsigned __int8)sub_332920(v44 + 8, v45) )
          goto LABEL_33;
      }
      v46 = (_DWORD *)sub_124B60(a1, (unsigned int)v11[15], v2, 0, 0, 1);
      v47 = v46;
      if ( !v46 )
        goto LABEL_33;
      if ( *v46 != 59 )
        goto LABEL_33;
      if ( v46[9] != v11[21] )
        goto LABEL_33;
      a2 = (__int64 *)sub_A25E0(*(_QWORD *)(a1 + 64));
      if ( !sub_A2350((__int64)(v47 + 8), (__int64)a2, 0) )
        goto LABEL_33;
      func = get_func();
      if ( func )
      {
        if ( (*(_BYTE *)(func + 16) & 2) != 0 )
        {
          a2 = (__int64 *)sub_124B60(a1, (unsigned int)v11[15], v47, 0, 0, 1);
          if ( sub_A2620((__int64)v11, (__int64)a2) )
          {
            sub_11D5A0(a2);
            v116 = *(_DWORD *)(a1 + 24);
            v117 = *(_QWORD *)(a1 + 64);
            BYTE1(v116) &= ~2u;
            LOBYTE(v116) = v116 | 0x80;
            *(_DWORD *)(a1 + 24) = v116;
            v118 = sub_1CFBB0(v117, a2[3]);
            a2 = *(__int64 **)(v2 + 24);
            if ( v118 != sub_1CFBB0(*(_QWORD *)(a1 + 64), a2) )
              *(_DWORD *)(v2 + 4) |= 0x20u;
          }
        }
      }
      sub_11D5A0(v47);
      v49 = *(_DWORD *)(a1 + 24);
      v31 = 4;
      BYTE1(v49) &= ~2u;
      LOBYTE(v49) = v49 | 0x80;
      *(_DWORD *)(a1 + 24) = v49;
      *(_DWORD *)v2 = 56;
      goto LABEL_43;
    case 0x38:
      if ( *((_BYTE *)a2 + 64) != 8 )
        goto LABEL_33;
      v43 = *(_DWORD *)(a2[9] + 284);
      if ( v43 != 5 && v43 != 34 )
        goto LABEL_111;
      v60 = sub_1229A0(a2[1]);
      if ( v60 && (unsigned __int8)sub_189980(a1, a2, v60) )
      {
        v31 = 27;
        goto LABEL_43;
      }
      if ( *((_BYTE *)a2 + 64) != 8 )
        goto LABEL_33;
      v43 = *(_DWORD *)(a2[9] + 284);
      if ( v43 == 5 )
        goto LABEL_161;
LABEL_111:
      if ( (v43 & 0xFFFFFFDF) != 2 )
        goto LABEL_112;
LABEL_161:
      if ( (unsigned __int8)sub_186F90(a1, a2) )
        goto LABEL_68;
      if ( *((_BYTE *)a2 + 64) != 8 )
        goto LABEL_33;
      v43 = *(_DWORD *)(a2[9] + 284);
      if ( v43 != 5 )
      {
LABEL_112:
        if ( v43 != 2 )
          goto LABEL_33;
      }
      if ( !(unsigned __int8)sub_18A2C0(a1, a2) )
        goto LABEL_33;
      v31 = 28;
      goto LABEL_43;
    case 0x3B:
      if ( *((_BYTE *)a2 + 32) != 1 )
        goto LABEL_33;
      v50 = sub_122A30(a2[2]);
      v51 = v50;
      if ( !v50 )
        goto LABEL_33;
      if ( *(_DWORD *)v50 != 4 )
        goto LABEL_33;
      v52 = *(_BYTE *)(v50 + 32);
      if ( v52 != 2 && (v52 != 1 || *(_QWORD *)(v51 + 24) != a2[3]) )
        goto LABEL_33;
      if ( !(unsigned __int8)sub_125B60(v51 + 64, a2 + 4, 0) )
        goto LABEL_33;
      a2 = (__int64 *)(v51 + 32);
      sub_125180(v2 + 32);
      v31 = 9;
      goto LABEL_43;
    case 0x3C:
      sub_124680(v144, a1, a2, 0);
      sub_648D0(v131, v144);
      v12 = v145;
      v145 = 0;
      v13 = _mm_loadu_si128(&v146);
      v146 = 0;
      if ( v132 )
      {
        v127 = v13;
        v133.m128i_i64[0] = 0;
        qfree(v132);
        v14 = _mm_load_si128(&v127);
        v132 = v12;
        v133 = v14;
        if ( v145 )
        {
          v146.m128i_i64[0] = 0;
          qfree(v145);
        }
      }
      else
      {
        v132 = v12;
        v133 = v13;
      }
      qfree(v144[0]);
      sub_127A20(v144, a1, a2, 0);
      sub_648D0(v134, v144);
      v15 = v145;
      v145 = 0;
      v16 = _mm_loadu_si128(&v146);
      v146 = 0;
      if ( v135 )
      {
        v127 = v16;
        v136.m128i_i64[0] = 0;
        qfree(v135);
        v17 = _mm_load_si128(&v127);
        v135 = v15;
        v136 = v17;
        if ( v145 )
        {
          v146.m128i_i64[0] = 0;
          qfree(v145);
        }
      }
      else
      {
        v135 = v15;
        v136 = v16;
      }
      qfree(v144[0]);
      v18 = a2[2];
      if ( !v18 )
        goto LABEL_33;
      v127.m128i_i64[0] = (__int64)&v140;
      while ( 2 )
      {
        if ( (unsigned int)(*(_DWORD *)v18 - 56) <= 1 )
          goto LABEL_33;
        if ( *(_DWORD *)v18 != 59 )
          goto LABEL_28;
        if ( *(_DWORD *)(v18 + 36) != *(_DWORD *)(v2 + 68) )
          goto LABEL_33;
        v19 = sub_1CFBB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v18 + 24));
        v20 = *(_QWORD *)(v2 + 24);
        v21 = *(_QWORD *)(a1 + 64);
        v128 = (_DWORD *)v19;
        v22 = sub_1CFBB0(v21, v20);
        v23 = *(int *)(v2 + 68);
        v24 = (__int64)v128;
        v128 = (_DWORD *)v22;
        if ( v24 - v23 != v22 )
          goto LABEL_33;
        v25 = v11[21];
        v26 = v11[15];
        v140 = 0;
        v141 = 0;
        sub_63E80((__int64 *)v127.m128i_i64[0], v26, v25);
        v27 = *(_QWORD *)(a1 + 64);
        v142 = 0;
        v143 = 0;
        sub_122B20(
          v127.m128i_i32[0],
          *(_DWORD *)(v27 + 1440) + (_DWORD)v128,
          v11[20],
          *(_DWORD *)(v27 + 1440) + (_DWORD)v128,
          v28,
          v29,
          v123,
          v125,
          v127.m128i_i32[0],
          v127.m128i_i32[2],
          (__int64)v128);
        if ( sub_A9D90(a1, (__int64 *)v127.m128i_i64[0], *(_QWORD *)(v18 + 8), v2, 0) )
        {
          if ( v142 )
          {
            *(_QWORD *)&v143 = 0;
            qfree(v142);
          }
          qfree(v140);
        }
        else
        {
          sub_124680(v144, a1, v18, 1);
          if ( !sub_A9AA0(a1, v144, *(_QWORD *)(v18 + 8), v2, 1u) )
          {
            *(_DWORD *)v2 = 4;
            sub_125180(v2 + 32);
            if ( *(_BYTE *)(v2 + 32) == 1 && v11[15] == *(_DWORD *)(v2 + 40) )
              *(_QWORD *)(v2 + 24) = *(_QWORD *)(v18 + 24);
            sub_11D5A0(v18);
            v93 = *(_DWORD *)(a1 + 24);
            BYTE1(v93) &= ~2u;
            LOBYTE(v93) = v93 | 0x80;
            *(_DWORD *)(a1 + 24) = v93;
            v94 = (const char *)sub_1B5B40(v2, v18 + 32);
            sub_A2520(a1, (__int64)"cmb%d: %s", 3, v94);
            sub_167810(a1, v2, 6);
            if ( v145 )
            {
              v146.m128i_i64[0] = 0;
              qfree(v145);
            }
            qfree(v144[0]);
            if ( v142 )
            {
              *(_QWORD *)&v143 = 0;
              qfree(v142);
            }
            qfree(v140);
            goto LABEL_44;
          }
          if ( v145 )
          {
            v146.m128i_i64[0] = 0;
            qfree(v145);
          }
          qfree(v144[0]);
          if ( v142 )
          {
            *(_QWORD *)&v143 = 0;
            qfree(v142);
          }
          qfree(v140);
LABEL_28:
          sub_127A20(v144, a1, v18, 0);
          if ( (unsigned __int8)sub_64780(v144, v131) )
          {
            v30 = v145;
          }
          else
          {
            v59 = sub_318470(&v145, &v132);
            v30 = v145;
            if ( !v59 )
            {
              if ( v145 )
              {
                v146.m128i_i64[0] = 0;
                qfree(v145);
              }
              qfree(v144[0]);
              v18 = *(_QWORD *)(v18 + 16);
              if ( !v18 )
                goto LABEL_33;
              continue;
            }
          }
          if ( v30 )
          {
            v146.m128i_i64[0] = 0;
            qfree(v30);
          }
          qfree(v144[0]);
        }
        goto LABEL_33;
      }
    default:
      goto LABEL_33;
  }
}
