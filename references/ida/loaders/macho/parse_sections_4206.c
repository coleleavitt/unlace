__int64 __fastcall sub_1EA70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // r12
  _QWORD *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 range; // rax
  __int64 v44; // rbx
  __int64 v45; // rdi
  int v46; // r9d
  __int64 v47; // rax
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rdi
  int v51; // r9d
  unsigned int *v52; // rbx
  unsigned __int64 v53; // rsi
  __int64 v54; // rax
  _QWORD *v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int16 v59; // dx
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int16 custom_fixup; // ax
  __int64 fixup_value; // rax
  char v68; // dl
  __int64 v69; // rbx
  char v70; // al
  __int64 v71; // rbx
  __int64 v72; // rax
  char v73; // dl
  __int64 v74; // rdi
  __int64 v75; // rax
  __m128i v76; // xmm2
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 *v80; // rcx
  __int64 v81; // rsi
  unsigned __int64 v82; // rax
  __m128i v83; // xmm3
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // [rsp-8h] [rbp-900h]
  char v88; // [rsp+0h] [rbp-8F8h]
  int v89; // [rsp+4h] [rbp-8F4h]
  unsigned int v91; // [rsp+10h] [rbp-8E8h]
  unsigned __int64 v92; // [rsp+10h] [rbp-8E8h]
  __int64 *v93; // [rsp+18h] [rbp-8E0h]
  unsigned __int64 v94; // [rsp+20h] [rbp-8D8h]
  char v95; // [rsp+20h] [rbp-8D8h]
  char v96; // [rsp+20h] [rbp-8D8h]
  __int64 v97; // [rsp+20h] [rbp-8D8h]
  char v98; // [rsp+20h] [rbp-8D8h]
  __int64 v99; // [rsp+20h] [rbp-8D8h]
  unsigned int v100; // [rsp+28h] [rbp-8D0h]
  char v101; // [rsp+2Ch] [rbp-8CCh]
  __int64 v102; // [rsp+30h] [rbp-8C8h]
  __m128i si128; // [rsp+40h] [rbp-8B8h] BYREF
  __int64 v104; // [rsp+50h] [rbp-8A8h]
  unsigned __int64 v105; // [rsp+58h] [rbp-8A0h]
  __int64 *v106; // [rsp+60h] [rbp-898h]
  _QWORD *v107; // [rsp+68h] [rbp-890h]
  __int64 v108; // [rsp+70h] [rbp-888h]
  unsigned int v109; // [rsp+78h] [rbp-880h]
  bool v110; // [rsp+7Fh] [rbp-879h]
  _WORD v111[2]; // [rsp+80h] [rbp-878h] BYREF
  int v112; // [rsp+84h] [rbp-874h]
  __m128i v113; // [rsp+88h] [rbp-870h]
  __int64 v114; // [rsp+98h] [rbp-860h]
  __int64 v115; // [rsp+A0h] [rbp-858h]
  _BYTE v116[1024]; // [rsp+B0h] [rbp-848h] BYREF
  _BYTE v117[1032]; // [rsp+4B0h] [rbp-448h] BYREF
  unsigned __int64 v118; // [rsp+8B8h] [rbp-40h]

  v10 = a4[1];
  v106 = (__int64 *)a5;
  v107 = (_QWORD *)a6;
  v118 = __readfsqword(0x28u);
  v11 = *(_DWORD *)(a2 + 332);
  v100 = v10;
  v110 = 0;
  v89 = v11;
  v109 = *(_DWORD *)(a5 + 8);
  if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 )
    v110 = (*(_BYTE *)(a1 + 13689) & 8) == 0;
  v12 = 0;
  if ( !(_DWORD)v10 )
    return v118 - __readfsqword(0x28u);
  v93 = a4;
  while ( 1 )
  {
    v13 = *v93;
    v14 = *(_QWORD *)(*v93 + 8LL * v12);
    v15 = (int)v14;
    if ( v89 != 16777223 )
      break;
    v16 = 0;
LABEL_10:
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v12 + 1;
    v116[0] = 0;
    v19 = *(_QWORD *)(a2 + 8);
    v20 = *(_QWORD *)(v17 + 16) & (a3 + v15);
    v21 = *(_QWORD *)(a2 + 240);
    if ( *(_QWORD *)(v19 + 16) != v21 && v21 != -1 )
    {
      if ( !*(_QWORD *)(a2 + 184) )
        goto LABEL_7;
      v92 = v16;
      range = rangeset_t_find_range(a2 + 176, v20);
      v16 = v92;
      if ( !range )
        goto LABEL_7;
    }
    v22 = HIBYTE(v14);
    v101 = HIBYTE(v14) & 1;
    v91 = (v14 >> 57) & 3;
    a6 = (v14 >> 57) & 3;
    v94 = v14 >> 60;
    v23 = v14 >> 60;
    v24 = HIDWORD(v14) & 0xFFFFFF;
    v25 = v23;
    if ( (v22 & 8) != 0 )
    {
      if ( (unsigned int)v24 >= v109 )
        goto LABEL_34;
      v105 = v22;
      v104 = v16;
      v26 = (_QWORD *)v106[3];
      si128.m128i_i8[0] = a6;
      if ( !v26
        || (v27 = v26[2]) == 0
        || (v19 = *v106,
            LODWORD(v22) = 16 * v24,
            v28 = *(unsigned int *)(*v106 + 16 * v24),
            v108 = 16 * v24,
            v28 >= v27 - 1)
        || (v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26)) == 0 )
      {
LABEL_34:
        if ( !byte_66C4A )
        {
          sub_112F0(
            (unsigned int)"%a: illegal symbol ref (this error will be reported only once)\n",
            v20,
            v19,
            v22,
            v16,
            a6);
          byte_66C4A = 1;
        }
        goto LABEL_7;
      }
      qstrncpy(v116, v29, 1024, v22, v16, a6);
      v30 = v24;
      v31 = netnode_altval(*v107, v24, 65);
      v32 = *(_QWORD *)(a2 + 8);
      a6 = si128.m128i_u8[0];
      v33 = v104;
      v34 = v105;
      v102 = v31;
      v35 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(v32 + 16) != v35 && v35 != -1 )
      {
        if ( !*(_QWORD *)(a2 + 184) )
          goto LABEL_7;
        v30 = v102;
        v36 = rangeset_t_find_range(a2 + 176, v102);
        a6 = si128.m128i_u8[0];
        v33 = v104;
        v34 = v105;
        if ( !v36 )
          goto LABEL_7;
      }
      if ( v89 == 16777223 )
      {
        if ( (unsigned __int8)v94 <= 2u || (_DWORD)v25 == 6 )
        {
          v37 = sub_195E0(v20, v91);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
            goto LABEL_84;
        }
        else
        {
          if ( (unsigned int)(v25 - 7) <= 1 )
          {
            v37 = sub_195E0(v20, v91);
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
              v37 = (int)v37;
            goto LABEL_123;
          }
          if ( (unsigned int)(v25 - 3) > 1 )
          {
            v38 = (unsigned int)v25;
            if ( (_DWORD)v25 != 5 )
              goto LABEL_31;
LABEL_89:
            if ( v18 >= v100
              || (v52 = (unsigned int *)(*v93 + 8LL * v18),
                  LODWORD(v32) = *((unsigned __int8 *)v52 + 7),
                  (unsigned __int8)v32 > 0xFu)
              || (v53 = *(_QWORD *)(a1 + 8), v20 != (*(_QWORD *)(v53 + 16) & (a3 + *v52)))
              || (_BYTE)a6 != (((unsigned __int8)v32 >> 1) & 3)
              || (v34 &= 1u, (v32 & 1) != (_BYTE)v34)
              || (LODWORD(v32) = v32 & 8, !(_DWORD)v32) )
            {
              sub_196C0((unsigned int)"Unmatched SUBTRACTOR relocation type for %a", v20, v32, v34, v33, a6, v88);
              goto LABEL_7;
            }
            v54 = v52[1] & 0xFFFFFF;
            if ( (unsigned int)v54 >= v109
              || (LODWORD(v53) = (_DWORD)v106, (v55 = (_QWORD *)v106[3]) == 0)
              || (v32 = v55[2]) == 0
              || (v53 = *(unsigned int *)(*v106 + 16 * v54), v53 >= v32 - 1)
              || (v53 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64, unsigned __int64, __int64))(*v55 + 16LL))(
                          v55,
                          v53,
                          v32,
                          v34,
                          v33)) == 0 )
            {
              sub_1A260((unsigned int)"illegal symbol ref", v53, v32, v34, v33, a6);
            }
            qstrncpy(v117, v53, 1024, v34, v33, a6);
            v56 = netnode_altval(*v107, v52[1] & 0xFFFFFF, 65);
            v57 = *(_QWORD *)(a2 + 240);
            if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v57
              && v57 != -1
              && (!*(_QWORD *)(a2 + 184) || !rangeset_t_find_range(a2 + 176, v56)) )
            {
              goto LABEL_7;
            }
            v58 = sub_195E0(v20, v91);
            v115 = v58;
            v112 = 3;
            v59 = word_56BB8[v91];
            v114 = 0;
            v111[0] = v59;
            si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
            v113 = si128;
            if ( !v110 )
            {
              v114 = v56;
              goto LABEL_106;
            }
            sub_19660(v20, v91, v58 + v56 - v102);
            v114 = v56;
            if ( (v112 & 1) != 0 )
            {
LABEL_106:
              v56 += v113.m128i_i64[0];
            }
            else if ( v113.m128i_i64[1] != -1 )
            {
              v56 = 16 * sel2para() + v114;
            }
            v60 = getseg(v56);
            v61 = v112 & 0xFFFFFFFE;
            if ( v60 )
            {
              v62 = *(_QWORD *)(v60 + 48);
              v112 &= ~1u;
              v63 = 0;
              v113.m128i_i64[0] = 0;
              v113.m128i_i64[1] = v62;
              if ( v62 == -1 )
              {
LABEL_111:
                v112 = v61 | 1;
                v113.m128i_i64[0] = v102;
                v114 = v56 + v63 - v102;
                set_fixup(v20, v111);
                if ( v89 != 16777223 )
                {
                  v65 = 1155;
                  if ( _bittest64(&v65, v25) )
                    goto LABEL_113;
                  v38 = 5;
                  ++v18;
LABEL_49:
                  if ( (unsigned int)(v38 - 4) <= 1 || (_DWORD)v25 == 6 )
                    goto LABEL_7;
                  goto LABEL_74;
                }
                if ( (_DWORD)v25 == 1 )
                {
LABEL_113:
                  ++v18;
                  goto LABEL_7;
                }
                v38 = 5;
                ++v18;
                goto LABEL_31;
              }
              v64 = sel2para();
              v61 = v112;
              v56 -= 16 * v64;
              v114 = v56;
              if ( (v112 & 1) != 0 )
              {
                v63 = v113.m128i_i64[0];
                goto LABEL_111;
              }
            }
            else
            {
              v76 = _mm_load_si128(&si128);
              v112 &= ~1u;
              v114 = v56;
              v113 = v76;
            }
            v63 = 0;
            if ( v113.m128i_i64[1] != -1 )
            {
              v77 = sel2para();
              v56 = v114;
              v61 = v112;
              v63 = 16 * v77;
            }
            goto LABEL_111;
          }
          v37 = sub_195E0(v20, v91);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) == 8 )
          {
LABEL_123:
            if ( ((_DWORD)v25 != 7 || v37 == -2) && ((_DWORD)v25 != 8 || v37 == -4) )
            {
              sub_1DF00(a1, a2, v20, v102, v91, v101 & 1, 1, v37);
              if ( (_DWORD)v25 == 2 )
              {
                if ( (unsigned __int8)segtype(v102, a2, v87) == 1
                  && (~(unsigned __int16)get_flags_ex(v102, 4) & 0x600) != 0 )
                {
                  del_items(v102, 0, 1, 0);
                  put_byte(v102, 195);
                  create_insn(v102, 0);
                }
                goto LABEL_7;
              }
LABEL_27:
              if ( (v94 & 0xD) == 0 )
                goto LABEL_7;
              if ( (_DWORD)v25 == 1 )
                goto LABEL_7;
              if ( (_DWORD)v25 == 6 )
                goto LABEL_7;
              v38 = (unsigned int)v25;
              if ( (unsigned int)(v25 - 7) <= 1 )
                goto LABEL_7;
              goto LABEL_31;
            }
            goto LABEL_87;
          }
