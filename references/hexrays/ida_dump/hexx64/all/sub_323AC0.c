unsigned __int64 __fastcall sub_323AC0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  void *v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // al
  int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r13
  int v23; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  char v28; // bl
  int v29; // eax
  __int64 v30; // r15
  unsigned int v31; // ebx
  int v32; // ebx
  char v33; // al
  char v34; // al
  __int64 v35; // rbx
  bool v36; // r15
  unsigned __int8 v37; // al
  bool v38; // si
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  int v42; // r15d
  int v43; // ecx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // r15
  char v47; // cl
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // r15
  char v51; // al
  char v52; // bl
  __int64 v53; // rax
  const char *v54; // rsi
  const char *v55; // rdi
  __int64 v56; // [rsp+0h] [rbp-108h]
  char v57; // [rsp+8h] [rbp-100h]
  char v58; // [rsp+8h] [rbp-100h]
  char tinfo_property; // [rsp+8h] [rbp-100h]
  int v60; // [rsp+14h] [rbp-F4h]
  __int64 v61; // [rsp+28h] [rbp-E0h] BYREF
  char *s1[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v63; // [rsp+48h] [rbp-C0h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  __int128 v65; // [rsp+60h] [rbp-A8h]
  _OWORD v66[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-68h]
  int v68; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B0h] [rbp-58h]
  char v70; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 216);
  v71 = __readfsqword(0x28u);
  ++*(_DWORD *)(v5 + 448);
  if ( *(_DWORD *)(a3 + 56) > 0x1FFu )
    sub_323680(0xC5FDu, a3, a1 + 16, a4);
  if ( !sub_256450(a3, a2) )
    sub_323680(0xC5FEu, a3, a1 + 16, a4);
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 > 0x54 )
    sub_323680(0xC5F1u, a3, a1 + 16, a4);
  v9 = *(int *)(a3 + 12);
  if ( (int)v9 < -1 )
    sub_323680(0xC5F2u, a3, a1 + 16, a4);
  if ( (_DWORD)v9 != -1 )
  {
    v10 = *(int *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( v10 * v10 < v9 )
      sub_323680(0xCD27u, a3, a1 + 16, a4);
  }
  if ( !v8 )
  {
    v11 = (unsigned int)(*(_DWORD *)(a2 + 8) - 67);
    if ( (unsigned int)v11 > 0x11 || (v12 = &loc_320A1, !_bittest64((const __int64 *)&v12, v11)) )
      sub_323680(0xC5FFu, a3, a1 + 16, a4);
    v13 = *(_QWORD *)(a3 + 48);
    if ( !(_BYTE)v13 )
      goto LABEL_35;
    if ( !(unsigned int)verify_tinfo(v13) )
    {
      v14 = *(_DWORD *)(a2 + 8);
      if ( v14 != 74 && v14 != 67 )
        sub_323680(0xC78Cu, a3, a1 + 16, a4);
      goto LABEL_18;
    }
LABEL_62:
    sub_323680(0xC601u, a3, a1 + 16, a4);
  }
  v15 = *(_QWORD *)(a3 + 48);
  if ( !(_BYTE)v15 )
  {
    if ( ((v8 - 66) & 0xFFFFFFFD) != 0
      && !(unsigned __int8)sub_285160(a3, 66, 1)
      && !(unsigned __int8)sub_285160(a3, 68, 1) )
    {
      sub_323680(0xC600u, a3, a1 + 16, a4);
    }
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a2 + 8) != 52 && (unsigned int)verify_tinfo(v15) )
    goto LABEL_62;
  if ( v8 == 66 )
    sub_323680(0xC602u, a3, a1 + 16, a4);
