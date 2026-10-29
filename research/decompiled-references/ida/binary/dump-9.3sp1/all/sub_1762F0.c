__int64 __fastcall sub_1762F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  bool v4; // zf
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v9; // rbp
  int v10; // eax
  int v11; // r14d
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r12
  __int64 v17; // r15
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  __int128 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  void *v34; // rax
  void *v35; // rax
  int v36; // eax
  __int128 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  char v45; // al
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // r15
  unsigned int *v50; // r9
  __int64 v51; // rcx
  int v52; // edx
  char v53; // al
  __int64 v54; // rdx
  unsigned int *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned __int8 *v58; // rsi
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  int v67; // eax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // r15d
  char v73; // bp
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rax
  unsigned __int8 *v78; // rsi
  int v79; // eax
  int v80; // r8d
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rsi
  __int64 v89; // r9
  char v90; // al
  int v91; // eax
  char v92; // al
  char v93; // al
  __int64 v94; // rcx
  char v95; // al
  __int64 v96; // rax
  int v97; // eax
  char n; // [rsp+8h] [rbp-180h]
  size_t na; // [rsp+8h] [rbp-180h]
  size_t nf; // [rsp+8h] [rbp-180h]
  __int64 ne; // [rsp+8h] [rbp-180h]
  _QWORD *nb; // [rsp+8h] [rbp-180h]
  int nc; // [rsp+8h] [rbp-180h]
  char nd; // [rsp+8h] [rbp-180h]
  __m128i v105; // [rsp+10h] [rbp-178h] BYREF
  __int64 v106; // [rsp+20h] [rbp-168h]
  unsigned int v107; // [rsp+28h] [rbp-160h]
  int v108; // [rsp+2Ch] [rbp-15Ch]
  unsigned int *v109; // [rsp+30h] [rbp-158h]
  unsigned int *v110; // [rsp+38h] [rbp-150h]
  int v111; // [rsp+48h] [rbp-140h] BYREF
  int v112; // [rsp+4Ch] [rbp-13Ch] BYREF
  __int64 v113[2]; // [rsp+50h] [rbp-138h] BYREF
  void *src; // [rsp+60h] [rbp-128h]
  __int128 v115; // [rsp+68h] [rbp-120h]
  __int64 v116[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v117; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v118; // [rsp+98h] [rbp-F0h]
  _QWORD v119[5]; // [rsp+B0h] [rbp-D8h] BYREF
  char v120; // [rsp+D8h] [rbp-B0h]
  __int64 v121; // [rsp+E0h] [rbp-A8h]
  __int64 v122; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-90h]
  __int64 v124; // [rsp+100h] [rbp-88h] BYREF
  __int128 v125; // [rsp+108h] [rbp-80h] BYREF
  __int64 v126; // [rsp+118h] [rbp-70h]
  _QWORD v127[2]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v128; // [rsp+130h] [rbp-58h]
  __int64 v129; // [rsp+138h] [rbp-50h]
  unsigned __int64 v130; // [rsp+148h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a1 + 349) == 0;
  *(_BYTE *)(a1 + 40) = 1;
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8);
  v107 = *(_DWORD *)v5 - 56;
  if ( v107 > 1 )
  {
    v9 = *(_QWORD *)(v6 + 1504);
    switch ( *(_BYTE *)a2 )
    {
      case 1:
      case 5:
      case 0xF:
        goto LABEL_9;
      case 4:
        v19 = sub_175BD0(a1, *(_QWORD *)(a2 + 8));
        v20 = 0;
        *(_QWORD *)(a1 + 32) = v5;
        if ( v19 <= 0 )
          v20 = v19;
        v11 = v20;
        break;
      case 6:
        goto LABEL_7;
      case 8:
        goto LABEL_17;
      case 0xA:
        goto LABEL_13;
      case 0xE:
        goto LABEL_28;
      default:
        return 0;
    }
    return (unsigned int)v11;
  }
  v10 = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(a1 + 340) = v10 + 1;
  v9 = *(_QWORD *)(v6 + 1504);
  switch ( *(_BYTE *)a2 )
  {
    case 1:
    case 5:
    case 0xF:
      goto LABEL_9;
    case 4:
      v21 = sub_175BD0(a1, *(_QWORD *)(a2 + 8));
      v22 = 0;
      *(_QWORD *)(a1 + 32) = v5;
      if ( v21 <= 0 )
        v22 = v21;
      v11 = v22;
      goto LABEL_27;
    case 6:
LABEL_7:
      n = a4;
      if ( *(_DWORD *)(a2 + 4) == -1 )
        goto LABEL_10;
      v13 = sub_343460(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 480LL), *(_QWORD *)(a2 + 8));
      a4 = n;
      if ( v13 )
        goto LABEL_10;