LABEL_84:
          v37 = (int)v37;
        }
        if ( (_DWORD)v25 != 6 || v37 == -1 )
          goto LABEL_123;
LABEL_87:
        v50 = *(unsigned int *)(a2 + 332);
        si128.m128i_i64[0] = (__int64)v117;
        sub_1E8D0(v50, (unsigned int)v25, 0, v117, 10);
        sub_196C0(
          (unsigned int)"AUTOHIDE SESSION\nUnexpected delta (%a) for relocation %s, %a->%a",
          v37 & *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
          si128.m128i_i32[0],
          v20,
          v102,
          v51,
          v88);
LABEL_25:
        sub_1DF00(a1, a2, v20, v102, v91, v101 & 1, 1, v37);
        goto LABEL_26;
      }
      LOBYTE(v32) = (_DWORD)v25 == 0 || (_DWORD)v25 == 7;
      if ( (_BYTE)v32 )
      {
        v37 = sub_195E0(v20, v91);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
          v37 = (int)v37;
        goto LABEL_25;
      }
      if ( (_DWORD)v25 == 1 )
        goto LABEL_89;
      if ( (unsigned __int8)v94 > 6u )
        goto LABEL_46;
      switch ( v94 )
      {
        case 0uLL:
        case 1uLL:
          goto LABEL_46;
        case 2uLL:
          v38 = 2;
          if ( v91 != 2 )
            goto LABEL_74;
          custom_fixup = word_66BF0;
          if ( word_66BF0 == (__int16)0x8000 )
          {
            v99 = v33;
            custom_fixup = find_custom_fixup("BRANCH26", 2, v32, v34, v33, a6);
            v33 = v99;
            word_66BF0 = custom_fixup;
          }
          if ( custom_fixup )
            goto LABEL_140;
          goto LABEL_7;
        case 3uLL:
        case 5uLL:
          custom_fixup = word_66BF4;
          if ( word_66BF4 == (__int16)0x8000 )
          {
            v97 = v33;
            custom_fixup = find_custom_fixup("PAGE", v30, v32, v34, v33, a6);
            v33 = v97;
            word_66BF4 = custom_fixup;
          }
          if ( !custom_fixup )
            break;
LABEL_140:
          v32 = 1;
          goto LABEL_141;
        case 4uLL:
        case 6uLL:
          custom_fixup = word_66BF2;
          if ( word_66BF2 == (__int16)0x8000 )
          {
            si128.m128i_i64[0] = v33;
            custom_fixup = find_custom_fixup("PAGEOFF", v30, v32, v34, v33, a6);
            v32 = ((_DWORD)v25 == 0) | (unsigned __int8)((_DWORD)v25 == 7);
            v33 = si128.m128i_i64[0];
            word_66BF2 = custom_fixup;
            if ( !custom_fixup )
            {
LABEL_136:
              v38 = (unsigned int)v25;
              goto LABEL_49;
            }
          }
          else if ( !word_66BF2 )
          {
            goto LABEL_136;
          }
LABEL_141:
          v104 = v33;
          v95 = v32;
          v111[0] = custom_fixup;
          v112 = 2;
          v114 = 0;
          v115 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
          v113 = si128;
          fixup_value = get_fixup_value(v20, custom_fixup, v32, v34, v33, a6);
          v68 = v95;
          v69 = fixup_value;
          if ( !v104 )
            goto LABEL_144;
          if ( fixup_value )
            goto LABEL_73;
          v69 = v104;
LABEL_144:
          v70 = *(_BYTE *)(*v106 + v108 + 4) & 0xE;
          if ( v70 == 12 )
            goto LABEL_174;
          if ( v70 != 14 )
          {
            if ( v70 )
            {
              v102 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v102 + v69);
              goto LABEL_148;
            }
LABEL_174:
            v115 = v69;
            goto LABEL_148;
          }
          v79 = getseg(v102);
          v68 = v95;
          v80 = (unsigned __int64 *)v79;
          if ( !v79 )
            goto LABEL_174;
          v81 = *(_QWORD *)(a1 + 8);
          v82 = *(_QWORD *)(v81 + 16) & (v69 + v102);
          if ( v82 < *v80 || v82 >= v80[1] )
            goto LABEL_174;
          v102 = *(_QWORD *)(v81 + 16) & (v69 + v102);
