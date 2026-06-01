__int64 __fastcall sub_4F8B0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned __int64 v13; // rbx
  size_t v14; // r12
  __int64 v15; // r13
  __int64 v16; // r14
  _BYTE *v17; // r15
  __m128 v18; // xmm0
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  size_t v27; // r8
  unsigned __int8 v28; // r12
  unsigned __int16 v29; // ax
  unsigned __int8 v30; // r15
  unsigned __int16 v31; // ax
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  unsigned __int16 v38; // dx
  __int64 v39; // rcx
  char v40; // si
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // r8
  unsigned int v43; // edi
  __int64 v44; // rax
  unsigned __int64 v45; // rsi
  __int64 v47; // rax
  const void *v48; // r15
  void *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rsi
  __int64 v52; // rcx
  int v53; // edx
  unsigned __int64 v54; // rcx
  int v55; // eax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r10
  const char *v59; // r12
  size_t v60; // rax
  size_t v61; // r15
  void *v62; // rdi
  char *v63; // rdx
  int v64; // eax
  unsigned __int16 v65; // ax
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // r10
  char *v70; // rax
  unsigned __int64 v71; // rdi
  const char *v72; // r12
  size_t v73; // rax
  size_t v74; // r15
  _BYTE *v75; // rax
  __int64 v76; // rax
  char *v77; // rax
  __int64 v78; // rax
  __int64 segm_name; // rax
  unsigned __int64 v80; // r10
  char *v81; // r12
  __int64 max_strlit_length; // rax
  __int64 v83; // r9
  __int16 v84; // si
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  __int64 flags; // rax
  __int64 prev_seg; // rax
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r12
  __int64 v92; // r15
  size_t v93; // rax
  char *v94; // rdx
  __int64 v95; // rax
  void *v96; // rdi
  char *v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  char *v100; // rax
  __int64 v101; // [rsp+0h] [rbp-F0h]
  unsigned __int64 v102; // [rsp+8h] [rbp-E8h]
  _QWORD *v103; // [rsp+10h] [rbp-E0h]
  __int64 v104; // [rsp+18h] [rbp-D8h]
  bool v107; // [rsp+27h] [rbp-C9h]
  unsigned __int64 v108; // [rsp+28h] [rbp-C8h]
  unsigned __int16 v109; // [rsp+30h] [rbp-C0h]
  char *v110; // [rsp+30h] [rbp-C0h]
  unsigned __int8 v111; // [rsp+38h] [rbp-B8h]
  unsigned __int64 v112; // [rsp+38h] [rbp-B8h]
  unsigned __int64 v113; // [rsp+38h] [rbp-B8h]
  unsigned __int64 v114; // [rsp+38h] [rbp-B8h]
  unsigned __int64 v115; // [rsp+38h] [rbp-B8h]
  unsigned __int64 v116; // [rsp+38h] [rbp-B8h]
  __int64 v118; // [rsp+48h] [rbp-A8h]
  char *s1; // [rsp+50h] [rbp-A0h]
  char *s1b; // [rsp+50h] [rbp-A0h]
  char *s1a; // [rsp+50h] [rbp-A0h]
  char *s1c; // [rsp+50h] [rbp-A0h]
  void *dest; // [rsp+60h] [rbp-90h] BYREF
  __int128 v125; // [rsp+68h] [rbp-88h]
  char *haystack; // [rsp+80h] [rbp-70h] BYREF
  __int128 v127; // [rsp+88h] [rbp-68h]
  char v128[24]; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v129; // [rsp+B8h] [rbp-38h]

  v18 = 0;
  v19 = *(_BYTE *)(a2 + 511) == 3;
  v129 = __readfsqword(0x28u);
  v107 = v19;
  dest = nullptr;
  v125 = 0;
  v103 = (_QWORD *)(a2 + 624);
  if ( (unsigned int)(a3 - 1) > 2 )
  {
    sub_30AA0(a1);
LABEL_292:
    s1c = v94;
    *(_QWORD *)(v13 + 24) = qvector_reserve(v13 + 24, *(_QWORD *)(v13 + 24), v94, 1);
    v94 = s1c;
LABEL_269:
    *(_QWORD *)(v13 + 32) = v94;
    memmove(*(void **)(v13 + 24), v17, v14);
    *(_BYTE *)(*(_QWORD *)(v13 + 24) + v14) = 0;
    while ( 1 )
    {
LABEL_45:
      if ( v118 == ++v15 )
        goto LABEL_46;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_7:
          if ( !v15 )
            goto LABEL_45;
          if ( (v15 & 0x3FF) == 0 )
          {
            show_auto((unsigned int)(a4 - v15), 0);
            if ( (unsigned __int8)callui(27, 0, &callui, v21, v22, v23, v101, v102, v103, v104) )
              sub_EB70(0);
          }
          v24 = 0;
          if ( a3 == 2 )
            v24 = *(_QWORD *)(a2 + 312);
          v13 = *(_QWORD *)(a2 + 288) + 96 * (v15 + v24);
          if ( *(_BYTE *)(v13 + 92) == 0xFE )
            goto LABEL_45;
          *(_QWORD *)&v125 = 0;
          if ( (*(_BYTE *)(v13 + 52) & 0xF) == 3 )
            goto LABEL_18;
          v25 = sub_49020(v13, (_QWORD *)a2);
          if ( (void **)v25 != &dest )
          {
            v26 = *(_QWORD *)(v25 + 8);
            if ( !v26 || (v27 = v26 - 1, v26 == 1) )
            {
              *(_QWORD *)&v125 = 0;
LABEL_18:
              s1 = (char *)&::s1;
              sub_41480(v16, &::s1);
              goto LABEL_19;
            }
            v48 = *(const void **)v25;
            v49 = dest;
            if ( *((_QWORD *)&v125 + 1) < v26 )
            {
              v49 = (void *)qvector_reserve(&dest, dest, v26, 1);
              dest = v49;
              v27 = v26 - 1;
            }
            *(_QWORD *)&v125 = v26;
            memmove(v49, v48, v27);
            *((char *)dest + v26 - 1) = 0;
          }
          if ( !(_QWORD)v125 )
            goto LABEL_18;
          s1 = (char *)dest;
          sub_41480(v16, (const char *)dest);
LABEL_19:
          v28 = 1;
          v111 = *(_BYTE *)(v13 + 92);
          v29 = *(char *)(v13 + 93);
          v108 = *(_QWORD *)(v13 + 72);
          v109 = v29;
          v30 = *(_BYTE *)(v13 + 93);
          *(_BYTE *)(v13 + 93) = -1;
          if ( (_BYTE)v29 != 2 )
            v28 = v107 && v29 == 10;
          if ( *(_WORD *)(a2 + 520) != 1
            || *(_WORD *)(v13 + 54)
            || v111 != 1
            || (*(_BYTE *)(v13 + 52) & 0xF) != 0
            || strcmp(s1, "_GLOBAL_OFFSET_TABLE_") )
          {
            break;
          }
          v50 = *(_QWORD *)(a2 + 288);
          if ( v13 && v13 >= v50 && v50 + 96LL * *(_QWORD *)(a2 + 296) >= v13 )
          {
            v51 = *(_QWORD *)(a2 + 312);
            v52 = v13 - v50;
            v53 = 1;
            v54 = 0xAAAAAAAAAAAAAAABLL * (v52 >> 5);
            v55 = v54;
            if ( v54 >= v51 )
            {
              v55 = v54 - v51;
              v53 = 2;
            }
          }
          else
          {
            v55 = 0;
            v53 = 0;
          }
          *(_DWORD *)(v16 + 320) = v53;
          ++v15;
          *(_DWORD *)(v16 + 324) = v55;
          *(_BYTE *)(v13 + 93) = 0;
          if ( v118 == v15 )
            goto LABEL_46;
        }
        if ( !*(_QWORD *)(a2 + 544) )
          break;
        if ( *(_DWORD *)(v13 + 88) )
          break;
        v31 = *(_WORD *)(v13 + 54);
        if ( (unsigned __int16)(v31 + 15) <= 1u || v31 <= 0xFEFFu )
          break;
        if ( (unsigned __int64)v125 <= 1 )
          goto LABEL_45;
        v64 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *, _QWORD))(**(_QWORD **)(v16 + 240) + 136LL))(
                *(_QWORD *)(v16 + 240),
                v13,
                s1,
                v109);
        if ( !v64 )
          break;
        if ( v64 == 1 )
          goto LABEL_45;
        v65 = *(_WORD *)(v13 + 54);
        v66 = *(_DWORD *)(v13 + 88);
        if ( v65 <= 0xFEFFu || v66 )
          qsnprintf(v128, 20, "%u", v66);
        else
          qsnprintf(v128, 20, "%04X", v65);
        sub_EAA0(
          (__int64)"%a: symbol '%s' refers to non-existing section %s\n",
          *(double *)v18.m128_u64,
          *(const char **)(v13 + 80),
          s1);
        if ( v118 == ++v15 )
          goto LABEL_46;
      }
      v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**(_QWORD **)(v16 + 240) + 120LL))(
              *(_QWORD *)(v16 + 240),
              v13,
              s1);
      if ( !v32 )
        continue;
      switch ( v30 )
      {
        case 0u:
        case 1u:
          v38 = *(_WORD *)(v13 + 54);
          if ( v38 == 0xFFF1 )
          {
            v71 = *(_QWORD *)(v13 + 80);
            v108 = v71;
            *(_QWORD *)(v13 + 72) = v71;
            if ( v111 == 1 && (v30 & 1) != 0 )
            {
              if ( (unsigned __int8)is_mapped(v71) )
              {
                if ( (_QWORD)v125 )
                {
                  v110 = (char *)dest;
                  if ( !strcmp((const char *)dest, "_DYNAMIC")
                    || !strcmp(v110, "_GLOBAL_OFFSET_TABLE_")
                    || !strcmp(v110, "_PROCEDURE_LINKAGE_TABLE_") )
                  {
                    set_name(*(_QWORD *)(v13 + 80), s1, 1283);
                    continue;
                  }
                }
              }
              goto LABEL_76;
            }
            goto LABEL_168;
          }
          if ( v38 != 0xFFF2 )
          {
            if ( v38 )
              goto LABEL_31;
            if ( a5 )
              goto LABEL_128;
            if ( !v111 )
            {
              if ( v109 )
LABEL_52:
                sub_EAA0((__int64)"Undefined symbol '%s' can't be local!\n", s1);
              continue;
            }
LABEL_168:
            if ( v109 )
              goto LABEL_76;
            goto LABEL_169;
          }
          goto LABEL_82;
        case 2u:
          goto LABEL_61;
        case 3u:
          if ( v111 )
          {
            if ( (debug & 0x10) == 0 )
              continue;
            sub_E950((__int64)"Non-standard STT_SECTION for '%s'\n", s1);
            if ( v118 == ++v15 )
              goto LABEL_46;
          }
          else
          {
            v38 = *(_WORD *)(v13 + 54);
            if ( v38 && *(_DWORD *)(v13 + 88) < *(_DWORD *)(a2 + 568) )
            {
              if ( v38 != 0xFFF2 )
              {
                if ( v38 > 0xFFF2u )
                  goto LABEL_58;
                goto LABEL_74;
              }
LABEL_82:
              if ( *(_BYTE *)(a2 + 248) && *(_QWORD *)(a2 + 120) && *(_WORD *)(a2 + 520) == 1 )
              {
                if ( !(v30 | v111) )
                  continue;
                if ( v108 )
                  goto LABEL_168;
                if ( v109 )
                {
                  if ( (debug & 0x10) != 0 )
                    sub_E950((__int64)"Undefined size/type for COMM reference '%s'\n", s1);
                  v108 = 0;
                  goto LABEL_76;
                }
LABEL_169:
                if ( *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4LL) == 12 && a3 == 2 )
                  goto LABEL_76;
                v19 = (_QWORD)v125 == 0;
                *(_QWORD *)(v13 + 80) = v108;
                if ( v19 )
                {
                  *(_QWORD *)(v13 + 32) = 0;
                }
                else
                {
                  v72 = (const char *)dest;
                  *(_QWORD *)(v13 + 32) = 0;
                  if ( v72 )
                  {
                    if ( *v72 )
                    {
                      v73 = strlen(v72);
                      v74 = v73;
                      if ( v73 )
                      {
                        v96 = *(void **)(v13 + 24);
                        v97 = (char *)(v73 + 1);
                        if ( *(_QWORD *)(v13 + 40) < v73 + 1 )
                        {
                          s1b = (char *)(v73 + 1);
                          v98 = qvector_reserve(v13 + 24, *(_QWORD *)(v13 + 24), v97, 1);
                          *(_QWORD *)(v13 + 24) = v98;
                          v97 = s1b;
                          v96 = (void *)v98;
                        }
                        *(_QWORD *)(v13 + 32) = v97;
                        memmove(v96, v72, v74);
                        *(_BYTE *)(*(_QWORD *)(v13 + 24) + v74) = 0;
                      }
                    }
                  }
                }
                *(_BYTE *)(v13 + 93) = 0;
                if ( v118 == ++v15 )
                {
LABEL_46:
                  if ( dest )
                  {
                    *(_QWORD *)&v125 = 0;
                    qfree(dest);
                  }
                  return HIDWORD(v104);
                }
              }
              else
              {
                sub_EAA0((__int64)"COMM symbol '%s' in non-relocatable file\n", s1);
                if ( v118 == ++v15 )
                  goto LABEL_46;
              }
            }
            else
            {
              if ( (debug & 0x10) == 0 )
                continue;
              sub_E950((__int64)"'undef/abs/comm' relocatable symbol is ignored '%s'\n", s1);
              if ( v118 == ++v15 )
                goto LABEL_46;
            }
          }
          goto LABEL_7;
        case 4u:
          if ( *(_WORD *)(v13 + 54) == 0xFFF1 && !v111 )
          {
            v75 = &unk_8C220;
            if ( (_QWORD)v125 )
              v75 = dest;
            if ( *v75 )
              sub_F630(
                (__int64)"Source File : '%s'",
                (__int64)s1,
                v30,
                v33,
                v34,
                v35,
                v18,
                a7,
                a8,
                a9,
                v36,
                v37,
                a12,
                a13,
                v101);
            continue;
          }
          if ( (debug & 0x10) == 0 )
            continue;
          sub_E950((__int64)"Non-standard file name '%s' is declared\n", s1);
          if ( v118 == ++v15 )
            goto LABEL_46;
          goto LABEL_7;
        case 6u:
          if ( !*(_WORD *)(v13 + 54) )
            goto LABEL_50;
          v67 = sub_2F4D0((__int64 *)(v16 + 232), v13, *(double *)v18.m128_u64, *(double *)a7.m128_u64);
          v58 = v67;
          if ( v67 == -1 )
            continue;
          *(_QWORD *)(v13 + 80) = v67;
          *(_BYTE *)(v13 + 93) = 6;
          goto LABEL_144;
        default:
          if ( v109 != 10 || !v107 )
          {
            if ( (debug & 0x10) == 0 )
              continue;
            sub_E950((__int64)"Undefined or unsupported symbol type for '%s'\n", s1);
            if ( v118 == ++v15 )
              goto LABEL_46;
            goto LABEL_7;
          }
          v38 = *(_WORD *)(v13 + 54);
          if ( v38 == 0xFFF2 )
            goto LABEL_82;
          if ( v38 > 0xFFF2u )
            goto LABEL_58;
          if ( !v38 )
          {
LABEL_50:
            if ( a5 )
            {
LABEL_128:
              *(_BYTE *)(v13 + 93) = -2;
              if ( v118 == ++v15 )
                goto LABEL_46;
            }
            else
            {
              if ( !v111 )
                goto LABEL_52;
LABEL_76:
              v47 = sub_4F510(
                      (_QWORD *)v16,
                      a2,
                      *(unsigned __int16 *)(v13 + 54),
                      v108,
                      (unsigned int)(char)v30,
                      v111,
                      *(double *)v18.m128_u64,
                      *(double *)a7.m128_u64,
                      v28,
                      s1,
                      v103,
                      v15);
              *(_QWORD *)(v13 + 80) = v47;
              if ( v47 )
                *(_BYTE *)(v13 + 93) = v30;
              if ( a3 != 2 )
                continue;
LABEL_79:
              (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, char *))(**(_QWORD **)(v16 + 240) + 128LL))(
                *(_QWORD *)(v16 + 240),
                v13,
                (unsigned int)v15++,
                s1);
              if ( v118 == v15 )
                goto LABEL_46;
            }
            goto LABEL_7;
          }