LABEL_9:
      if ( a4 )
        goto LABEL_10;
      *(_QWORD *)&v23 = *(_QWORD *)(a1 + 328);
      *((_QWORD *)&v23 + 1) = v113;
      v115 = 0;
      v113[0] = 0;
      v113[1] = 0;
      src = nullptr;
      v116[0] = 0;
      v116[1] = 0;
      v117 = 0;
      v118 = 0;
      sub_123EA0(v23, a2, 1, 0xFFFF0000);
      if ( (unsigned __int8)sub_11E2C0((int **)v5, &v111, &v112, 0) && v111 + v112 < *(_DWORD *)(v5 + 68) )
      {
        v36 = sub_11CA90(v111 + v112);
        *(_QWORD *)&v37 = *(_QWORD *)(a1 + 328);
        *((_QWORD *)&v37 + 1) = v116;
        v112 = v36;
        sub_123EA0(v37, a2, 1, v36 << 19);
      }
      else
      {
        v112 = *(_DWORD *)(a2 + 4);
      }
      if ( (unsigned __int8)sub_64880(v116) && !v118.m128i_i64[0] )
      {
        sub_648D0(v116, v113);
        v24 = v115;
        v25 = 0;
        if ( (_QWORD)v115 )
        {
          v105.m128i_i64[0] = v115;
          ne = 16 * v115;
          v34 = (void *)qalloc_or_throw(16 * v115, (__int64)v113, 16 * v115, 0);
          v35 = memcpy(v34, src, ne);
          v24 = v105.m128i_i64[0];
          v25 = (__int64)v35;
        }
        v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
        if ( v117 )
        {
          nf = v25;
          v105 = v26;
          v118.m128i_i64[0] = 0;
          qfree(v117);
          v26 = _mm_load_si128(&v105);
          v25 = nf;
        }
        v117 = v25;
        v118 = v26;
      }
      if ( (unsigned __int8)sub_64780((_QWORD *)(a1 + 192), v116) || (unsigned __int8)sub_318470(a1 + 208, &v117) )
        goto LABEL_53;
      if ( (unsigned __int8)sub_64780((_QWORD *)(a1 + 152), v116) )
        goto LABEL_65;
      if ( (unsigned __int8)sub_318470(a1 + 168, &v117) )
        goto LABEL_65;
      sub_64700(v116, (__int64 *)(a1 + 232));
      sub_3180C0(&v117, a1 + 248);
      if ( (unsigned __int8)sub_64880(v116) )
      {
        if ( !v118.m128i_i64[0] )
          goto LABEL_65;
      }
      v105.m128i_i64[0] = *(_QWORD *)(a1 + 312);
      if ( !(unsigned __int8)sub_64820(v116, v105.m128i_i64[0])
        || !(unsigned __int8)sub_317F40(v105.m128i_i64[0] + 16, &v117) )
      {
        goto LABEL_65;
      }
      if ( !*(_BYTE *)(a1 + 353) && !*(_DWORD *)(a1 + 340) )
        goto LABEL_74;
      if ( *(_BYTE *)a2 != 15 )
        goto LABEL_78;
      v105.m128i_i64[0] = *(_QWORD *)(a1 + 56);
      nd = sub_173460(v105.m128i_i64[0], a2);
      if ( nd )
        goto LABEL_128;
      if ( *(_BYTE *)(v105.m128i_i64[0] + 64) == 15 )
      {
        nd = sub_125B60((unsigned __int8 *)(v105.m128i_i64[0] + 64), a2, 0);
        goto LABEL_146;
      }
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        v67 = *(_DWORD *)v105.m128i_i64[0];
        if ( *(_DWORD *)v105.m128i_i64[0] != 4 )
        {
          if ( v67 == 67 )
          {
            if ( *(_DWORD *)(v105.m128i_i64[0] + 36) != *(_DWORD *)(v105.m128i_i64[0] + 68) )
              goto LABEL_128;
          }
          else if ( (unsigned int)(v67 - 1) > 1 )
          {
            goto LABEL_128;
          }
        }
      }
      v64 = *(_QWORD **)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( v64[1] == 1 )
      {
        v122 = 0;
        v123 = 0;
        if ( *(_DWORD *)(v105.m128i_i64[0] + 68) == *(unsigned __int16 *)(*v64 + 18LL) )
        {
          v76 = v105.m128i_i64[0] + 64;
          v106 = (__int64)v64;
          v105.m128i_i64[0] = (__int64)&v122;
          if ( (unsigned __int8)sub_1C5030(v76, &v122) )
            nd = (unsigned int)sub_1C2AD0(v105.m128i_i64[0], *(_QWORD *)v106) == 0;
        }
        else
        {
          v105.m128i_i64[0] = (__int64)&v122;
        }
        cleanup_argloc();
LABEL_146:
        if ( nd && (unsigned __int8)sub_12B3B0((char *)a2, *(unsigned __int8 **)(a1 + 56)) )
          goto LABEL_140;
      }
