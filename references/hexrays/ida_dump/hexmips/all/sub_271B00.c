__int64 __fastcall sub_271B00(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 tinfo_size; // r12
  __int64 v15; // rax
  char v16; // r8
  int v17; // ecx
  char v18; // r13
  char v19; // si
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  char v27; // r12
  int v28; // eax
  int v29; // eax
  _QWORD *v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r12d
  char v34; // al
  int v35; // r8d
  int v36; // r9d
  int v37; // r8d
  int v38; // r9d
  __int64 *v39; // rax
  __int64 v40; // r9
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdi
  char v45; // al
  __int64 v46; // r8
  char *v47; // rdi
  char tinfo_property; // al
  unsigned __int8 v49; // dl
  __int64 v50; // rdx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // r12
  int v57; // eax
  __int64 v58; // rax
  _QWORD *v59; // r9
  char *v60; // rax
  char *v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // rsi
  char *v66; // rdi
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rdi
  int v71; // ebx
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 *v76; // r13
  int v77; // eax
  unsigned int v78; // r12d
  unsigned int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // rdi
  __int64 v84; // rax
  char *v85; // rax
  __int64 v86; // rdi
  char *v87; // rdi
  char v88; // al
  __int64 v89; // r13
  __int64 v90; // rax
  char v91; // al
  __int64 v92; // rdi
  __int64 v93; // rax
  int v94; // r13d
  int v95; // eax
  char v96; // al
  bool v97; // r13
  __int64 v98; // rdi
  int v99; // r12d
  char v100; // r13
  char i; // al
  __int64 v102; // rdx
  __int64 v103; // [rsp+8h] [rbp-2B8h]
  int v104; // [rsp+10h] [rbp-2B0h]
  __int64 v105; // [rsp+10h] [rbp-2B0h]
  int v106; // [rsp+18h] [rbp-2A8h]
  _QWORD *v107; // [rsp+18h] [rbp-2A8h]
  __int64 v108; // [rsp+18h] [rbp-2A8h]
  __int64 v109; // [rsp+18h] [rbp-2A8h]
  unsigned __int8 v110; // [rsp+18h] [rbp-2A8h]
  __int64 v111; // [rsp+20h] [rbp-2A0h]
  char v112; // [rsp+28h] [rbp-298h]
  char v113; // [rsp+28h] [rbp-298h]
  int v114; // [rsp+28h] [rbp-298h]
  __int64 v115; // [rsp+28h] [rbp-298h]
  __int64 v116; // [rsp+38h] [rbp-288h]
  __int64 v117; // [rsp+38h] [rbp-288h]
  char *v118; // [rsp+38h] [rbp-288h]
  __int64 v119; // [rsp+48h] [rbp-278h] BYREF
  __int64 v120; // [rsp+50h] [rbp-270h] BYREF
  __int64 v121; // [rsp+58h] [rbp-268h] BYREF
  char *s1; // [rsp+60h] [rbp-260h] BYREF
  __int128 v123; // [rsp+68h] [rbp-258h]
  __int128 v124; // [rsp+78h] [rbp-248h] BYREF
  __int64 v125; // [rsp+88h] [rbp-238h] BYREF
  __int128 v126; // [rsp+90h] [rbp-230h]
  __int64 v127; // [rsp+A0h] [rbp-220h]
  __int128 v128; // [rsp+A8h] [rbp-218h]
  char v129; // [rsp+B8h] [rbp-208h]
  __m128i v130; // [rsp+C0h] [rbp-200h] BYREF
  __int64 v131; // [rsp+D0h] [rbp-1F0h]
  __int64 v132; // [rsp+D8h] [rbp-1E8h]
  __int64 v133; // [rsp+E0h] [rbp-1E0h]
  __int64 v134; // [rsp+E8h] [rbp-1D8h]
  __int64 v135; // [rsp+F0h] [rbp-1D0h]
  __int64 v136; // [rsp+F8h] [rbp-1C8h]
  __int128 v137; // [rsp+100h] [rbp-1C0h]
  __int64 v138; // [rsp+110h] [rbp-1B0h]
  __int128 v139; // [rsp+118h] [rbp-1A8h]
  __int64 v140; // [rsp+128h] [rbp-198h]
  int v141; // [rsp+130h] [rbp-190h]
  __int64 v142; // [rsp+138h] [rbp-188h]
  __int64 v143; // [rsp+140h] [rbp-180h]
  __int64 v144; // [rsp+148h] [rbp-178h] BYREF
  __int64 v145; // [rsp+150h] [rbp-170h] BYREF
  __int64 v146; // [rsp+158h] [rbp-168h]
  __int128 v147; // [rsp+160h] [rbp-160h]
  __int64 v148; // [rsp+170h] [rbp-150h]
  int v149; // [rsp+270h] [rbp-50h]
  int v150; // [rsp+274h] [rbp-4Ch]
  __int64 v151; // [rsp+278h] [rbp-48h]
  char v152; // [rsp+280h] [rbp-40h]
  char v153; // [rsp+281h] [rbp-3Fh]
  int v154; // [rsp+282h] [rbp-3Eh]
  unsigned __int64 v155; // [rsp+288h] [rbp-38h]

  v155 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
    return 0;
  v116 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  LOBYTE(v3) = *(_DWORD *)(v116 + 8) == 59 || *(_DWORD *)(v116 + 8) == 52;
  if ( (_BYTE)v3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = a2;
  v121 = 0;
  v111 = v5;
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 == 48 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 52 )
      goto LABEL_6;
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
    if ( tinfo_size == get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0) )
    {
      v86 = *(_QWORD *)(a2 + 48);
      s1 = nullptr;
      s1 = (char *)get_tinfo_property(v86, 9);
      copy_tinfo_t(&v121, &s1);
      clear_tinfo_t(&s1);
      v112 = 1;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
      goto LABEL_7;
    }
    v7 = *(_DWORD *)(a2 + 8);
  }
  if ( v7 == 52 )
  {
    v112 = 1;
    v8 = *(_QWORD *)(a2 + 24);
    goto LABEL_7;
  }
