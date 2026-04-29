__int64 __fastcall sub_27AB90(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // r15
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edi
  unsigned int v18; // eax
  __int64 v19; // rbx
  char tinfo_property; // al
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rdi
  char v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // esi
  char v31; // al
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  char v35; // al
  int v36; // esi
  __int64 v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r14
  char v48; // r14
  __int64 v49; // rdi
  char v50; // al
  char v51; // r9
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rsi
  __m128 v55; // xmm0
  int v56; // r8d
  int v57; // r9d
  char v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 tinfo_size; // rax
  __int64 v62; // rsi
  unsigned int v63; // eax
  char v64; // al
  int v65; // r15d
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // r14
  __int64 v71; // rax
  char v72; // r9
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v76; // [rsp+8h] [rbp-A0h]
  char *v77; // [rsp+10h] [rbp-98h]
  __int64 *v78; // [rsp+18h] [rbp-90h]
  int v79; // [rsp+20h] [rbp-88h]
  __int64 v80; // [rsp+28h] [rbp-80h] BYREF
  __int64 v81; // [rsp+30h] [rbp-78h] BYREF
  __int64 v82; // [rsp+38h] [rbp-70h] BYREF
  __int128 v83; // [rsp+40h] [rbp-68h] BYREF
  __int64 v84; // [rsp+50h] [rbp-58h] BYREF
  int v85; // [rsp+58h] [rbp-50h]
  __int16 v86; // [rsp+5Ch] [rbp-4Ch]
  __int64 v87; // [rsp+60h] [rbp-48h]
  unsigned __int64 v88; // [rsp+68h] [rbp-40h]

  v75 = a4;
  v88 = __readfsqword(0x28u);
  v5 = *(int *)(a1 + 8);
  if ( (int)v5 > 69 )
  {
    if ( !under_debugger )
      sub_37B760(51787);
    goto LABEL_239;
  }
  v6 = a3;
  LOBYTE(v4) = (_DWORD)v5 == 58;
  LOBYTE(a3) = (unsigned int)(v5 - 1) <= 0x2C;
  v9 = a3 | v4;
  if ( (unsigned int)(v5 - 1) <= 0x3B || (_DWORD)v5 == 67 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = (_QWORD *)(v10 + 48);
    if ( !(_BYTE)v9 )
    {
      v12 = *(_QWORD *)(v10 + 48);
      if ( (_DWORD)v5 == 57 )
      {
        if ( (unsigned __int8)compare_tinfo(v12, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), 24) )
        {
          v5 = *(int *)(a1 + 8);
          if ( (unsigned int)v5 > 0x45 )
            goto LABEL_7;
LABEL_25:
          v14 = nullptr;
          goto LABEL_38;
        }
        v34 = *(_QWORD *)(a1 + 32);
        v80 = 0;
        copy_tinfo_t(&v80, v34 + 24);
        if ( (get_tinfo_property(v80, 2) & 0xF) != 0xA )
        {
          v81 = 0;
          v77 = (char *)&v83 + 8;
          v82 = 0;
          v83 = 0;
          copy_tinfo_t((char *)&v83 + 8, &v82);
          v84 = 0;
          v78 = &v84;
          copy_tinfo_t(&v84, &v81);
          v85 = 0;
          v86 = 0;
          clear_tinfo_t(&v82);
          clear_tinfo_t(&v81);
          v76 = &v83;
          copy_tinfo_t(&v83, &v80);
          create_tinfo(&v80, 10, 10, &v83);
          clear_tinfo_t(&v84);
          clear_tinfo_t((char *)&v83 + 8);
          clear_tinfo_t(&v83);
        }
        v9 = sub_23F7C0(*(_QWORD *)(a1 + 24), a2, &v80);
        v14 = nullptr;
        v11 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
        clear_tinfo_t(&v80);
        v5 = *(int *)(a1 + 8);
        if ( (unsigned int)v5 > 0x45 )
          goto LABEL_8;
      }
      else
      {
        v13 = (get_tinfo_property(v12, 2) & 0xF) == 12;
        v5 = *(int *)(a1 + 8);
        if ( !v13 )
        {
          if ( (unsigned int)v5 > 0x45 )
          {
LABEL_7:
            v14 = nullptr;
            goto LABEL_8;
          }
          goto LABEL_25;
        }
        if ( (unsigned int)v5 <= 0x3C )
        {
          v46 = 0x19EE800000000000LL;
          v14 = nullptr;
          LOBYTE(v77) = 0;
          if ( !_bittest64(&v46, v5) )
            goto LABEL_38;
LABEL_36:
          v22 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v83 = 39;
          v76 = &v83;
          v9 = sub_23F7C0(v22, a2, &v83);
          clear_tinfo_t(&v83);
          v11 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
          if ( !(_BYTE)v77 )
          {
            v5 = *(int *)(a1 + 8);
            if ( (unsigned int)v5 > 0x45 )
              goto LABEL_8;
            goto LABEL_38;
          }
          goto LABEL_110;
        }
        v14 = nullptr;
        if ( (unsigned int)v5 > 0x45 )
          goto LABEL_8;
      }
LABEL_38:
      if ( (*((_BYTE *)&off_4ACB20 + 16 * v5 + 11) & 2) == 0 )
        goto LABEL_84;
LABEL_39:
      if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
        goto LABEL_84;
      goto LABEL_40;
    }
    v19 = *(_QWORD *)(a1 + 32);
    v14 = (_QWORD *)(v19 + 48);
    if ( (_DWORD)v5 == 1 )
    {
      v9 = 0;
      if ( (unk_4ACB3B & 2) == 0 )
        goto LABEL_8;
      goto LABEL_39;
    }
    tinfo_property = get_tinfo_property(*(_QWORD *)(v10 + 48), 2);
    v21 = *(_QWORD *)(v19 + 48);
    if ( (tinfo_property & 0xF) == 0xC )
    {
      LOBYTE(v77) = (get_tinfo_property(v21, 2) & 0xF) == 12;
      goto LABEL_36;
    }
    if ( (get_tinfo_property(v21, 2) & 0xF) != 0xC )
    {
      v5 = *(int *)(a1 + 8);
      v9 = 0;
      if ( (unsigned int)v5 > 0x45 )
        goto LABEL_8;
      goto LABEL_38;
    }
    v9 = 0;
    v76 = &v83;
LABEL_110:
    v45 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v83 = 39;
    v9 |= sub_23F7C0(v45, a2, v76);
    clear_tinfo_t(v76);
    v14 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL);
    v5 = *(int *)(a1 + 8);
    if ( (unsigned int)v5 <= 0x45 )
      goto LABEL_38;
    if ( v11 )
    {
      LOBYTE(v23) = v9;
LABEL_43:
      v26 = *v11;
      LOBYTE(v75) = v23;
      v9 = (unsigned __int8)v23;
      if ( (unsigned __int8)((get_tinfo_property(v26, 2) & 0xF) - 10) <= 2u )
      {
LABEL_44:
        if ( (unsigned __int8)((get_tinfo_property(*v14, 2) & 0xF) - 10) > 2u )
          goto LABEL_10;
        v15 = *(_DWORD *)(a1 + 8);
        v27 = 1;
        if ( v15 > 0x24 )
        {
          v28 = v15 - 48;
          if ( (unsigned int)v28 > 0x13 )
            goto LABEL_47;
          goto LABEL_107;
        }
        goto LABEL_54;
      }
    }