LABEL_128:
      v68 = *(_QWORD *)(a1 + 56);
      if ( (*(_DWORD *)v68 == 4 || *(_DWORD *)v68 == 67 && *(_DWORD *)(v68 + 68) == *(_DWORD *)(v68 + 36))
        && *(_BYTE *)(v68 + 64) == 15
        && !(unsigned __int8)sub_1205A0((_BYTE *)v68, v9, 0, (__int64)v64, v65, v66)
        && (unsigned __int8)sub_1C3DC0(
                              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 72LL),
                              *(unsigned int *)(*(_QWORD *)(a1 + 56) + 68LL),
                              *(_QWORD *)(a2 + 8),
                              *(unsigned int *)(a2 + 4),
                              &v122,
                              v74) )
      {
        sub_123A40((__int64)v119, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL), v75, (__int64)v64);
        if ( (LOBYTE(v119[0]) == 15
           || (unsigned __int8)sub_1C9210(v119, *(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 72LL) + 48LL))
          && (unsigned __int8)sub_126980((__int64)v119, v124, *(_DWORD *)(a2 + 4), 0) )
        {
          sub_11CA10((char *)a2, (char *)v119);
          ++*(_DWORD *)(a1 + 44);
          sub_11CDA0((__int64)v119);
          goto LABEL_65;
        }
        sub_11CDA0((__int64)v119);
      }
      if ( !(unsigned __int8)sub_1C3110(*(_QWORD *)(a2 + 8), 0, 0, v64, v65) || sub_173460(*(_QWORD *)(a1 + 56), a2) )
      {
LABEL_74:
        if ( *(_BYTE *)(a1 + 352) )
        {
LABEL_53:
          v11 = -3;
LABEL_54:
          if ( v117 )
          {
            v118.m128i_i64[0] = 0;
            qfree(v117);
          }
          qfree(v116[0]);
          if ( src )
          {
            *(_QWORD *)&v115 = 0;
            qfree((__int64)src);
          }
          qfree(v113[0]);
          goto LABEL_26;
        }
        goto LABEL_65;
      }