LABEL_18:
  if ( !(unsigned __int8)print_tinfo(0, 0, 0, 0, 0, a3 + 48, 0, 0) )
    sub_323680(0xC603u, a3, a1 + 16, a4);
  v16 = *(int *)(a2 + 8);
  if ( (int)v16 <= 69 )
  {
    if ( (unsigned int)v16 > 0x45 )
    {
      v19 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v17 = *((_BYTE *)&off_4E0320 + 16 * v16 + 11);
      v18 = *(_DWORD *)(a2 + 56) & 4;
      if ( (v17 & 2) == 0 )
        goto LABEL_26;
      if ( v18 )
      {
LABEL_31:
        if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) != 9 )
          sub_323680(0xC606u, a3, a1 + 16, a4);
        goto LABEL_32;
      }
      if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 9 )
        sub_323680(0xC604u, a3, a1 + 16, a4);
      v19 = *(_DWORD *)(a2 + 56);
      v20 = *(int *)(a2 + 8);
      v18 = v19 & 4;
      if ( (unsigned int)v20 <= 0x45 )
      {
        v17 = *((_BYTE *)&off_4E0320 + 16 * v20 + 11);
LABEL_26:
        if ( (v17 & 4) != 0 )
        {
          if ( !v18 )
            sub_323680(0xC605u, a3, a1 + 16, a4);
        }
        else if ( !v18 )
        {
          goto LABEL_32;
        }
        goto LABEL_31;
      }
    }
    if ( (v19 & 4) == 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_32:
  v21 = *(_DWORD *)(a1 + 56);
  if ( v21 <= 3 )
  {
    sub_2436E0(
      (__int64 *)s1,
      *(_QWORD *)(a1 + 216),
      a3,
      (_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL),
      (_QWORD *)(*(_QWORD *)(a3 + 32) + 48LL),
      (_QWORD *)(*(_QWORD *)(a3 + 40) + 48LL),
      0);
    if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(a3 + 48), s1[0], 0) )
      sub_323680(0xC607u, a3, a1 + 16, a4);
    clear_tinfo_t(s1);
