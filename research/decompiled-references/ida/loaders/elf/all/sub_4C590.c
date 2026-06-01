__int64 __fastcall sub_4C590(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        double a7,
        double a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  bool v15; // zf
  unsigned __int64 v16; // r14
  unsigned __int64 v18; // rdi
  unsigned int v19; // r8d
  int v20; // r11d
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdi
  char v31; // bp
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  const char *v39; // r13
  bool v40; // al
  bool v41; // dl
  unsigned __int64 v42; // r10
  int v43; // r11d
  unsigned __int64 v44; // r9
  const char *v45; // r14
  const char *v46; // rcx
  char v47; // r14
  const char *v48; // rbx
  _DWORD *v49; // rax
  const char *v50; // rsi
  char v51; // dl
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  int v54; // r11d
  int v55; // r11d
  unsigned __int64 v56; // r9
  const char *v57; // rax
  size_t v58; // rbx
  char *v59; // rbx
  int v60; // eax
  __int64 v61; // rcx
  int v62; // r8d
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  _QWORD *v66; // r10
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  _BYTE *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // r8
  char v73; // al
  __int64 v74; // rax
  const char *v75; // rcx
  const char *v76; // rcx
  struct _Unwind_Exception *v77; // rbx
  unsigned __int64 v79; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v80; // [rsp+0h] [rbp-8F8h]
  const char *v81; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v82; // [rsp+0h] [rbp-8F8h]
  void *v83; // [rsp+0h] [rbp-8F8h]
  int v84; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v85; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v86; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v87; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v88; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v89; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v90; // [rsp+0h] [rbp-8F8h]
  int v91; // [rsp+0h] [rbp-8F8h]
  unsigned __int64 v92; // [rsp+0h] [rbp-8F8h]
  __int64 v93; // [rsp+8h] [rbp-8F0h]
  void *srca; // [rsp+10h] [rbp-8E8h]
  void *srcb; // [rsp+10h] [rbp-8E8h]
  int srcd; // [rsp+10h] [rbp-8E8h]
  void *srcc; // [rsp+10h] [rbp-8E8h]
  const char *srce; // [rsp+10h] [rbp-8E8h]
  unsigned __int64 v100; // [rsp+18h] [rbp-8E0h]
  int v101; // [rsp+20h] [rbp-8D8h]
  const char *v102; // [rsp+20h] [rbp-8D8h]
  unsigned __int64 v103; // [rsp+28h] [rbp-8D0h]
  int v104; // [rsp+28h] [rbp-8D0h]
  int v105; // [rsp+28h] [rbp-8D0h]
  int v106; // [rsp+28h] [rbp-8D0h]
  int v107; // [rsp+28h] [rbp-8D0h]
  unsigned __int64 v108; // [rsp+28h] [rbp-8D0h]
  int v109; // [rsp+28h] [rbp-8D0h]
  int v110; // [rsp+28h] [rbp-8D0h]
  int v111; // [rsp+28h] [rbp-8D0h]
  unsigned __int64 v112; // [rsp+30h] [rbp-8C8h]
  __int64 v113; // [rsp+30h] [rbp-8C8h]
  int v114; // [rsp+30h] [rbp-8C8h]
  __int64 v115; // [rsp+30h] [rbp-8C8h]
  __int64 v116; // [rsp+30h] [rbp-8C8h]
  __int64 v117; // [rsp+30h] [rbp-8C8h]
  __int64 v118; // [rsp+38h] [rbp-8C0h]
  int v119; // [rsp+38h] [rbp-8C0h]
  int v120; // [rsp+38h] [rbp-8C0h]
  const char *v121; // [rsp+40h] [rbp-8B8h] BYREF
  __int128 v122; // [rsp+48h] [rbp-8B0h]
  char *s1; // [rsp+60h] [rbp-898h] BYREF
  __int128 v124; // [rsp+68h] [rbp-890h]
  int v125; // [rsp+80h] [rbp-878h] BYREF
  unsigned __int64 v126; // [rsp+84h] [rbp-874h]
  __int64 v127; // [rsp+8Ch] [rbp-86Ch]
  __int64 v128; // [rsp+94h] [rbp-864h]
  int v129; // [rsp+9Ch] [rbp-85Ch]
  _QWORD v130[2]; // [rsp+A0h] [rbp-858h] BYREF
  _BYTE v131[1024]; // [rsp+B0h] [rbp-848h] BYREF
  _BYTE v132[1032]; // [rsp+4B0h] [rbp-448h] BYREF
  unsigned __int64 v133; // [rsp+8B8h] [rbp-40h]

  v15 = *(_BYTE *)(a2 + 617) == 0;
  v133 = __readfsqword(0x28u);
  v16 = a3[1];
  if ( v15 )
  {
    v16 >>= 8;
  }
  else if ( *(_BYTE *)(a2 + 616) || *(_WORD *)(a2 + 522) != 8 )
  {
    v16 >>= 32;
  }
  v18 = a2;
  v20 = sub_3A400(a2, (__int64)a3);
  if ( a6 )
  {
    if ( (unsigned int)(a6 - 1) > 2 )
      goto LABEL_171;
    if ( a6 == 1 )
    {
      if ( (unsigned int)v16 < *(_DWORD *)(a2 + 312) )
        goto LABEL_5;
    }
    else
    {
      v29 = *(_QWORD *)(a2 + 296);
      if ( a6 == 2 )
        v29 -= *(_DWORD *)(a2 + 312);
      if ( (unsigned int)v16 < v29 )
        goto LABEL_5;
    }
    return sub_EAA0((__int64)"Relocation to an illegal symbol %u, skipping...\n", v16);
  }
LABEL_5:
  v21 = *(_QWORD *)(a2 + 608) + *(_QWORD *)(a1 + 328);
  if ( *(_DWORD *)(a2 + 464) != 8 )
    v21 = (int)v21;
  v22 = *(_QWORD *)(a2 + 120);
  if ( !v22 )
  {
    v23 = *(_QWORD *)(a2 + 456);
    v24 = *a3 + v21;
    v101 = v20;
    if ( (v23 & v24) != v23 && (v23 & v24) < *(_QWORD *)(a1 + 312) )
    {
      v103 = v23 & v24;
      v25 = getseg(v23 & v24);
      v26 = v103;
      v20 = v101;
      if ( v25 )
      {
LABEL_11:
        if ( !v20 && !v26 )
          goto LABEL_13;
        if ( !a6 )
        {
          if ( !v20 )
          {
            if ( __ROR4__(-858993459 * a5 + 429496728, 1) <= 0x19999998u )
            {
              v87 = v26;
              show_auto(v26, 0);
              v26 = v87;
              v20 = 0;
            }
            v30 = *(_QWORD *)(a1 + 240);
            v31 = -7;
            v32 = 0;
            v102 = nullptr;
            v93 = 0;
LABEL_37:
            v125 = v20;
            v126 = v26;
            *(_BYTE *)(a1 + 529) = -1;
            v33 = a3[2];
            goto LABEL_38;
          }
          v102 = nullptr;
          v31 = -7;
          v32 = 0;
          v93 = 0;
LABEL_69:
          v30 = *(_QWORD *)(a1 + 240);
          v49 = (_DWORD *)(v30 + 24);
          v50 = (const char *)(v30 + 280);
          while ( 1 )
          {
            if ( !*v49 )
            {
LABEL_73:
              if ( __ROR4__(-858993459 * a5 + 429496728, 1) <= 0x19999998u )
                goto LABEL_131;
              goto LABEL_74;
            }
            if ( v20 == *v49 )
              break;
            if ( ++v49 == (_DWORD *)v50 )
              goto LABEL_73;
          }
          v62 = a5 % 10;
          v47 = ((_DWORD)v16 != 0) & ((unsigned __int8)v31 >> 7);
          if ( !v47 )
          {
            if ( !v62 )
            {
              v113 = v32;
              v107 = v20;
              v86 = v26;
              show_auto(v26, 0);
              v30 = *(_QWORD *)(a1 + 240);
              v32 = v113;
              v20 = v107;
              v26 = v86;
            }
            goto LABEL_74;
          }
          if ( *(_WORD *)(a2 + 520) != 2 )
          {
            if ( !v62 )
            {
              v92 = v26;
              show_auto(v26, 0);
              v26 = v92;
            }
            v39 = "Relocation to an unloaded symbol";
            goto LABEL_58;
          }
          if ( v32 )
          {
            v50 = &::s1;
            if ( *(_QWORD *)(v32 + 8) )
              v50 = *(const char **)v32;
            v89 = v26;
            v119 = v62;
            v116 = v32;
            v110 = v20;
            sub_EAA0((__int64)"Relocation to unloaded symbol [%s](%a) at offset %a\n", v50, a7, a8);
            v62 = v119;
            v32 = v116;
            v20 = v110;
            v26 = v89;
          }
          v120 = v62;
          v117 = v32;
          v111 = v20;
          v90 = v26;
          sub_BFC0(
            (__int64)"Relocation to an unloaded symbol in executable.\n"
                     "This symbol probably points to a hardcoded memory region.",
            v50);
          v26 = v90;
          v20 = v111;
          v32 = v117;
          if ( v120 )
          {
            v30 = *(_QWORD *)(a1 + 240);
          }
          else
          {
            show_auto(v90, 0);
            v30 = *(_QWORD *)(a1 + 240);
            v26 = v90;
            v20 = v111;
            v32 = v117;
          }
          goto LABEL_37;
        }
LABEL_96:
        v61 = 0;
        if ( a6 == 2 )
          v61 = *(_QWORD *)(a2 + 312);
        v32 = *(_QWORD *)(a2 + 288) + 96 * (v61 + (unsigned int)v16);
        v31 = *(_BYTE *)(v32 + 93);
        v93 = *(_QWORD *)(v32 + 80);
        v102 = &::s1;
        if ( *(_QWORD *)(v32 + 32) )
          v102 = *(const char **)(v32 + 24);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 32
          && *(_BYTE *)(a2 + 248)
          && *(_QWORD *)(a2 + 120)
          && *(_WORD *)(a2 + 520) == 1 )
        {
          v118 = *(_QWORD *)(a2 + 288) + 96 * (v61 + (unsigned int)v16);
          v114 = v20;
          v108 = v26;
          v73 = segtype(v93);
          v32 = v118;
          v20 = v114;
          v15 = v73 == 1;
          v74 = 0;
          if ( v15 )
            v74 = v93;
          v26 = v108;
          v93 = v74;
        }
        if ( v31 == -2 )
          return v133 - __readfsqword(0x28u);
        if ( v20 )
          goto LABEL_69;
        if ( __ROR4__(-858993459 * a5 + 429496728, 1) <= 0x19999998u )
        {
LABEL_131:
          v115 = v32;
          v109 = v20;
          v88 = v26;
          show_auto(v26, 0);
          v30 = *(_QWORD *)(a1 + 240);
          v26 = v88;
          v20 = v109;
          v32 = v115;
        }
        else
        {
          v30 = *(_QWORD *)(a1 + 240);
        }
LABEL_74:
        if ( v31 <= 0 )
          goto LABEL_37;
        v125 = v20;
        v126 = v26;
        *(_BYTE *)(a1 + 529) = v31 == 3;
        v34 = a3[2];
        v33 = v34;
        if ( v31 != 3 || !a4 )
        {
LABEL_38:
          v127 = v93;
          v34 = v33 + v93;
          v128 = v33 + v93;
          if ( v33 + v93 == -1 )
          {
LABEL_42:
            v37 = a4;
            goto LABEL_43;
          }
LABEL_39:
          v35 = *(_QWORD *)(a2 + 456);
          v36 = v35 & v34;
          if ( v35 == v36 )
            v36 = -1;
          v128 = v36;
          goto LABEL_42;
        }
        if ( a6 != 2 || !v32 )
        {
          v31 = 3;
          v127 = v93;
          v34 += v93;
          v128 = v33 + v93;
          if ( v33 + v93 == -1 )
          {
            v37 = 1;
LABEL_43:
            v79 = v26;
            v129 = v37;
            v104 = v20;
            srca = (void *)v32;
            v38 = (*(__int64 (__fastcall **)(__int64, int *, __int64, unsigned __int64 *, __int64))(*(_QWORD *)v30 + 24LL))(
                    v30,
                    &v125,
                    v32,
                    a3,
                    a11);
            v26 = v79;
            v39 = (const char *)v38;
            v40 = v38 != 0;
            v41 = v40;
            if ( (unsigned __int64)v39 <= 5 )
            {
              if ( v40 )
              {
                v42 = (unsigned __int64)srca;
                v43 = v104;
                if ( !srca )
                {
                  a7 = 0.0;
                  v122 = 0;
                  v121 = nullptr;
                  sub_2B240((__int64 *)&v121, (__int64)"0x%X", v104);
                  v44 = v79;
                  v45 = "(Unknown)";
LABEL_47:
                  if ( v39 == &byte_4 )
                  {
                    v76 = &::s1;
                    if ( (_QWORD)v122 )
                      v76 = v121;
                    v80 = v44;
                    v39 = v131;
                    qsnprintf(v131, 1024, "Untested relocation type %s for symbol \"%s\"", v76, v45);
                  }
                  else if ( v39 == &byte_5 )
                  {
                    v39 = v131;
                    v80 = v44;
                    qstrncpy(v131, "Relocation to invalid symbol", 1024);
                  }
                  else if ( v39 == (_BYTE *)&dword_0 + 2 )
                  {
                    v75 = &::s1;
                    if ( (_QWORD)v122 )
                      v75 = v121;
                    v80 = v44;
                    v39 = v131;
                    qsnprintf(v131, 1024, "Unknown relocation type %s for symbol \"%s\"", v75, v45);
                  }
                  else if ( v39 == (_BYTE *)&dword_0 + 3 )
                  {
                    v46 = &::s1;
                    if ( (_QWORD)v122 )
                      v46 = v121;
                    v80 = v44;
                    v39 = v131;
                    qsnprintf(v131, 1024, "Unimplemented relocation type %s for symbol \"%s\"", v46, v45);
                  }
                  else
                  {
                    v39 = v131;
                    v80 = v44;
                    qstrncpy(v131, "\aUnsupported patching mode", 1024);
                  }
                  v26 = v80;
                  if ( v121 )
                  {
                    *(_QWORD *)&v122 = 0;
                    qfree(v121);
                    v26 = v80;
                  }
LABEL_56:
                  v47 = 1;
                  if ( *v39 == 7 )
                  {
                    ++v39;
                    v47 = 0;
                  }
LABEL_58:
                  v81 = (const char *)v26;
                  v48 = (const char *)sub_41070(a1, v26, "err-reloc", a7);
                  if ( v48 == (const char *)-1LL )
                    v48 = v81;
                  if ( v31 == -3 )
                  {
                    qsnprintf(v132, 1024, "%s '%s' base 0x%a, offset 0x%llX", v39, v102, a7, v93);
                    append_cmt(v48, v132, 0);
                    if ( (debug & 0x10) != 0 )
                      sub_E950((__int64)"%s '%s' at %a\n", v39, v102, a7);
                  }
                  else if ( v31 == -7 || v47 )
                  {
                    sub_EAA0((__int64)"%a: %s\n", a7, v48);
                    if ( v47 )
                      sub_15250((__int64)"This file contains non standard usage of relocations.");
                  }
                  else if ( (debug & 0x10) != 0 )
                  {
                    sub_E950((__int64)"%s (from %a)\n", v39, a7);
                  }
                  return v133 - __readfsqword(0x28u);
                }
LABEL_86:
                srcd = v43;
                v83 = (void *)v26;
                v53 = sub_49020(v42, (_QWORD *)a2);
                v54 = srcd;
                srcc = v83;
                if ( *(_QWORD *)(v53 + 8) )
                {
                  v45 = *(const char **)v53;
                  v121 = nullptr;
                  v91 = v54;
                  v122 = 0;
                  sub_2B240((__int64 *)&v121, (__int64)"0x%X", v54);
                  v55 = v91;
                  v56 = (unsigned __int64)srcc;
                }
                else
                {
                  v121 = nullptr;
                  v84 = v54;
                  v122 = 0;
                  sub_2B240((__int64 *)&v121, (__int64)"0x%X", v54);
                  v55 = v84;
                  v56 = (unsigned __int64)srcc;
                  v45 = &::s1;
                }
                v100 = v56;
                a7 = 0.0;
                v57 = sub_35F50(a2, v55);
                v124 = 0;
                srce = v57;
                s1 = nullptr;
                v58 = strlen(v57);
                s1 = (char *)qvector_reserve(&s1, 0, v58 + 1, 1);
                *(_QWORD *)&v124 = v58 + 1;
                memmove(s1, srce, v58);
                v44 = v100;
                s1[v58] = 0;
                v59 = s1;
                if ( (unsigned __int64)v124 > 1 )
                {
                  v60 = strcmp(s1, "Unknown");
                  v44 = v100;
                  if ( v60 )
                  {
                    sub_2BDC0((__int64 *)&v121, (__int64)" (%s)", v59);
                    v59 = s1;
                    v44 = v100;
                  }
                }
                if ( v59 )
                {
                  v85 = v44;
                  *(_QWORD *)&v124 = 0;
                  qfree(v59);
                  v44 = v85;
                }
                goto LABEL_47;
              }
              return v133 - __readfsqword(0x28u);
            }
LABEL_141:
            if ( v41 )
              goto LABEL_56;
            return v133 - __readfsqword(0x28u);
          }
          goto LABEL_39;
        }
        if ( *(_BYTE *)(v32 + 92) )
        {
          v33 = v93;
          v127 = v93;
        }
        else
        {
          v51 = *(_BYTE *)(a2 + 511);
          switch ( v51 )
          {
            case 3:
              goto LABEL_83;
            case 9:
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 15 )
              {
LABEL_83:
                v128 = a3[2];
                v31 = 3;
                v127 = 0;
                if ( v34 != -1 )
                  goto LABEL_39;
LABEL_84:
                v82 = v26;
                v105 = v20;
                v129 = 1;
                srcb = (void *)v32;
                v52 = (*(__int64 (__fastcall **)(__int64, int *, __int64, unsigned __int64 *, __int64))(*(_QWORD *)v30 + 24LL))(
                        v30,
                        &v125,
                        v32,
                        a3,
                        a11);
                v26 = v82;
                v39 = (const char *)v52;
                v41 = v52 != 0;
                if ( v52 <= 5 )
                {
                  v42 = (unsigned __int64)srcb;
                  v43 = v105;
                  v31 = 3;
                  if ( v52 )
                    goto LABEL_86;
                }
                v31 = 3;
                goto LABEL_141;
              }
              break;
            case 0:
              goto LABEL_83;
          }
          v34 = v93;
          v127 = v93;
        }
        v34 += v33;
        v31 = 3;
        v128 = v34;
        if ( v34 != -1 )
          goto LABEL_39;
        goto LABEL_84;
      }
    }
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(a2 + 248) )
  {
LABEL_170:
    sub_30AC0();
LABEL_171:
    v77 = (struct _Unwind_Exception *)sub_30AA0(v18);
    if ( v121 )
    {
      *(_QWORD *)&v122 = 0;
      qfree(v121);
    }
    _Unwind_Resume(v77);
  }
  if ( v19 >= v22 )
    v28 = 0;
  else
    v28 = *(_QWORD *)(a2 + 112) + ((unsigned __int64)v19 << 6);
  if ( !v19 || !a6 )
  {
    v26 = (*a3 + v21) & *(_QWORD *)(a2 + 456);
    if ( v26 != -1 )
      goto LABEL_11;
    goto LABEL_23;
  }
  if ( *(_WORD *)(a2 + 520) == 1 )
  {
    if ( v28 )
    {
      if ( *a3 < *(_QWORD *)(v28 + 32) )
      {
        v26 = *(_QWORD *)(a2 + 456) & (*(_QWORD *)(v28 + 16) + *a3);
        if ( v26 != -1 )
          goto LABEL_94;
      }
    }
  }
  else
  {
    v112 = v28;
    v106 = v20;
    v18 = *(_QWORD *)(a2 + 456) & (v21 + *a3);
    v63 = getseg(v18);
    v26 = v18;
    v20 = v106;
    v66 = (_QWORD *)v63;
    if ( v63 )
    {
      if ( v18 < *(_QWORD *)(a1 + 312) )
      {
        v67 = *(unsigned int *)(a2 + 168);
        v130[0] = v112;
        if ( !(_DWORD)v67 )
          goto LABEL_139;
        if ( *(_BYTE *)(a2 + 248) )
        {
          if ( v67 < *(_QWORD *)(a2 + 120) )
          {
            v68 = *(_QWORD *)(a2 + 112) + (v67 << 6);
            goto LABEL_118;
          }
LABEL_139:
          v68 = 0;
LABEL_118:
          v130[1] = v68;
          v69 = v130;
          while ( 1 )
          {
            v70 = *(_QWORD *)v69;
            if ( *(_QWORD *)v69 )
            {
              v71 = *(_QWORD *)(v70 + 16);
              v72 = *(_QWORD *)(a2 + 456);
              if ( *v66 == (v72 & (v21 + v71)) && *a3 < (v72 & (unsigned __int64)(*(_QWORD *)(v70 + 32) + v71)) )
                break;
            }
            v69 += 8;
            if ( v69 == v131 )
              goto LABEL_23;
          }
LABEL_94:
          if ( !v20 && !v26 )
          {
LABEL_13:
            if ( (debug & 0x10) != 0 )
              return sub_E950((__int64)"(%s, %d): ld-removed relocation\n", a10, (unsigned int)(a5 + 1));
            return v133 - __readfsqword(0x28u);
          }
          goto LABEL_96;
        }
        goto LABEL_170;
      }
    }
    else if ( *a3 < *(_QWORD *)(a1 + 504) )
    {
      if ( (debug & 0x10) == 0 )
        return v133 - __readfsqword(0x28u);
      return sub_E950((__int64)"Skip relocation in stub\n", a3, v64, v112, v65, v18);
    }
  }
LABEL_23:
  if ( (debug & 0x10) == 0 )
    return v133 - __readfsqword(0x28u);
  return sub_E950((__int64)"(%s, %d): illegal relocation address\n", a10, (unsigned int)(a5 + 1));
}

