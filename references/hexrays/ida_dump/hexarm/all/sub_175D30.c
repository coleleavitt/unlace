__int64 __fastcall sub_175D30(__int64 a1, __int64 a2, __int64 a3, char a4)
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
  size_t v25; // rcx
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
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  char v44; // al
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r15
  unsigned int *v49; // r9
  __int64 v50; // rcx
  int v51; // edx
  char v52; // al
  __int64 v53; // rdx
  unsigned int *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int8 *v57; // rsi
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  int v66; // eax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // r15d
  char v72; // bp
  __int64 v73; // r9
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int8 *v76; // rsi
  int v77; // eax
  int v78; // r8d
  int v79; // edx
  __int64 v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rsi
  __int64 v87; // r9
  char v88; // al
  int v89; // eax
  char v90; // al
  char v91; // al
  __int64 v92; // rcx
  char v93; // al
  __int64 v94; // rax
  int v95; // eax
  char n; // [rsp+8h] [rbp-180h]
  size_t na; // [rsp+8h] [rbp-180h]
  size_t nf; // [rsp+8h] [rbp-180h]
  __int64 ne; // [rsp+8h] [rbp-180h]
  _QWORD *nb; // [rsp+8h] [rbp-180h]
  int nc; // [rsp+8h] [rbp-180h]
  char nd; // [rsp+8h] [rbp-180h]
  __m128i v103; // [rsp+10h] [rbp-178h] BYREF
  __int64 v104; // [rsp+20h] [rbp-168h]
  unsigned int v105; // [rsp+28h] [rbp-160h]
  int v106; // [rsp+2Ch] [rbp-15Ch]
  unsigned int *v107; // [rsp+30h] [rbp-158h]
  unsigned int *v108; // [rsp+38h] [rbp-150h]
  int v109; // [rsp+48h] [rbp-140h] BYREF
  int v110; // [rsp+4Ch] [rbp-13Ch] BYREF
  __int64 v111[2]; // [rsp+50h] [rbp-138h] BYREF
  void *src; // [rsp+60h] [rbp-128h]
  __int128 v113; // [rsp+68h] [rbp-120h]
  __int64 v114[2]; // [rsp+80h] [rbp-108h] BYREF
  size_t v115; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v116; // [rsp+98h] [rbp-F0h]
  _QWORD v117[5]; // [rsp+B0h] [rbp-D8h] BYREF
  char v118; // [rsp+D8h] [rbp-B0h]
  __int64 v119; // [rsp+E0h] [rbp-A8h]
  __int64 v120; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v121; // [rsp+F8h] [rbp-90h]
  __int64 v122; // [rsp+100h] [rbp-88h] BYREF
  __int128 v123; // [rsp+108h] [rbp-80h] BYREF
  __int64 v124; // [rsp+118h] [rbp-70h]
  _QWORD v125[2]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v126; // [rsp+130h] [rbp-58h]
  __int64 v127; // [rsp+138h] [rbp-50h]
  unsigned __int64 v128; // [rsp+148h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a1 + 349) == 0;
  *(_BYTE *)(a1 + 40) = 1;
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8);
  v105 = *(_DWORD *)v5 - 56;
  if ( v105 > 1 )
  {
    v9 = *(_QWORD *)(v6 + 1504);
    switch ( *(_BYTE *)a2 )
    {
      case 1:
      case 5:
      case 0xF:
        goto LABEL_9;
      case 4:
        v19 = sub_175610(a1, *(_QWORD *)(a2 + 8));
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
      v21 = sub_175610(a1, *(_QWORD *)(a2 + 8));
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
      v13 = sub_3439A0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 480LL), *(_QWORD *)(a2 + 8));
      a4 = n;
      if ( v13 )
        goto LABEL_10;