LABEL_74:
          if ( v38 == 0xFFF1 )
            goto LABEL_75;
LABEL_58:
          v39 = *(_QWORD *)(v13 + 80);
          v40 = *(_BYTE *)(a2 + 248);
          if ( !v40 )
          {
            if ( v109 != 3 )
              goto LABEL_115;
            do
            {
              v32 = sub_30AC0();
LABEL_61:
              v38 = *(_WORD *)(v13 + 54);
              if ( (unsigned __int16)(v38 + 15) <= 1u )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4LL) != 23 )
                {
                  if ( (debug & 0x10) != 0 )
                    sub_E950((__int64)"Meaningless STT_FUNC '%s' in COMM/ABS section\n", s1);
                  goto LABEL_45;
                }
                if ( v38 != 0xFFF2 )
                {
LABEL_75:
                  v108 = *(_QWORD *)(v13 + 80);
                  *(_QWORD *)(v13 + 72) = v108;
                  goto LABEL_76;
                }
                goto LABEL_82;
              }
              if ( !v38 )
                goto LABEL_50;
LABEL_31:
              v39 = *(_QWORD *)(v13 + 80);
              v40 = *(_BYTE *)(a2 + 248);
              if ( v40 )
              {
                v41 = *(_QWORD *)(a2 + 120);
                if ( v41 && *(_WORD *)(a2 + 520) == 1 )
                  goto LABEL_34;
                goto LABEL_181;
              }