LABEL_35:
    v21 = *(_DWORD *)(a1 + 56);
  }
  v22 = *(_QWORD *)(a3 + 24);
  v56 = *(_QWORD *)(a3 + 32);
  if ( v21 > 6 )
  {
    if ( *(_DWORD *)(a3 + 12) != -1 )
      sub_323680(0xC608u, a3, a1 + 16, a4);
    if ( v8 - 1 <= 0x3B || v8 == 67 )
    {
      v36 = v8 == 58 || v8 - 1 <= 0x2C;
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v22 + 48), 2) & 0xF) - 10) <= 2u )
      {
        if ( !v36 )
        {
          if ( v8 > 0x1F )
          {
            v47 = v8 - 35;
            if ( v8 - 35 <= 0x20 && (((1LL << v47) & 0x162FF6000LL) != 0 || v8 == 36 || ((1LL << v47) & 1) != 0) )
              goto LABEL_40;
          }
          else if ( v8 <= 5 )
          {
            if ( v8 == 1 )
              goto LABEL_40;
            if ( v8 == 2 )
              goto LABEL_191;
          }
          else
          {
            v40 = 1LL << v8;
            if ( ((1LL << v8) & 0xAAC00000) != 0 )
              goto LABEL_145;
            if ( (v40 & 0x70000) != 0 || (v40 & 0xC0) != 0 )
              goto LABEL_40;
          }
          goto LABEL_131;
        }
      }
      else
      {
        if ( !v36 )
          goto LABEL_40;
        v36 = 0;
      }
      v37 = (get_tinfo_property(*(_QWORD *)(v56 + 48), 2) & 0xF) - 10;
      v38 = v37 <= 2u;
      if ( v8 == 16 )
      {
        v50 = *(_QWORD *)(a3 + 40);
        tinfo_property = get_tinfo_property(*(_QWORD *)(v56 + 48), 2);
        if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v50 + 48), 2) & 0xF) - 10) <= 2u != (unsigned __int8)((tinfo_property & 0xF) - 10) <= 2u
          && (get_tinfo_property(*(_QWORD *)(v56 + 48), 2) & 0x3F) != 1
          && (get_tinfo_property(*(_QWORD *)(v50 + 48), 2) & 0x3F) != 1
          && (*(_DWORD *)(v56 + 8) != 61 || sub_255A30(*(__int64 **)(v56 + 24), (_QWORD *)(v56 + 48)))
          && (*(_DWORD *)(v50 + 8) != 61 || sub_255A30(*(__int64 **)(v50 + 24), (_QWORD *)(v50 + 48))) )
        {
          v51 = get_tinfo_property(*(_QWORD *)(v56 + 48), 2);
          if ( ((v51 & 0xE) != 0 || (v51 & 0x30) == 0 || (get_tinfo_property(*(_QWORD *)(v50 + 48), 2) & 0x3F) == 0x2D)
            && !(unsigned __int8)compare_tinfo(*(_QWORD *)(v56 + 48), *(_QWORD *)(v50 + 48), 17) )
          {
            sub_323680(0xCD51u, a3, a1 + 16, a4);
          }
        }
        goto LABEL_40;
      }
      if ( v37 > 2u && !v36 )
        goto LABEL_40;
      if ( v8 > 0x1F )
      {
        v41 = v8 - 35;
        if ( v8 - 35 > 0x20 )
          goto LABEL_131;
        if ( ((1LL << v41) & 0x162FF6000LL) != 0 )
          goto LABEL_40;
        if ( ((1LL << v41) & 1) != 0 )
          goto LABEL_176;
        if ( v8 != 36 )
          goto LABEL_131;
        if ( !v36 )
          sub_323680(0xC60Du, a3, a1 + 16, a4);
        if ( v37 > 2u )
          goto LABEL_40;
        goto LABEL_145;
      }
      if ( v8 > 5 )
      {
        v39 = 1LL << v8;
        if ( ((1LL << v8) & 0xAAC00000) == 0 )
        {
          if ( (v39 & 0x70000) != 0 )
            goto LABEL_40;
          if ( (v39 & 0xC0) == 0 )
            goto LABEL_131;
LABEL_176:
          if ( v38 && v36 )
            sub_323680(0xC60Bu, a3, a1 + 16, a4);
          goto LABEL_40;
        }
LABEL_145:
        if ( !sub_245650(*(_QWORD *)(a1 + 216), v22, v56, v8) )
          sub_323680(0xC60Cu, a3, a1 + 16, a4);
        goto LABEL_40;
      }
      if ( v8 == 1 )
        goto LABEL_40;
      if ( v8 == 2 )
      {
        if ( v37 <= 2u )
          goto LABEL_40;
LABEL_191:
        if ( (*(_DWORD *)(v56 + 8) != 61 || sub_255A30(*(__int64 **)(v56 + 24), (_QWORD *)(v56 + 48)))
          && (get_tinfo_property(*(_QWORD *)(v56 + 48), 2) & 0xF) != 0xC )
        {
          sub_323680(0xC60Au, a3, a1 + 16, a4);
        }
        goto LABEL_40;
      }
LABEL_131:
      sub_323680(0xC610u, a3, a1 + 16, a4);
    }
  }
