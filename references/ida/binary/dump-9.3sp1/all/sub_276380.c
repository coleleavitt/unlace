__int64 __fastcall sub_276380(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r12
  int v10; // r9d
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 tinfo_size; // r12
  __int64 v14; // rax
  char v15; // r8
  int v16; // ecx
  char v17; // r13
  unsigned __int8 v18; // si
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  char v26; // r12
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
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
  char *v45; // rdi
  char tinfo_property; // al
  unsigned __int8 v47; // dl
  __int64 v48; // rdx
  int v49; // eax
  int v50; // eax
  char v51; // al
  __int64 v52; // r12
  int v53; // eax
  _QWORD *v54; // r9
  char *v55; // rax
  char *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rsi
  char *v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rdi
  int v66; // ebx
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 *v71; // r13
  int v72; // eax
  unsigned int v73; // r12d
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // r13
  __int64 v77; // r13
  char *v78; // rdi
  char v79; // al
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  int v84; // r13d
  int v85; // eax
  char v86; // al
  bool v87; // r13
  int v88; // r12d
  char v89; // r13
  __int64 v90; // rdx
  __int64 v91; // [rsp+8h] [rbp-2B8h]
  int v92; // [rsp+10h] [rbp-2B0h]
  __int64 v93; // [rsp+10h] [rbp-2B0h]
  int v94; // [rsp+18h] [rbp-2A8h]
  __int64 v95; // [rsp+18h] [rbp-2A8h]
  unsigned __int8 v96; // [rsp+18h] [rbp-2A8h]
  __int64 v97; // [rsp+20h] [rbp-2A0h]
  char v98; // [rsp+28h] [rbp-298h]
  char v99; // [rsp+28h] [rbp-298h]
  int v100; // [rsp+28h] [rbp-298h]
  __int64 v101; // [rsp+28h] [rbp-298h]
  __int64 v102; // [rsp+38h] [rbp-288h]
  __int64 v103; // [rsp+38h] [rbp-288h]
  char *v104; // [rsp+38h] [rbp-288h]
  __int64 v105; // [rsp+50h] [rbp-270h] BYREF
  __int64 v106; // [rsp+58h] [rbp-268h] BYREF
  char *s1; // [rsp+60h] [rbp-260h] BYREF
  __int128 v108; // [rsp+68h] [rbp-258h]
  __int128 v109; // [rsp+78h] [rbp-248h]
  __int64 v110; // [rsp+88h] [rbp-238h]
  __int128 v111; // [rsp+90h] [rbp-230h]
  __int64 v112; // [rsp+A0h] [rbp-220h]
  __int128 v113; // [rsp+A8h] [rbp-218h]
  char v114; // [rsp+B8h] [rbp-208h]
  __m128i v115; // [rsp+C0h] [rbp-200h] BYREF
  __int64 v116; // [rsp+D0h] [rbp-1F0h]
  __int64 v117; // [rsp+D8h] [rbp-1E8h]
  __int64 v118; // [rsp+E0h] [rbp-1E0h]
  __int64 v119; // [rsp+E8h] [rbp-1D8h]
  __int64 v120; // [rsp+F0h] [rbp-1D0h]
  __int64 v121; // [rsp+F8h] [rbp-1C8h]
  __int128 v122; // [rsp+100h] [rbp-1C0h]
  __int64 v123; // [rsp+110h] [rbp-1B0h]
  __int128 v124; // [rsp+118h] [rbp-1A8h]
  __int64 v125; // [rsp+128h] [rbp-198h]
  int v126; // [rsp+130h] [rbp-190h]
  __int64 v127; // [rsp+138h] [rbp-188h]
  __int64 v128; // [rsp+140h] [rbp-180h]
  __int64 v129; // [rsp+148h] [rbp-178h]
  __int64 v130; // [rsp+150h] [rbp-170h]
  __int64 v131; // [rsp+158h] [rbp-168h]
  __int128 v132; // [rsp+160h] [rbp-160h]
  __int64 v133; // [rsp+170h] [rbp-150h]
  int v134; // [rsp+270h] [rbp-50h]
  int v135; // [rsp+274h] [rbp-4Ch]
  __int64 v136; // [rsp+278h] [rbp-48h]
  char v137; // [rsp+280h] [rbp-40h]
  char v138; // [rsp+281h] [rbp-3Fh]
  int v139; // [rsp+282h] [rbp-3Eh]
  unsigned __int64 v140; // [rsp+288h] [rbp-38h]

  v140 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
    return 0;
  v102 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  LOBYTE(v3) = *(_DWORD *)(v102 + 8) == 59 || *(_DWORD *)(v102 + 8) == 52;
  if ( (_BYTE)v3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = a2;
  v106 = 0;
  v97 = v5;
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 == 48 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 52 )
      goto LABEL_6;
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == get_tinfo_size() )
    {
      s1 = (char *)get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v98 = 1;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
      goto LABEL_7;
    }
    v7 = *(_DWORD *)(a2 + 8);
  }
  if ( v7 == 52 )
  {
    v98 = 1;
    v8 = *(_QWORD *)(a2 + 24);
    goto LABEL_7;
  }