LABEL_78:
      nb = (_QWORD *)(a1 + 272);
      if ( !sub_122C30(a1 + 272, (__int64)v113) )
      {
        if ( !(unsigned __int8)sub_175960(a1, *(_QWORD *)(a1 + 56), a2) )
        {
          v69 = *(_QWORD *)(a1 + 56);
          if ( *(_BYTE *)(v69 + 64) != 8 )
            goto LABEL_79;
          v70 = *(_QWORD *)(v69 + 72);
          if ( *(_DWORD *)(v70 + 284) != 5 )
            goto LABEL_79;
          v71 = *(_QWORD *)(v70 + 24);
          if ( *(_BYTE *)(v71 + 80) != 10 )
            goto LABEL_79;
          v72 = *(_DWORD *)(a2 + 4);
          v73 = *(_BYTE *)(a2 + 1) & 2;
          sub_125180(a2, *(unsigned __int8 **)(v71 + 88));
          *(_DWORD *)(a2 + 4) = v72;
          if ( v73 )
            *(_BYTE *)(a2 + 1) |= 2u;
          sub_175A70(*(_QWORD *)(a1 + 56));
        }
LABEL_140:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_65;
      }
LABEL_79:
      if ( *(_DWORD *)(a2 + 4) > v112 )
      {
        v39 = *(_QWORD *)(a1 + 56);
        if ( v112 <= *(_DWORD *)(v39 + 68)
          && !*(_BYTE *)(a1 + 354)
          && sub_1255D0((unsigned __int8 *)(v39 + 64), v9, a2, 1) )
        {
          v78 = *(unsigned __int8 **)(a1 + 56);
          v123 = 0;
          v122 = 0xFFFFFFFF00000000LL;
          v105.m128i_i64[0] = (__int64)&v122;
          sub_1262E0((__int64)&v122, v78);
          if ( (_BYTE)v122 == 4 )
          {
            v82 = v123;
            if ( *(_BYTE *)(v123 + 64) == 8 )
            {
              sub_F2BF0(*(_QWORD *)(v123 + 72));
              v79 = HIDWORD(v122);
              v80 = *(_DWORD *)(a2 + 4);
              if ( HIDWORD(v122) == v80 )
              {
LABEL_219:
                v82 = v123;
                if ( (_BYTE)v122 == 4 )
                  goto LABEL_214;
LABEL_211:
                if ( sub_1255D0((unsigned __int8 *)v105.m128i_i64[0], v9, a2, 0) )
                {
LABEL_212:
                  sub_11CDA0(v105.m128i_i64[0]);
                  goto LABEL_82;
                }
                sub_11CA10((char *)a2, (char *)v105.m128i_i64[0]);
                goto LABEL_215;
              }
            }
            else
            {
              v79 = HIDWORD(v122);
              v80 = *(_DWORD *)(a2 + 4);
              if ( HIDWORD(v122) == v80 )
                goto LABEL_214;
            }
          }
          else
          {
            v79 = HIDWORD(v122);
            v80 = *(_DWORD *)(a2 + 4);
            if ( v80 == HIDWORD(v122) )
              goto LABEL_211;
          }
          v81 = 10;
          if ( v80 > v79 )
            v81 = 9;
          sub_1207E0((char *)v105.m128i_i64[0], v9, v81, *(_QWORD *)(v5 + 24), v80);
          if ( (_BYTE)v122 != 4 )
            goto LABEL_211;
          v82 = v123;
          if ( *(_DWORD *)v123 != 9 )
          {
LABEL_214:
            if ( !(unsigned __int8)sub_175960(a1, v82, a2) )
              goto LABEL_212;
LABEL_215:
            ++*(_DWORD *)(a1 + 44);
LABEL_216:
            sub_11CDA0(v105.m128i_i64[0]);
            goto LABEL_65;
          }
          if ( !sub_11CA80(*(_DWORD *)(v123 + 36)) )
            goto LABEL_216;
          goto LABEL_219;
        }
      }
