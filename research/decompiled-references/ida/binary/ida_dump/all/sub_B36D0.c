__int64 __fastcall sub_B36D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rax
  _DWORD *v9; // r13
  __int64 v10; // r12
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // r12
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  int v24; // esi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  int v29; // r14d
  const char *v30; // rax
  __int64 v31; // r11
  __int64 *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  _DWORD *v36; // rax
  _DWORD *v37; // r12
  __int64 func; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r12
  char v42; // al
  int v43; // r12d
  __int64 v44; // rsi
  __int64 v45; // r10
  __int64 v46; // r14
  unsigned int *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // eax
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  const char *v63; // rax
  int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // r14
  bool v70; // al
  __int64 v71; // r10
  int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // r14
  __int64 v75; // rax
  int v76; // eax
  const char *v77; // rax
  char v78; // al
  char v79; // al
  char v80; // al
  __int64 v81; // rax
  __int64 v82; // r11
  int v83; // eax
  const char *v84; // rax
  char v85; // al
  char v86; // al
  __int64 v87; // rax
  char v88; // al
  __int64 v89; // r11
  int v90; // edx
  int v91; // eax
  __int64 v92; // rdi
  __int64 v93; // rax
  char v94; // al
  __int64 v95; // rax
  char v96; // al
  char v97; // al
  char v98; // al
  char v99; // al
  int v100; // eax
  __int64 v101; // rax
  int v102; // eax
  int v103; // eax
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // eax
  int v108; // [rsp+0h] [rbp-160h]
  int v109; // [rsp+8h] [rbp-158h]
  __int64 v110; // [rsp+8h] [rbp-158h]
  __int64 v111; // [rsp+8h] [rbp-158h]
  __int64 v112; // [rsp+8h] [rbp-158h]
  __int64 v113; // [rsp+8h] [rbp-158h]
  __m128i v114; // [rsp+10h] [rbp-150h] BYREF
  __int64 *v115; // [rsp+20h] [rbp-140h]
  __int64 v116; // [rsp+28h] [rbp-138h]
  __int64 v117; // [rsp+38h] [rbp-128h] BYREF
  __int64 v118[2]; // [rsp+40h] [rbp-120h] BYREF
  __int64 v119; // [rsp+50h] [rbp-110h] BYREF
  __m128i v120; // [rsp+58h] [rbp-108h]
  __int64 v121[2]; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v122; // [rsp+80h] [rbp-E0h]
  __m128i v123; // [rsp+88h] [rbp-D8h]
  _QWORD v124[2]; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v125; // [rsp+B0h] [rbp-B0h]
  __int128 v126; // [rsp+B8h] [rbp-A8h]
  __int64 v127; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v128; // [rsp+D8h] [rbp-88h]
  __int64 v129; // [rsp+E0h] [rbp-80h]
  __int128 v130; // [rsp+E8h] [rbp-78h]
  __int64 v131[2]; // [rsp+100h] [rbp-60h] BYREF
  __int64 v132; // [rsp+110h] [rbp-50h] BYREF
  __m128i v133; // [rsp+118h] [rbp-48h] BYREF
  unsigned __int64 v134; // [rsp+128h] [rbp-38h]

  v134 = __readfsqword(0x28u);
  if ( !a2
    || (v2 = (__int64)a2, (*((_DWORD *)a2 + 1) & 0x40010) != 0)
    || (*((_BYTE *)a2 + 65) & 2) != 0
    || (LOBYTE(v116) = sub_A2650(*(_QWORD *)(a1 + 64), (__int64)a2), (_BYTE)v116) )
  {
    LOBYTE(v116) = 0;
    return (unsigned __int8)v116;
  }
  v7 = sub_33E140(*(_QWORD *)(a1 + 480), 12, a1, (_DWORD)a2, v5, v6);
  if ( v7 )
  {
    LOBYTE(v116) = v7 != -1;
    return (unsigned __int8)v116;
  }
  v8 = *(_QWORD *)(a1 + 480);
  v118[0] = 0;
  v118[1] = 0;
  v119 = 0;
  v9 = *(_DWORD **)(v8 + 112);
  v121[0] = 0;
  v121[1] = 0;
  v122 = 0;
  v120 = 0;
  v123 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      if ( *((_BYTE *)a2 + 48) == 1
        && v9[14] == *((_DWORD *)a2 + 14)
        && *((_BYTE *)a2 + 64) == 1
        && v9[15] == *((_DWORD *)a2 + 18)
        && (v57 = sub_129320(a1, v118, v121, a2, 0)) != 0
        && *(_QWORD *)(v57 + 24) == a2[3]
        && *(_DWORD *)v57 == 13
        && *(_BYTE *)(v57 + 32) == 1
        && v9[15] == *(_DWORD *)(v57 + 40)
        && (unsigned __int8)sub_125B60(v57 + 32, v57 + 64, 0)
        && sub_A2350(v57 + 48, *((int *)a2 + 9), 1u)
        && (a2 = v118, sub_B02D0(a1, v118, (__int64)v121, v57, v2)) )
      {
        sub_11D5A0(v57);
        *(_DWORD *)v2 = 59;
        sub_11CDA0(v2 + 48);
        sub_11CDA0(v2 + 64);
        *(_DWORD *)(a1 + 24) |= 0x10u;
        v29 = 1;
      }
      else
      {
        a2 = (__int64 *)v2;
        if ( (unsigned __int8)sub_9AAF0(a1, v2) )
        {
          v29 = 37;
        }
        else
        {
          a2 = (__int64 *)v2;
          if ( !(unsigned __int8)sub_18AD00(a1, v2) )
            goto LABEL_67;
          v29 = 59;
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
      v130 = 0;
      v124[0] = 0;
      v124[1] = 0;
      v125 = 0;
      v127 = 0;
      v128 = 0;
      v129 = 0;
      v115 = a2 + 8;
      v114.m128i_i64[0] = (__int64)v124;
      v126 = 0;
      sub_127FE0(a1, v124, a2 + 8, 1);
      v31 = sub_129150(a1, (unsigned int)v124, a2[2], 0, (unsigned int)&v127, 128, 257);
      if ( !v31 )
        goto LABEL_55;
      if ( *(_BYTE *)(v31 + 64) != *((_BYTE *)a2 + 64) || *(_DWORD *)v31 != 4 )
        goto LABEL_52;
      v64 = *((_DWORD *)a2 + 17);
      if ( *(_DWORD *)(v31 + 68) <= v64 )
      {
        if ( v64 > 4 )
          goto LABEL_55;
LABEL_54:
        a2 = (__int64 *)v31;
        if ( !(unsigned __int8)sub_AE450(a1, v31, v2, v114.m128i_i64[0]) )
          goto LABEL_55;
        v29 = 44;
LABEL_252:
        sub_93B40((__int64)&v127);
        sub_93B40(v114.m128i_i64[0]);
        goto LABEL_43;
      }
      v112 = v31;
      v85 = sub_A2310(&v127, v114.m128i_i64[0]);
      v31 = v112;
      if ( v85 )
      {
        v86 = sub_1205A0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0);
        v31 = v112;
        if ( !v86 )
        {
          v87 = sub_A9AA0(a1, v114.m128i_i64[0], *(_QWORD *)(v112 + 8), (__int64)a2, 1u);
          v31 = v112;
          if ( !v87 )
          {
            v88 = sub_12FF70(
                    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                    (unsigned int)&v117,
                    a1,
                    v112,
                    (int)v112 + 64,
                    (_DWORD)a2,
                    (__int64)v115);
            v31 = v112;
            if ( v88 )
            {
              sub_123A40(v131, v112 + 32);
              v89 = v112;
              if ( v117 >= 0 && v117 < SHIDWORD(v131[0]) )
              {
                v97 = sub_126F10(v131, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), (unsigned int)v117);
                v89 = v112;
                if ( v97 )
                {
                  v98 = sub_125B60(v131, a2 + 4, 0);
                  v89 = v112;
                  if ( v98 )
                  {
                    a2 = v131;
                    v99 = sub_A9CB0(a1, (__int64)v131, *(_QWORD *)(v112 + 8), v2);
                    v89 = v112;
                    if ( !v99 )
                    {
                      sub_11D5A0(v2);
                      v100 = *(_DWORD *)(a1 + 24);
                      v29 = 6;
                      BYTE1(v100) &= ~2u;
                      LOBYTE(v100) = v100 | 0x80;
                      *(_DWORD *)(a1 + 24) = v100;
                      sub_11CDA0(v131);
                      goto LABEL_252;
                    }
                  }
                }
              }
              v113 = v89;
              sub_11CDA0(v131);
              v31 = v113;
            }
          }
        }
      }