LABEL_52:
    if ( (unsigned __int8)((get_tinfo_property(*v14, 2) & 0xF) - 10) <= 2u )
    {
      v15 = *(_DWORD *)(a1 + 8);
      v27 = 0;
      if ( v15 > 0x24 )
      {
        v28 = v15 - 48;
LABEL_107:
        switch ( v28 )
        {
          case 0LL:
            if ( !v27 )
              goto LABEL_27;
LABEL_151:
            v59 = *(_QWORD *)(a1 + 48);
            LOBYTE(v75) = v27;
            if ( (get_tinfo_property(v59, 2) & 0xF) != 9 )
            {
              if ( !(_BYTE)v6 )
                goto LABEL_19;
              v15 = *(_DWORD *)(a1 + 8);
              v30 = v15;
              if ( v15 - 22 > 9 )
              {
                v31 = v75 & (v15 == 36);
                goto LABEL_63;
              }
              goto LABEL_122;
            }
            v32 = sub_277E50(a2, *(_QWORD *)(a1 + 24), 0);
            v72 = v75;
            *(_QWORD *)(a1 + 24) = v32;
            if ( !(_BYTE)v6 )
              goto LABEL_172;
            v15 = *(_DWORD *)(a1 + 8);
            v30 = v15;
            if ( v15 - 22 > 9 )
            {
              v9 = v6;
              v31 = v72 & (v15 == 36);
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
            if ( v27 )
            {
              if ( (unsigned __int8)sub_23F7C0(*(_QWORD *)(a1 + 32), a2, (_QWORD *)(a2 + 288)) )
                goto LABEL_60;
              if ( !under_debugger )
                sub_37B760(51414);
            }
            else if ( !under_debugger )
            {
              sub_37B760(50598);
            }
            goto LABEL_239;
          case 11LL:
LABEL_161:
            if ( !under_debugger )
              sub_37B760(50599);
            goto LABEL_239;
          case 12LL:
            if ( !v27 )
            {
              if ( !under_debugger )
                sub_37B760(50597);
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
        v16 = v15;
        if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
          goto LABEL_21;
        goto LABEL_30;
      }
LABEL_54:
      if ( v15 <= 0x15 )
      {
        if ( v15 == 2 )
        {
          LOBYTE(v77) = 1;
          goto LABEL_134;
        }
        if ( v15 <= 2 )
        {
          if ( v15 == 1 )
            goto LABEL_27;
          goto LABEL_58;
        }
        if ( v15 > 7 )
        {
          if ( v15 - 16 > 2 )
          {
LABEL_159:
            if ( !v27 )
              goto LABEL_59;
LABEL_145:
            if ( v15 - 2 > 0xD )
            {
              v73 = *(_QWORD *)(a1 + 24);
              LOBYTE(v75) = v27;
              v74 = sub_27AA60(a1, a2, v73);
              v58 = v75;
              v9 |= v74;
LABEL_147:
              if ( !v58 )
              {
LABEL_148:
                if ( !(_BYTE)v6 )
                  goto LABEL_19;
                goto LABEL_149;
              }
LABEL_59:
              if ( (unsigned __int8)sub_27AA60(a1, a2, *(_QWORD *)(a1 + 32)) )
              {
LABEL_60:
                if ( !(_BYTE)v6 )
                {
LABEL_172:
                  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
                    goto LABEL_32;
                  v16 = *(_DWORD *)(a1 + 8);
                  if ( v16 > 0x45 || (*((_BYTE *)&off_4ACB20 + 16 * (int)v16 + 11) & 0x10) == 0 )
                    goto LABEL_32;
                  v9 = 1;
                  goto LABEL_31;
                }
                v15 = *(_DWORD *)(a1 + 8);
                v30 = v15;
                if ( v15 - 22 <= 9 )
                {
                  v32 = *(_QWORD *)(a1 + 24);
                  v9 = v6;
                  goto LABEL_68;
                }
                v9 = v6;
                v31 = v15 == 36;
                goto LABEL_63;
              }
LABEL_130:
              if ( !(_BYTE)v6 )
                goto LABEL_19;
              v15 = *(_DWORD *)(a1 + 8);
              v30 = v15;
              if ( v15 - 22 <= 9 )
                goto LABEL_122;
              v31 = v15 == 36;
LABEL_63:
              if ( !v31 )
                goto LABEL_19;
              v30 = v15;
              goto LABEL_122;
            }
LABEL_146:
            LOBYTE(v76) = v27;
            v52 = j__qalloc_or_throw(64);
            v75 = *(_QWORD *)(a1 + 32);
            v53 = j__qalloc_or_throw(64);
            v54 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)v53 = -1;
            *(_DWORD *)(v53 + 8) = 0;
            *(_QWORD *)(v53 + 12) = -1;
            *(_QWORD *)(v53 + 48) = 0;
            *(_DWORD *)(v53 + 56) = 0;
            sub_253C70(v53, v54);
            *(_DWORD *)(v52 + 8) = sub_23DC50(*(_DWORD *)(a1 + 8));
            v55 = _mm_loadh_ps((const double *)&v75);
            *(_QWORD *)v52 = -1;
            v9 = 1;
            *(__m128 *)(v52 + 24) = v55;
            *(_QWORD *)(v52 + 12) = -1;
            *(_QWORD *)(v52 + 40) = 0;
            *(_QWORD *)(v52 + 48) = 0;
            *(_DWORD *)(v52 + 56) = 0;
            *(_QWORD *)(a1 + 32) = v52;
            sub_23CE40(v52, *(_QWORD *)(a2 + 112), 0);
            sub_27AB90(
              *(_QWORD *)(a1 + 32),
              a2,
              (unsigned __int8)v6,
              a1,
              v56,
              v57,
              v75,
              (__int64)v76,
              (_DWORD)v77,
              (_DWORD)v78,
              v79,
              v80,
              v81,
              v82,
              v83,
              DWORD2(v83),
              v84,
              v85,
              v87);
            *(_DWORD *)(a1 + 8) = 2;
            v58 = (char)v76;
            goto LABEL_147;
          }
LABEL_27:
          if ( (_BYTE)v6 )
            goto LABEL_19;
          goto LABEL_28;
        }
        if ( v15 <= 5 )
        {
          if ( !v27 )
            goto LABEL_59;
          goto LABEL_146;
        }
        if ( v27 )
        {
          v47 = *(_QWORD *)(a1 + 32);
          v76 = &v83;
          goto LABEL_129;
        }
        if ( !(_BYTE)v6 )
          goto LABEL_19;
      }
      else
      {
        if ( ((1LL << v15) & 0xAAC00000) != 0 )
        {
          if ( !v27 )
            v9 = sub_27A430(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24));
          goto LABEL_130;
        }
        if ( v15 != 36 )
        {
          if ( v15 != 35 )
          {
LABEL_58:
            if ( !v27 )
              goto LABEL_59;
LABEL_47:
            v9 |= sub_27AA60(a1, a2, *(_QWORD *)(a1 + 24));
            goto LABEL_59;
          }
          if ( v27 )
          {
            v71 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)&v83 = 0;
            *(_QWORD *)&v83 = get_tinfo_property(*(_QWORD *)(v71 + 48), 9);
            if ( (get_tinfo_property(v83, 2) & 0xF) == 0xB )
              v47 = *(_QWORD *)(a1 + 24);
            else
              v47 = *(_QWORD *)(a1 + 32);
            v76 = &v83;
            clear_tinfo_t(&v83);
LABEL_129:
            *(_QWORD *)&v83 = 0;
            copy_tinfo_t(v76, a2 + 288);
            v48 = sub_23F7C0(v47, a2, v76);
            clear_tinfo_t(v76);
            if ( v48 )
              goto LABEL_60;
            goto LABEL_130;
          }
          if ( !(_BYTE)v6 )
            goto LABEL_19;
          v30 = 35;
LABEL_196:
          LOBYTE(v77) = v6;
          goto LABEL_197;
        }
        if ( v27 )
        {
          if ( (_BYTE)v6 )
          {
            v30 = 36;
            goto LABEL_122;
          }
          goto LABEL_104;
        }
        v70 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)&v83 = 0;
        v76 = &v83;
        copy_tinfo_t(&v83, a2 + 288);
        LODWORD(v70) = sub_23F7C0(v70, a2, &v83);
        clear_tinfo_t(&v83);
        v9 |= v70;
        if ( !(_BYTE)v6 )
          goto LABEL_19;
        v15 = *(_DWORD *)(a1 + 8);
      }
      v30 = v15;
      if ( v15 - 22 <= 9 )
        goto LABEL_122;
      goto LABEL_196;
    }
    goto LABEL_18;
  }
  if ( !(_BYTE)v9 )
  {
    if ( (unsigned int)v5 > 0x45 )
      goto LABEL_18;
    v14 = nullptr;
    v11 = nullptr;
    goto LABEL_38;
  }
  v29 = *(_QWORD *)(a1 + 32);
  v14 = (_QWORD *)(v29 + 48);
  if ( (_DWORD)v5 != 1 )
  {
    if ( (get_tinfo_property(*(_QWORD *)(v29 + 48), 2) & 0xF) == 0xC )
    {
      v9 = 0;
      v11 = nullptr;
      v76 = &v83;
      goto LABEL_110;
    }
    v5 = *(int *)(a1 + 8);
    if ( (unsigned int)v5 <= 0x45 )
    {
      v9 = 0;
      v11 = nullptr;
      goto LABEL_38;
    }
LABEL_51:
    v9 = 0;
    v11 = nullptr;
    goto LABEL_52;
  }
  if ( (unk_4ACB3B & 2) == 0 || (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_51;
  v9 = 0;
  v11 = nullptr;
LABEL_40:
  v23 = sub_27A990(a2, a1);
  if ( (_BYTE)v23 )
  {
    v24 = *(_QWORD *)(a1 + 24);
    v25 = *(_DWORD *)(a1 + 8);
    v11 = (_QWORD *)(v24 + 48);
    if ( v14 )
    {
      v14 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL);
      if ( v25 != 51 )
        goto LABEL_43;
      goto LABEL_171;
    }
    if ( v25 == 51 )
    {
LABEL_171:
      v9 = v23;
      goto LABEL_85;
    }
    v60 = *(_QWORD *)(v24 + 48);
    LOBYTE(v75) = v23;
    v9 = (unsigned __int8)v23;
    if ( (unsigned __int8)((get_tinfo_property(v60, 2) & 0xF) - 10) <= 2u )
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
  v35 = get_tinfo_property(*(_QWORD *)(a1 + 48), 2);
  v36 = *(_DWORD *)(a1 + 40);
  v13 = (v35 & 0xF) == 9;
  v37 = *(_QWORD *)(a1 + 24);
  LOBYTE(v77) = v13;
  LODWORD(v76) = v13;
  if ( !(unsigned __int8)sub_239D10((int)v37 + 48, v36, v13, v38, v39, v40) )
  {
    if ( v75 && *(int *)(v75 + 8) <= 69 && (get_tinfo_property(*(_QWORD *)(v75 + 48), 2) & 0x2F) == 0xD )
    {
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v75 + 48), 0);
      v43 = *(int *)(a1 + 40);
      if ( v43 == tinfo_size )
      {
        v62 = *(_QWORD *)(a2 + 112);
        v76 = &v83;
        sub_325010(&v83, v62, v75 + 48);
        v63 = sub_23F7C0(*(_QWORD *)(a1 + 24), a2, &v83);
        if ( (_BYTE)v63 )
        {
          v11 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
          v9 = v63;
        }
        clear_tinfo_t(v76);
        goto LABEL_91;
      }
    }
    else
    {
      LODWORD(v43) = *(_DWORD *)(a1 + 40);
    }
    v44 = sub_239E20(*(__int64 **)(a1 + 24), *(_QWORD *)(a2 + 112), v43, (int)v76, v41, v42);
    if ( (_BYTE)v44 )
    {
      v11 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
      v9 = v44;
    }
  }