LABEL_6:
  v112 = 0;
  v8 = a2;
LABEL_7:
  v9 = sub_266B50(v8);
  if ( v9 != -1 && (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) != 0xB )
  {
    v10 = v121;
    if ( !(_BYTE)v121 )
    {
      copy_tinfo_t(&v121, v8 + 48);
      v10 = v121;
    }
    if ( get_tinfo_size(0, v10, 0) == -1 )
      clear_tinfo_t(&v121);
    if ( v112 )
    {
      if ( *(_DWORD *)(v116 + 8) == 57 )
      {
        v39 = *(__int64 **)(v116 + 32);
        v40 = *v39;
        v41 = 72 * v39[1] == 0;
        v42 = *v39 + 72 * v39[1];
        if ( !v41 )
        {
          v43 = v40;
          while ( v6 != v43 )
          {
            v43 += 72;
            if ( v43 == v42 )
              goto LABEL_14;
          }
          v44 = *(_QWORD *)(v116 + 24);
          v103 = v40;
          v105 = v43;
          s1 = nullptr;
          v107 = (_QWORD *)(v44 + 48);
          v123 = 0;
          v45 = sub_250570(v44, (__int64 *)&s1, v44 + 48, 0);
          v46 = v105;
          if ( !v45 )
          {
            v47 = s1;
            if ( !s1 )
              goto LABEL_67;
            goto LABEL_66;
          }
          v87 = (char *)::s1;
          if ( (_QWORD)v123 )
            v87 = s1;
          v88 = sub_F3F90(v87, v107, 954437177 * (unsigned int)((v105 - v103) >> 3));
          v47 = s1;
          v46 = v105;
          if ( !v88 )
          {
            if ( !s1 )
            {
LABEL_67:
              v109 = v46;
              v104 = 1;
              if ( (get_tinfo_property(*(_QWORD *)(v46 + 64), 2) & 0xF) == 0xA )
              {
                s1 = nullptr;
                s1 = (char *)get_tinfo_property(*(_QWORD *)(v109 + 64), 9);
                tinfo_property = get_tinfo_property(s1, 2);
                v49 = 0;
                if ( (tinfo_property & 0xF) != 0xA )
                  v49 = sub_298400(&s1) ^ 1;
                v110 = v49;
                clear_tinfo_t(&s1);
                v104 = v110;
              }
              goto LABEL_15;
            }
LABEL_66:
            v108 = v46;
            *(_QWORD *)&v123 = 0;
            qfree(v47);
            v46 = v108;
            goto LABEL_67;
          }
          if ( s1 )
          {
            *(_QWORD *)&v123 = 0;
            qfree(s1);
          }
        }
      }
    }
LABEL_14:
    v104 = 0;
LABEL_15:
    v11 = 0;
    if ( *(_DWORD *)(v8 + 8) == 65 )
      v11 = v8 + 24;
    v106 = v11;
    v12 = *(_QWORD *)(v111 + 808);
    s1 = nullptr;
    copy_tinfo_t(&s1, &v121);
    sub_279F10(v12, v9, 0, 0, (unsigned int)&s1, v106, v104);
    clear_tinfo_t(&s1);
  }
  clear_tinfo_t(&v121);
  switch ( *(_DWORD *)(v6 + 8) )
  {
    case 2:
      if ( (unsigned __int8)sub_243DE0(v6, *(_QWORD *)(a1 + 72), 1u) )
        goto LABEL_82;
      goto LABEL_20;
    case 6:
    case 7:
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 48LL), 2) & 0xF) - 10) > 1u )
        goto LABEL_20;
      v13 = *(_QWORD *)(v6 + 24);
      v15 = *(_QWORD *)(v6 + 32);
      v16 = 0;
      v17 = 0;
      v18 = 1;
      goto LABEL_28;
    case 0x23:
      v13 = sub_267570(v6, 0);
      if ( !v13 )
      {
        v13 = sub_267570(v6, 1);
        if ( !v13 )
          goto LABEL_20;
      }
      v15 = *(_QWORD *)(v6 + 24);
      if ( v13 == v15 )
        v15 = *(_QWORD *)(v6 + 32);
      v16 = 0;
      v18 = 0;
      v19 = 0;
      v17 = 0;
      goto LABEL_30;
    case 0x24:
      v53 = sub_250760(*(_QWORD *)(v6 + 24));
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v53 + 48), 2) & 0xF) - 10) > 1u )
        goto LABEL_20;
      v54 = sub_250760(*(_QWORD *)(v6 + 32));
      v55 = get_tinfo_property(*(_QWORD *)(v54 + 48), 2);
      v13 = *(_QWORD *)(v6 + 24);
      if ( (unsigned __int8)((v55 & 0xF) - 10) <= 1u )
      {
        if ( (int)get_tinfo_property(*(_QWORD *)(v13 + 48), 14) > 1 )
          sub_2422C0(*(_QWORD *)(v6 + 24), *(_QWORD *)(a1 + 72), (_QWORD *)(*(_QWORD *)(a1 + 72) + 200LL));
        if ( (int)get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 48LL), 14) > 1
          || !sub_240DD0(*(_QWORD *)(a1 + 72), *(_QWORD *)(v6 + 24), *(_QWORD *)(v6 + 32), 0) )
        {
          sub_2422C0(*(_QWORD *)(v6 + 32), *(_QWORD *)(a1 + 72), (_QWORD *)(*(_QWORD *)(v6 + 24) + 48LL));
        }
        sub_23F940(v6, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
LABEL_82:
        LOBYTE(v3) = sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
        v28 = *(_DWORD *)(v116 + 8);
LABEL_42:
        if ( v28 > 69 )
          goto LABEL_57;
        goto LABEL_43;
      }
      v15 = *(_QWORD *)(v6 + 32);
      v16 = 0;
      v18 = 0;
      v17 = 0;
      goto LABEL_28;
    case 0x30:
      if ( !(unsigned __int8)sub_267E50(a1, (__int64 *)v6) )
      {
        v51 = *(_DWORD *)(v116 + 8);
        if ( v51 != 51 && v51 != 57 )
        {
LABEL_106:
          if ( v51 <= 69 )
            goto LABEL_43;
LABEL_21:
          *(_DWORD *)(v6 + 56) |= 1u;
          return 0;
        }
        v83 = *(_QWORD *)(v6 + 48);
        v121 = 0;
        v121 = get_tinfo_property(v83, 9);
        if ( !(_BYTE)v121 )
        {
LABEL_159:
          clear_tinfo_t(&v121);
          if ( *(int *)(v116 + 8) <= 69 )
            goto LABEL_43;
          goto LABEL_21;
        }
        v84 = *(_QWORD *)(v6 + 24);
        s1 = nullptr;
        v85 = (char *)get_tinfo_property(*(_QWORD *)(v84 + 48), 9);
        s1 = v85;
        if ( !(_BYTE)v85 || (get_tinfo_property(v85, 2) & 0x2F) != 0xD || (v18 = compare_tinfo(v121, s1, 0)) != 0 )
        {
          clear_tinfo_t(&s1);
          goto LABEL_159;
        }
        v13 = *(_QWORD *)(v6 + 24);
        clear_tinfo_t(&s1);
        clear_tinfo_t(&v121);
        v16 = 0;
        v17 = 0;
        v15 = 0;
        goto LABEL_28;
      }
      if ( !(unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        return 0;
      goto LABEL_143;
    case 0x33:
      v56 = *(_QWORD *)(v6 + 24);
      v57 = *(_DWORD *)(v56 + 8);
      if ( v57 != 52 )
      {
        if ( v57 == 48 && *(_DWORD *)(*(_QWORD *)(v56 + 24) + 8LL) == 52 )
        {
          v120 = 0;
          v115 = *(_QWORD *)(a1 + 64);
          v120 = get_tinfo_property(*(_QWORD *)(v56 + 48), 10);
          v81 = *(_QWORD *)(v56 + 24);
          v121 = 0;
          v121 = get_tinfo_property(*(_QWORD *)(v81 + 48), 10);
          v82 = get_tinfo_size(0, v120, 0);
          if ( v82 == get_tinfo_size(0, v121, 0) )
          {
            v97 = (get_tinfo_property(v120, 2) & 0xF) == 9;
            if ( v97 == ((get_tinfo_property(v121, 2) & 0xF) == 9) )
            {
              if ( (unsigned __int8)sub_31EC10(v115, v116, v6, *(_QWORD *)(*(_QWORD *)(v56 + 24) + 24LL) + 48LL) )
              {
                sub_250FD0((__int64 *)v6, *(_QWORD *)(v6 + 24));
                v98 = *(_QWORD *)(v6 + 48);
                s1 = nullptr;
                s1 = (char *)get_tinfo_property(v98, 10);
                copy_tinfo_t(v6 + 48, &s1);
                clear_tinfo_t(&s1);
                sub_250FD0(*(__int64 **)(v6 + 24), *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL));
                if ( (unsigned int)(*(_DWORD *)(v116 + 8) - 2) > 0xD || !(unsigned __int8)sub_240790(v116, v6) )
                {
                  v99 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 48LL), 14);
                  if ( v99 == -1 )
                  {
LABEL_217:
                    clear_tinfo_t(&v121);
                    clear_tinfo_t(&v120);
                    goto LABEL_174;
                  }
                  sub_266B10(&s1, (_QWORD *)(v6 + 48));
                  v100 = (char)s1;
                  if ( ((unsigned __int8)s1 & 0xE) != 0 )
                  {
                    clear_tinfo_t(&s1);
                    goto LABEL_217;
                  }
                  clear_tinfo_t(&s1);
                  if ( (v100 & 0x30) == 0 || v99 != (unsigned int)get_tinfo_property(*(_QWORD *)(v6 + 48), 14) )
                    goto LABEL_217;
                }
                sub_250FD0((__int64 *)v6, *(_QWORD *)(v6 + 24));
                goto LABEL_217;
              }
            }
          }
          clear_tinfo_t(&v121);
          clear_tinfo_t(&v120);
        }
        v18 = 0;