LABEL_52:
      if ( *(int *)(v2 + 68) <= 4 )
      {
        if ( (unsigned int)(*(_DWORD *)v31 - 8) <= 1 )
        {
          v110 = v31;
          v79 = sub_125B60(v31 + 32, v2 + 32, 0);
          v31 = v110;
          if ( v79 )
          {
            if ( *(_BYTE *)(v2 + 32) != 4 || (v96 = sub_1205A0(*(_QWORD *)(v2 + 40), v9, 0), v31 = v110, !v96) )
            {
              v111 = v31;
              v80 = sub_127420(v115, v9, v31 + 64);
              v31 = v111;
              if ( v80 )
              {
                if ( *(_DWORD *)(v111 + 68) >= *(_DWORD *)(v2 + 68) )
                {
                  v115 = (__int64 *)v111;
                  sub_124680(v131, a1, v111, 1);
                  v81 = sub_A9AA0(a1, v114.m128i_i64[0], *(_QWORD *)(v111 + 8), v2, 1u);
                  v82 = v111;
                  if ( !v81 )
                  {
                    a2 = v131;
                    v101 = sub_A9AA0(a1, v131, v115[1], v2, 1u);
                    v82 = (__int64)v115;
                    if ( !v101 )
                    {
                      sub_11D5A0(v2);
                      v102 = *(_DWORD *)(a1 + 24);
                      v29 = 8;
                      BYTE1(v102) &= ~2u;
                      LOBYTE(v102) = v102 | 0x80;
                      *(_DWORD *)(a1 + 24) = v102;
                      sub_93B40((__int64)v131);
                      goto LABEL_252;
                    }
                  }
                  v115 = (__int64 *)v82;
                  sub_93B40((__int64)v131);
                  v31 = (__int64)v115;
                }
              }
            }
          }
        }
        goto LABEL_54;
      }