LABEL_148:
          v114 = v102;
          if ( (v112 & 1) != 0 )
          {
            v71 = v113.m128i_i64[0] + v102;
          }
          else
          {
            v71 = v102;
            if ( v113.m128i_i64[1] != -1 )
            {
              v98 = v68;
              v78 = sel2para();
              v68 = v98;
              v71 = 16 * v78 + v114;
            }
          }
          v96 = v68;
          v72 = getseg(v71);
          v73 = v96;
          if ( v72 )
          {
            v74 = *(_QWORD *)(v72 + 48);
            v112 &= ~1u;
            v113.m128i_i64[0] = 0;
            v113.m128i_i64[1] = v74;
            if ( v74 != -1 )
            {
              v75 = sel2para();
              v73 = v96;
              v71 -= 16 * v75;
            }
          }
          else
          {
            v83 = _mm_load_si128(&si128);
            v112 &= ~1u;
            v113 = v83;
          }
          v114 = v71;
          if ( v73 )
          {
            v84 = v112;
            if ( (v112 & 1) != 0 )
            {
              v85 = v113.m128i_i64[0];
            }
            else
            {
              v85 = 0;
              if ( v113.m128i_i64[1] != -1 )
              {
                v86 = sel2para();
                v71 = v114;
                v84 = v112;
                v85 = 16 * v86;
              }
            }
            v113.m128i_i64[0] = v20;
            v112 = v84 | 1;
            v114 = v71 + v85 - v20;
          }
          set_fixup(v20, v111);
          if ( v110 )
            patch_fixup_value(v20, v111);
          break;
      }