LABEL_82:
      ++*(_DWORD *)(a1 + 48);
      if ( (*(_BYTE *)a2 & 0xFB) == 1
        && *(_DWORD *)(*(_QWORD *)(a1 + 56) + 68LL) == *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL)
                                                                          + 130LL)
        && !*(_BYTE *)(a1 + 354)
        && (unsigned __int8)sub_176070(a1, v113, nb, v38) )
      {
        v11 = 1;
        goto LABEL_54;
      }
      if ( (unsigned int)(*(_DWORD *)v5 - 19) <= 1
        && (v40 = *(_QWORD *)(a1 + 56), (unsigned int)(*(_DWORD *)v40 - 56) <= 1) )
      {
        if ( *(_DWORD *)(v40 + 68) != v112 || v112 >= *(_DWORD *)(a2 + 4) )
          goto LABEL_65;
      }
      else
      {
        if ( !(unsigned __int8)sub_A2310(nb, v113) )
          goto LABEL_65;
        v40 = *(_QWORD *)(a1 + 56);
      }
      nc = *(_DWORD *)(a2 + 4);
      if ( nc >= *(_DWORD *)(v40 + 68) )
        goto LABEL_65;
      if ( *(_BYTE *)(v40 + 64) != 14 )
      {
        v106 = v40;
        v105.m128i_i64[0] = v40 + 64;
        if ( !sub_1255D0((unsigned __int8 *)a2, v9, v40 + 64, 1) )
        {
          if ( !(unsigned __int8)sub_121BB0(v105.m128i_i64[0], (char *)a2, v119, v83, v84, v85) )
            goto LABEL_65;
          v88 = *(_QWORD *)(v9 + 96);
          v89 = v106;
          if ( !*(_BYTE *)(v88 + 145) )
          {
LABEL_242:
            if ( !LODWORD(v119[0]) )
              goto LABEL_243;
            v97 = *(_DWORD *)(v89 + 68);
            if ( LODWORD(v119[0]) + *(_DWORD *)(a2 + 4) < v97 )
            {
              LODWORD(v106) = 10;
              nc = v97 - LODWORD(v119[0]);
              goto LABEL_233;
            }
            goto LABEL_238;
          }
          if ( *(_BYTE *)(v106 + 64) == 15 )
          {
            v93 = sub_1C3110(*(_QWORD *)(v106 + 72), 0, 0, v86, v87);
            v88 = *(_QWORD *)(v9 + 96);
            v89 = v106;
            if ( !v93 )
            {
              v94 = *(int *)(a2 + 4);
              v105.m128i_i64[0] = v106;
              v122 = SLODWORD(v119[0]);
              v95 = sub_1C50C0(*(_QWORD *)(v106 + 72), v88, &v122, v94, *(int *)(v106 + 68));
              v89 = v105.m128i_i64[0];
              if ( !v95 || SLODWORD(v119[0]) != v122 )
                goto LABEL_65;
              goto LABEL_242;
            }
          }
          v106 = v89;
          v90 = sub_11CC50((unsigned __int8 *)v105.m128i_i64[0], v88);
          v89 = v106;
          if ( !v90 )
            goto LABEL_242;
          v91 = LODWORD(v119[0]) + *(_DWORD *)(a2 + 4);
          if ( v91 != *(_DWORD *)(v106 + 68) )
          {
            if ( LODWORD(v119[0]) && v91 < *(_DWORD *)(v106 + 68) )
            {
              nc = LODWORD(v119[0]) + *(_DWORD *)(a2 + 4);
              LODWORD(v106) = 10;
LABEL_233:
              v105.m128i_i64[0] = v89;
              if ( !sub_11CA80(nc) )
              {
                v92 = sub_11CC50((unsigned __int8 *)a2, *(_QWORD *)(v9 + 96));
                nc = v119[0];
                if ( v92 )
                  nc = *(_DWORD *)(v105.m128i_i64[0] + 68) - (LODWORD(v119[0]) + *(_DWORD *)(a2 + 4));
                LODWORD(v106) = 10;
                v108 = 23;
                goto LABEL_101;
              }
              v108 = 11;
              goto LABEL_100;
            }
LABEL_238:
            LODWORD(v106) = 0;
            goto LABEL_233;
          }
        }
LABEL_243:
        v108 = 10;
        LODWORD(v106) = 0;
        goto LABEL_100;
      }
      v41 = *(_QWORD *)(v40 + 72);
      v105.m128i_i64[0] = v40;
      if ( nc > *(_DWORD *)(v41 + 4) )
        goto LABEL_65;
      if ( sub_1255D0((unsigned __int8 *)a2, v9, v41, 1) )
        goto LABEL_243;
      v43 = v105.m128i_i64[0];
      v44 = *(_QWORD *)(v105.m128i_i64[0] + 72);
      if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(v44 + 20) )
        goto LABEL_95;
      v45 = sub_1255D0((unsigned __int8 *)a2, v9, v44 + 16, 1);
      v43 = v105.m128i_i64[0];
      if ( !v45 )
      {
        v44 = *(_QWORD *)(v105.m128i_i64[0] + 72);
LABEL_95:
        v106 = v44;
        v105.m128i_i64[0] = v44 + 16;
        if ( !(unsigned __int8)sub_121BB0(v44 + 16, (char *)a2, &v122, v44, v42, v43) )
          goto LABEL_65;
        if ( !(sub_11CC50((unsigned __int8 *)v105.m128i_i64[0], *(_QWORD *)(v9 + 96))
             ? (_DWORD)v122 == 0
             : *(_DWORD *)(a2 + 4) + (_DWORD)v122 == *(_DWORD *)(v106 + 20)) )
          goto LABEL_65;
        v108 = 11;
        LODWORD(v106) = 0;
        goto LABEL_100;
      }
      v96 = *(_QWORD *)(v105.m128i_i64[0] + 72);
      LODWORD(v106) = 10;
      v108 = 11;
      nc = *(_DWORD *)(v96 + 20);