LABEL_55:
      if ( v129 )
      {
        *(_QWORD *)&v130 = 0;
        qfree();
      }
      qfree();
      if ( v125 )
      {
        *(_QWORD *)&v126 = 0;
        qfree();
      }
      qfree();
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_186F90(a1, v2) )
      {
LABEL_68:
        v29 = 33;
LABEL_43:
        v30 = (const char *)sub_1B5B40(v2, a2);
        sub_A2520(a1, (__int64)"cmb%d: %s", v29, v30);
LABEL_44:
        LOBYTE(v116) = 1;
        goto LABEL_35;
      }
LABEL_60:
      if ( *(int *)(v2 + 68) <= 2 && (!(unsigned __int8)sub_11FD80(v2 + 32, v131, 0) || v131[0]) )
      {
        v114.m128i_i64[0] = v2 + 64;
        sub_123A40(&v127, v2 + 64);
        if ( !(unsigned __int8)sub_131730(v9, a1, v2, &v127, (unsigned int)(2 * HIDWORD(v127)), 0, 0) )
        {
          sub_11CDA0(&v127);
          goto LABEL_35;
        }
        sub_127FE0(a1, v121, &v127, 1);
        v32 = (__int64 *)sub_129150(a1, (unsigned int)v121, *(_QWORD *)(v2 + 16), 0, 0, 0, 257);
        v115 = v32;
        if ( v32 )
        {
          if ( *(_DWORD *)v32 == 4 )
          {
            if ( sub_A2350((__int64)(v32 + 4), 0, 0) )
            {
              v90 = *((_DWORD *)v115 + 17);
              v91 = (*(int *)(v2 + 4) >> 8) & 7;
              if ( (!v91 || 1 << (v91 - 1) >= v90) && *(_DWORD *)(v2 + 68) < v90 )
              {
                v131[0] = 0;
                v131[1] = 0;
                v132 = 0;
                v133 = 0;
                sub_127FE0(a1, v131, v115 + 8, 0);
                if ( !sub_A9D90(a1, v131, v115[1], *(_QWORD *)(v2 + 8), 1u)
                  && (unsigned __int8)sub_127420(v114.m128i_i64[0], v9, v115 + 8) )
                {
                  a2 = v115 + 8;
                  sub_125180(v114.m128i_i64[0]);
                  v106 = (__int64)v115;
                  *(_DWORD *)v2 = 9;
                  if ( *(char *)(v106 + 4) >= 0 )
                  {
                    sub_11D5A0(v106);
                    v107 = *(_DWORD *)(a1 + 24);
                    BYTE1(v107) &= ~2u;
                    LOBYTE(v107) = v107 | 0x80;
                    *(_DWORD *)(a1 + 24) = v107;
                  }
                  v29 = 7;
                  sub_93B40((__int64)v131);
                  sub_11CDA0(&v127);
                  goto LABEL_43;
                }
                sub_93B40((__int64)v131);
              }
            }
          }
        }
        sub_11CDA0(&v127);
      }
LABEL_33:
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_AC200(a1, (unsigned int *)v2) )
      {
        v29 = 26;
        goto LABEL_43;
      }
      a2 = (__int64 *)v2;
      if ( (unsigned __int8)sub_18AA30(a1, v2) )
      {
        v29 = 53;
        goto LABEL_43;
      }