LABEL_48:
      v38 = (unsigned int)v25;
      if ( (unsigned int)(v25 - 2) > 1 )
        goto LABEL_49;
LABEL_7:
      v12 = v18;
      if ( v18 >= v100 )
        return v118 - __readfsqword(0x28u);
    }
    else
    {
      LODWORD(v19) = v24;
      if ( (unsigned int)v24 >= (unsigned __int64)(*(_QWORD *)(a2 + 264) + 1LL) )
        goto LABEL_34;
      if ( (_DWORD)v24 )
      {
        v42 = 80LL * ((int)v24 - 1);
        qsnprintf(v116, 1024, "(%.16s,%.16s)", v42 + *(_QWORD *)(a2 + 256) + 16);
        v102 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & *(_QWORD *)(*(_QWORD *)(a2 + 256) + v42 + 32);
      }
      else
      {
        qstrncpy(v116, "[ABS]", 1024, v22, v16, a6);
        v102 = -1;
      }
      v40 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v40
        && v40 != -1
        && (!*(_QWORD *)(a2 + 184) || !rangeset_t_find_range(a2 + 176, v102)) )
      {
        goto LABEL_7;
      }
      if ( v89 != 16777223 )
      {
        if ( (_DWORD)v25 && (_DWORD)v25 != 7 )
          goto LABEL_46;
        v44 = sub_195E0(v20, v91);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
          v44 = (int)v44;
LABEL_70:
        if ( *(_DWORD *)(a2 + 340) != 1 )
          v44 = 0;
        sub_1DF00(a1, a2, v20, v102, v91, v101 & 1, 0, v44);
LABEL_26:
        if ( v89 == 16777223 )
          goto LABEL_27;
LABEL_46:
        if ( (unsigned __int8)v94 <= 0xAu )
        {
          v41 = 1155;
          if ( _bittest64(&v41, v25) )
            goto LABEL_7;
          goto LABEL_48;
        }
LABEL_73:
        v38 = (unsigned int)v25;
LABEL_74:
        sub_1E8D0(*(unsigned int *)(a2 + 332), v38, 0, v117, 10);
        v47 = sub_195E0(v20, v91);
        sub_112F0(
          (unsigned int)"%8s %d %c %0*a %0*llX %s baseea=%a\n",
          (unsigned int)v117,
          v91,
          v101 == 0 ? 46 : 82,
          8,
          v20,
          8,
          v47,
          v116,
          a3);
        sub_196C0((unsigned int)"Unhandled relocation type %s %a->%a", (unsigned int)v117, v20, v102, v48, v49, v88);
        goto LABEL_7;
      }
      if ( (unsigned __int8)v94 <= 2u || (_DWORD)v25 == 6 || (((_BYTE)v94 - 3) & 0xFA) == 0 )
      {
        v44 = sub_195E0(v20, v91);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) != 8 )
          v44 = (int)v44;
        if ( (_DWORD)v25 == 6 && v44 != -1 || (_DWORD)v25 == 7 && v44 != -2 || (_DWORD)v25 == 8 && v44 != -4 )
        {
          v45 = *(unsigned int *)(a2 + 332);
          si128.m128i_i64[0] = (__int64)v117;
          sub_1E8D0(v45, (unsigned int)v25, 0, v117, 10);
          sub_196C0(
            (unsigned int)"AUTOHIDE SESSION\nUnexpected delta (%a) for relocation %s, %a->%a",
            v44 & *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
            si128.m128i_i32[0],
            v20,
            v102,
            v46,
            v88);
        }
        goto LABEL_70;
      }
      v38 = (unsigned int)v25;
      if ( (unsigned int)(v25 - 7) <= 1 )
        goto LABEL_7;
LABEL_31:
      if ( (((_BYTE)v94 + 13) & 0xFu) > 2 )
        goto LABEL_74;
      v12 = v18;
      if ( v18 >= v100 )
        return v118 - __readfsqword(0x28u);
    }
  }
  v16 = 0;
  if ( (HIBYTE(v14) & 0xF0) != 0xA0 )
    goto LABEL_10;
  if ( (HIBYTE(v14) & 0xF) == 4 && ++v12 < v100 )
  {
    v16 = HIDWORD(v14) & 0xFFFFFF;
    if ( (HIDWORD(v14) & 0xFFFFFFu) > 0x7FFFFF )
      v16 = HIDWORD(v14) & 0xFFFFFF | 0xFFFFFFFFFF000000LL;
    v14 = *(_QWORD *)(v13 + 8LL * v12);
    v15 = (int)v14;
    goto LABEL_10;
  }
  return sub_196C0(
           (unsigned int)"Illegal ADDEND relocation at %a",
           *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (unsigned int)(a3 + v14),
           v12,
           v13,
           0,
           a6,
           a7);
}