LABEL_115:
              ;
            }
            while ( *(_WORD *)(a2 + 522) == 8 && *(_WORD *)(a2 + 520) == 0xFFA0 );
LABEL_116:
            v56 = *(_QWORD *)(a2 + 456) & (*(_QWORD *)(v16 + 328) + v39);
            v57 = *(_QWORD *)(v16 + 312);
            v58 = v56;
            if ( v109 )
            {
              if ( v56 >= v57 )
                goto LABEL_227;
            }
            else
            {
              if ( v56 == v57 )
                goto LABEL_118;
              v102 = v56;
              v76 = getseg(v56);
              v58 = v102;
              if ( v76 || (prev_seg = get_prev_seg(v102), v58 = v102, prev_seg) && *(_QWORD *)(prev_seg + 8) == v102 )
              {
LABEL_193:
                v40 = *(_BYTE *)(a2 + 248);
LABEL_118:
                if ( v40 && *(_QWORD *)(a2 + 120) )
                {
LABEL_219:
                  if ( *(_WORD *)(a2 + 520) == 1 )
                  {
                    if ( *(_QWORD *)(a2 + 544) )
                    {
                      v86 = *(unsigned int *)(v13 + 88);
                      if ( (*(_BYTE *)(v13 + 55) != 0xFF || (_DWORD)v86)
                        && (v86 >= *(_QWORD *)(a2 + 1360) || *(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32 * v86 + 16) == -1) )
                      {
                        continue;
                      }
                    }
                  }
                }
                *(_QWORD *)(v13 + 80) = v58;
                *(_BYTE *)(v13 + 93) = v30;
                if ( !v109 && !v108 )
                {
                  if ( (_QWORD)v125 )
                  {
                    v59 = (const char *)dest;
                    *(_QWORD *)(v13 + 32) = 0;
                    if ( v59 )
                    {
                      if ( *v59 )
                      {
                        v60 = strlen(v59);
                        v61 = v60;
                        if ( v60 )
                        {
                          v62 = *(void **)(v13 + 24);
                          v63 = (char *)(v60 + 1);
                          if ( *(_QWORD *)(v13 + 40) < v60 + 1 )
                          {
                            s1a = (char *)(v60 + 1);
                            v99 = qvector_reserve(v13 + 24, *(_QWORD *)(v13 + 24), v63, 1);
                            *(_QWORD *)(v13 + 24) = v99;
                            v63 = s1a;
                            v62 = (void *)v99;
                          }
                          *(_QWORD *)(v13 + 32) = v63;
                          memmove(v62, v59, v61);
                          *(_BYTE *)(*(_QWORD *)(v13 + 24) + v61) = 0;
                        }
                      }
                    }
                    continue;
                  }
                  goto LABEL_194;
                }
LABEL_144:
                if ( v28 && (*(_BYTE *)(*(_QWORD *)(v16 + 8) + 12LL) & 8) != 0 )
                  v58 &= ~1uLL;
                v102 = v58;
                v68 = sub_41070(v16, v58, "rename", *(double *)v18.m128_u64);
                if ( v68 == -1 )
                  continue;
                v69 = v102;
                if ( (unsigned __int64)v125 <= 1 )
                {
                  flags = get_flags_ex(v68, 4);
                  v69 = v102;
                  if ( (flags & 0x4000) != 0 )
                    continue;
LABEL_151:
                  if ( v28 )
                  {
                    if ( !s1 )
                      goto LABEL_202;
                    v112 = v69;
                    v70 = strstr(s1, "_VTABLE__");
                    v69 = v112;
                    if ( !v70 )
                    {
LABEL_200:
                      v113 = v69;
                      v77 = strstr(s1, "_local_data");
                      v69 = v113;
                      if ( !v77 || v77[11] )
                        goto LABEL_202;
                    }
                  }
LABEL_154:
                  if ( v109 <= 1u && (*(_BYTE *)(*(_QWORD *)(v16 + 240) + 344LL) & 2) == 0 )
                  {
                    switch ( v108 )
                    {
                      case 0uLL:
                        goto LABEL_211;
                      case 1uLL:
                        goto LABEL_210;
                      case 2uLL:
                        create_data(v69, 0x10000000, 2, -1);
                        break;
                      case 4uLL:
                        create_data(v69, 0x20000000, 4, -1);
                        break;
                      case 8uLL:
                        create_data(v69, 805306368, 8, -1);
                        break;
                      default:
                        v115 = v69;
                        max_strlit_length = get_max_strlit_length(v69, 0, 0);
                        v69 = v115;
                        if ( v108 == max_strlit_length )
                          create_strlit(v115, v108, 0);
                        else
LABEL_210:
                          create_data(v69, 0, v108, -1);
                        break;
                    }
                  }
                  goto LABEL_211;
                }
                if ( v109 != 3 )
                {
                  sub_4EE50((_QWORD *)v16, v68, v111, v28 + 1, s1, nullptr, 0);
                  v69 = v102;
                  goto LABEL_151;
                }
                if ( !v28 )
                  goto LABEL_211;
                if ( s1 )
                {
                  if ( !strstr(s1, "_VTABLE__") )
                  {
                    v69 = v102;
                    goto LABEL_200;
                  }
LABEL_211:
                  ++HIDWORD(v104);
                  if ( a3 != 2 )
                    continue;
                  goto LABEL_79;
                }
LABEL_202:
                v18 = 0;
                haystack = nullptr;
                v114 = v69;
                v127 = 0;
                v78 = getseg(v69);
                segm_name = get_segm_name(&haystack, v78, 0);
                v80 = v114;
                v81 = haystack;
                if ( segm_name > 0 )
                {
                  if ( (_QWORD)v127 )
                  {
                    if ( haystack )
                    {
                      if ( strstr(haystack, "_VTABLE__")
                        || (v100 = strstr(v81, "_local_data"), v80 = v114, v100) && !v100[11] )
                      {
                        *(_QWORD *)&v127 = 0;
                        qfree(v81);
                        v69 = v114;
                        goto LABEL_154;
                      }
LABEL_251:
                      v116 = v80;
                      *(_QWORD *)&v127 = 0;
                      qfree(v81);
                      v80 = v116;
                    }
LABEL_252:
                    v90 = sub_41070(v16, v80, "make function", 0.0);
                    v91 = v90;
                    if ( v90 != -1 )
                    {
                      v92 = v90 + 1;
                      auto_mark_range(v90, v90 + 1, 20);
                      auto_mark_range(v91, v92, 30);
                    }
                    goto LABEL_211;
                  }
                  if ( !&::s1 )
                  {
                    if ( haystack )
                    {
                      qfree(haystack);
                      v80 = v114;
                    }
                    goto LABEL_252;
                  }
                }
                if ( haystack )
                  goto LABEL_251;
                goto LABEL_252;
              }
              if ( v102 >= *(_QWORD *)(v16 + 312) )
                goto LABEL_241;
            }
            v102 = v58;
            v95 = getseg(v58);
            v58 = v102;
            if ( v95 )
              goto LABEL_193;