LABEL_9:
      if ( a4 )
        goto LABEL_10;
      *(_QWORD *)&v23 = *(_QWORD *)(a1 + 328);
      *((_QWORD *)&v23 + 1) = v111;
      v113 = 0;
      v111[0] = 0;
      v111[1] = 0;
      src = nullptr;
      v114[0] = 0;
      v114[1] = 0;
      v115 = 0;
      v116 = 0;
      sub_1238E0(v23, a2, 1u, 0xFFFF0000);
      if ( (unsigned __int8)sub_11DD00((int **)v5, &v109, &v110, 0) && v109 + v110 < *(_DWORD *)(v5 + 68) )
      {
        v36 = sub_11C4D0(v109 + v110);
        *(_QWORD *)&v37 = *(_QWORD *)(a1 + 328);
        *((_QWORD *)&v37 + 1) = v114;
        v110 = v36;
        sub_1238E0(v37, a2, 1u, v36 << 19);
      }
      else
      {
        v110 = *(_DWORD *)(a2 + 4);
      }
      if ( (unsigned __int8)sub_64280(v114) && !v116.m128i_i64[0] )
      {
        sub_642D0(v114, v111);
        v24 = v113;
        v25 = 0;
        if ( (_QWORD)v113 )
        {
          v103.m128i_i64[0] = v113;
          ne = 16 * v113;
          v34 = (void *)qalloc_or_throw(16 * v113);
          v35 = memcpy(v34, src, ne);
          v24 = v103.m128i_i64[0];
          v25 = (size_t)v35;
        }
        v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
        if ( v115 )
        {
          nf = v25;
          v103 = v26;
          v116.m128i_i64[0] = 0;
          qfree(v115);
          v26 = _mm_load_si128(&v103);
          v25 = nf;
        }
        v115 = v25;
        v116 = v26;
      }
      if ( (unsigned __int8)sub_64180((_QWORD *)(a1 + 192), v114) || (unsigned __int8)sub_318830(a1 + 208, &v115) )
        goto LABEL_53;
      if ( (unsigned __int8)sub_64180((_QWORD *)(a1 + 152), v114) )
        goto LABEL_65;
      if ( (unsigned __int8)sub_318830(a1 + 168, &v115) )
        goto LABEL_65;
      sub_64100(v114, (__int64 *)(a1 + 232));
      sub_318480(&v115, a1 + 248);
      if ( (unsigned __int8)sub_64280(v114) )
      {
        if ( !v116.m128i_i64[0] )
          goto LABEL_65;
      }
      v103.m128i_i64[0] = *(_QWORD *)(a1 + 312);
      if ( !(unsigned __int8)sub_64220(v114, v103.m128i_i64[0])
        || !(unsigned __int8)sub_318300(v103.m128i_i64[0] + 16, &v115) )
      {
        goto LABEL_65;
      }
      if ( !*(_BYTE *)(a1 + 353) && !*(_DWORD *)(a1 + 340) )
        goto LABEL_74;
      if ( *(_BYTE *)a2 != 15 )
        goto LABEL_78;
      v103.m128i_i64[0] = *(_QWORD *)(a1 + 56);
      nd = sub_172EA0(v103.m128i_i64[0], a2);
      if ( nd )
        goto LABEL_128;
      if ( *(_BYTE *)(v103.m128i_i64[0] + 64) == 15 )
      {
        nd = sub_1255A0((unsigned __int8 *)(v103.m128i_i64[0] + 64), a2, 0);
        goto LABEL_146;
      }
      if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 48LL), 2) & 0x2F) == 0xD )
      {
        v66 = *(_DWORD *)v103.m128i_i64[0];
        if ( *(_DWORD *)v103.m128i_i64[0] != 4 )
        {
          if ( v66 == 67 )
          {
            if ( *(_DWORD *)(v103.m128i_i64[0] + 36) != *(_DWORD *)(v103.m128i_i64[0] + 68) )
              goto LABEL_128;
          }
          else if ( (unsigned int)(v66 - 1) > 1 )
          {
            goto LABEL_128;
          }
        }
      }
      v63 = *(_QWORD **)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( v63[1] == 1 )
      {
        v120 = 0;
        v121 = 0;
        if ( *(_DWORD *)(v103.m128i_i64[0] + 68) == *(unsigned __int16 *)(*v63 + 18LL) )
        {
          v74 = v103.m128i_i64[0] + 64;
          v104 = (__int64)v63;
          v103.m128i_i64[0] = (__int64)&v120;
          if ( (unsigned __int8)sub_1C4A70(v74, &v120) )
            nd = (unsigned int)sub_1C2510(v103.m128i_i64[0], *(_QWORD *)v104) == 0;
        }
        else
        {
          v103.m128i_i64[0] = (__int64)&v120;
        }
        cleanup_argloc(v103.m128i_i64[0]);
LABEL_146:
        if ( nd && (unsigned __int8)sub_12ADF0((char *)a2, *(unsigned __int8 **)(a1 + 56)) )
          goto LABEL_140;
      }