LABEL_98:
        v13 = sub_250740(v56);
        if ( (get_tinfo_property(*(_QWORD *)(v13 + 48), 2) & 0xF) != 0xA )
        {
LABEL_20:
          if ( *(int *)(v116 + 8) > 69 )
            goto LABEL_21;
LABEL_43:
          if ( (get_tinfo_property(*(_QWORD *)(v6 + 48), 2) & 0x2F) != 0xD )
            goto LABEL_57;
          v29 = *(_DWORD *)(v116 + 8);
          if ( (unsigned int)(v29 - 1) <= 1 || v29 > 69 )
          {
            if ( get_tinfo_property(*(_QWORD *)(v6 + 48), 17)
              || (v29 = *(_DWORD *)(v116 + 8), (unsigned int)(v29 - 2) <= 0xD) )
            {
              if ( (unsigned __int8)sub_255880(*(_QWORD *)(a1 + 64), v116, v6, nullptr) )
                goto LABEL_57;
              v29 = *(_DWORD *)(v116 + 8);
            }
          }
          if ( v29 == 57 )
          {
            v30 = (_QWORD *)(sub_27FAE0(v116, v6, 0) + 64);
            if ( !(unsigned __int8)sub_325700(*(_QWORD *)(a1 + 72), v6 + 48, v30) )
              goto LABEL_49;
          }
          else if ( v29 != 59 )
          {
            v30 = (_QWORD *)(v116 + 48);
LABEL_49:
            v31 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
            if ( (unsigned int)v31 <= 0xE && (v32 = 25473, _bittest64(&v32, v31)) )
            {
              v33 = get_tinfo_size(0, *(_QWORD *)(v6 + 48), 0);
              v117 = sub_242C90(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v6);
              v34 = get_tinfo_property(*v30, 2);
              sub_327390((unsigned int)&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v33, (v34 & 0xF) == 9, v35, v36);
              if ( (unsigned __int8)sub_2422C0(v117, *(_QWORD *)(a1 + 72), &s1) )
              {
                v90 = sub_23FAA0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v117, v33, 0, v37, v38);
                sub_240660((_QWORD *)v6, v90);
              }
              else
              {
                *(_QWORD *)(v117 + 24) = 0;
                if ( v117 )
                {
                  sub_250DB0(v117);
                  clear_tinfo_t(v117 + 48);
                  j__qfree(v117);
                }
              }
              sub_23F940(v6, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 1);
              if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
              {
                clear_tinfo_t(&s1);
                *(_DWORD *)(v6 + 56) |= 1u;
LABEL_58:
                *(_DWORD *)(a1 + 8) |= 8u;
                return 1;
              }
              clear_tinfo_t(&s1);
            }
            else if ( !(unsigned __int8)sub_31EC10(*(_QWORD *)(a1 + 64), v116, v6, 0) )
            {
              v78 = get_tinfo_size(0, *(_QWORD *)(v6 + 48), 0);
              v79 = sub_250780(*(_DWORD *)(v116 + 8));
              v80 = v79;
              if ( !v79 )
                v80 = 1;
              sub_327500(&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v78, v80);
              sub_2422C0(v6, *(_QWORD *)(a1 + 72), &s1);
              clear_tinfo_t(&s1);
            }
          }
