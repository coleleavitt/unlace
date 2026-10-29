__int64 __fastcall sub_281F10(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned int v9; // ebx
  __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // edx
  int v20; // ecx
  char v21; // r9
  __int64 v22; // rax
  unsigned int v23; // esi
  char v24; // al
  __int64 v25; // rax
  unsigned int v26; // eax
  char tinfo_property; // al
  int v28; // esi
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r14
  char v40; // r14
  char v41; // al
  char v42; // r9
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __m128 v48; // xmm0
  int v49; // r8d
  int v50; // r9d
  char v51; // r9
  __int64 tinfo_size; // rax
  __int64 v53; // rsi
  unsigned int v54; // eax
  char v55; // al
  int v56; // r15d
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r14
  char v62; // r9
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v66; // [rsp+8h] [rbp-A0h]
  char *v67; // [rsp+10h] [rbp-98h]
  __int64 *v68; // [rsp+18h] [rbp-90h]
  int v69; // [rsp+20h] [rbp-88h]
  __int64 v70; // [rsp+28h] [rbp-80h] BYREF
  __int64 v71; // [rsp+30h] [rbp-78h]
  __int64 v72; // [rsp+38h] [rbp-70h] BYREF
  __int128 v73; // [rsp+40h] [rbp-68h] BYREF
  __int64 v74; // [rsp+50h] [rbp-58h] BYREF
  int v75; // [rsp+58h] [rbp-50h]
  __int16 v76; // [rsp+5Ch] [rbp-4Ch]
  __int64 v77; // [rsp+60h] [rbp-48h]
  unsigned __int64 v78; // [rsp+68h] [rbp-40h]

  v65 = a4;
  v78 = __readfsqword(0x28u);
  v5 = *(int *)(a1 + 8);
  if ( (int)v5 > 69 )
  {
    if ( !under_debugger )
      sub_383060(51787);
    goto LABEL_239;
  }
  v6 = a3;
  LOBYTE(v4) = (_DWORD)v5 == 58;
  LOBYTE(a3) = (unsigned int)(v5 - 1) <= 0x2C;
  v9 = a3 | v4;
  if ( (unsigned int)(v5 - 1) <= 0x3B || (_DWORD)v5 == 67 )
  {
    v10 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( !(_BYTE)v9 )
    {
      if ( (_DWORD)v5 == 57 )
      {
        if ( (unsigned __int8)compare_tinfo() )
        {
          v5 = *(int *)(a1 + 8);
          if ( (unsigned int)v5 > 0x45 )
            goto LABEL_7;
LABEL_25:
          v12 = 0;
          goto LABEL_38;
        }
        v70 = 0;
        copy_tinfo_t();
        if ( (get_tinfo_property() & 0xF) != 0xA )
        {
          v71 = 0;
          v67 = (char *)&v73 + 8;
          v72 = 0;
          v73 = 0;
          copy_tinfo_t();
          v74 = 0;
          v68 = &v74;
          copy_tinfo_t();
          v75 = 0;
          v76 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          v66 = &v73;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        v9 = sub_246B40(*(_QWORD *)(a1 + 24), a2, &v70);
        v12 = 0;
        v10 = *(_QWORD *)(a1 + 24) + 48LL;
        clear_tinfo_t();
        v5 = *(int *)(a1 + 8);
        if ( (unsigned int)v5 > 0x45 )
          goto LABEL_8;
      }
      else
      {
        v11 = (get_tinfo_property() & 0xF) == 12;
        v5 = *(int *)(a1 + 8);
        if ( !v11 )
        {
          if ( (unsigned int)v5 > 0x45 )
          {
LABEL_7:
            v12 = 0;
            goto LABEL_8;
          }
          goto LABEL_25;
        }
        if ( (unsigned int)v5 <= 0x3C )
        {
          v38 = 0x19EE800000000000LL;
          v12 = 0;
          LOBYTE(v67) = 0;
          if ( !_bittest64(&v38, v5) )
            goto LABEL_38;
LABEL_36:
          v18 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v73 = 39;
          v66 = &v73;
          v9 = sub_246B40(v18, a2, &v73);
          clear_tinfo_t();
          v10 = *(_QWORD *)(a1 + 24) + 48LL;
          if ( !(_BYTE)v67 )
          {
            v5 = *(int *)(a1 + 8);
            if ( (unsigned int)v5 > 0x45 )
              goto LABEL_8;
            goto LABEL_38;
          }
          goto LABEL_110;
        }
        v12 = 0;
        if ( (unsigned int)v5 > 0x45 )
          goto LABEL_8;
      }
LABEL_38:
      if ( (*((_BYTE *)&off_4E0320 + 16 * v5 + 11) & 2) == 0 )
        goto LABEL_84;
LABEL_39:
      if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
        goto LABEL_84;
      goto LABEL_40;
    }
    v12 = *(_QWORD *)(a1 + 32) + 48LL;
    if ( (_DWORD)v5 == 1 )
    {
      v9 = 0;
      if ( (unk_4E033B & 2) == 0 )
        goto LABEL_8;
      goto LABEL_39;
    }
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      LOBYTE(v67) = (get_tinfo_property() & 0xF) == 12;
      goto LABEL_36;
    }
    if ( (get_tinfo_property() & 0xF) != 0xC )
    {
      v5 = *(int *)(a1 + 8);
      v9 = 0;
      if ( (unsigned int)v5 > 0x45 )
        goto LABEL_8;
      goto LABEL_38;
    }
    v9 = 0;
    v66 = &v73;
LABEL_110:
    v37 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v73 = 39;
    v9 |= sub_246B40(v37, a2, v66);
    clear_tinfo_t();
    v12 = *(_QWORD *)(a1 + 32) + 48LL;
    v5 = *(int *)(a1 + 8);
    if ( (unsigned int)v5 <= 0x45 )
      goto LABEL_38;
    if ( v10 )
    {
      LOBYTE(v19) = v9;
LABEL_43:
      LOBYTE(v65) = v19;
      v9 = (unsigned __int8)v19;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      {
LABEL_44:
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
          goto LABEL_10;
        v14 = *(unsigned int *)(a1 + 8);
        v21 = 1;
        if ( (unsigned int)v14 > 0x24 )
        {
          v22 = (unsigned int)(v14 - 48);
          if ( (unsigned int)v22 > 0x13 )
            goto LABEL_47;
          goto LABEL_107;
        }
        goto LABEL_54;
      }
    }
LABEL_52:
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      v14 = *(unsigned int *)(a1 + 8);
      v21 = 0;
      if ( (unsigned int)v14 > 0x24 )
      {
        v22 = (unsigned int)(v14 - 48);
LABEL_107:
        switch ( v22 )
        {
          case 0LL:
            if ( !v21 )
              goto LABEL_27;
LABEL_151:
            LOBYTE(v65) = v21;
            if ( (get_tinfo_property() & 0xF) != 9 )
            {
              if ( !(_BYTE)v6 )
                goto LABEL_19;
              LODWORD(v14) = *(_DWORD *)(a1 + 8);
              v23 = v14;
              if ( (unsigned int)(v14 - 22) > 9 )
              {
                v24 = v65 & ((_DWORD)v14 == 36);
                goto LABEL_63;
              }
              goto LABEL_122;
            }
            v25 = sub_27F1D0(a2, *(_QWORD *)(a1 + 24), 0);
            v62 = v65;
            *(_QWORD *)(a1 + 24) = v25;
            if ( !(_BYTE)v6 )
              goto LABEL_172;
            LODWORD(v14) = *(_DWORD *)(a1 + 8);
            v23 = v14;
            if ( (unsigned int)(v14 - 22) > 9 )
            {
              v9 = v6;
              v24 = v62 & ((_DWORD)v14 == 36);
              goto LABEL_63;
            }
            v9 = v6;
            goto LABEL_68;
          case 1LL:
          case 3LL:
          case 4LL:
          case 5LL:
          case 6LL:
          case 7LL:
          case 8LL:
          case 9LL:
          case 16LL:
          case 17LL:
          case 19LL:
            goto LABEL_27;
          case 2LL:
          case 13LL:
          case 14LL:
          case 15LL:
          case 18LL:
            goto LABEL_159;
          case 10LL:
            if ( v21 )
            {
              if ( (unsigned __int8)sub_246B40(*(_QWORD *)(a1 + 32), a2, (_QWORD *)(a2 + 288)) )
                goto LABEL_60;
              if ( !under_debugger )
                sub_383060(51414);
            }
            else if ( !under_debugger )
            {
              sub_383060(50598);
            }
            goto LABEL_239;
          case 11LL:
LABEL_161:
            if ( !under_debugger )
              sub_383060(50599);
            goto LABEL_239;
          case 12LL:
            if ( !v21 )
            {
              if ( !under_debugger )
                sub_383060(50597);
              goto LABEL_239;
            }
LABEL_103:
            if ( (_BYTE)v6 )
              goto LABEL_19;
            break;
          default:
            goto LABEL_59;
        }
LABEL_104:
        v15 = v14;
        if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
          goto LABEL_21;
        goto LABEL_30;
      }
LABEL_54:
      if ( (unsigned int)v14 <= 0x15 )
      {
        if ( (_DWORD)v14 == 2 )
        {
          LOBYTE(v67) = 1;
          goto LABEL_134;
        }
        if ( (unsigned int)v14 <= 2 )
        {
          if ( (_DWORD)v14 == 1 )
            goto LABEL_27;
          goto LABEL_58;
        }
        if ( (unsigned int)v14 > 7 )
        {
          if ( (unsigned int)(v14 - 16) > 2 )
          {
LABEL_159:
            if ( !v21 )
              goto LABEL_59;
LABEL_145:
            v14 = (unsigned int)(v14 - 2);
            if ( (unsigned int)v14 > 0xD )
            {
              v63 = *(_QWORD *)(a1 + 24);
              LOBYTE(v65) = v21;
              v64 = sub_281DE0(a1, a2, v63);
              v51 = v65;
              v9 |= v64;
LABEL_147:
              if ( !v51 )
              {
LABEL_148:
                if ( !(_BYTE)v6 )
                  goto LABEL_19;
                goto LABEL_149;
              }
LABEL_59:
              if ( (unsigned __int8)sub_281DE0(a1, a2, *(_QWORD *)(a1 + 32)) )
              {
LABEL_60:
                if ( !(_BYTE)v6 )
                {
LABEL_172:
                  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
                    goto LABEL_32;
                  v15 = *(_DWORD *)(a1 + 8);
                  if ( v15 > 0x45 || (*((_BYTE *)&off_4E0320 + 16 * (int)v15 + 11) & 0x10) == 0 )
                    goto LABEL_32;
                  v9 = 1;
                  goto LABEL_31;
                }
                LODWORD(v14) = *(_DWORD *)(a1 + 8);
                v23 = v14;
                if ( (unsigned int)(v14 - 22) <= 9 )
                {
                  v25 = *(_QWORD *)(a1 + 24);
                  v9 = v6;
                  goto LABEL_68;
                }
                v9 = v6;
                v24 = (_DWORD)v14 == 36;
                goto LABEL_63;
              }
LABEL_130:
              if ( !(_BYTE)v6 )
                goto LABEL_19;
              LODWORD(v14) = *(_DWORD *)(a1 + 8);
              v23 = v14;
              if ( (unsigned int)(v14 - 22) <= 9 )
                goto LABEL_122;
              v24 = (_DWORD)v14 == 36;
LABEL_63:
              if ( !v24 )
                goto LABEL_19;
              v23 = v14;
              goto LABEL_122;
            }
LABEL_146:
            LOBYTE(v66) = v21;
            v43 = j__qalloc_or_throw(64, 2, v13, v14);
            v65 = *(_QWORD *)(a1 + 32);
            v46 = j__qalloc_or_throw(64, 2, v44, v45);
            v47 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)v46 = -1;
            *(_DWORD *)(v46 + 8) = 0;
            *(_QWORD *)(v46 + 12) = -1;
            *(_QWORD *)(v46 + 48) = 0;
            *(_DWORD *)(v46 + 56) = 0;
            sub_25AFF0(v46, v47);
            *(_DWORD *)(v43 + 8) = sub_244FD0(*(_DWORD *)(a1 + 8));
            v48 = _mm_loadh_ps((const double *)&v65);
            *(_QWORD *)v43 = -1;
            v9 = 1;
            *(__m128 *)(v43 + 24) = v48;
            *(_QWORD *)(v43 + 12) = -1;
            *(_QWORD *)(v43 + 40) = 0;
            *(_QWORD *)(v43 + 48) = 0;
            *(_DWORD *)(v43 + 56) = 0;
            *(_QWORD *)(a1 + 32) = v43;
            sub_2441C0(v43, *(_QWORD *)(a2 + 112), 0);
            sub_281F10(
              *(_QWORD *)(a1 + 32),
              a2,
              (unsigned __int8)v6,
              a1,
              v49,
              v50,
              v65,
              (__int64)v66,
              (_DWORD)v67,
              (_DWORD)v68,
              v69,
              v70,
              v71,
              v72,
              v73,
              DWORD2(v73),
              v74,
              v75,
              v77);
            *(_DWORD *)(a1 + 8) = 2;
            v51 = (char)v66;
            goto LABEL_147;
          }
LABEL_27:
          if ( (_BYTE)v6 )
            goto LABEL_19;
          goto LABEL_28;
        }
        if ( (unsigned int)v14 <= 5 )
        {
          if ( !v21 )
            goto LABEL_59;
          goto LABEL_146;
        }
        if ( v21 )
        {
          v39 = *(_QWORD *)(a1 + 32);
          v66 = &v73;
          goto LABEL_129;
        }
        if ( !(_BYTE)v6 )
          goto LABEL_19;
      }
      else
      {
        if ( ((1LL << v14) & 0xAAC00000) != 0 )
        {
          if ( !v21 )
            v9 = sub_2817B0(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24));
          goto LABEL_130;
        }
        if ( (_DWORD)v14 != 36 )
        {
          if ( (_DWORD)v14 != 35 )
          {
LABEL_58:
            if ( !v21 )
              goto LABEL_59;
LABEL_47:
            v9 |= sub_281DE0(a1, a2, *(_QWORD *)(a1 + 24));
            goto LABEL_59;
          }
          if ( v21 )
          {
            *(_QWORD *)&v73 = 0;
            *(_QWORD *)&v73 = get_tinfo_property();
            if ( (get_tinfo_property() & 0xF) == 0xB )
              v39 = *(_QWORD *)(a1 + 24);
            else
              v39 = *(_QWORD *)(a1 + 32);
            v66 = &v73;
            clear_tinfo_t();
LABEL_129:
            *(_QWORD *)&v73 = 0;
            copy_tinfo_t();
            v40 = sub_246B40(v39, a2, v66);
            clear_tinfo_t();
            if ( v40 )
              goto LABEL_60;
            goto LABEL_130;
          }
          if ( !(_BYTE)v6 )
            goto LABEL_19;
          v23 = 35;
LABEL_196:
          LOBYTE(v67) = v6;
          goto LABEL_197;
        }
        if ( v21 )
        {
          if ( (_BYTE)v6 )
          {
            v23 = 36;
            goto LABEL_122;
          }
          goto LABEL_104;
        }
        v61 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)&v73 = 0;
        v66 = &v73;
        copy_tinfo_t();
        LODWORD(v61) = sub_246B40(v61, a2, &v73);
        clear_tinfo_t();
        v9 |= v61;
        if ( !(_BYTE)v6 )
          goto LABEL_19;
        LODWORD(v14) = *(_DWORD *)(a1 + 8);
      }
      v23 = v14;
      if ( (unsigned int)(v14 - 22) <= 9 )
        goto LABEL_122;
      goto LABEL_196;
    }
    goto LABEL_18;
  }
  if ( !(_BYTE)v9 )
  {
    if ( (unsigned int)v5 > 0x45 )
      goto LABEL_18;
    v12 = 0;
    v10 = 0;
    goto LABEL_38;
  }
  v12 = *(_QWORD *)(a1 + 32) + 48LL;
  if ( (_DWORD)v5 != 1 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v9 = 0;
      v10 = 0;
      v66 = &v73;
      goto LABEL_110;
    }
    v5 = *(int *)(a1 + 8);
    if ( (unsigned int)v5 <= 0x45 )
    {
      v9 = 0;
      v10 = 0;
      goto LABEL_38;
    }