LABEL_128:
      v67 = *(_QWORD *)(a1 + 56);
      if ( (*(_DWORD *)v67 == 4 || *(_DWORD *)v67 == 67 && *(_DWORD *)(v67 + 68) == *(_DWORD *)(v67 + 36))
        && *(_BYTE *)(v67 + 64) == 15
        && !(unsigned __int8)sub_11FFE0((_BYTE *)v67, v9, 0, (__int64)v63, v64, v65)
        && (unsigned __int8)sub_1C3800(
                              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 72LL),
                              *(unsigned int *)(*(_QWORD *)(a1 + 56) + 68LL),
                              *(_QWORD *)(a2 + 8),
                              *(unsigned int *)(a2 + 4),
                              &v120,
                              v73) )
      {
        sub_123480((__int64)v117, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
        if ( (LOBYTE(v117[0]) == 15
           || (unsigned __int8)sub_1C8C50(v117, *(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 72LL) + 48LL))
          && (unsigned __int8)sub_1263C0((__int64)v117, v122, *(_DWORD *)(a2 + 4), 0) )
        {
          sub_11C450((char *)a2, (char *)v117);
          ++*(_DWORD *)(a1 + 44);
          sub_11C7E0((__int64)v117);
          goto LABEL_65;
        }
        sub_11C7E0((__int64)v117);
      }
      if ( !(unsigned __int8)sub_1C2B50(*(_QWORD *)(a2 + 8), 0, 0, v63, v64) || sub_172EA0(*(_QWORD *)(a1 + 56), a2) )
      {
LABEL_74:
        if ( *(_BYTE *)(a1 + 352) )
        {
LABEL_53:
          v11 = -3;
LABEL_54:
          if ( v115 )
          {
            v116.m128i_i64[0] = 0;
            qfree(v115);
          }
          qfree(v114[0]);
          if ( src )
          {
            *(_QWORD *)&v113 = 0;
            qfree(src);
          }
          qfree(v111[0]);
          goto LABEL_26;
        }
        goto LABEL_65;
      }
LABEL_78:
      nb = (_QWORD *)(a1 + 272);
      if ( !sub_122670(a1 + 272, (__int64)v111) )
      {
        if ( !(unsigned __int8)sub_1753A0(a1, *(_QWORD *)(a1 + 56), a2) )
        {
          v68 = *(_QWORD *)(a1 + 56);
          if ( *(_BYTE *)(v68 + 64) != 8 )
            goto LABEL_79;
          v69 = *(_QWORD *)(v68 + 72);
          if ( *(_DWORD *)(v69 + 284) != 5 )
            goto LABEL_79;
          v70 = *(_QWORD *)(v69 + 24);
          if ( *(_BYTE *)(v70 + 80) != 10 )
            goto LABEL_79;
          v71 = *(_DWORD *)(a2 + 4);
          v72 = *(_BYTE *)(a2 + 1) & 2;
          sub_124BC0(a2, *(unsigned __int8 **)(v70 + 88));
          *(_DWORD *)(a2 + 4) = v71;
          if ( v72 )
            *(_BYTE *)(a2 + 1) |= 2u;
          sub_1754B0(*(_QWORD *)(a1 + 56));
        }
LABEL_140:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_65;
      }
LABEL_79:
      if ( *(_DWORD *)(a2 + 4) > v110 )
      {
        v38 = *(_QWORD *)(a1 + 56);
        if ( v110 <= *(_DWORD *)(v38 + 68)
          && !*(_BYTE *)(a1 + 354)
          && sub_125010((unsigned __int8 *)(v38 + 64), v9, a2, 1u) )
        {
          v76 = *(unsigned __int8 **)(a1 + 56);
          v121 = 0;
          v120 = 0xFFFFFFFF00000000LL;
          v103.m128i_i64[0] = (__int64)&v120;
          sub_125D20((__int64)&v120, v76);
          if ( (_BYTE)v120 == 4 )
          {
            v80 = v121;
            if ( *(_BYTE *)(v121 + 64) == 8 )
            {
              sub_F2630(*(_QWORD *)(v121 + 72));
              v77 = HIDWORD(v120);
              v78 = *(_DWORD *)(a2 + 4);
              if ( HIDWORD(v120) == v78 )
              {
LABEL_219:
                v80 = v121;
                if ( (_BYTE)v120 == 4 )
                  goto LABEL_214;
LABEL_211:
                if ( sub_125010((unsigned __int8 *)v103.m128i_i64[0], v9, a2, 0) )
                {
LABEL_212:
                  sub_11C7E0(v103.m128i_i64[0]);
                  goto LABEL_82;
                }
                sub_11C450((char *)a2, (char *)v103.m128i_i64[0]);
                goto LABEL_215;
              }
            }
            else
            {
              v77 = HIDWORD(v120);
              v78 = *(_DWORD *)(a2 + 4);
              if ( HIDWORD(v120) == v78 )
                goto LABEL_214;
            }
          }
          else
          {
            v77 = HIDWORD(v120);
            v78 = *(_DWORD *)(a2 + 4);
            if ( v78 == HIDWORD(v120) )
              goto LABEL_211;
          }
          v79 = 10;
          if ( v78 > v77 )
            v79 = 9;
          sub_120220((char *)v103.m128i_i64[0], v9, v79, *(_QWORD *)(v5 + 24), v78);
          if ( (_BYTE)v120 != 4 )
            goto LABEL_211;
          v80 = v121;
          if ( *(_DWORD *)v121 != 9 )
          {
LABEL_214:
            if ( !(unsigned __int8)sub_1753A0(a1, v80, a2) )
              goto LABEL_212;
LABEL_215:
            ++*(_DWORD *)(a1 + 44);
LABEL_216:
            sub_11C7E0(v103.m128i_i64[0]);
            goto LABEL_65;
          }
          if ( !sub_11C4C0(*(_DWORD *)(v121 + 36)) )
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
        && (unsigned __int8)sub_175AB0(a1, v111, nb) )
      {
        v11 = 1;
        goto LABEL_54;
      }
      if ( (unsigned int)(*(_DWORD *)v5 - 19) <= 1
        && (v39 = *(_QWORD *)(a1 + 56), (unsigned int)(*(_DWORD *)v39 - 56) <= 1) )
      {
        if ( *(_DWORD *)(v39 + 68) != v110 || v110 >= *(_DWORD *)(a2 + 4) )
          goto LABEL_65;
      }
      else
      {
        if ( !(unsigned __int8)sub_A1D50(nb, v111) )
          goto LABEL_65;
        v39 = *(_QWORD *)(a1 + 56);
      }
      nc = *(_DWORD *)(a2 + 4);
      if ( nc >= *(_DWORD *)(v39 + 68) )
        goto LABEL_65;
      if ( *(_BYTE *)(v39 + 64) != 14 )
      {
        v104 = v39;
        v103.m128i_i64[0] = v39 + 64;
        if ( !sub_125010((unsigned __int8 *)a2, v9, v39 + 64, 1u) )
        {
          if ( !(unsigned __int8)sub_1215F0(v103.m128i_i64[0], (char *)a2, v117, v81, v82, v83) )
            goto LABEL_65;
          v86 = *(_QWORD *)(v9 + 96);
          v87 = v104;
          if ( !*(_BYTE *)(v86 + 145) )
          {
LABEL_242:
            if ( !LODWORD(v117[0]) )
              goto LABEL_243;
            v95 = *(_DWORD *)(v87 + 68);
            if ( LODWORD(v117[0]) + *(_DWORD *)(a2 + 4) < v95 )
            {
              LODWORD(v104) = 10;
              nc = v95 - LODWORD(v117[0]);
              goto LABEL_233;
            }
            goto LABEL_238;
          }
          if ( *(_BYTE *)(v104 + 64) == 15 )
          {
            v91 = sub_1C2B50(*(_QWORD *)(v104 + 72), 0, 0, v84, v85);
            v86 = *(_QWORD *)(v9 + 96);
            v87 = v104;
            if ( !v91 )
            {
              v92 = *(int *)(a2 + 4);
              v103.m128i_i64[0] = v104;
              v120 = SLODWORD(v117[0]);
              v93 = sub_1C4B00(*(_QWORD *)(v104 + 72), v86, &v120, v92, *(int *)(v104 + 68));
              v87 = v103.m128i_i64[0];
              if ( !v93 || SLODWORD(v117[0]) != v120 )
                goto LABEL_65;
              goto LABEL_242;
            }
          }
          v104 = v87;
          v88 = sub_11C690((unsigned __int8 *)v103.m128i_i64[0], v86);
          v87 = v104;
          if ( !v88 )
            goto LABEL_242;
          v89 = LODWORD(v117[0]) + *(_DWORD *)(a2 + 4);
          if ( v89 != *(_DWORD *)(v104 + 68) )
          {
            if ( LODWORD(v117[0]) && v89 < *(_DWORD *)(v104 + 68) )
            {
              nc = LODWORD(v117[0]) + *(_DWORD *)(a2 + 4);
              LODWORD(v104) = 10;
LABEL_233:
              v103.m128i_i64[0] = v87;
              if ( !sub_11C4C0(nc) )
              {
                v90 = sub_11C690((unsigned __int8 *)a2, *(_QWORD *)(v9 + 96));
                nc = v117[0];
                if ( v90 )
                  nc = *(_DWORD *)(v103.m128i_i64[0] + 68) - (LODWORD(v117[0]) + *(_DWORD *)(a2 + 4));
                LODWORD(v104) = 10;
                v106 = 23;
                goto LABEL_101;
              }
              v106 = 11;
              goto LABEL_100;
            }
LABEL_238:
            LODWORD(v104) = 0;
            goto LABEL_233;
          }
        }
LABEL_243:
        v106 = 10;
        LODWORD(v104) = 0;
        goto LABEL_100;
      }
      v40 = *(_QWORD *)(v39 + 72);
      v103.m128i_i64[0] = v39;
      if ( nc > *(_DWORD *)(v40 + 4) )
        goto LABEL_65;
      if ( sub_125010((unsigned __int8 *)a2, v9, v40, 1u) )
        goto LABEL_243;
      v42 = v103.m128i_i64[0];
      v43 = *(_QWORD *)(v103.m128i_i64[0] + 72);
      if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(v43 + 20) )
        goto LABEL_95;
      v44 = sub_125010((unsigned __int8 *)a2, v9, v43 + 16, 1u);
      v42 = v103.m128i_i64[0];
      if ( !v44 )
      {
        v43 = *(_QWORD *)(v103.m128i_i64[0] + 72);
LABEL_95:
        v104 = v43;
        v103.m128i_i64[0] = v43 + 16;
        if ( !(unsigned __int8)sub_1215F0(v43 + 16, (char *)a2, &v120, v43, v41, v42) )
          goto LABEL_65;
        if ( !(sub_11C690((unsigned __int8 *)v103.m128i_i64[0], *(_QWORD *)(v9 + 96))
             ? (_DWORD)v120 == 0
             : *(_DWORD *)(a2 + 4) + (_DWORD)v120 == *(_DWORD *)(v104 + 20)) )
          goto LABEL_65;
        v106 = 11;
        LODWORD(v104) = 0;
        goto LABEL_100;
      }
      v94 = *(_QWORD *)(v103.m128i_i64[0] + 72);
      LODWORD(v104) = 10;
      v106 = 11;
      nc = *(_DWORD *)(v94 + 20);
LABEL_100:
      if ( !*(_DWORD *)(a1 + 44) )
      {
        v75 = *(_QWORD *)(a1 + 56);
        if ( (*(_DWORD *)v75 != 4 || !(unsigned __int8)sub_11F7C0((char *)(v75 + 32), &v120, 0) || v120)
          && *(_DWORD *)(a1 + 336) == 1
          && (unsigned __int8)sub_AB110(*(_QWORD *)(a1 + 328), (unsigned int *)v5, a2, v106 == 11) )
        {
          *(_BYTE *)(a1 + 350) = 1;
          v11 = -1;
          goto LABEL_54;
        }
      }
LABEL_101:
      v46 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(a1 + 348) == 8 && 2 * nc == *(_DWORD *)(v46 + 68) )
        goto LABEL_110;
      v47 = *(_QWORD *)(a1 + 328);
      v103.m128i_i64[0] = *(_QWORD *)(a1 + 56);
      v48 = *(_QWORD *)(*(_QWORD *)(v47 + 64) + 1496LL);
      if ( sub_122040((unsigned int *)v103.m128i_i64[0]) )
        goto LABEL_65;
      v49 = (unsigned int *)v103.m128i_i64[0];
      v50 = *(_QWORD *)(v48 + 8);
      v103.m128i_i64[0] = *(int *)(v103.m128i_i64[0] + 68);
      v51 = v103.m128i_i32[0];
      if ( v103.m128i_i64[0] == *(_QWORD *)(v50 + 120) )
      {
LABEL_181:
        if ( sub_11C660(*(_QWORD *)(v48 + 112), *v49, v51) )
          goto LABEL_108;
LABEL_65:
        v11 = 0;
        goto LABEL_54;
      }
      v108 = v49;
      v107 = (unsigned int *)v50;
      v52 = getinf(66);
      v54 = v107;
      v49 = v108;
      if ( v52 )
      {
        v107 = v108;
        LOBYTE(v55) = getinf(66);
        v49 = v107;
        v55 = (unsigned __int8)v55;
      }
      else
      {
        v55 = *((_QWORD *)v107 + 15);
      }
      if ( v103.m128i_i64[0] == v55 )
      {
        v51 = v49[17];
        goto LABEL_181;
      }