LABEL_227:
            if ( v111 != 1 || v109 != 1 )
            {
LABEL_241:
              if ( v111
                || *(_DWORD *)(v13 + 48)
                && (!*(_QWORD *)(a2 + 544)
                 || (v89 = *(unsigned int *)(v13 + 88), *(_BYTE *)(v13 + 55) == 0xFF) && !(_DWORD)v89
                 || v89 < *(_QWORD *)(a2 + 1360) && *(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32 * v89 + 16) != -1) )
              {
LABEL_230:
                if ( (debug & 0x10) != 0 )
                  sub_E950((__int64)"%a: relocatable symbol with an illegal address\n", *(double *)v18.m128_u64);
              }
              continue;
            }
            if ( !*(_DWORD *)(v13 + 48) )
              goto LABEL_230;
            v19 = (_QWORD)v125 == 0;
            *(_BYTE *)(v13 + 93) = -3;
            *(_QWORD *)(v13 + 80) = v58;
            if ( !v19 )
            {
              v17 = dest;
              *(_QWORD *)(v13 + 32) = 0;
              if ( v17 )
              {
                if ( *v17 )
                {
                  v93 = strlen(v17);
                  v14 = v93;
                  if ( v93 )
                  {
                    v94 = (char *)(v93 + 1);
                    if ( *(_QWORD *)(v13 + 40) >= v93 + 1 )
                      goto LABEL_269;
                    goto LABEL_292;
                  }
                }
              }
              continue;
            }
