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
  char v18; // si
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
  int v31; // r12d
  char v32; // al
  int v33; // r8d
  int v34; // r9d
  int v35; // r8d
  int v36; // r9d
  __int64 *v37; // rax
  __int64 v38; // r9
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdi
  char tinfo_property; // al
  unsigned __int8 v44; // dl
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  char v48; // al
  __int64 v49; // r12
  int v50; // eax
  _QWORD *v51; // r9
  char *v52; // rax
  char *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rsi
  char *v58; // rdi
  __int64 v59; // r13
  __int64 v60; // r12
  int v61; // ebx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 *v66; // r13
  int v67; // eax
  unsigned int v68; // r12d
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // r13
  __int64 v72; // r13
  char *v73; // rdi
  __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  int v78; // r13d
  int v79; // eax
  char v80; // al
  bool v81; // r13
  int v82; // r12d
  char v83; // r13
  __int64 v84; // rdx
  __int64 v85; // [rsp+8h] [rbp-2B8h]
  int v86; // [rsp+10h] [rbp-2B0h]
  __int64 v87; // [rsp+10h] [rbp-2B0h]
  int v88; // [rsp+18h] [rbp-2A8h]
  __int64 v89; // [rsp+18h] [rbp-2A8h]
  unsigned __int8 v90; // [rsp+18h] [rbp-2A8h]
  __int64 v91; // [rsp+20h] [rbp-2A0h]
  char v92; // [rsp+28h] [rbp-298h]
  char v93; // [rsp+28h] [rbp-298h]
  int v94; // [rsp+28h] [rbp-298h]
  __int64 v95; // [rsp+28h] [rbp-298h]
  __int64 v96; // [rsp+38h] [rbp-288h]
  __int64 v97; // [rsp+38h] [rbp-288h]
  char *v98; // [rsp+38h] [rbp-288h]
  __int64 v99; // [rsp+50h] [rbp-270h] BYREF
  __int64 v100; // [rsp+58h] [rbp-268h] BYREF
  char *s1; // [rsp+60h] [rbp-260h] BYREF
  __int128 v102; // [rsp+68h] [rbp-258h]
  __int128 v103; // [rsp+78h] [rbp-248h]
  __int64 v104; // [rsp+88h] [rbp-238h]
  __int128 v105; // [rsp+90h] [rbp-230h]
  __int64 v106; // [rsp+A0h] [rbp-220h]
  __int128 v107; // [rsp+A8h] [rbp-218h]
  char v108; // [rsp+B8h] [rbp-208h]
  __m128i v109; // [rsp+C0h] [rbp-200h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-1F0h]
  __int64 v111; // [rsp+D8h] [rbp-1E8h]
  __int64 v112; // [rsp+E0h] [rbp-1E0h]
  __int64 v113; // [rsp+E8h] [rbp-1D8h]
  __int64 v114; // [rsp+F0h] [rbp-1D0h]
  __int64 v115; // [rsp+F8h] [rbp-1C8h]
  __int128 v116; // [rsp+100h] [rbp-1C0h]
  __int64 v117; // [rsp+110h] [rbp-1B0h]
  __int128 v118; // [rsp+118h] [rbp-1A8h]
  __int64 v119; // [rsp+128h] [rbp-198h]
  int v120; // [rsp+130h] [rbp-190h]
  __int64 v121; // [rsp+138h] [rbp-188h]
  __int64 v122; // [rsp+140h] [rbp-180h]
  __int64 v123; // [rsp+148h] [rbp-178h]
  __int64 v124; // [rsp+150h] [rbp-170h]
  __int64 v125; // [rsp+158h] [rbp-168h]
  __int128 v126; // [rsp+160h] [rbp-160h]
  __int64 v127; // [rsp+170h] [rbp-150h]
  int v128; // [rsp+270h] [rbp-50h]
  int v129; // [rsp+274h] [rbp-4Ch]
  __int64 v130; // [rsp+278h] [rbp-48h]
  char v131; // [rsp+280h] [rbp-40h]
  char v132; // [rsp+281h] [rbp-3Fh]
  int v133; // [rsp+282h] [rbp-3Eh]
  unsigned __int64 v134; // [rsp+288h] [rbp-38h]

  v134 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
    return 0;
  v96 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  LOBYTE(v3) = *(_DWORD *)(v96 + 8) == 59 || *(_DWORD *)(v96 + 8) == 52;
  if ( (_BYTE)v3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = a2;
  v100 = 0;
  v91 = v5;
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
      v92 = 1;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
      goto LABEL_7;
    }
    v7 = *(_DWORD *)(a2 + 8);
  }
  if ( v7 == 52 )
  {
    v92 = 1;
    v8 = *(_QWORD *)(a2 + 24);
    goto LABEL_7;
  }