LABEL_6:
  v98 = 0;
  v8 = a2;
LABEL_7:
  v9 = sub_26B3D0(v8);
  if ( v9 != -1 && (get_tinfo_property() & 0xF) != 0xB )
  {
    copy_tinfo_t();
    if ( get_tinfo_size() == -1 )
      clear_tinfo_t();
    if ( v98 )
    {
      if ( *(_DWORD *)(v102 + 8) == 57 )
      {
        v39 = *(__int64 **)(v102 + 32);
        v40 = *v39;
        v41 = 72 * v39[1] == 0;
        v42 = *v39 + 72 * v39[1];
        if ( !v41 )
        {
          v43 = v40;
          while ( a2 != v43 )
          {
            v43 += 72;
            if ( v43 == v42 )
              goto LABEL_12;
          }
          v44 = *(_QWORD *)(v102 + 24);
          v91 = v40;
          v93 = v43;
          s1 = nullptr;
          v95 = v44 + 48;
          v108 = 0;
          if ( !(unsigned __int8)sub_254DF0(v44, (__int64 *)&s1, v44 + 48, 0) )
          {
            v45 = s1;
            if ( !s1 )
              goto LABEL_64;
            goto LABEL_63;
          }
          v78 = (char *)::s1;
          if ( (_QWORD)v108 )
            v78 = s1;
          v79 = sub_F8190(v78, v95, 954437177 * (unsigned int)((v93 - v91) >> 3));
          v45 = s1;
          if ( !v79 )
          {
            if ( !s1 )
            {
LABEL_64:
              v92 = 1;
              if ( (get_tinfo_property() & 0xF) == 0xA )
              {
                s1 = nullptr;
                s1 = (char *)get_tinfo_property();
                tinfo_property = get_tinfo_property();
                v47 = 0;
                if ( (tinfo_property & 0xF) != 0xA )
                  v47 = sub_29CC80(&s1) ^ 1;
                v96 = v47;
                clear_tinfo_t();
                v92 = v96;
              }
              goto LABEL_13;
            }
LABEL_63:
            *(_QWORD *)&v108 = 0;
            qfree((__int64)v45);
            goto LABEL_64;
          }
          if ( s1 )
          {
            *(_QWORD *)&v108 = 0;
            qfree((__int64)s1);
          }
        }
      }
    }
LABEL_12:
    v92 = 0;
LABEL_13:
    v10 = 0;
    if ( *(_DWORD *)(v8 + 8) == 65 )
      v10 = v8 + 24;
    v94 = v10;
    v11 = *(_QWORD *)(v97 + 808);
    s1 = nullptr;
    copy_tinfo_t();
    sub_27E790(v11, v9, 0, 0, (unsigned int)&s1, v94, v92);
    clear_tinfo_t();
  }
  clear_tinfo_t();
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 2:
      if ( (unsigned __int8)sub_248660(a2, *(_QWORD *)(a1 + 72), 1u) )
        goto LABEL_79;
      goto LABEL_18;
    case 6:
    case 7:
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_18;
      v12 = *(_QWORD *)(a2 + 24);
      v14 = *(_QWORD *)(a2 + 32);
      v15 = 0;
      v16 = 0;
      v17 = 1;
      goto LABEL_26;
    case 0x23:
      v12 = sub_26BDF0(a2, 0);
      if ( !v12 )
      {
        v12 = sub_26BDF0(a2, 1);
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = *(_QWORD *)(a2 + 24);
      if ( v12 == v14 )
        v14 = *(_QWORD *)(a2 + 32);
      v15 = 0;
      v17 = 0;
      v18 = 0;
      v16 = 0;
      goto LABEL_28;
    case 0x24:
      sub_254FE0(*(_QWORD *)(a2 + 24));
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_18;
      sub_254FE0(*(_QWORD *)(a2 + 32));
      v51 = get_tinfo_property();
      v12 = *(_QWORD *)(a2 + 24);
      if ( (unsigned __int8)((v51 & 0xF) - 10) <= 1u )
      {
        if ( (int)get_tinfo_property() > 1 )
          sub_246B40(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), (_QWORD *)(*(_QWORD *)(a1 + 72) + 200LL));
        if ( (int)get_tinfo_property() > 1
          || !sub_245650(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), 0) )
        {
          sub_246B40(*(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 72), (_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL));
        }
        sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