LABEL_57:
          *(_DWORD *)(v6 + 56) |= 1u;
          if ( (_BYTE)v3 )
            goto LABEL_58;
          return 0;
        }
        if ( !get_tinfo_property(*(_QWORD *)(v13 + 48), 285) )
        {
          s1 = nullptr;
          s1 = (char *)get_tinfo_property(*(_QWORD *)(v13 + 48), 10);
          v96 = get_tinfo_property(s1, 2);
          if ( (v96 & 0x2F) != 0xD && (v96 & 0xF) != 0xB )
          {
            clear_tinfo_t(&s1);
            if ( *(int *)(v116 + 8) <= 69 )
              goto LABEL_43;
            goto LABEL_21;
          }
          clear_tinfo_t(&s1);
        }
        if ( v18 )
        {
          v16 = 0;
          v18 = 0;
          v17 = 0;
        }
        else
        {
          v17 = *(_DWORD *)(v6 + 40);
          v16 = 1;
        }
        v15 = 0;
LABEL_28:
        if ( v13 )
        {
          v19 = v16;
          goto LABEL_30;
        }
        goto LABEL_20;
      }
      v89 = *(_QWORD *)v6;
      sub_250FD0((__int64 *)v6, *(_QWORD *)(v6 + 24));
      sub_250FD0((__int64 *)v6, *(_QWORD *)(v6 + 24));
      if ( *(_QWORD *)v6 == -1 )
        *(_QWORD *)v6 = v89;