LABEL_100:
      if ( !*(_DWORD *)(a1 + 44) )
      {
        v77 = *(_QWORD *)(a1 + 56);
        if ( (*(_DWORD *)v77 != 4 || !(unsigned __int8)sub_11FD80((char *)(v77 + 32), &v122, 0) || v122)
          && *(_DWORD *)(a1 + 336) == 1
          && (unsigned __int8)sub_AB6D0(*(_QWORD *)(a1 + 328), (unsigned int *)v5, a2, v108 == 11) )
        {
          *(_BYTE *)(a1 + 350) = 1;
          v11 = -1;
          goto LABEL_54;
        }
      }
LABEL_101:
      v47 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(a1 + 348) == 8 && 2 * nc == *(_DWORD *)(v47 + 68) )
        goto LABEL_110;
      v48 = *(_QWORD *)(a1 + 328);
      v105.m128i_i64[0] = *(_QWORD *)(a1 + 56);
      v49 = *(_QWORD *)(*(_QWORD *)(v48 + 64) + 1496LL);
      if ( sub_122600((unsigned int *)v105.m128i_i64[0]) )
        goto LABEL_65;
      v50 = (unsigned int *)v105.m128i_i64[0];
      v51 = *(_QWORD *)(v49 + 8);
      v105.m128i_i64[0] = *(int *)(v105.m128i_i64[0] + 68);
      v52 = v105.m128i_i32[0];
      if ( v105.m128i_i64[0] == *(_QWORD *)(v51 + 120) )
      {
LABEL_181:
        if ( sub_11CC20(*(_QWORD *)(v49 + 112), *v50, v52) )
          goto LABEL_108;
LABEL_65:
        v11 = 0;
        goto LABEL_54;
      }
      v110 = v50;
      v109 = (unsigned int *)v51;
      v53 = getinf();
      v55 = v109;
      v50 = v110;
      if ( v53 )
      {
        v109 = v110;
        LOBYTE(v56) = getinf();
        v50 = v109;
        v56 = (unsigned __int8)v56;
      }
      else
      {
        v56 = *((_QWORD *)v109 + 15);
      }
      if ( v105.m128i_i64[0] == v56 )
      {
        v52 = v50[17];
        goto LABEL_181;
      }