LABEL_40:
  if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) == 57 )
    {
      if ( a2 && a3 == *(_QWORD *)(a2 + 24) )
      {
        v25 = *(_QWORD *)(a3 + 48);
        s1[0] = nullptr;
        s1[0] = (char *)get_tinfo_property(v25, 10);
        if ( (get_tinfo_property(s1[0], 2) & 0xF) != 0xC )
          sub_323680(0xC611u, a3, a1 + 16, a4);
        clear_tinfo_t(s1);
      }
    }
    else if ( !(unsigned __int8)sub_323990(a1, a2, a3, nullptr) )
    {
      sub_323680(0xC613u, a3, a1 + 16, a4);
    }
  }
  if ( (unsigned __int8)sub_245010(a2, a3) && !sub_323860(a2, a3, *(_DWORD *)(a1 + 56)) )
    sub_323680(0xC614u, a3, a1 + 16, a4);
  v23 = *(_DWORD *)(a1 + 56);
  if ( v23 <= 6 )
  {
    switch ( v8 )
    {
      case '#':
LABEL_80:
        if ( *(_DWORD *)(a2 + 8) == 51
          && (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v22 + 48), 2) & 0xF) - 10) > 1u
          && (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v56 + 48), 2) & 0xF) - 10) > 1u )
        {
          sub_323680(0xC992u, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case '0':
LABEL_69:
        if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 0xB && !*(_BYTE *)(*(_QWORD *)(a1 + 216) + 148LL) )
        {
          if ( *(_DWORD *)(a2 + 8) != 57
            || (v26 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL), 20), v26 != 176) && v26 != 256 )
          {
            sub_323680(0xC616u, a3, a1 + 16, a4);
          }
        }
        if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 0xC )
          sub_323680(0xC617u, a3, a1 + 16, a4);
        if ( *(int *)(a1 + 56) > 6
          && (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 9
          && (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v22 + 48), 2) & 0xF) - 10) <= 2u )
        {
          sub_323680(0xC609u, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case '3':
LABEL_111:
        if ( *(int *)(a3 + 40) <= 0 )
          sub_323680(0xC61Au, a3, a1 + 16, a4);
        v34 = get_tinfo_property(*(_QWORD *)(v22 + 48), 2) & 0xF;
        if ( (unsigned __int8)(v34 - 10) > 1u )
          sub_323680(0xC61Du, a3, a1 + 16, a4);
        if ( v34 == 10 )
        {
          v48 = *(int *)(a3 + 40);
          if ( v48 != get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0)
            && (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) != 0xB )
          {
            sub_323680(0xC61Bu, a3, a1 + 16, a4);
          }
        }
        else
        {
          s1[0] = nullptr;
          s1[0] = (char *)get_tinfo_property(*(_QWORD *)(v22 + 48), 11);
          v35 = *(int *)(a3 + 40);
          if ( v35 != get_tinfo_size(0, s1[0], 0) && (get_tinfo_property(s1[0], 2) & 0xF) != 0xB )
            sub_323680(0xC61Cu, a3, a1 + 16, a4);
          clear_tinfo_t(s1);
        }
        goto LABEL_51;
      case '9':
LABEL_105:
        if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL), 2) & 0xF) != 0xC )
          sub_323680(0xCE52u, a3, a1 + 16, a4);
        v33 = get_tinfo_property(*(_QWORD *)(v22 + 48), 2) & 0xF;
        if ( v33 == 10 )
        {
          s1[0] = nullptr;
          s1[0] = (char *)get_tinfo_property(*(_QWORD *)(v22 + 48), 9);
          v52 = get_tinfo_property(s1[0], 2);
          clear_tinfo_t(s1);
          v33 = v52 & 0xF;
        }
        if ( v33 != 12 )
          sub_323680(0xC61Eu, a3, a1 + 16, a4);
        goto LABEL_51;
      case ':':