LABEL_51:
    v9 = 0;
    goto LABEL_52;
  }
  if ( (unk_4E033B & 2) == 0 || (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_51;
  v9 = 0;
  v10 = 0;
LABEL_40:
  v19 = sub_281D10(a2, a1);
  if ( (_BYTE)v19 )
  {
    v20 = *(_DWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( v12 )
    {
      v12 = *(_QWORD *)(a1 + 32) + 48LL;
      if ( v20 != 51 )
        goto LABEL_43;
      goto LABEL_171;
    }
    if ( v20 == 51 )
    {
LABEL_171:
      v9 = v19;
      goto LABEL_85;
    }
    LOBYTE(v65) = v19;
    v9 = (unsigned __int8)v19;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      goto LABEL_10;
LABEL_18:
    if ( !(_BYTE)v6 )
      goto LABEL_19;
    goto LABEL_65;
  }
LABEL_84:
  if ( *(_DWORD *)(a1 + 8) != 51 )
    goto LABEL_97;
LABEL_85:
  tinfo_property = get_tinfo_property();
  v28 = *(_DWORD *)(a1 + 40);
  v11 = (tinfo_property & 0xF) == 9;
  v29 = *(_QWORD *)(a1 + 24);
  LOBYTE(v67) = v11;
  LODWORD(v66) = v11;
  if ( !(unsigned __int8)sub_241090((int)v29 + 48, v28, v11, v30, v31, v32) )
  {
    if ( v65 && *(int *)(v65 + 8) <= 69 && (get_tinfo_property() & 0x2F) == 0xD )
    {
      tinfo_size = get_tinfo_size();
      v35 = *(int *)(a1 + 40);
      if ( v35 == tinfo_size )
      {
        v53 = *(_QWORD *)(a2 + 112);
        v66 = &v73;
        sub_32C540(&v73, v53, v65 + 48);
        v54 = sub_246B40(*(_QWORD *)(a1 + 24), a2, &v73);
        if ( (_BYTE)v54 )
        {
          v10 = *(_QWORD *)(a1 + 24) + 48LL;
          v9 = v54;
        }
        clear_tinfo_t();
        goto LABEL_91;
      }
    }
    else
    {
      LODWORD(v35) = *(_DWORD *)(a1 + 40);
    }
    v36 = sub_2411A0(*(__int64 **)(a1 + 24), *(_QWORD *)(a2 + 112), v35, (int)v66, v33, v34);
    if ( (_BYTE)v36 )
    {
      v10 = *(_QWORD *)(a1 + 24) + 48LL;
      v9 = v36;
    }
  }
LABEL_91:
  v71 = 0;
  v71 = get_tinfo_property();
  if ( !(_BYTE)v71 )
  {
    if ( !under_debugger )
      sub_383060(50595);
    goto LABEL_239;
  }
  if ( (_BYTE)v67 != ((get_tinfo_property() & 0xF) == 9) )
  {
    sub_32C540(&v72, *(_QWORD *)(a2 + 112), a1 + 48);
    v66 = &v73;
    sub_26DF30(&v73);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( !(unsigned __int8)compare_tinfo() && !(unsigned __int8)sub_246B40(*(_QWORD *)(a1 + 24), a2, &v72) )
    {
      if ( !under_debugger )
        sub_383060(50596);
      goto LABEL_239;
    }
    v9 = 1;
    clear_tinfo_t();
  }
  clear_tinfo_t();
LABEL_97:
  if ( !v10 )
  {
LABEL_98:
    if ( !v12 )
    {
      if ( !(_BYTE)v6 )
        goto LABEL_19;
LABEL_65:
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 22) > 9 )
        goto LABEL_19;
      goto LABEL_66;
    }
    goto LABEL_52;
  }
LABEL_8:
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
    goto LABEL_98;
  if ( v12 )
    goto LABEL_44;
LABEL_10:
  v14 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v14 > 0x24 )
  {
    switch ( (int)v14 )
    {
      case '0':
        v21 = 0;
        goto LABEL_151;
      case '1':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case '@':
      case 'A':
      case 'C':
        goto LABEL_27;
      case '2':
      case '=':
      case '>':
      case '?':
      case 'B':
        goto LABEL_144;
      case ':':
        goto LABEL_104;
      case ';':
        goto LABEL_161;
      case '<':
        goto LABEL_103;
      default:
        goto LABEL_15;
    }
  }
  if ( (unsigned int)v14 > 0x15 )
  {
    if ( ((1LL << v14) & 0xAAC00000) != 0 )
    {
      v9 = sub_2817B0(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
      if ( !(_BYTE)v6 )
        goto LABEL_19;
LABEL_149:
      LODWORD(v14) = *(_DWORD *)(a1 + 8);
LABEL_121:
      v23 = v14;
      if ( (unsigned int)(v14 - 22) <= 9 )
      {
LABEL_122:
        v25 = *(_QWORD *)(a1 + 24);
        goto LABEL_68;
      }
      LOBYTE(v67) = 0;
      goto LABEL_197;
    }
    if ( (_DWORD)v14 != 36 )
    {
      if ( (_DWORD)v14 != 35 )
      {
LABEL_15:
        v9 |= sub_281DE0(a1, a2, *(_QWORD *)(a1 + 24));
        goto LABEL_148;
      }
      if ( !(_BYTE)v6 )
        goto LABEL_19;
      LOBYTE(v67) = 0;
      v23 = 35;
LABEL_197:
      v24 = (unsigned __int8)v67 & (v23 == 36);
      goto LABEL_63;
    }
    if ( !(_BYTE)v6 )
      goto LABEL_104;
LABEL_28:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v15 = v14;
LABEL_30:
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v15 + 11) & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_31;
  }
  if ( (_DWORD)v14 != 2 )
  {
    if ( (unsigned int)v14 <= 2 )
    {
      if ( (_DWORD)v14 != 1 )
        goto LABEL_15;
    }
    else
    {
      if ( (unsigned int)v14 <= 7 )
      {
        v21 = 0;
        if ( (unsigned int)v14 > 5 )
        {
          if ( !(_BYTE)v6 )
            goto LABEL_19;
          goto LABEL_121;
        }
        goto LABEL_146;
      }
      if ( (unsigned int)(v14 - 16) > 2 )
      {
LABEL_144:
        v21 = 0;
        goto LABEL_145;
      }
    }
    goto LABEL_27;
  }
  LOBYTE(v67) = 0;
  v21 = 1;