LABEL_79:
        LOBYTE(v3) = sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
        v27 = *(_DWORD *)(v102 + 8);
LABEL_40:
        if ( v27 > 69 )
          goto LABEL_54;
        goto LABEL_41;
      }
      v14 = *(_QWORD *)(a2 + 32);
      v15 = 0;
      v17 = 0;
      v16 = 0;
      goto LABEL_26;
    case 0x30:
      if ( !(unsigned __int8)sub_26C6D0(a1, (__int64 *)a2) )
      {
        v49 = *(_DWORD *)(v102 + 8);
        if ( v49 != 51 && v49 != 57 )
        {
LABEL_103:
          if ( v49 <= 69 )
            goto LABEL_41;
LABEL_19:
          *(_DWORD *)(a2 + 56) |= 1u;
          return 0;
        }
        v106 = get_tinfo_property();
        if ( !(_BYTE)v106 )
        {
LABEL_156:
          clear_tinfo_t();
          if ( *(int *)(v102 + 8) <= 69 )
            goto LABEL_41;
          goto LABEL_19;
        }
        s1 = nullptr;
        s1 = (char *)get_tinfo_property();
        if ( !(_BYTE)s1 || (get_tinfo_property() & 0x2F) != 0xD || (v17 = compare_tinfo()) != 0 )
        {
          clear_tinfo_t();
          goto LABEL_156;
        }
        v12 = *(_QWORD *)(a2 + 24);
        clear_tinfo_t();
        clear_tinfo_t();
        v15 = 0;
        v16 = 0;
        v14 = 0;
        goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        return 0;
      goto LABEL_140;
    case 0x33:
      v52 = *(_QWORD *)(a2 + 24);
      v53 = *(_DWORD *)(v52 + 8);
      if ( v53 != 52 )
      {
        if ( v53 == 48 && *(_DWORD *)(*(_QWORD *)(v52 + 24) + 8LL) == 52 )
        {
          v105 = 0;
          v101 = *(_QWORD *)(a1 + 64);
          v105 = get_tinfo_property();
          v106 = get_tinfo_property();
          v76 = get_tinfo_size();
          if ( v76 == get_tinfo_size() )
          {
            v87 = (get_tinfo_property() & 0xF) == 9;
            if ( v87 == ((get_tinfo_property() & 0xF) == 9) )
            {
              if ( (unsigned __int8)sub_323990(v101, v102, a2, *(_QWORD *)(*(_QWORD *)(v52 + 24) + 24LL) + 48LL) )
              {
                sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
                s1 = nullptr;
                s1 = (char *)get_tinfo_property();
                copy_tinfo_t();
                clear_tinfo_t();
                sub_255850(*(__int64 **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
                if ( (unsigned int)(*(_DWORD *)(v102 + 8) - 2) > 0xD || !(unsigned __int8)sub_245010(v102, a2) )
                {
                  v88 = get_tinfo_property();
                  if ( v88 == -1 )
                  {
LABEL_214:
                    clear_tinfo_t();
                    clear_tinfo_t();
                    goto LABEL_171;
                  }
                  sub_26B390((__int64 *)&s1);
                  v89 = (char)s1;
                  if ( ((unsigned __int8)s1 & 0xE) != 0 )
                  {
                    clear_tinfo_t();
                    goto LABEL_214;
                  }
                  clear_tinfo_t();
                  if ( (v89 & 0x30) == 0 || v88 != (unsigned int)get_tinfo_property() )
                    goto LABEL_214;
                }
                sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
                goto LABEL_214;
              }
            }
          }
          clear_tinfo_t();
          clear_tinfo_t();
        }
        v17 = 0;
LABEL_95:
        v12 = sub_254FC0(v52);
        if ( (get_tinfo_property() & 0xF) != 0xA )
        {
LABEL_18:
          if ( *(int *)(v102 + 8) > 69 )
            goto LABEL_19;
LABEL_41:
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            goto LABEL_54;
          v28 = *(_DWORD *)(v102 + 8);
          if ( (unsigned int)(v28 - 1) <= 1 || v28 > 69 )
          {
            if ( get_tinfo_property() || (v28 = *(_DWORD *)(v102 + 8), (unsigned int)(v28 - 2) <= 0xD) )
            {
              if ( (unsigned __int8)sub_25A100(*(_QWORD *)(a1 + 64), v102) )
                goto LABEL_54;
              v28 = *(_DWORD *)(v102 + 8);
            }
          }
          if ( v28 == 57 )
          {
            v77 = sub_284360(v102, v6, 0) + 64;
            if ( !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v6 + 48, v77) )
              goto LABEL_46;
          }
          else if ( v28 != 59 )
          {
LABEL_46:
            v29 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
            if ( (unsigned int)v29 <= 0xE && (v30 = 25473, _bittest64(&v30, v29)) )
            {
              v31 = get_tinfo_size();
              v103 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v6, v32, v33);
              v34 = get_tinfo_property();
              sub_32C2C0((unsigned int)&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v31, (v34 & 0xF) == 9, v35, v36);
              if ( (unsigned __int8)sub_246B40(v103, *(_QWORD *)(a1 + 72), &s1) )
              {
                v81 = sub_244320(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v103, v31, 0, v37, v38);
                sub_244EE0((_QWORD *)v6, v81);
              }
              else
              {
                *(_QWORD *)(v103 + 24) = 0;
                if ( v103 )
                {
                  sub_255630(v103);
                  clear_tinfo_t();
                  j__qfree(v103);
                }
              }
              sub_2441C0(v6, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 1);
              if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
              {
                clear_tinfo_t();
                *(_DWORD *)(v6 + 56) |= 1u;
LABEL_55:
                *(_DWORD *)(a1 + 8) |= 8u;
                return 1;
              }
              clear_tinfo_t();
            }
            else if ( !(unsigned __int8)sub_323990(*(_QWORD *)(a1 + 64), v102, v6, 0) )
            {
              v73 = get_tinfo_size();
              v74 = sub_255000(*(_DWORD *)(v102 + 8));
              v75 = v74;
              if ( !v74 )
                v75 = 1;
              sub_32C430(&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v73, v75);
              sub_246B40(v6, *(_QWORD *)(a1 + 72), &s1);
              clear_tinfo_t();
            }
          }
LABEL_54:
          *(_DWORD *)(v6 + 56) |= 1u;
          if ( (_BYTE)v3 )
            goto LABEL_55;
          return 0;
        }
        if ( !get_tinfo_property() )
        {
          s1 = nullptr;
          s1 = (char *)get_tinfo_property();
          v86 = get_tinfo_property();
          if ( (v86 & 0x2F) != 0xD && (v86 & 0xF) != 0xB )
          {
            clear_tinfo_t();
            if ( *(int *)(v102 + 8) <= 69 )
              goto LABEL_41;
            goto LABEL_19;
          }
          clear_tinfo_t();
        }
        if ( v17 )
        {
          v15 = 0;
          v17 = 0;
          v16 = 0;
        }
        else
        {
          v16 = *(_DWORD *)(a2 + 40);
          v15 = 1;
        }
        v14 = 0;
LABEL_26:
        if ( v12 )
        {
          v18 = v15;
          goto LABEL_28;
        }
        goto LABEL_18;
      }
      v80 = *(_QWORD *)a2;
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
      if ( *(_QWORD *)a2 == -1 )
        *(_QWORD *)a2 = v80;
LABEL_171:
      if ( !(unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      {
        if ( *(_DWORD *)(v102 + 8) == 51 )
          goto LABEL_41;
        v52 = a2;
        v17 = 1;
        goto LABEL_95;
      }
LABEL_140:
      *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    case 0x34:
      goto LABEL_84;
    case 0x39:
      v48 = get_tinfo_property();
      v49 = *(_DWORD *)(v102 + 8);
      if ( !v48 )
        goto LABEL_103;
      if ( v49 == 80 )
        goto LABEL_19;
      v17 = 0;
      v12 = a2;
      v50 = get_tinfo_size();
      v15 = 0;
      v16 = v50;
      v14 = 0;
      goto LABEL_26;
    case 0x3A:
      if ( !under_debugger )
        sub_383060(50201);
      goto LABEL_236;
    case 0x3B:
    case 0x3C:
      if ( !under_debugger )
        sub_383060(50202);
      goto LABEL_236;
    case 0x40:
    case 0x41:
      if ( *(int *)(v102 + 8) <= 69 && (*(_BYTE *)(v102 + 56) & 1) != 0 )
        goto LABEL_41;
      get_tinfo_property();
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        v17 = 0;
        v12 = a2;
        v100 = *(_DWORD *)(a2 + 40);
        clear_tinfo_t();
        v16 = v100;
        v15 = 0;
        v14 = 0;
      }
      else
      {
        v72 = *(_DWORD *)(v102 + 8);
        if ( v72 <= 69 )
        {
          if ( *(_QWORD *)(v102 + 32) != a2 )
            goto LABEL_135;
          if ( (get_tinfo_property() & 0xF) == 0xA
            && (unsigned int)lexcompare_tinfo()
            && (get_tinfo_property() & 0xF) == 0xA )
          {
            sub_26B390(&v105);
            if ( (get_tinfo_property() & 0x2F) == 0xD )
            {
              sub_26B390(&v106);
              LODWORD(v111) = 1;
              s1 = nullptr;
              v110 = 0;
              v108 = 0;
              v109 = 0;
              do
              {
                if ( !(unsigned __int8)get_tinfo_details() || !(_QWORD)v108 )
                  goto LABEL_223;
                v90 = v105;
                v105 = *((_QWORD *)s1 + 8);
                *((_QWORD *)s1 + 8) = v90;
              }
              while ( !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), &v105, &v106) );
              if ( a2 )
              {
                v17 = 0;
                sub_22D2D0((__int64 *)&s1);
                clear_tinfo_t();
                clear_tinfo_t();
                v12 = a2;
                clear_tinfo_t();
                v15 = 0;
                v18 = 0;
                v16 = 0;
                v14 = 0;
LABEL_28:
                v19 = *(_QWORD *)(a1 + 72);
                v135 = v16;
                v120 = v14;
                v20 = *(_QWORD *)v6;
                v123 = v19;
                v115.m128i_i64[0] = v19;
                v21 = *(_QWORD *)(a1 + 24);
                v128 = v20;
                v22 = *(_QWORD *)(a1 + 16);
                v121 = 0;
                v125 = -1;
                v126 = 0;
                v129 = 0;
                v130 = 0;
                v131 = 0;
                v136 = 0;
                v139 = 0;
                v122 = 0;
                v124 = 0;
                v132 = 0;
                v23 = *(_QWORD *)(v22 + 8 * v21 - 8);
                v116 = a1 + 16;
                v99 = v15;
                v115.m128i_i64[1] = a1;
                v118 = v6;
                v119 = v12;
                v127 = 0;
                v134 = -1;
                v137 = 0;
                v138 = v17;
                v117 = v23;
                v133 = -1;
                v24 = sub_275B20(&v115, v18);
                v25 = v24;
                if ( !v24 )
                {
LABEL_34:
                  v26 = 0;
LABEL_35:
                  if ( v131 )
                  {
                    *(_QWORD *)&v132 = 0;
                    qfree(v131);
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                  if ( v121 )
                  {
                    *(_QWORD *)&v122 = 0;
                    qfree(v121);
                  }
                  v27 = *(_DWORD *)(v102 + 8);
                  if ( !v26 )
                    goto LABEL_40;
                  if ( v27 != 57 || *(_QWORD *)(v102 + 24) != v6 )
                    goto LABEL_54;
                  s1 = nullptr;
                  v109 = 0u;
                  v110 = 0;
                  v112 = 0;
                  v114 = 16;
                  v108 = 0;
                  v111 = 0;
                  v113 = 0;
                  v106 = 0;
                  v106 = get_tinfo_property();
                  if ( !(unsigned __int8)get_tinfo_details() )
                  {
LABEL_114:
                    clear_tinfo_t();
                    if ( v112 )
                    {
                      *(_QWORD *)&v113 = 0;
                      qfree(v112);
                    }
                    cleanup_argloc();
                    clear_tinfo_t();
                    v61 = s1;
                    if ( s1 )
                    {
                      v62 = v108;
                      v63 = 0;
                      if ( (_QWORD)v108 )
                      {
                        do
                        {
                          v104 = &v61[80 * v63];
                          clear_tinfo_t();
                          v64 = *((_QWORD *)v104 + 5);
                          if ( v64 )
                          {
                            *((_QWORD *)v104 + 6) = 0;
                            qfree(v64);
                          }
                          v65 = *((_QWORD *)v104 + 2);
                          if ( v65 )
                          {
                            *((_QWORD *)v104 + 3) = 0;
                            qfree(v65);
                          }
                          ++v63;
                          cleanup_argloc();
                          v61 = s1;
                        }
                        while ( v62 != v63 );
                      }
                      *(_QWORD *)&v108 = 0;
                      qfree((__int64)v61);
                    }
                    goto LABEL_54;
                  }
                  v54 = *(_QWORD **)(v102 + 32);
                  if ( v54[1] >= (unsigned __int64)v108 )
                  {
                    v55 = s1;
                    v56 = &s1[80 * v108];
                    if ( s1 != v56 )
                    {
                      v57 = 0;
                      do
                      {
                        v58 = *((_QWORD *)v55 + 8);
                        v55 += 80;
                        v59 = v57 + *v54;
                        v57 += 72;
                        v60 = *(_QWORD *)(v59 + 64);
                        *(_QWORD *)(v59 + 64) = v58;
                        *((_QWORD *)v55 - 2) = v60;
                      }
                      while ( v56 != v55 );
                    }
                    goto LABEL_114;
                  }
                  if ( !under_debugger )
                    sub_383060(52521);
LABEL_236:
                  BUG();
                }
                if ( v99 && !(_DWORD)v136 && !HIBYTE(v139) && HIDWORD(v136) != 3 )
                {
                  sub_255630(v24);
                  clear_tinfo_t();
                  j__qfree(v25);
                  goto LABEL_34;
                }
                v66 = BYTE1(v139);
                if ( BYTE1(v139) )
                {
                  if ( v6 )
                  {
                    sub_255630(v6);
                    clear_tinfo_t();
                    j__qfree(v6);
                  }
                  sub_255850((__int64 *)v102, v25);
                  if ( *(_QWORD *)(a1 + 24) <= 1u )
                  {
                    if ( !under_debugger )
                      sub_383060(50203);
                    goto LABEL_236;
                  }
                  v6 = v102;
                  goto LABEL_129;
                }
                if ( *(_DWORD *)(v6 + 8) == 48 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v6 + 48, v24 + 48) )
                {
                  v105 = 0;
                  copy_tinfo_t();
                  v106 = 0;
                  copy_tinfo_t();
                  while ( (get_tinfo_property() & 0xF) == 0xA && (get_tinfo_property() & 0xF) == 0xA )
                  {
                    s1 = nullptr;
                    s1 = (char *)get_tinfo_property();
                    copy_tinfo_t();
                    clear_tinfo_t();
                    s1 = nullptr;
                    s1 = (char *)get_tinfo_property();
                    copy_tinfo_t();
                    clear_tinfo_t();
                  }
                  v82 = 2;
                  if ( (get_tinfo_property() & 0xF) == 0xB
                    && (v82 = v106, (v83 = get_tinfo_size()) != 0)
                    && !sub_11CA80(v83)
                    || (v84 = sub_32E340(&v105, v82), v85 = sub_32E340(&v106, v82), v84 < v85)
                    || v84 == v85 && !v84 )
                  {
                    v71 = *(__int64 **)(v6 + 24);
                    clear_tinfo_t();
                    clear_tinfo_t();
                    goto LABEL_132;
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                }
                v71 = (__int64 *)v6;
LABEL_132:
                sub_255630((__int64)v71);
                sub_255850(v71, v25);
LABEL_129:
                v67 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
                v3 = sub_283B00(a1, v67) | v66;
                sub_245060(v6, v67, v68, v69, v70);
                v26 = 1;
                goto LABEL_35;
              }
LABEL_223:
              sub_22D2D0((__int64 *)&s1);
              clear_tinfo_t();
            }
            clear_tinfo_t();
          }
          v72 = *(_DWORD *)(v102 + 8);
          if ( v72 <= 69 )
          {
LABEL_135:
            if ( !v102 )
            {
              clear_tinfo_t();
              goto LABEL_41;
            }
            if ( v72 != 57 || a2 == *(_QWORD *)(v102 + 24) )
            {
              clear_tinfo_t();
              if ( *(int *)(v102 + 8) <= 69 )
                goto LABEL_41;
              goto LABEL_19;
            }
          }
        }
        sub_26AE90((__int64 *)&s1, a2, *(_QWORD *)(a1 + 64), (__int64 *)(a1 + 16), nullptr, -1);
        if ( !(_BYTE)s1 || (unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), a2 + 48, &s1) )
        {
          clear_tinfo_t();
          clear_tinfo_t();
          if ( *(int *)(v102 + 8) <= 69 )
            goto LABEL_41;
          goto LABEL_19;
        }
        clear_tinfo_t();
        clear_tinfo_t();
LABEL_84:
        v15 = 0;
        v17 = 0;
        v12 = a2;
        v16 = 0;
        v14 = 0;
      }
      goto LABEL_26;
    default:
      goto LABEL_18;
  }
}