LABEL_108:
      v47 = *(_QWORD *)(a1 + 56);
      if ( (*(_DWORD *)v47 == 4 || *(_DWORD *)v47 == 67 && *(_DWORD *)(v47 + 36) == *(_DWORD *)(v47 + 68))
        && *(_BYTE *)(v47 + 32) == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v9 + 216LL))(
               v9,
               *(unsigned int *)(v47 + 40),
               v54,
               v55)
          && !(unsigned __int8)sub_13B090(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 328) + 64LL),
                                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 40LL)) )
        {
          v47 = *(_QWORD *)(a1 + 56);
          goto LABEL_110;
        }
        goto LABEL_65;
      }
LABEL_110:
      v57 = *(_QWORD *)(v47 + 24);
      v126 = 0;
      *((_QWORD *)&v125 + 1) = 0xFFFFFFFF00000000LL;
      v127[0] = 0xFFFFFFFF00000000LL;
      v128 = 0xFFFFFFFF00000000LL;
      v127[1] = 0;
      v129 = 0;
      v105.m128i_i64[0] = (__int64)&v122;
      sub_330970(&v122, v57);
      v58 = *(unsigned __int8 **)(a1 + 56);
      LODWORD(v122) = v108;
      LOBYTE(v108) = BYTE9(v125);
      sub_1262E0((__int64)&v125 + 8, v58);
      BYTE9(v125) |= v108 & 6;
      if ( BYTE8(v125) == 4 && *(_BYTE *)(v126 + 64) == 8 )
        sub_F2BF0(*(_QWORD *)(v126 + 72));
      if ( (_DWORD)v122 == 23 )
      {
        if ( (unsigned __int8)nc > 0x1Fu )
        {
LABEL_178:
          v11 = 0;
LABEL_179:
          sub_7CCD0(v105.m128i_i64[0]);
          goto LABEL_54;
        }
        sub_120A10((__int64)v127, v9, 8 * nc, 1, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 0);
        nc = HIDWORD(v125);
      }
      HIDWORD(v128) = nc;
      if ( (_DWORD)v122 == 10
        && (unsigned __int8)sub_12D880(v105.m128i_i64[0], v9, 0, 0, nullptr)
        && ((_DWORD)v122 == 4 || (_DWORD)v122 == 67 && HIDWORD(v125) == HIDWORD(v128))
        && sub_1255D0((unsigned __int8 *)&v125 + 8, v9, a2, 1)
        || *(_BYTE *)(*(_QWORD *)(v9 + 96) + 145LL)
        && BYTE8(v125) == 4
        && (unsigned int)(*(_DWORD *)v126 - 56) <= 1
        && SHIDWORD(v125) > *(_DWORD *)(v9 + 80)
        && (*(_BYTE *)(v126 + 65) & 2) != 0
        || sub_122600(*(unsigned int **)(a1 + 56)) && !sub_11CC20(v9, v122, SHIDWORD(v125)) )
      {
        goto LABEL_178;
      }
      if ( (_DWORD)v106 )
      {
        v59 = v105.m128i_i64[0];
        sub_12B6F0(v105.m128i_i64[0], v9, 10, *(_DWORD *)(a2 + 4), 1);
        if ( (unsigned __int8)sub_122910(v59, nullptr) )
        {
          if ( !sub_11CC20(v9, 0x17u, SHIDWORD(v125))
            && !(unsigned __int8)sub_12A970(v105.m128i_i64[0], v9, v105.m128i_i64[0]) )
          {
            v11 = -3;
            if ( *(_BYTE *)(a1 + 352) )
              goto LABEL_179;
            goto LABEL_178;
          }
        }
      }
      v60 = *(_QWORD *)(a1 + 328);
      v61 = v105.m128i_i64[0];
      v62 = *(_QWORD *)(v60 + 64);
      v63 = *(_QWORD *)(*(_QWORD *)(v60 + 480) + 112LL);
      v119[0] = &off_4DDE18;
      memset(&v119[2], 0, 24);
      v120 = 0;
      v121 = v63;
      v119[1] = v62;
      if ( !(unsigned int)sub_11E900(v105.m128i_i64[0], (__int64)v119) && (unsigned __int8)sub_175960(a1, v61, a2) )
        *(_QWORD *)(a1 + 44) = _mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)(a1 + 44)),
                                 _mm_loadl_epi64((const __m128i *)&qword_424010)).m128i_u64[0];
      sub_7CCD0(v105.m128i_i64[0]);
      sub_93B40(v116);
      sub_93B40(v113);