LABEL_108:
      v46 = *(_QWORD *)(a1 + 56);
      if ( (*(_DWORD *)v46 == 4 || *(_DWORD *)v46 == 67 && *(_DWORD *)(v46 + 36) == *(_DWORD *)(v46 + 68))
        && *(_BYTE *)(v46 + 32) == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v9 + 216LL))(
               v9,
               *(unsigned int *)(v46 + 40),
               v53,
               v54)
          && !(unsigned __int8)sub_13AAD0(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 328) + 64LL),
                                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 40LL),
                                 *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL)) )
        {
          v46 = *(_QWORD *)(a1 + 56);
          goto LABEL_110;
        }
        goto LABEL_65;
      }
LABEL_110:
      v56 = *(_QWORD *)(v46 + 24);
      v124 = 0;
      *((_QWORD *)&v123 + 1) = 0xFFFFFFFF00000000LL;
      v125[0] = 0xFFFFFFFF00000000LL;
      v126 = 0xFFFFFFFF00000000LL;
      v125[1] = 0;
      v127 = 0;
      v103.m128i_i64[0] = (__int64)&v120;
      sub_330C90(&v120, v56);
      v57 = *(unsigned __int8 **)(a1 + 56);
      LODWORD(v120) = v106;
      LOBYTE(v106) = BYTE9(v123);
      sub_125D20((__int64)&v123 + 8, v57);
      BYTE9(v123) |= v106 & 6;
      if ( BYTE8(v123) == 4 && *(_BYTE *)(v124 + 64) == 8 )
        sub_F2630(*(_QWORD *)(v124 + 72));
      if ( (_DWORD)v120 == 23 )
      {
        if ( (unsigned __int8)nc > 0x1Fu )
        {
LABEL_178:
          v11 = 0;
LABEL_179:
          sub_7C710(v103.m128i_i64[0]);
          goto LABEL_54;
        }
        sub_120450((__int64)v125, v9, 8 * nc, 1, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 0);
        nc = HIDWORD(v123);
      }
      HIDWORD(v126) = nc;
      if ( (_DWORD)v120 == 10
        && (unsigned __int8)sub_12D2C0(v103.m128i_i64[0], v9, 0, 0, nullptr)
        && ((_DWORD)v120 == 4 || (_DWORD)v120 == 67 && HIDWORD(v123) == HIDWORD(v126))
        && sub_125010((unsigned __int8 *)&v123 + 8, v9, a2, 1u)
        || *(_BYTE *)(*(_QWORD *)(v9 + 96) + 145LL)
        && BYTE8(v123) == 4
        && (unsigned int)(*(_DWORD *)v124 - 56) <= 1
        && SHIDWORD(v123) > *(_DWORD *)(v9 + 80)
        && (*(_BYTE *)(v124 + 65) & 2) != 0
        || sub_122040(*(unsigned int **)(a1 + 56)) && !sub_11C660(v9, v120, SHIDWORD(v123)) )
      {
        goto LABEL_178;
      }
      if ( (_DWORD)v104 )
      {
        v58 = v103.m128i_i64[0];
        sub_12B130(v103.m128i_i64[0], v9, 10, *(_DWORD *)(a2 + 4), 1);
        if ( (unsigned __int8)sub_122350(v58, nullptr) )
        {
          if ( !sub_11C660(v9, 0x17u, SHIDWORD(v123))
            && !(unsigned __int8)sub_12A3B0(v103.m128i_i64[0], v9, v103.m128i_i64[0]) )
          {
            v11 = -3;
            if ( *(_BYTE *)(a1 + 352) )
              goto LABEL_179;
            goto LABEL_178;
          }
        }
      }
      v59 = *(_QWORD *)(a1 + 328);
      v60 = v103.m128i_i64[0];
      v61 = *(_QWORD *)(v59 + 64);
      v62 = *(_QWORD *)(*(_QWORD *)(v59 + 480) + 112LL);
      v117[0] = &off_4D84D8;
      memset(&v117[2], 0, 24);
      v118 = 0;
      v119 = v62;
      v117[1] = v61;
      if ( !(unsigned int)sub_11E340(v103.m128i_i64[0], (__int64)v117) && (unsigned __int8)sub_1753A0(a1, v60, a2) )
        *(_QWORD *)(a1 + 44) = _mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)(a1 + 44)),
                                 _mm_loadl_epi64((const __m128i *)&qword_41F230)).m128i_u64[0];
      sub_7C710(v103.m128i_i64[0]);
      sub_93580(v114);
      sub_93580(v111);