LABEL_102:
        if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v22 + 48), 2) & 0xF) - 10) > 1u
          || (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v56 + 48), 2) & 0xF) - 10) <= 2u )
        {
          sub_323680(0xC60Fu, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case ';':
LABEL_101:
        v28 = get_tinfo_property(*(_QWORD *)(v22 + 48), 2);
        goto LABEL_95;
      case '<':
LABEL_94:
        s1[0] = nullptr;
        s1[0] = (char *)get_tinfo_property(*(_QWORD *)(v22 + 48), 9);
        v28 = get_tinfo_property(s1[0], 2);
        clear_tinfo_t(s1);
LABEL_95:
        if ( (v28 & 0x2F) != 0xD )
          sub_323680(0xC61Fu, a3, a1 + 16, a4);
        v29 = *(_DWORD *)(a3 + 56);
        v64 = 0;
        v30 = *(unsigned int *)(a3 + 32);
        v67 = 1;
        v70 = 0;
        memset(s1, 0, sizeof(s1));
        v63 = 0;
        v65 = 0;
        v31 = (v29 & 0x100) == 0 ? 2 : 268435458;
        v68 = -1;
        v69 = 0;
        v66[0] = 0;
        v61 = get_tinfo_property(*(_QWORD *)(v22 + 48), 10);
        v32 = sub_32D810(s1, &v61, v30, v31);
        clear_tinfo_t(&v61);
        if ( v32 == -1 )
          sub_323680(0xC6EAu, a3, a1 + 16, 0.0);
        clear_tinfo_t(v66);
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree(v64);
        }
        if ( s1[2] )
        {
          *(_QWORD *)&v63 = 0;
          qfree(s1[2]);
        }
        goto LABEL_51;
      case '=':
LABEL_88:
        sub_323720(*(_QWORD *)(a3 + 24));
        v27 = *(_QWORD *)(a3 + 24);
        if ( (*(_BYTE *)(v27 + 13) & 0x20) == 0 )
        {
          if ( *(_DWORD *)(a1 + 56) != 8
            || !(unsigned __int8)is_enum(*(_QWORD *)(v27 + 40), (unsigned int)*(char *)(v27 + 12))
            && !(unsigned __int8)is_stroff(
                                   *(_QWORD *)(*(_QWORD *)(a3 + 24) + 40LL),
                                   (unsigned int)*(char *)(*(_QWORD *)(a3 + 24) + 12LL)) )
          {
            goto LABEL_51;
          }
          if ( !under_debugger )
            sub_383060(52381);
LABEL_246:
          BUG();
        }
        if ( !(unsigned __int8)is_enum(*(_QWORD *)(v27 + 40), (unsigned int)*(char *)(v27 + 12)) )
          goto LABEL_51;
        v49 = *(_QWORD *)(a3 + 48);
        memset(s1, 0, sizeof(s1));
        if ( (v49 & 0x100) == 0 || !get_tinfo_pdata(s1, v49, 0) )
          goto LABEL_174;
        v53 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v53 + 24) )
        {
          v54 = *(const char **)(v53 + 16);
          v55 = ::s1;
          if ( !s1[1] )
            goto LABEL_215;
        }
        else
        {
          v54 = ::s1;
          if ( !s1[1] )
            goto LABEL_216;
        }
        v55 = s1[0];
LABEL_215:
        if ( strcmp(v55, v54) )
        {
LABEL_174:
          if ( !under_debugger )
            sub_383060(52378);
          goto LABEL_246;
        }
LABEL_216:
        if ( s1[0] )
        {
          s1[1] = nullptr;
          qfree(s1[0]);
        }
        goto LABEL_51;
      case '?':