LABEL_194:
            *(_QWORD *)(v13 + 32) = 0;
            if ( v118 == ++v15 )
              goto LABEL_46;
            goto LABEL_7;
          }
          v41 = *(_QWORD *)(a2 + 120);
          if ( v41 )
          {
            if ( *(_WORD *)(a2 + 520) == 1 || v109 == 3 )
            {
LABEL_34:
              v42 = *(unsigned int *)(v13 + 88);
              v43 = *(_DWORD *)(v13 + 88);
              if ( v42 >= v41 )
                goto LABEL_186;
              goto LABEL_35;
            }
          }
          else if ( v109 == 3 )
          {
            v43 = *(_DWORD *)(v13 + 88);
LABEL_184:
            if ( v43 || v38 <= 0xFEFFu )
LABEL_186:
              qsnprintf(v128, 20, "%u", v43);
            else
              qsnprintf(v128, 20, "%04X", v38);
            sub_EAA0((__int64)"Relocatable symbol to unexisting section %s\n", v128);
            continue;
          }
LABEL_181:
          v40 = v32;
          if ( *(_WORD *)(a2 + 522) != 8 || *(_WORD *)(a2 + 520) != 0xFFA0 )
            goto LABEL_116;
          v43 = *(_DWORD *)(v13 + 88);
          v42 = v43;
          if ( (unsigned __int64)v43 >= *(_QWORD *)(a2 + 120) )
            goto LABEL_184;