LABEL_10:
      v11 = 0;
LABEL_26:
      if ( v105 <= 1 )
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
      v103.m128i_i64[0] = *(_QWORD *)(na + 32);
      if ( v103.m128i_i64[0] )
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
          if ( ++v16 == v103.m128i_i64[0] )
            goto LABEL_59;
        }
        if ( v103.m128i_i64[0] != v16 )
          goto LABEL_26;
LABEL_59:
        na = *(_QWORD *)(a2 + 8);
        goto LABEL_60;
      }
      v11 = 0;
LABEL_60:
      v27 = *(_QWORD *)(a1 + 328);
      v120 = 0;
      v123 = 0;
      v121 = 0;
      v122 = 0;
      v28 = *(_QWORD **)(v27 + 64);
      v103.m128i_i64[0] = (__int64)&v120;
      sub_11E010(na, &v120, v28);
      v29 = *(_QWORD *)(a2 + 8);
      sub_64040(&v120, (__int64 *)(v29 + 96), v30, v31, v32, v33);
      sub_318020(&v122, v29 + 112);
      sub_63C80((__int64 *)(a1 + 152), &v120);
      sub_317070(a1 + 168, &v122);
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree(v122);
      }
      qfree(v120);
      goto LABEL_26;
    case 0xA:
LABEL_13:
      v14 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)v14 != 1 )
        goto LABEL_10;
      v15 = *(_DWORD *)(v14 + 16);
      if ( v15 <= 0 || !(unsigned __int8)sub_64460((_QWORD *)(a1 + 272), *(_DWORD *)(v14 + 8), v15) )
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
        && !(unsigned __int8)sub_156C80(*(_QWORD *)(a1 + 328), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + 16LL) )
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