LABEL_86:
        if ( !*(_QWORD *)(a3 + 24) )
          sub_323680(0xC624u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'A':
LABEL_84:
        if ( (unsigned __int64)*(int *)(a3 + 32) >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) )
          sub_323680(0xC622u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'B':
LABEL_118:
        if ( v23 > 1 )
LABEL_119:
          sub_323680(0xC625u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'D':
LABEL_65:
        if ( (*(_BYTE *)(a3 + 56) & 8) == 0 && (!a2 || *(_DWORD *)(a2 + 8) != 57 || a3 != *(_QWORD *)(a2 + 24)) )
          sub_323680(0xC623u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'E':
LABEL_50:
        if ( !*(_BYTE *)(a3 + 48) )
          sub_323680(0xC618u, a3, a1 + 16, a4);
        goto LABEL_51;
      default:
        goto LABEL_51;
    }
  }
  if ( v8 <= 0x45 )
  {
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v8 + 11) & 0x10) == 0 || (*(_BYTE *)(a3 + 56) & 4) != 0 )
    {
      switch ( v8 )
      {
        case '#':
          goto LABEL_80;
        case '0':
          goto LABEL_69;
        case '3':
          goto LABEL_179;
        case '9':
          goto LABEL_105;
        case ':':
          goto LABEL_102;
        case ';':
          goto LABEL_101;
        case '<':
          goto LABEL_94;
        case '=':
          goto LABEL_88;
        case '?':
          goto LABEL_86;
        case 'A':
          goto LABEL_84;
        case 'B':
          goto LABEL_119;
        case 'D':
          goto LABEL_65;
        case 'E':
          goto LABEL_50;
        default:
          goto LABEL_51;
      }
    }
    v42 = sub_254CB0(a3, *(_QWORD *)(a1 + 216));
    v43 = sub_255000(v8);
    if ( v42 == v43 )
      goto LABEL_187;
    v44 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL);
    if ( !(_BYTE)v44 || (v44 & 0xE) == 0 && (v44 & 0x30) != 0 )
      goto LABEL_187;
    v60 = v43;
    s1[0] = nullptr;
    s1[0] = (char *)get_tinfo_property(v44, 9);
    v57 = get_tinfo_property(s1[0], 2);
    clear_tinfo_t(s1);
    if ( (v57 & 0x3F) == 0x30 )
      goto LABEL_187;
    v45 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 48LL);
    if ( !(_BYTE)v45 || (v45 & 0xE) == 0 && (v45 & 0x30) != 0 )
      goto LABEL_187;
    s1[0] = nullptr;
    s1[0] = (char *)get_tinfo_property(v45, 9);
    v58 = get_tinfo_property(s1[0], 2);
    clear_tinfo_t(s1);
    if ( (v58 & 0x3F) == 0x30 )
      goto LABEL_187;
    if ( v60 == 2 && (*((_BYTE *)&off_4E0320 + 16 * (int)v8 + 11) & 8) == 0 )
    {
      v46 = *(_QWORD *)(a3 + 24);
      if ( *(_DWORD *)(v46 + 8) == 61 || (v46 = *(_QWORD *)(a3 + 32), *(_DWORD *)(v46 + 8) == 61) )
      {
        if ( v46
          && get_tinfo_size(0, *(_QWORD *)(v46 + 48), 0) < (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 216)
                                                                                                + 130LL) )
        {
          if ( *(_DWORD *)(v46 + 8) != 61 )
            sub_323010();
          if ( sub_255A30(*(__int64 **)(v46 + 24), (_QWORD *)(v46 + 48)) >= 0 )
          {
LABEL_187:
            switch ( v8 )
            {
              case '#':
                goto LABEL_80;
              case '0':
                goto LABEL_69;
              case '3':
                if ( *(int *)(a1 + 56) > 6 )
                {
LABEL_179:
                  if ( *(_DWORD *)(v22 + 8) == 52
                    && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 48LL), 2) & 0xF) != 0xB
                    && (unsigned int)lexcompare_tinfo(
                                       *(_QWORD *)(a3 + 48),
                                       *(_QWORD *)(*(_QWORD *)(v22 + 24) + 48LL),
                                       0) )
                  {
                    sub_323680(0xC619u, a3, a1 + 16, a4);
                  }
                }
                goto LABEL_111;
              case '9':
                goto LABEL_105;
              case ':':
                goto LABEL_102;
              case ';':
                goto LABEL_101;
              case '<':
                goto LABEL_94;
              case '=':
                goto LABEL_88;
              case '?':
                goto LABEL_86;
              case 'A':
                goto LABEL_84;
              case 'B':
                v23 = *(_DWORD *)(a1 + 56);
                goto LABEL_118;
              case 'D':
                goto LABEL_65;
              case 'E':
                goto LABEL_50;
              default:
                goto LABEL_51;
            }
          }
        }
      }
    }
    sub_323680(0xC615u, a3, a1 + 16, a4);
  }
LABEL_51:
  --*(_DWORD *)(*(_QWORD *)(a1 + 216) + 448LL);
  return v71 - __readfsqword(0x28u);
}