LABEL_91:
  v81 = 0;
  v81 = get_tinfo_property(*v11, 13);
  if ( !(_BYTE)v81 )
  {
    if ( !under_debugger )
      sub_37B760(50595);
    goto LABEL_239;
  }
  if ( (_BYTE)v77 != ((get_tinfo_property(v81, 2) & 0xF) == 9) )
  {
    sub_325010(&v82, *(_QWORD *)(a2 + 112), a1 + 48);
    v76 = &v83;
    sub_266BB0(&v83, (__int64)&v82);
    copy_tinfo_t(&v82, &v83);
    clear_tinfo_t(&v83);
    if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), v82, 2)
      && !(unsigned __int8)sub_23F7C0(*(_QWORD *)(a1 + 24), a2, &v82) )
    {
      if ( !under_debugger )
        sub_37B760(50596);
      goto LABEL_239;
    }
    v9 = 1;
    clear_tinfo_t(&v82);
  }
  clear_tinfo_t(&v81);
LABEL_97:
  if ( !v11 )
  {
LABEL_98:
    if ( !v14 )
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
  if ( (unsigned __int8)((get_tinfo_property(*v11, 2) & 0xF) - 10) > 2u )
    goto LABEL_98;
  if ( v14 )
    goto LABEL_44;
LABEL_10:
  v15 = *(_DWORD *)(a1 + 8);
  if ( v15 > 0x24 )
  {
    switch ( v15 )
    {
      case '0':
        v27 = 0;
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
  if ( v15 > 0x15 )
  {
    if ( ((1LL << v15) & 0xAAC00000) != 0 )
    {
      v9 = sub_27A430(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
      if ( !(_BYTE)v6 )
        goto LABEL_19;
LABEL_149:
      v15 = *(_DWORD *)(a1 + 8);
LABEL_121:
      v30 = v15;
      if ( v15 - 22 <= 9 )
      {
LABEL_122:
        v32 = *(_QWORD *)(a1 + 24);
        goto LABEL_68;
      }
      LOBYTE(v77) = 0;
      goto LABEL_197;
    }
    if ( v15 != 36 )
    {
      if ( v15 != 35 )
      {
LABEL_15:
        v9 |= sub_27AA60(a1, a2, *(_QWORD *)(a1 + 24));
        goto LABEL_148;
      }
      if ( !(_BYTE)v6 )
        goto LABEL_19;
      LOBYTE(v77) = 0;
      v30 = 35;
LABEL_197:
      v31 = (unsigned __int8)v77 & (v30 == 36);
      goto LABEL_63;
    }
    if ( !(_BYTE)v6 )
      goto LABEL_104;
LABEL_28:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v16 = v15;
LABEL_30:
    if ( (*((_BYTE *)&off_4ACB20 + 16 * (int)v16 + 11) & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_31;
  }
  if ( v15 != 2 )
  {
    if ( v15 <= 2 )
    {
      if ( v15 != 1 )
        goto LABEL_15;
    }
    else
    {
      if ( v15 <= 7 )
      {
        v27 = 0;
        if ( v15 > 5 )
        {
          if ( !(_BYTE)v6 )
            goto LABEL_19;
          goto LABEL_121;
        }
        goto LABEL_146;
      }
      if ( v15 - 16 > 2 )
      {
LABEL_144:
        v27 = 0;
        goto LABEL_145;
      }
    }
    goto LABEL_27;
  }
  LOBYTE(v77) = 0;
  v27 = 1;
LABEL_134:
  v49 = *v11;
  LOBYTE(v75) = v27;
  v50 = get_tinfo_property(v49, 2);
  v51 = v75;
  if ( (v50 & 0xF) == 0xB )
  {
    v64 = get_tinfo_property(*v14, 2);
    v51 = v75;
    if ( (v64 & 0x2F) == 0xD )
    {
      v65 = get_tinfo_size(0, *v11, 0);
      v66 = get_tinfo_size(0, *v14, 0);
      v51 = v75;
      if ( v65 == v66 || !(_BYTE)v6 )
      {
        v67 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v67 + 8) == 51 && *(_DWORD *)(*(_QWORD *)(v67 + 24) + 8LL) == 48 )
        {
          v68 = *(_QWORD *)(a1 + 32);
          v69 = *(_QWORD *)(a2 + 112);
          v76 = &v83;
          sub_325010(&v83, v69, v68 + 48);
          copy_tinfo_t(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 48LL, &v83);
          clear_tinfo_t(&v83);
          copy_tinfo_t(*(_QWORD *)(a1 + 24) + 48LL, *(_QWORD *)(a1 + 32) + 48LL);
          v51 = v75;
        }
        goto LABEL_135;
      }
      if ( !under_debugger )
        sub_37B760(50969);
LABEL_239:
      BUG();
    }
  }
LABEL_135:
  if ( !(_BYTE)v6 )
    goto LABEL_19;
  v30 = *(_DWORD *)(a1 + 8);
  v15 = v30;
  if ( v30 - 22 > 9 )
    goto LABEL_197;
  if ( (_BYTE)v77 || v51 )
    goto LABEL_122;
LABEL_66:
  if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 2) & 0x2F) != 0xD
    && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 2) & 0x2F) != 0xD )
  {
LABEL_19:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 > 0x45 )
      goto LABEL_21;
    goto LABEL_30;
  }
  v30 = *(_DWORD *)(a1 + 8);
  v32 = *(_QWORD *)(a1 + 24);
LABEL_68:
  if ( sub_23E2D0(a2, v32, *(_QWORD *)(a1 + 32), v30) )
    goto LABEL_19;
  v33 = sub_241E50(a1, a2);
  if ( !(_BYTE)v33 )
    goto LABEL_19;
  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_32;
  v16 = *(_DWORD *)(a1 + 8);
  if ( v16 > 0x45 || (*((_BYTE *)&off_4ACB20 + 16 * (int)v16 + 11) & 0x10) == 0 )
    goto LABEL_32;
  v9 = v33;
LABEL_31:
  v18 = sub_24DC80(v16);
  if ( (unsigned __int8)sub_27BE90(a1, a2, v18, (unsigned __int8)v6) )
    goto LABEL_32;
LABEL_21:
  if ( (_BYTE)v9 )
  {
LABEL_32:
    v9 = 1;
    sub_23CE40(a1, *(_QWORD *)(a2 + 112), 0);
  }
  return v9;
}