LABEL_35:
      if ( v122 )
      {
        v123.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( v119 )
      {
        v120.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      return (unsigned __int8)v116;
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
        v29 = 20;
      }
      else if ( (unsigned __int8)sub_A02B0(a1, (__int64)a2) )
      {
        v29 = 25;
      }
      else if ( (unsigned __int8)sub_9B2C0(a1, (__int64)a2) )
      {
        v29 = 43;
      }
      else
      {
        if ( !(unsigned __int8)sub_98A40(a1, (__int64)a2) )
          goto LABEL_33;
        v29 = 55;
      }
      goto LABEL_43;
    case 0xB:
      if ( (unsigned __int8)sub_9FDC0(a1, (__int64)a2) )
      {
        v29 = 19;
      }
      else if ( (unsigned __int8)sub_9CFB0(a1, (__int64)a2) )
      {
        v29 = 22;
      }
      else if ( (unsigned __int8)sub_9B900(a1, (__int64)a2) )
      {
        v29 = 32;
      }
      else if ( (unsigned __int8)sub_9D2D0(a1, (__int64)a2) )
      {
        v29 = 51;
      }
      else
      {
        if ( !(unsigned __int8)sub_A0610(a1, (__int64)a2) )
          goto LABEL_33;
        v29 = 54;
      }
      goto LABEL_43;
    case 0xC:
      if ( *((_BYTE *)a2 + 32) != 1 )
        goto LABEL_77;
      if ( v9[15] != *((_DWORD *)a2 + 10) )
        goto LABEL_77;
      v114.m128i_i64[0] = (__int64)(a2 + 8);
      if ( !(unsigned __int8)sub_125B60(a2 + 4, a2 + 8, 0) )
        goto LABEL_77;
      if ( *((_BYTE *)a2 + 48) != 2 )
        goto LABEL_77;
      v51 = sub_129B40(a1, v118, v121, a2, 0);
      if ( !v51 )
        goto LABEL_77;
      v52 = *(int *)(v51 + 68);
      v115 = (__int64 *)(v2 + 48);
      if ( !sub_A2350(v2 + 48, v52, 1u) )
        goto LABEL_77;
      if ( *(_DWORD *)v51 == 2 )
      {
        if ( *(_BYTE *)(v51 + 32) != 1
          || v9[14] != *(_DWORD *)(v51 + 40)
          || *(_BYTE *)(v51 + 48) != 1
          || v9[15] != *(_DWORD *)(v51 + 56) )
        {
          goto LABEL_77;
        }
      }
      else
      {
        if ( *(_DWORD *)v51 != 4 )
          goto LABEL_77;
        if ( *(_BYTE *)(v51 + 32) != 4 )
          goto LABEL_77;
        v53 = *(_QWORD *)(v51 + 40);
        if ( *(_DWORD *)v53 != 2
          || *(_BYTE *)(v53 + 32) != 1
          || v9[14] != *(_DWORD *)(v53 + 40)
          || *(_BYTE *)(v53 + 48) != 1
          || v9[15] != *(_DWORD *)(v53 + 56) )
        {
          goto LABEL_77;
        }
      }
      if ( sub_B02D0(a1, v118, (__int64)v121, v51, v2) )
      {
        *(_DWORD *)v2 = 60;
        v54 = *(_QWORD *)(v2 + 24);
        a2 = (__int64 *)(v51 + 64);
        v55 = v114.m128i_i64[0];
        *(_QWORD *)(v2 + 24) = *(_QWORD *)(v51 + 24);
        *(_QWORD *)(v51 + 24) = v54;
        sub_11CA10(v55, v51 + 64);
        sub_11CDA0(v2 + 32);
        sub_11CDA0(v115);
        sub_11D5A0(v51);
        v56 = *(_DWORD *)(a1 + 24);
        v29 = 2;
        BYTE1(v56) &= ~2u;
        LOBYTE(v56) = v56 | 0x90;
        *(_DWORD *)(a1 + 24) = v56;
        goto LABEL_43;
      }
LABEL_77:
      a2 = (__int64 *)v2;
      if ( sub_9C9E0(a1, v2) )
      {
LABEL_152:
        v29 = 50;
      }
      else
      {
        a2 = (__int64 *)v2;
        if ( (unsigned __int8)sub_9DED0(a1, v2) )
        {
          v29 = 16;
        }
        else
        {
          a2 = (__int64 *)v2;
          if ( (unsigned __int8)sub_99410(a1, v2) )
          {
            v29 = 40;
          }
          else
          {
            a2 = (__int64 *)v2;
            if ( (unsigned __int8)sub_9F370(a1, v2) )
            {
              v29 = 17;
            }
            else
            {
              a2 = (__int64 *)v2;
              if ( (unsigned __int8)sub_9CB20(a1, v2) )
              {
                v29 = 23;
              }
              else
              {
                a2 = (__int64 *)v2;
                if ( (unsigned __int8)sub_96180(a1, v2) )
                {
                  v29 = 30;
                }
                else
                {
                  a2 = (__int64 *)v2;
                  if ( !(unsigned __int8)sub_96550(a1, v2) )
                    goto LABEL_33;
                  v29 = 45;
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
        v29 = 18;
      }
      else if ( (unsigned __int8)sub_9ED70(a1, (__int64)a2) )
      {
LABEL_239:
        v29 = 24;
      }
      else
      {
        if ( !(unsigned __int8)sub_97260(a1, a2) )
          goto LABEL_33;
        v29 = 56;
      }
      goto LABEL_43;
    case 0xE:
      if ( !(unsigned __int8)sub_97480(a1, (__int64)a2) )
        goto LABEL_33;
      v29 = 42;
      goto LABEL_43;
    case 0x13:
      goto LABEL_45;
    case 0x17:
      if ( (unsigned __int8)sub_96C00(a1, (unsigned int *)a2) )
      {
        v29 = 41;
      }
      else
      {
LABEL_45:
        if ( (unsigned __int8)sub_9B500(a1, (__int64)a2) )
        {
          v29 = 21;
        }
        else if ( (unsigned __int8)sub_968F0(a1, a2) )
        {
          v29 = 39;
        }
        else if ( (unsigned __int8)sub_98540(a1, (int *)a2) )
        {
          v29 = 49;
        }
        else
        {
          if ( !(unsigned __int8)sub_97770(a1, a2) )
            goto LABEL_33;
          v29 = 57;
        }
      }
      goto LABEL_43;
    case 0x18:
      if ( (unsigned __int8)sub_9EA00(a1, (__int64)a2) )
      {
        v29 = 31;
      }
      else
      {
        if ( !(unsigned __int8)sub_986E0(a1, (__int64)a2) )
          goto LABEL_33;
        v29 = 52;
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
      v29 = 47;
      goto LABEL_43;
    case 0x2A:
      if ( !(unsigned __int8)sub_B2870(a1, (__int64)a2) )
        goto LABEL_33;
      v29 = 35;
      goto LABEL_43;
    case 0x36:
      v43 = *((_DWORD *)a2 + 17);
      v44 = (unsigned int)v9[15];
      v45 = v2;
      v46 = 0;
      while ( 2 )
      {
        v47 = (unsigned int *)sub_124B60(a1, v44, v45, 0, 0, 1);
        v45 = (__int64)v47;
        if ( !v47 )
          goto LABEL_33;
        v48 = *v47;
        if ( v48 == 59 )
        {
          if ( *(_DWORD *)(v45 + 36) != v9[21] )
            goto LABEL_33;
          v65 = *(_QWORD *)(a1 + 64);
          v114.m128i_i64[0] = v45;
          v66 = v45 + 32;
          v67 = sub_A25E0(v65);
          if ( !sub_A2350(v66, v67, 0) )
            goto LABEL_33;
          v68 = (unsigned int)v9[15];
          v116 = v114.m128i_i64[0];
          v69 = sub_124B60(a1, v68, v114.m128i_i64[0], 0, 0, 1);
          v70 = sub_A2620((__int64)v9, v69);
          v71 = v114.m128i_i64[0];
          if ( v70 )
          {
            sub_11D5A0(v69);
            v72 = *(_DWORD *)(a1 + 24);
            v73 = *(_QWORD *)(a1 + 64);
            BYTE1(v72) &= ~2u;
            LOBYTE(v72) = v72 | 0x80;
            *(_DWORD *)(a1 + 24) = v72;
            v74 = sub_1CFBB0(v73, *(_QWORD *)(v69 + 24));
            v75 = sub_1CFBB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v2 + 24));
            v71 = v116;
            if ( v74 != v75 )
              *(_DWORD *)(v2 + 4) |= 0x20u;
          }
          sub_11D5A0(v71);
          v76 = *(_DWORD *)(a1 + 24);
          BYTE1(v76) &= ~2u;
          LOBYTE(v76) = v76 | 0x80;
          *(_DWORD *)(a1 + 24) = v76;
          *(_DWORD *)v2 = 57;
          sub_125180(v2 + 32);
          sub_125180(v2 + 48);
          sub_11CDA0(v2 + 64);
          v77 = (const char *)sub_1B5B40(v2, v2 + 64);
          sub_A2520(a1, (__int64)"cmb%d: %s", 6, v77);
          sub_167810(a1, v2, 6);
          goto LABEL_44;
        }
        if ( v48 <= 0x3B )
        {
          if ( v48 != 12 )
          {
            if ( v48 != 13 )
              goto LABEL_33;
            if ( *(_BYTE *)(v45 + 32) != 1 )
              goto LABEL_33;
            v44 = (unsigned int)v9[15];
            if ( (_DWORD)v44 != *(_DWORD *)(v45 + 40) )
              goto LABEL_33;
            continue;
          }
          if ( *(_BYTE *)(v45 + 32) == 1 && v9[15] == *(_DWORD *)(v45 + 40) )
          {
            v114.m128i_i64[0] = v45;
            v78 = sub_125B60(v45 + 32, v45 + 64, 0);
            v45 = v114.m128i_i64[0];
            if ( v78 && *(_BYTE *)(v114.m128i_i64[0] + 48) == 2 && *(_DWORD *)(v114.m128i_i64[0] + 36) == v43 )
              v46 = v114.m128i_i64[0];
            v44 = (unsigned int)v9[15];
            continue;
          }
          goto LABEL_33;
        }
        break;
      }
      if ( v48 != 60 )
        goto LABEL_33;
      if ( *(_BYTE *)(v2 + 64) != 1 )
        goto LABEL_198;
      if ( *(_BYTE *)(v45 + 64) != 1 )
        goto LABEL_33;
      if ( *(_DWORD *)(v2 + 72) == *(_DWORD *)(v45 + 72) && v43 == *(_DWORD *)(v45 + 68) )
      {
        v92 = *(_QWORD *)(a1 + 64);
        v114.m128i_i64[0] = v45;
        v115 = (__int64 *)(v2 + 48);
        sub_330F80(v92);
        v93 = getseg();
        v94 = sub_A2350(v2 + 48, *(_QWORD *)(v93 + 48), 0);
        v45 = v114.m128i_i64[0];
        if ( v94 )
          goto LABEL_280;
        if ( *(_BYTE *)(v2 + 48) != 1 )
          goto LABEL_33;
        if ( v9[16] == *(_DWORD *)(v2 + 56) )
        {
LABEL_280:
          v95 = sub_129010(a1, *(unsigned int *)(v2 + 72), *(_QWORD *)(v2 + 16), 0, 0);
          v45 = v114.m128i_i64[0];
          if ( v114.m128i_i64[0] == v95 )
          {
LABEL_208:
            sub_11D5A0(v45);
            v61 = *(_DWORD *)(a1 + 24);
            BYTE1(v61) &= ~2u;
            LOBYTE(v61) = v61 | 0x80;
            *(_DWORD *)(a1 + 24) = v61;
            sub_330990(a1, v2);
            if ( v46 )
            {
              sub_11D5A0(v46);
              v62 = *(_DWORD *)(a1 + 24);
              BYTE1(v62) &= ~2u;
              LOBYTE(v62) = v62 | 0x80;
              *(_DWORD *)(a1 + 24) = v62;
            }
            v63 = (const char *)sub_1B5B40(v2, v2);
            sub_A2520(a1, (__int64)"cmb%d: %s", 5, v63);
            goto LABEL_44;
          }
LABEL_198:
          if ( *(_BYTE *)(v2 + 48) != 1 )
            goto LABEL_33;
        }
        if ( *(_BYTE *)(v45 + 64) != 1 )
          goto LABEL_33;
      }
      else if ( *(_BYTE *)(v2 + 48) != 1 )
      {
        goto LABEL_33;
      }
      if ( *(_DWORD *)(v45 + 72) != *(_DWORD *)(v2 + 56) )
        goto LABEL_33;
      if ( v43 != *(_DWORD *)(v45 + 68) )
        goto LABEL_33;
      v58 = (unsigned int)v9[15];
      v114.m128i_i64[0] = v45;
      v59 = sub_124B60(a1, v58, v45, 0, 0, 1);
      if ( !v59
        || *(_BYTE *)(v2 + 64) != 1
        || *(_BYTE *)(v59 + 64) != 1
        || *(_DWORD *)(v2 + 72) != *(_DWORD *)(v59 + 72)
        || v43 != *(_DWORD *)(v59 + 68) )
      {
        goto LABEL_33;
      }
      v116 = v114.m128i_i64[0];
      sub_11D5A0(v59);
      v60 = *(_DWORD *)(a1 + 24);
      v45 = v114.m128i_i64[0];
      BYTE1(v60) &= ~2u;
      LOBYTE(v60) = v60 | 0x80;
      *(_DWORD *)(a1 + 24) = v60;
      goto LABEL_208;
    case 0x37:
      if ( *((_BYTE *)a2 + 32) != 6 )
        goto LABEL_33;
      v34 = *(_QWORD *)(a1 + 64);
      v35 = a2[5];
      if ( *(_QWORD *)(v34 + 40) != v35 )
      {
        if ( (unsigned __int8)sub_332920(v34 + 8, v35) )
          goto LABEL_33;
      }
      v36 = (_DWORD *)sub_124B60(a1, (unsigned int)v9[15], v2, 0, 0, 1);
      v37 = v36;
      if ( !v36 )
        goto LABEL_33;
      if ( *v36 != 59 )
        goto LABEL_33;
      if ( v36[9] != v9[21] )
        goto LABEL_33;
      a2 = (__int64 *)sub_A25E0(*(_QWORD *)(a1 + 64));
      if ( !sub_A2350((__int64)(v37 + 8), (__int64)a2, 0) )
        goto LABEL_33;
      func = get_func();
      if ( func )
      {
        if ( (*(_BYTE *)(func + 16) & 2) != 0 )
        {
          a2 = (__int64 *)sub_124B60(a1, (unsigned int)v9[15], v37, 0, 0, 1);
          if ( sub_A2620((__int64)v9, (__int64)a2) )
          {
            sub_11D5A0(a2);
            v103 = *(_DWORD *)(a1 + 24);
            v104 = *(_QWORD *)(a1 + 64);
            BYTE1(v103) &= ~2u;
            LOBYTE(v103) = v103 | 0x80;
            *(_DWORD *)(a1 + 24) = v103;
            v105 = sub_1CFBB0(v104, a2[3]);
            a2 = *(__int64 **)(v2 + 24);
            if ( v105 != sub_1CFBB0(*(_QWORD *)(a1 + 64), a2) )
              *(_DWORD *)(v2 + 4) |= 0x20u;
          }
        }
      }
      sub_11D5A0(v37);
      v39 = *(_DWORD *)(a1 + 24);
      v29 = 4;
      BYTE1(v39) &= ~2u;
      LOBYTE(v39) = v39 | 0x80;
      *(_DWORD *)(a1 + 24) = v39;
      *(_DWORD *)v2 = 56;
      goto LABEL_43;
    case 0x38:
      if ( *((_BYTE *)a2 + 64) != 8 )
        goto LABEL_33;
      v33 = *(_DWORD *)(a2[9] + 284);
      if ( v33 != 5 && v33 != 34 )
        goto LABEL_111;
      v50 = sub_1229A0(a2[1]);
      if ( v50 && (unsigned __int8)sub_189980(a1, a2, v50) )
      {
        v29 = 27;
        goto LABEL_43;
      }
      if ( *((_BYTE *)a2 + 64) != 8 )
        goto LABEL_33;
      v33 = *(_DWORD *)(a2[9] + 284);
      if ( v33 == 5 )
        goto LABEL_161;
LABEL_111:
      if ( (v33 & 0xFFFFFFDF) != 2 )
        goto LABEL_112;
LABEL_161:
      if ( (unsigned __int8)sub_186F90(a1, a2) )
        goto LABEL_68;
      if ( *((_BYTE *)a2 + 64) != 8 )
        goto LABEL_33;
      v33 = *(_DWORD *)(a2[9] + 284);
      if ( v33 != 5 )
      {
LABEL_112:
        if ( v33 != 2 )
          goto LABEL_33;
      }
      if ( !(unsigned __int8)sub_18A2C0(a1, a2) )
        goto LABEL_33;
      v29 = 28;
      goto LABEL_43;
    case 0x3B:
      if ( *((_BYTE *)a2 + 32) != 1 )
        goto LABEL_33;
      v40 = sub_122A30(a2[2]);
      v41 = v40;
      if ( !v40 )
        goto LABEL_33;
      if ( *(_DWORD *)v40 != 4 )
        goto LABEL_33;
      v42 = *(_BYTE *)(v40 + 32);
      if ( v42 != 2 && (v42 != 1 || *(_QWORD *)(v41 + 24) != a2[3]) )
        goto LABEL_33;
      if ( !(unsigned __int8)sub_125B60(v41 + 64, a2 + 4, 0) )
        goto LABEL_33;
      a2 = (__int64 *)(v41 + 32);
      sub_125180(v2 + 32);
      v29 = 9;
      goto LABEL_43;
    case 0x3C:
      sub_124680(v131, a1, a2, 0);
      sub_648D0(v118, v131);
      v10 = v132;
      v132 = 0;
      v11 = _mm_loadu_si128(&v133);
      v133 = 0;
      if ( v119 )
      {
        v114 = v11;
        v120.m128i_i64[0] = 0;
        qfree();
        v12 = _mm_load_si128(&v114);
        v119 = v10;
        v120 = v12;
        if ( v132 )
        {
          v133.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        v119 = v10;
        v120 = v11;
      }
      qfree();
      sub_127A20(v131, a1, a2, 0);
      sub_648D0(v121, v131);
      v13 = v132;
      v132 = 0;
      v14 = _mm_loadu_si128(&v133);
      v133 = 0;
      if ( v122 )
      {
        v114 = v14;
        v123.m128i_i64[0] = 0;
        qfree();
        v15 = _mm_load_si128(&v114);
        v122 = v13;
        v123 = v15;
        if ( v132 )
        {
          v133.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        v122 = v13;
        v123 = v14;
      }
      qfree();
      v16 = a2[2];
      if ( !v16 )
        goto LABEL_33;
      v114.m128i_i64[0] = (__int64)&v127;
      while ( 2 )
      {
        if ( (unsigned int)(*(_DWORD *)v16 - 56) <= 1 )
          goto LABEL_33;
        if ( *(_DWORD *)v16 != 59 )
          goto LABEL_28;
        if ( *(_DWORD *)(v16 + 36) != *(_DWORD *)(v2 + 68) )
          goto LABEL_33;
        v17 = sub_1CFBB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v16 + 24));
        v18 = *(_QWORD *)(v2 + 24);
        v19 = *(_QWORD *)(a1 + 64);
        v115 = (__int64 *)v17;
        v20 = sub_1CFBB0(v19, v18);
        v21 = *(int *)(v2 + 68);
        v22 = (__int64)v115;
        v115 = (__int64 *)v20;
        if ( v22 - v21 != v20 )
          goto LABEL_33;
        v23 = v9[21];
        v24 = v9[15];
        v127 = 0;
        v128 = 0;
        sub_63E80((__int64 *)v114.m128i_i64[0], v24, v23);
        v25 = *(_QWORD *)(a1 + 64);
        v129 = 0;
        v130 = 0;
        sub_122B20(
          v114.m128i_i32[0],
          *(_DWORD *)(v25 + 1440) + (_DWORD)v115,
          v9[20],
          *(_DWORD *)(v25 + 1440) + (_DWORD)v115,
          v26,
          v27,
          v108,
          v109,
          v114.m128i_i32[0],
          v114.m128i_i32[2],
          (__int64)v115);
        if ( sub_A9D90(a1, (__int64 *)v114.m128i_i64[0], *(_QWORD *)(v16 + 8), v2, 0) )
        {
          if ( v129 )
          {
            *(_QWORD *)&v130 = 0;
            qfree();
          }
        }
        else
        {
          sub_124680(v131, a1, v16, 1);
          if ( !sub_A9AA0(a1, v131, *(_QWORD *)(v16 + 8), v2, 1u) )
          {
            *(_DWORD *)v2 = 4;
            sub_125180(v2 + 32);
            if ( *(_BYTE *)(v2 + 32) == 1 && v9[15] == *(_DWORD *)(v2 + 40) )
              *(_QWORD *)(v2 + 24) = *(_QWORD *)(v16 + 24);
            sub_11D5A0(v16);
            v83 = *(_DWORD *)(a1 + 24);
            BYTE1(v83) &= ~2u;
            LOBYTE(v83) = v83 | 0x80;
            *(_DWORD *)(a1 + 24) = v83;
            v84 = (const char *)sub_1B5B40(v2, v16 + 32);
            sub_A2520(a1, (__int64)"cmb%d: %s", 3, v84);
            sub_167810(a1, v2, 6);
            if ( v132 )
            {
              v133.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            if ( v129 )
            {
              *(_QWORD *)&v130 = 0;
              qfree();
            }
            qfree();
            goto LABEL_44;
          }
          if ( v132 )
          {
            v133.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( v129 )
          {
            *(_QWORD *)&v130 = 0;
            qfree();
          }
          qfree();
LABEL_28:
          sub_127A20(v131, a1, v16, 0);
          if ( (unsigned __int8)sub_64780(v131, v118) )
          {
            v28 = v132;
          }
          else
          {
            v49 = sub_318470(&v132, &v119);
            v28 = v132;
            if ( !v49 )
            {
              if ( v132 )
              {
                v133.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
              v16 = *(_QWORD *)(v16 + 16);
              if ( !v16 )
                goto LABEL_33;
              continue;
            }
          }
          if ( v28 )
          {
            v133.m128i_i64[0] = 0;
            qfree();
          }
        }
        break;
      }
      qfree();
      goto LABEL_33;
    default:
      goto LABEL_33;
  }
}