LABEL_10:
      v11 = 0;
LABEL_26:
      if ( v107 <= 1 )
      {
LABEL_27:
        v10 = *(_DWORD *)(a1 + 340) - 1;
LABEL_12:
        *(_DWORD *)(a1 + 340) = v10;
      }
      return (unsigned int)v11;
    case 8:
LABEL_17:
      na = *(_QWORD *)(a2 + 8);
      v105.m128i_i64[0] = *(_QWORD *)(na + 32);
      if ( v105.m128i_i64[0] )
      {
        v16 = 0;
        while ( 1 )
        {
          v18 = *(_DWORD *)(a1 + 44);
          *(_BYTE *)(a1 + 348) = 8;
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
                  a1,
                  80 * v16 + *(_QWORD *)(na + 24),
                  0,
                  0);
          if ( v11 || *(_BYTE *)(a1 + 349) )
            break;
          if ( *(_DWORD *)(a1 + 44) != v18 )
          {
            v17 = *(_QWORD *)(na + 24) + 80 * v16;
            if ( *(_QWORD *)(v17 + 16) == -1 )
              *(_QWORD *)(v17 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
          }
          if ( ++v16 == v105.m128i_i64[0] )
            goto LABEL_59;
        }
        if ( v105.m128i_i64[0] != v16 )
          goto LABEL_26;
LABEL_59:
        na = *(_QWORD *)(a2 + 8);
        goto LABEL_60;
      }
      v11 = 0;
LABEL_60:
      v27 = *(_QWORD *)(a1 + 328);
      v122 = 0;
      v125 = 0;
      v123 = 0;
      v124 = 0;
      v28 = *(_QWORD **)(v27 + 64);
      v105.m128i_i64[0] = (__int64)&v122;
      sub_11E5D0(na, &v122, v28);
      v29 = *(_QWORD *)(a2 + 8);
      sub_64640(&v122, (__int64 *)(v29 + 96), v30, v31, v32, v33);
      sub_317C60(&v124, v29 + 112);
      sub_64280((__int64 *)(a1 + 152), &v122);
      sub_316CB0(a1 + 168, &v124);
      if ( v124 )
      {
        *(_QWORD *)&v125 = 0;
        qfree(v124);
      }
      qfree(v122);
      goto LABEL_26;
    case 0xA:
LABEL_13:
      v14 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)v14 != 1 )
        goto LABEL_10;
      v15 = *(_DWORD *)(v14 + 16);
      if ( v15 <= 0 || !(unsigned __int8)sub_64A60((_QWORD *)(a1 + 272), *(_DWORD *)(v14 + 8), v15) )
        goto LABEL_10;
      goto LABEL_35;
    case 0xE:
LABEL_28:
      if ( a4 )
        goto LABEL_10;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
              a1,
              *(_QWORD *)(a2 + 8),
              0,
              0);
      if ( v11 )
        goto LABEL_32;
      if ( *(_BYTE *)a2 != 14 )
        goto LABEL_10;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
              a1,
              *(_QWORD *)(a2 + 8) + 16LL,
              0,
              0);
LABEL_32:
      if ( v11 >= 0
        && *(_BYTE *)a2 == 14
        && !(unsigned __int8)sub_157240(*(_QWORD *)(a1 + 328), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + 16LL) )
      {
LABEL_35:
        v11 = -3;
      }
      goto LABEL_26;
    default:
      v11 = 0;
      goto LABEL_12;
  }
}