LABEL_6:
  v92 = 0;
  v8 = a2;
LABEL_7:
  v9 = sub_26B3D0(v8);
  if ( v9 != -1 && (get_tinfo_property() & 0xF) != 0xB )
  {
    copy_tinfo_t();
    if ( get_tinfo_size() == -1 )
      clear_tinfo_t();
    if ( v92 )
    {
      if ( *(_DWORD *)(v96 + 8) == 57 )
      {
        v37 = *(__int64 **)(v96 + 32);
        v38 = *v37;
        v39 = 72 * v37[1] == 0;
        v40 = *v37 + 72 * v37[1];
        if ( !v39 )
        {
          v41 = v38;
          while ( a2 != v41 )
          {
            v41 += 72;
            if ( v41 == v40 )
              goto LABEL_12;
          }
          v42 = *(_QWORD *)(v96 + 24);
          v85 = v38;
          v87 = v41;
          s1 = nullptr;
          v89 = v42 + 48;
          v102 = 0;
          if ( !(unsigned __int8)sub_254DF0(v42, (__int64 *)&s1, v42 + 48, 0) )
          {
            if ( !s1 )
              goto LABEL_64;
            goto LABEL_63;
          }
          v73 = (char *)::s1;
          if ( (_QWORD)v102 )
            v73 = s1;
          if ( !(unsigned __int8)sub_F8190(v73, v89, 954437177 * (unsigned int)((v87 - v85) >> 3)) )
          {
            if ( !s1 )
            {
LABEL_64:
              v86 = 1;
              if ( (get_tinfo_property() & 0xF) == 0xA )
              {
                s1 = nullptr;
                s1 = (char *)get_tinfo_property();
                tinfo_property = get_tinfo_property();
                v44 = 0;
                if ( (tinfo_property & 0xF) != 0xA )
                  v44 = sub_29CC80(&s1) ^ 1;
                v90 = v44;
                clear_tinfo_t();
                v86 = v90;
              }
              goto LABEL_13;
            }
LABEL_63:
            *(_QWORD *)&v102 = 0;
            qfree();
            goto LABEL_64;
          }
          if ( s1 )
          {
            *(_QWORD *)&v102 = 0;
            qfree();
          }
        }
      }
    }
LABEL_12:
    v86 = 0;
LABEL_13:
    v10 = 0;
    if ( *(_DWORD *)(v8 + 8) == 65 )
      v10 = v8 + 24;
    v88 = v10;
    v11 = *(_QWORD *)(v91 + 808);
    s1 = nullptr;
    copy_tinfo_t();
    sub_27E790(v11, v9, 0, 0, (unsigned int)&s1, v88, v86);
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
      v48 = get_tinfo_property();
      v12 = *(_QWORD *)(a2 + 24);
      if ( (unsigned __int8)((v48 & 0xF) - 10) <= 1u )
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
        v27 = *(_DWORD *)(v96 + 8);
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
        v46 = *(_DWORD *)(v96 + 8);
        if ( v46 != 51 && v46 != 57 )
        {
LABEL_103:
          if ( v46 <= 69 )
            goto LABEL_41;
LABEL_19:
          *(_DWORD *)(a2 + 56) |= 1u;
          return 0;
        }
        v100 = get_tinfo_property();
        if ( !(_BYTE)v100 )
        {
LABEL_156:
          clear_tinfo_t();
          if ( *(int *)(v96 + 8) <= 69 )
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
      v49 = *(_QWORD *)(a2 + 24);
      v50 = *(_DWORD *)(v49 + 8);
      if ( v50 != 52 )
      {
        if ( v50 == 48 && *(_DWORD *)(*(_QWORD *)(v49 + 24) + 8LL) == 52 )
        {
          v99 = 0;
          v95 = *(_QWORD *)(a1 + 64);
          v99 = get_tinfo_property();
          v100 = get_tinfo_property();
          v71 = get_tinfo_size();
          if ( v71 == get_tinfo_size() )
          {
            v81 = (get_tinfo_property() & 0xF) == 9;
            if ( v81 == ((get_tinfo_property() & 0xF) == 9) )
            {
              if ( (unsigned __int8)sub_323990(v95, v96, a2, *(_QWORD *)(*(_QWORD *)(v49 + 24) + 24LL) + 48LL) )
              {
                sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
                s1 = nullptr;
                s1 = (char *)get_tinfo_property();
                copy_tinfo_t();
                clear_tinfo_t();
                sub_255850(*(__int64 **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
                if ( (unsigned int)(*(_DWORD *)(v96 + 8) - 2) > 0xD || !(unsigned __int8)sub_245010(v96, a2) )
                {
                  v82 = get_tinfo_property();
                  if ( v82 == -1 )
                  {
LABEL_214:
                    clear_tinfo_t();
                    clear_tinfo_t();
                    goto LABEL_171;
                  }
                  sub_26B390((__int64 *)&s1);
                  v83 = (char)s1;
                  if ( ((unsigned __int8)s1 & 0xE) != 0 )
                  {
                    clear_tinfo_t();
                    goto LABEL_214;
                  }
                  clear_tinfo_t();
                  if ( (v83 & 0x30) == 0 || v82 != (unsigned int)get_tinfo_property() )
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
        v12 = sub_254FC0(v49);
        if ( (get_tinfo_property() & 0xF) != 0xA )
        {
LABEL_18:
          if ( *(int *)(v96 + 8) > 69 )
            goto LABEL_19;
LABEL_41:
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            goto LABEL_54;
          v28 = *(_DWORD *)(v96 + 8);
          if ( (unsigned int)(v28 - 1) <= 1 || v28 > 69 )
          {
            if ( get_tinfo_property() || (v28 = *(_DWORD *)(v96 + 8), (unsigned int)(v28 - 2) <= 0xD) )
            {
              if ( (unsigned __int8)sub_25A100(*(_QWORD *)(a1 + 64), v96) )
                goto LABEL_54;
              v28 = *(_DWORD *)(v96 + 8);
            }
          }
          if ( v28 == 57 )
          {
            v72 = sub_284360(v96, v6, 0) + 64;
            if ( !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v6 + 48, v72) )
              goto LABEL_46;
          }
          else if ( v28 != 59 )
          {
LABEL_46:
            v29 = (unsigned int)(*(_DWORD *)(v6 + 8) - 51);
            if ( (unsigned int)v29 <= 0xE && (v30 = 25473, _bittest64(&v30, v29)) )
            {
              v31 = get_tinfo_size();
              v97 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v6);
              v32 = get_tinfo_property();
              sub_32C2C0((unsigned int)&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v31, (v32 & 0xF) == 9, v33, v34);
              if ( (unsigned __int8)sub_246B40(v97, *(_QWORD *)(a1 + 72), &s1) )
              {
                v75 = sub_244320(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v97, v31, 0, v35, v36);
                sub_244EE0((_QWORD *)v6, v75);
              }
              else
              {
                *(_QWORD *)(v97 + 24) = 0;
                if ( v97 )
                {
                  sub_255630(v97);
                  clear_tinfo_t();
                  j__qfree();
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
            else if ( !(unsigned __int8)sub_323990(*(_QWORD *)(a1 + 64), v96, v6, 0) )
            {
              v68 = get_tinfo_size();
              v69 = sub_255000(*(_DWORD *)(v96 + 8));
              v70 = v69;
              if ( !v69 )
                v70 = 1;
              sub_32C430(&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v68, v70);
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
          v80 = get_tinfo_property();
          if ( (v80 & 0x2F) != 0xD && (v80 & 0xF) != 0xB )
          {
            clear_tinfo_t();
            if ( *(int *)(v96 + 8) <= 69 )
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
      v74 = *(_QWORD *)a2;
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
      if ( *(_QWORD *)a2 == -1 )
        *(_QWORD *)a2 = v74;
LABEL_171:
      if ( !(unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      {
        if ( *(_DWORD *)(v96 + 8) == 51 )
          goto LABEL_41;
        v49 = a2;
        v17 = 1;
        goto LABEL_95;
      }
LABEL_140:
      *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    case 0x34:
      goto LABEL_84;
    case 0x39:
      v45 = get_tinfo_property();
      v46 = *(_DWORD *)(v96 + 8);
      if ( !v45 )
        goto LABEL_103;
      if ( v46 == 80 )
        goto LABEL_19;
      v17 = 0;
      v12 = a2;
      v47 = get_tinfo_size();
      v15 = 0;
      v16 = v47;
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
      if ( *(int *)(v96 + 8) <= 69 && (*(_BYTE *)(v96 + 56) & 1) != 0 )
        goto LABEL_41;
      get_tinfo_property();
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        v17 = 0;
        v12 = a2;
        v94 = *(_DWORD *)(a2 + 40);
        clear_tinfo_t();
        v16 = v94;
        v15 = 0;
        v14 = 0;
      }
      else
      {
        v67 = *(_DWORD *)(v96 + 8);
        if ( v67 <= 69 )
        {
          if ( *(_QWORD *)(v96 + 32) != a2 )
            goto LABEL_135;
          if ( (get_tinfo_property() & 0xF) == 0xA
            && (unsigned int)lexcompare_tinfo()
            && (get_tinfo_property() & 0xF) == 0xA )
          {
            sub_26B390(&v99);
            if ( (get_tinfo_property() & 0x2F) == 0xD )
            {
              sub_26B390(&v100);
              LODWORD(v105) = 1;
              s1 = nullptr;
              v104 = 0;
              v102 = 0;
              v103 = 0;
              do
              {
                if ( !(unsigned __int8)get_tinfo_details() || !(_QWORD)v102 )
                  goto LABEL_223;
                v84 = v99;
                v99 = *((_QWORD *)s1 + 8);
                *((_QWORD *)s1 + 8) = v84;
              }
              while ( !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), &v99, &v100) );
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
                v129 = v16;
                v114 = v14;
                v20 = *(_QWORD *)v6;
                v117 = v19;
                v109.m128i_i64[0] = v19;
                v21 = *(_QWORD *)(a1 + 24);
                v122 = v20;
                v22 = *(_QWORD *)(a1 + 16);
                v115 = 0;
                v119 = -1;
                v120 = 0;
                v123 = 0;
                v124 = 0;
                v125 = 0;
                v130 = 0;
                v133 = 0;
                v116 = 0;
                v118 = 0;
                v126 = 0;
                v23 = *(_QWORD *)(v22 + 8 * v21 - 8);
                v110 = a1 + 16;
                v93 = v15;
                v109.m128i_i64[1] = a1;
                v112 = v6;
                v113 = v12;
                v121 = 0;
                v128 = -1;
                v131 = 0;
                v132 = v17;
                v111 = v23;
                v127 = -1;
                v24 = sub_275B20(&v109, v18);
                v25 = v24;
                if ( !v24 )
                {
LABEL_34:
                  v26 = 0;
LABEL_35:
                  if ( v125 )
                  {
                    *(_QWORD *)&v126 = 0;
                    qfree();
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                  if ( v115 )
                  {
                    *(_QWORD *)&v116 = 0;
                    qfree();
                  }
                  v27 = *(_DWORD *)(v96 + 8);
                  if ( !v26 )
                    goto LABEL_40;
                  if ( v27 != 57 || *(_QWORD *)(v96 + 24) != v6 )
                    goto LABEL_54;
                  s1 = nullptr;
                  v103 = 0u;
                  v104 = 0;
                  v106 = 0;
                  v108 = 16;
                  v102 = 0;
                  v105 = 0;
                  v107 = 0;
                  v100 = 0;
                  v100 = get_tinfo_property();
                  if ( !(unsigned __int8)get_tinfo_details() )
                  {
LABEL_114:
                    clear_tinfo_t();
                    if ( v106 )
                    {
                      *(_QWORD *)&v107 = 0;
                      qfree();
                    }
                    cleanup_argloc();
                    clear_tinfo_t();
                    v58 = s1;
                    if ( s1 )
                    {
                      v59 = v102;
                      v60 = 0;
                      if ( (_QWORD)v102 )
                      {
                        do
                        {
                          v98 = &v58[80 * v60];
                          clear_tinfo_t();
                          if ( *((_QWORD *)v98 + 5) )
                          {
                            *((_QWORD *)v98 + 6) = 0;
                            qfree();
                          }
                          if ( *((_QWORD *)v98 + 2) )
                          {
                            *((_QWORD *)v98 + 3) = 0;
                            qfree();
                          }
                          ++v60;
                          cleanup_argloc();
                          v58 = s1;
                        }
                        while ( v59 != v60 );
                      }
                      *(_QWORD *)&v102 = 0;
                      qfree();
                    }
                    goto LABEL_54;
                  }
                  v51 = *(_QWORD **)(v96 + 32);
                  if ( v51[1] >= (unsigned __int64)v102 )
                  {
                    v52 = s1;
                    v53 = &s1[80 * v102];
                    if ( s1 != v53 )
                    {
                      v54 = 0;
                      do
                      {
                        v55 = *((_QWORD *)v52 + 8);
                        v52 += 80;
                        v56 = v54 + *v51;
                        v54 += 72;
                        v57 = *(_QWORD *)(v56 + 64);
                        *(_QWORD *)(v56 + 64) = v55;
                        *((_QWORD *)v52 - 2) = v57;
                      }
                      while ( v53 != v52 );
                    }
                    goto LABEL_114;
                  }
                  if ( !under_debugger )
                    sub_383060(52521);
LABEL_236:
                  BUG();
                }
                if ( v93 && !(_DWORD)v130 && !HIBYTE(v133) && HIDWORD(v130) != 3 )
                {
                  sub_255630(v24);
                  clear_tinfo_t();
                  j__qfree();
                  goto LABEL_34;
                }
                v61 = BYTE1(v133);
                if ( BYTE1(v133) )
                {
                  if ( v6 )
                  {
                    sub_255630(v6);
                    clear_tinfo_t();
                    j__qfree();
                  }
                  sub_255850((__int64 *)v96, v25);
                  if ( *(_QWORD *)(a1 + 24) <= 1u )
                  {
                    if ( !under_debugger )
                      sub_383060(50203);
                    goto LABEL_236;
                  }
                  v6 = v96;
                  goto LABEL_129;
                }
                if ( *(_DWORD *)(v6 + 8) == 48 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v6 + 48, v24 + 48) )
                {
                  v99 = 0;
                  copy_tinfo_t();
                  v100 = 0;
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
                  v76 = 2;
                  if ( (get_tinfo_property() & 0xF) == 0xB
                    && (v76 = v100, (v77 = get_tinfo_size()) != 0)
                    && !sub_11CA80(v77)
                    || (v78 = sub_32E340(&v99, v76), v79 = sub_32E340(&v100, v76), v78 < v79)
                    || v78 == v79 && !v78 )
                  {
                    v66 = *(__int64 **)(v6 + 24);
                    clear_tinfo_t();
                    clear_tinfo_t();
                    goto LABEL_132;
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                }
                v66 = (__int64 *)v6;
LABEL_132:
                sub_255630((__int64)v66);
                sub_255850(v66, v25);
LABEL_129:
                v62 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
                v3 = sub_283B00(a1, v62) | v61;
                sub_245060(v6, v62, v63, v64, v65);
                v26 = 1;
                goto LABEL_35;
              }
LABEL_223:
              sub_22D2D0((__int64 *)&s1);
              clear_tinfo_t();
            }
            clear_tinfo_t();
          }
          v67 = *(_DWORD *)(v96 + 8);
          if ( v67 <= 69 )
          {
LABEL_135:
            if ( !v96 )
            {
              clear_tinfo_t();
              goto LABEL_41;
            }
            if ( v67 != 57 || a2 == *(_QWORD *)(v96 + 24) )
            {
              clear_tinfo_t();
              if ( *(int *)(v96 + 8) <= 69 )
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
          if ( *(int *)(v96 + 8) <= 69 )
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