LABEL_174:
      if ( !(unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      {
        if ( *(_DWORD *)(v116 + 8) == 51 )
          goto LABEL_43;
        v56 = v6;
        v18 = 1;
        goto LABEL_98;
      }
LABEL_143:
      *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    case 0x34:
      goto LABEL_87;
    case 0x39:
      v50 = get_tinfo_property(*(_QWORD *)(v6 + 48), 17);
      v51 = *(_DWORD *)(v116 + 8);
      if ( !v50 )
        goto LABEL_106;
      if ( v51 == 80 )
        goto LABEL_21;
      v18 = 0;
      v13 = v6;
      v52 = get_tinfo_size(0, *(_QWORD *)(v6 + 48), 0);
      v16 = 0;
      v17 = v52;
      v15 = 0;
      goto LABEL_28;
    case 0x3A:
      if ( !under_debugger )
        sub_37E160(50201);
      goto LABEL_240;
    case 0x3B:
    case 0x3C:
      if ( !under_debugger )
        sub_37E160(50202);
      goto LABEL_240;
    case 0x40:
    case 0x41:
      if ( *(int *)(v116 + 8) <= 69 && (*(_BYTE *)(v116 + 56) & 1) != 0 )
        goto LABEL_43;
      v119 = get_tinfo_property(*(_QWORD *)(v6 + 48), 289);
      if ( (get_tinfo_property(v119, 2) & 0x2F) == 0xD )
      {
        v18 = 0;
        v13 = v6;
        v114 = *(_DWORD *)(v6 + 40);
        clear_tinfo_t(&v119);
        v17 = v114;
        v16 = 0;
        v15 = 0;
      }
      else
      {
        v77 = *(_DWORD *)(v116 + 8);
        if ( v77 <= 69 )
        {
          if ( *(_QWORD *)(v116 + 32) != v6 )
            goto LABEL_138;
          if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v116 + 24) + 48LL), 2) & 0xF) == 0xA
            && (unsigned int)lexcompare_tinfo(*(_QWORD *)(*(_QWORD *)(v116 + 24) + 48LL), v119, 0)
            && (get_tinfo_property(v119, 2) & 0xF) == 0xA )
          {
            sub_266B10(&v120, &v119);
            if ( (get_tinfo_property(v120, 2) & 0x2F) == 0xD )
            {
              sub_266B10(&v121, (_QWORD *)(*(_QWORD *)(v116 + 24) + 48LL));
              LODWORD(v126) = 1;
              s1 = nullptr;
              v125 = 0;
              v123 = 0;
              v124 = 0;
              for ( i = get_tinfo_details(v120, 13, &s1); ; i = get_tinfo_details(v120, 13, &s1) )
              {
                if ( !i || !(_QWORD)v123 )
                  goto LABEL_227;
                v102 = v120;
                v120 = *((_QWORD *)s1 + 8);
                *((_QWORD *)s1 + 8) = v102;
                if ( (unsigned __int8)sub_325700(*(_QWORD *)(a1 + 72), &v120, &v121) )
                  break;
              }
              if ( v6 )
              {
                v18 = 0;
                sub_228A50((__int64 *)&s1);
                clear_tinfo_t(&v121);
                clear_tinfo_t(&v120);
                v13 = v6;
                clear_tinfo_t(&v119);
                v16 = 0;
                v19 = 0;
                v17 = 0;
                v15 = 0;
LABEL_30:
                v20 = *(_QWORD *)(a1 + 72);
                v150 = v17;
                v135 = v15;
                v21 = *(_QWORD *)v6;
                v138 = v20;
                v130.m128i_i64[0] = v20;
                v22 = *(_QWORD *)(a1 + 24);
                v143 = v21;
                v23 = *(_QWORD *)(a1 + 16);
                v136 = 0;
                v140 = -1;
                v141 = 0;
                v144 = 0;
                v145 = 0;
                v146 = 0;
                v151 = 0;
                v154 = 0;
                v137 = 0;
                v139 = 0;
                v147 = 0;
                v24 = *(_QWORD *)(v23 + 8 * v22 - 8);
                v131 = a1 + 16;
                v113 = v16;
                v130.m128i_i64[1] = a1;
                v133 = v6;
                v134 = v13;
                v142 = 0;
                v149 = -1;
                v152 = 0;
                v153 = v18;
                v132 = v24;
                v148 = -1;
                v25 = sub_2712A0(&v130, v19);
                v26 = v25;
                if ( !v25 )
                {
LABEL_36:
                  v27 = 0;
LABEL_37:
                  if ( v146 )
                  {
                    *(_QWORD *)&v147 = 0;
                    qfree(v146);
                  }
                  clear_tinfo_t(&v145);
                  clear_tinfo_t(&v144);
                  if ( v136 )
                  {
                    *(_QWORD *)&v137 = 0;
                    qfree(v136);
                  }
                  v28 = *(_DWORD *)(v116 + 8);
                  if ( !v27 )
                    goto LABEL_42;
                  if ( v28 != 57 || *(_QWORD *)(v116 + 24) != v6 )
                    goto LABEL_57;
                  s1 = nullptr;
                  v124 = 0u;
                  v125 = 0;
                  v127 = 0;
                  v129 = 16;
                  v123 = 0;
                  v126 = 0;
                  v128 = 0;
                  v58 = *(_QWORD *)(v116 + 24);
                  v121 = 0;
                  v121 = get_tinfo_property(*(_QWORD *)(v58 + 48), 10);
                  if ( !(unsigned __int8)get_tinfo_details(v121, 140, &s1) )
                  {
LABEL_117:
                    clear_tinfo_t(&v121);
                    if ( v127 )
                    {
                      *(_QWORD *)&v128 = 0;
                      qfree(v127);
                    }
                    cleanup_argloc(&v125);
                    clear_tinfo_t((char *)&v124 + 8);
                    v66 = s1;
                    if ( s1 )
                    {
                      v67 = v123;
                      v68 = 0;
                      if ( (_QWORD)v123 )
                      {
                        do
                        {
                          v118 = &v66[80 * v68];
                          clear_tinfo_t(v118 + 64);
                          v69 = *((_QWORD *)v118 + 5);
                          if ( v69 )
                          {
                            *((_QWORD *)v118 + 6) = 0;
                            qfree(v69);
                          }
                          v70 = *((_QWORD *)v118 + 2);
                          if ( v70 )
                          {
                            *((_QWORD *)v118 + 3) = 0;
                            qfree(v70);
                          }
                          ++v68;
                          cleanup_argloc(v118);
                          v66 = s1;
                        }
                        while ( v67 != v68 );
                      }
                      *(_QWORD *)&v123 = 0;
                      qfree(v66);
                    }
                    goto LABEL_57;
                  }
                  v59 = *(_QWORD **)(v116 + 32);
                  if ( v59[1] >= (unsigned __int64)v123 )
                  {
                    v60 = s1;
                    v61 = &s1[80 * v123];
                    if ( s1 != v61 )
                    {
                      v62 = 0;
                      do
                      {
                        v63 = *((_QWORD *)v60 + 8);
                        v60 += 80;
                        v64 = v62 + *v59;
                        v62 += 72;
                        v65 = *(_QWORD *)(v64 + 64);
                        *(_QWORD *)(v64 + 64) = v63;
                        *((_QWORD *)v60 - 2) = v65;
                      }
                      while ( v61 != v60 );
                    }
                    goto LABEL_117;
                  }
                  if ( !under_debugger )
                    sub_37E160(52521);
LABEL_240:
                  BUG();
                }
                if ( v113 && !(_DWORD)v151 && !HIBYTE(v154) && HIDWORD(v151) != 3 )
                {
                  sub_250DB0(v25);
                  clear_tinfo_t(v26 + 48);
                  j__qfree(v26);
                  goto LABEL_36;
                }
                v71 = BYTE1(v154);
                if ( BYTE1(v154) )
                {
                  if ( v6 )
                  {
                    sub_250DB0(v6);
                    clear_tinfo_t(v6 + 48);
                    j__qfree(v6);
                  }
                  sub_250FD0((__int64 *)v116, v26);
                  if ( *(_QWORD *)(a1 + 24) <= 1u )
                  {
                    if ( !under_debugger )
                      sub_37E160(50203);
                    goto LABEL_240;
                  }
                  v6 = v116;
                  goto LABEL_132;
                }
                if ( *(_DWORD *)(v6 + 8) == 48 && !(unsigned __int8)sub_325700(*(_QWORD *)(a1 + 72), v6 + 48, v25 + 48) )
                {
                  v120 = 0;
                  copy_tinfo_t(&v120, v6 + 48);
                  v121 = 0;
                  copy_tinfo_t(&v121, v26 + 48);
                  while ( 1 )
                  {
                    v91 = get_tinfo_property(v120, 2);
                    v92 = v121;
                    if ( (v91 & 0xF) != 0xA )
                      break;
                    if ( (get_tinfo_property(v121, 2) & 0xF) != 0xA )
                    {
                      v92 = v121;
                      break;
                    }
                    s1 = nullptr;
                    s1 = (char *)get_tinfo_property(v120, 9);
                    copy_tinfo_t(&v120, &s1);
                    clear_tinfo_t(&s1);
                    s1 = nullptr;
                    s1 = (char *)get_tinfo_property(v121, 9);
                    copy_tinfo_t(&v121, &s1);
                    clear_tinfo_t(&s1);
                  }
                  if ( (get_tinfo_property(v92, 2) & 0xF) == 0xB
                    && (v93 = get_tinfo_size(0, v121, 0)) != 0
                    && !sub_118880(v93)
                    || (v94 = sub_329400(&v120), v95 = sub_329400(&v121), v94 < v95)
                    || v94 == v95 && !v94 )
                  {
                    v76 = *(__int64 **)(v6 + 24);
                    clear_tinfo_t(&v121);
                    clear_tinfo_t(&v120);
                    goto LABEL_135;
                  }
                  clear_tinfo_t(&v121);
                  clear_tinfo_t(&v120);
                }
                v76 = (__int64 *)v6;
LABEL_135:
                sub_250DB0((__int64)v76);
                sub_250FD0(v76, v26);
LABEL_132:
                v72 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
                v3 = sub_27F280(a1, v72) | v71;
                sub_2407E0(v6, v72, v73, v74, v75);
                v27 = 1;
                goto LABEL_37;
              }
LABEL_227:
              sub_228A50((__int64 *)&s1);
              clear_tinfo_t(&v121);
            }
            clear_tinfo_t(&v120);
          }
          v77 = *(_DWORD *)(v116 + 8);
          if ( v77 <= 69 )
          {
LABEL_138:
            if ( !v116 )
            {
              clear_tinfo_t(&v119);
              goto LABEL_43;
            }
            if ( v77 != 57 || v6 == *(_QWORD *)(v116 + 24) )
            {
              clear_tinfo_t(&v119);
              if ( *(int *)(v116 + 8) <= 69 )
                goto LABEL_43;
              goto LABEL_21;
            }
          }
        }
        sub_266610(&s1, v6, *(_QWORD *)(a1 + 64), (__int64 *)(a1 + 16), nullptr, -1);
        if ( !(_BYTE)s1 || (unsigned __int8)sub_325700(*(_QWORD *)(a1 + 72), v6 + 48, &s1) )
        {
          clear_tinfo_t(&s1);
          clear_tinfo_t(&v119);
          if ( *(int *)(v116 + 8) <= 69 )
            goto LABEL_43;
          goto LABEL_21;
        }
        clear_tinfo_t(&s1);
        clear_tinfo_t(&v119);
LABEL_87:
        v16 = 0;
        v18 = 0;
        v13 = v6;
        v17 = 0;
        v15 = 0;
      }
      goto LABEL_28;
    default:
      goto LABEL_20;
  }
}