LABEL_35:
          v44 = *(_QWORD *)(a2 + 112) + (v42 << 6);
          if ( !v44 )
            goto LABEL_184;
          v45 = *(unsigned int *)(v44 + 4);
          if ( (unsigned int)v45 <= 0x10 )
          {
            v83 = -114947;
            if ( !_bittest64(&v83, v45) && (*(_QWORD *)(v44 + 32) || !v39) )
            {
              v84 = *(_WORD *)(a2 + 520);
              v85 = *(_QWORD *)(a2 + 456);
              if ( v84 == 1 || *(_WORD *)(a2 + 522) == 8 && v84 == -96 )
                v58 = v85 & (*(_QWORD *)(v44 + 16) + v39);
              else
                v58 = v85 & (*(_QWORD *)(v16 + 328) + v39);
              goto LABEL_219;
            }
          }
          if ( !v111 )
          {
            if ( !*(_DWORD *)(v13 + 48) )
              continue;
            if ( *(_QWORD *)(a2 + 544) )
            {
              if ( v38 > 0xFEFFu && !v43 )
              {
                if ( (debug & 0x10) == 0 )
                  continue;
LABEL_282:
                qsnprintf(v128, 20, "%04X", v38);
LABEL_263:
                sub_E950((__int64)"Relocatable symbol to illegal section %s\n", v128);
                continue;
              }
              if ( v42 >= *(_QWORD *)(a2 + 1360) || *(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32 * v42 + 16) == -1 )
                continue;
            }
          }
          if ( (debug & 0x10) != 0 )
          {
            if ( !v43 && v38 > 0xFEFFu )
              goto LABEL_282;
            qsnprintf(v128, 20, "%u", v43);
            goto LABEL_263;
          }
          break;
      }
    }
  }
  v16 = a1;
  if ( a3 == 1 )
  {
    v20 = *(unsigned int *)(a2 + 312);
  }
  else
  {
    v20 = (unsigned int)*(_QWORD *)(a2 + 296);
    if ( a3 == 2 )
      v20 = (unsigned int)(v20 - *(_DWORD *)(a2 + 312));
  }
  if ( (_DWORD)v20 )
  {
    v118 = v20;
    v15 = 0;
    HIDWORD(v104) = 0;
    goto LABEL_7;
  }
  HIDWORD(v104) = 0;
  return HIDWORD(v104);
}