LABEL_134:
  LOBYTE(v65) = v21;
  v41 = get_tinfo_property();
  v42 = v65;
  if ( (v41 & 0xF) == 0xB )
  {
    v55 = get_tinfo_property();
    v42 = v65;
    if ( (v55 & 0x2F) == 0xD )
    {
      v56 = get_tinfo_size();
      v57 = get_tinfo_size();
      v42 = v65;
      if ( v56 == v57 || !(_BYTE)v6 )
      {
        v58 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v58 + 8) == 51 && *(_DWORD *)(*(_QWORD *)(v58 + 24) + 8LL) == 48 )
        {
          v59 = *(_QWORD *)(a1 + 32);
          v60 = *(_QWORD *)(a2 + 112);
          v66 = &v73;
          sub_32C540(&v73, v60, v59 + 48);
          copy_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          v42 = v65;
        }
        goto LABEL_135;
      }
      if ( !under_debugger )
        sub_383060(50969);
LABEL_239:
      BUG();
    }
  }
LABEL_135:
  if ( !(_BYTE)v6 )
    goto LABEL_19;
  v23 = *(_DWORD *)(a1 + 8);
  LODWORD(v14) = v23;
  if ( v23 - 22 > 9 )
    goto LABEL_197;
  if ( (_BYTE)v67 || v42 )
    goto LABEL_122;
LABEL_66:
  if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0x2F) != 0xD )
  {
LABEL_19:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v15 = *(_DWORD *)(a1 + 8);
    if ( v15 > 0x45 )
      goto LABEL_21;
    goto LABEL_30;
  }
  v23 = *(_DWORD *)(a1 + 8);
  v25 = *(_QWORD *)(a1 + 24);
LABEL_68:
  if ( sub_245650(a2, v25, *(_QWORD *)(a1 + 32), v23) )
    goto LABEL_19;
  v26 = sub_2491D0(a1, a2);
  if ( !(_BYTE)v26 )
    goto LABEL_19;
  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_32;
  v15 = *(_DWORD *)(a1 + 8);
  if ( v15 > 0x45 || (*((_BYTE *)&off_4E0320 + 16 * (int)v15 + 11) & 0x10) == 0 )
    goto LABEL_32;
  v9 = v26;
LABEL_31:
  v17 = sub_255000(v15);
  if ( (unsigned __int8)sub_283210(a1, a2, v17, (unsigned __int8)v6) )
    goto LABEL_32;
LABEL_21:
  if ( (_BYTE)v9 )
  {
LABEL_32:
    v9 = 1;
    sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
  }
  return v9;
}
