__int64 __fastcall sub_68A440(__m128i *a1, __int64 a2, unsigned __int64 a3, int a4, _QWORD *a5, char a6)
{
  __int64 v6; // r15
  __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rbp
  const char *v19; // r15
  __int64 v20; // rax
  unsigned int v21; // eax
  const char *i; // rdi
  const char *v23; // rsi
  __int64 name_ea; // rax
  char v25; // al
  char *v26; // rax
  int v27; // r13d
  char *v28; // r14
  unsigned __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 *v34; // r15
  __int64 v35; // rax
  char *v36; // rbp
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  const char *v40; // rcx
  int v41; // r15d
  unsigned __int8 default_reftype; // al
  int v43; // r8d
  int v44; // r9d
  const char *v45; // rcx
  unsigned int v47; // eax
  char v48; // al
  char *v49; // rdi
  const char *v50; // rcx
  char *v51; // rbp
  unsigned __int64 v52; // r14
  unsigned __int64 *v53; // rbx
  unsigned __int64 v54; // rax
  __int64 v55; // r15
  char *v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  char *v59; // r15
  char *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 *v69; // rax
  unsigned __int64 *v70; // rax
  int v71; // eax
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // r9
  const char *v79; // rsi
  const char *v80; // rcx
  unsigned int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // [rsp+0h] [rbp-6E8h]
  __int64 v87; // [rsp+8h] [rbp-6E0h]
  int v88; // [rsp+10h] [rbp-6D8h]
  __int64 *p_s1; // [rsp+10h] [rbp-6D8h]
  char *v90; // [rsp+18h] [rbp-6D0h]
  bool v91; // [rsp+20h] [rbp-6C8h]
  __int64 v92; // [rsp+20h] [rbp-6C8h]
  _QWORD *v93; // [rsp+28h] [rbp-6C0h]
  char *v94; // [rsp+30h] [rbp-6B8h]
  int v95; // [rsp+38h] [rbp-6B0h]
  int v96; // [rsp+40h] [rbp-6A8h]
  int v97; // [rsp+44h] [rbp-6A4h]
  int v98; // [rsp+44h] [rbp-6A4h]
  int v99; // [rsp+44h] [rbp-6A4h]
  char *v100; // [rsp+48h] [rbp-6A0h]
  __int64 v101; // [rsp+50h] [rbp-698h]
  _QWORD *v102; // [rsp+58h] [rbp-690h]
  const char *v103; // [rsp+60h] [rbp-688h]
  __int64 v104; // [rsp+68h] [rbp-680h]
  int v105; // [rsp+70h] [rbp-678h]
  __int64 v106; // [rsp+78h] [rbp-670h] BYREF
  void *ptr; // [rsp+80h] [rbp-668h] BYREF
  int v108[4]; // [rsp+88h] [rbp-660h]
  int v109; // [rsp+98h] [rbp-650h]
  char *s1; // [rsp+A0h] [rbp-648h] BYREF
  __int128 v111; // [rsp+A8h] [rbp-640h]
  __int64 v112; // [rsp+B8h] [rbp-630h]
  __int64 v113; // [rsp+C0h] [rbp-628h]
  int v114; // [rsp+C8h] [rbp-620h]
  __int128 v115; // [rsp+D0h] [rbp-618h]
  __int64 v116; // [rsp+E0h] [rbp-608h]
  __int64 v117; // [rsp+E8h] [rbp-600h]
  int v118; // [rsp+F0h] [rbp-5F8h]
  __int64 v119; // [rsp+F8h] [rbp-5F0h]
  int v120; // [rsp+100h] [rbp-5E8h]
  __int64 v121; // [rsp+108h] [rbp-5E0h]
  int v122; // [rsp+110h] [rbp-5D8h]
  __int64 v123; // [rsp+118h] [rbp-5D0h]
  int v124; // [rsp+120h] [rbp-5C8h]
  __int64 v125; // [rsp+128h] [rbp-5C0h]
  __int128 v126; // [rsp+130h] [rbp-5B8h] BYREF
  __int64 v127; // [rsp+140h] [rbp-5A8h]
  __int64 v128; // [rsp+148h] [rbp-5A0h]
  __int64 v129; // [rsp+150h] [rbp-598h]
  char v130; // [rsp+158h] [rbp-590h] BYREF
  char v131; // [rsp+298h] [rbp-450h] BYREF
  char v132[1032]; // [rsp+2A0h] [rbp-448h] BYREF
  unsigned __int64 v133; // [rsp+6A8h] [rbp-40h]

  v6 = a4;
  v8 = a5[2];
  v87 = a2;
  v90 = (char *)a3;
  v93 = a5;
  HIBYTE(v96) = a6;
  v133 = __readfsqword(0x28u);
  LODWORD(v101) = v8;
  v102 = *(_QWORD **)(a1->m128i_i64[0] + 1776);
  if ( (debug & 4) != 0 )
    sub_3879F0();
  v88 = v8;
  v9 = sub_505D70((__int64)&a1[101].m128i_i64[1], a3);
  if ( !v9 || v9[1] < (unsigned __int64)&v90[*(unsigned int *)v93] )
    return 1;
  v10 = v93[1];
  v11 = v88;
  if ( v88 > 0 )
  {
    v95 = v88;
    v97 = v6;
    v91 = (_DWORD)v6 != 0;
    v12 = v10 + 32 * ((unsigned int)(v88 - 1) + 1LL);
    v94 = &v90[-(int)v6];
    while ( 1 )
    {
      s1 = v90;
      if ( !*(_DWORD *)(v10 + 24) && v91 )
        s1 = v94;
      v13 = sub_3792E0(0x48u, v87, v10, &s1);
      v18 = s1;
      if ( v13 != 1 )
        v18 = &s1[*(int *)(v10 + 24)];
      v19 = *(const char **)v10;
      v20 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)(*(_QWORD *)v10 + 1LL) )
        break;
      if ( v20 )
      {
        if ( *v19 != 46 && *v19 != 63 )
          goto LABEL_15;
      }
      else if ( byte_2CCB1E1 != 63 && byte_2CCB1E1 != 46 )
      {
        goto LABEL_23;
      }
LABEL_29:
      v10 += 32;
      if ( v10 == v12 )
      {
        v11 = v88;
        v6 = v97;
        v10 = v93[1];
        goto LABEL_31;
      }
    }
    if ( v20 )
    {
LABEL_15:
      if ( !strncmp(*(const char **)v10, "W?$Wcm", 6u) )
      {
        v21 = v19[6];
        for ( i = v19 + 6; v21 <= 0x7F; v21 = *++i )
        {
          if ( v21 - 48 > 9 )
            break;
        }
        if ( !strcmp(i, "$nx[]uc") )
          return 1;
      }
      if ( !strncmp(v19, "@$xp$", 5u) )
      {
        v14 = *(unsigned int *)(v10 + 24);
        if ( (_DWORD)v14 != -4
          || (v47 = sub_3BEEF0(a1, (unsigned __int64)v18),
              v15 = (__int64)(v18 + 4),
              v14 = *(unsigned int *)(v10 + 24),
              (char *)v47 == v18 + 4) )
        {
          if ( !(_DWORD)v14 )
          {
            v41 = (_DWORD)v18 - 4;
            if ( (char *)(unsigned int)sub_3BEEF0(a1, (unsigned __int64)(v18 - 4)) == v18 )
            {
              *(_DWORD *)(v10 + 24) -= 4;
              v18 -= 4;
              default_reftype = get_default_reftype(v18);
              op_offset(v41, 0, default_reftype, -1, 0, 0);
            }
          }
        }
        else
        {
          v14 = (unsigned int)(v14 + 4);
          v18 += 4;
          *(_DWORD *)(v10 + 24) = v14;
        }
      }
    }
LABEL_23:
    if ( (sub_631AD0(a1->m128i_i64[0], 10, v14, v15, v16, v17) & 0x2000000) == 0 )
    {
      v23 = haystack;
      if ( *(_QWORD *)(v10 + 8) )
        v23 = *(const char **)v10;
      name_ea = get_name_ea(-1, v23);
      if ( name_ea != -1 && v18 != (char *)name_ea )
      {
        if ( (debug & 4) != 0 )
          sub_3879F0();
        sub_4F2EF0(a1, 0xFu, (__int64)v18, 0);
        if ( (sub_3BE900(a1, (unsigned __int64)v18, 4) & 0x800) == 0 )
        {
          v45 = haystack;
          if ( *(_QWORD *)(v10 + 8) )
            v45 = *(const char **)v10;
          qsnprintf((unsigned int)v132, 1024, (unsigned int)"FLAIR COLLISION WITH: %s", (_DWORD)v45, v43, v44);
          sub_3D0F60(a1, v18, v132, 0);
        }
        return 1;
      }
    }
    if ( (sub_3BE900(a1, (unsigned __int64)v18, 4) & 0x600) == 0x200 )
    {
      if ( (debug & 4) != 0 )
        sub_3879F0();
      return 1;
    }
    goto LABEL_29;
  }
LABEL_31:
  v25 = *(_BYTE *)(v10 + 28);
  v127 = -1;
  v128 = 0;
  v129 = 0;
  LOBYTE(v95) = v25 & 4;
  v26 = &v130;
  v126 = -1;
  do
  {
    *(_WORD *)v26 = 0;
    v26 += 40;
    *((_WORD *)v26 - 19) = 0;
    *((_WORD *)v26 - 18) = 0;
    *((_DWORD *)v26 - 2) = 0;
    *((_WORD *)v26 - 17) = 0;
    *((_OWORD *)v26 - 2) = 0;
    *((_QWORD *)v26 - 2) = 0;
  }
  while ( &v131 != v26 );
  if ( v11 <= 0 )
  {
    v98 = 0;
LABEL_99:
    v51 = &v90[*(unsigned int *)v93];
    if ( v90 < v51 )
    {
      v52 = (unsigned __int64)v90;
      do
      {
        v53 = sub_505D70((__int64)&a1[106].m128i_i64[1], v52);
        if ( !v53 )
        {
          v81 = sub_503F40((__int64)&a1[106].m128i_i64[1], v52);
          v53 = sub_505DE0((__int64)&a1[106].m128i_i64[1], v81);
          if ( !v53 )
            break;
        }
        v54 = v53[2];
        if ( (v54 & 0x8000) != 0 || *v53 >= (unsigned __int64)v51 )
          break;
        if ( (v54 & 4) == 0 )
        {
          set_abits(*v53, 1024);
          v53[2] |= 4u;
          if ( (sub_631AD0(a1->m128i_i64[0], 10, v82, v83, v84, v85) & 0x4000000) != 0 )
            v53[2] |= 0x40u;
          sub_5C77B0((__int64)a1, v53, 0);
          mark_builtin_widgets(8, 0, 1);
        }
        v52 = v53[1];
      }
      while ( v52 < (unsigned __int64)v51 );
      v51 = &v90[*(unsigned int *)v93];
    }
    sub_3A4190((__int64)a1, v90, v51, 0x3Cu);
    if ( *v102 == v87 )
    {
      sub_6887B0(a1, v98);
      mark_builtin_widgets(256, 0, 1);
    }
    return 0;
  }
  v98 = 0;
  LOBYTE(v94) = (_DWORD)v6 != 0;
  HIBYTE(v101) = v11 == 1;
  v92 = v10 + 32 * ((unsigned int)(v11 - 1) + 1LL);
  BYTE6(v101) = v11 == 1 && haystack == nullptr;
  p_s1 = (__int64 *)&s1;
  v100 = &v90[-v6];
  while ( 1 )
  {
    s1 = v90;
    if ( !*(_DWORD *)(v10 + 24) && (_BYTE)v94 )
      s1 = v100;
    v35 = sub_3792E0(0x48u, v87, v10, p_s1, 0.0);
    v36 = s1;
    if ( v35 != 1 )
      v36 = &s1[*(int *)(v10 + 24)];
    v37 = sub_3BE900(a1, (unsigned __int64)v36, 4);
    ptr = nullptr;
    v27 = v37;
    *(_OWORD *)v108 = 0;
    if ( v90 == v36 && HIBYTE(v96) )
    {
      sub_577F80(a1, v36, nullptr);
      v27 = sub_3BE900(a1, (unsigned __int64)v36, 4);
      v28 = nullptr;
      goto LABEL_37;
    }
    if ( !*(_QWORD *)(v10 + 8) )
    {
      v48 = BYTE6(v101);
      v28 = (char *)haystack;
      goto LABEL_81;
    }
    v28 = *(char **)v10;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 1LL) )
      break;
LABEL_140:
    v48 = HIBYTE(v101) & (v28 == nullptr);
LABEL_81:
    if ( v48 )
      goto LABEL_110;
    if ( (v27 & 0xC000) != 0x4000 )
      goto LABEL_55;
    s1 = nullptr;
    v111 = 0;
    if ( !v28 )
      goto LABEL_148;
LABEL_84:
    if ( get_ea_name(p_s1, v36, 0, 0) > 0 )
    {
      v49 = (char *)haystack;
      if ( (_QWORD)v111 )
        v49 = s1;
      if ( strcmp(v49, v28) )
        goto LABEL_88;
    }
LABEL_91:
    if ( (get_aflags(v36) & 0x400) == 0 )
    {
      v50 = haystack;
      if ( *(_QWORD *)(v87 + 64) )
        v50 = *(const char **)(v87 + 56);
      sub_39ADA0(0x54u, v36, v28, v50);
      ++v98;
    }
    if ( s1 )
    {
      *(_QWORD *)&v111 = 0;
      qfree(s1);
    }
LABEL_37:
    set_abits(v36, 1024);
    if ( (*(_BYTE *)(v10 + 28) & 1) == 0 )
    {
      if ( (v27 & 0x600) == 0 )
      {
        if ( (unsigned int)get_mangled_name_type(v28)
          && (!(unsigned int)decode_insn(&v126, v36, v61, v62, v63, v64, 0.0) || sub_3792E0(0x24u, &v126, 0) <= 50)
          || (sub_577F80(a1, v36, nullptr), v27 = sub_3BE900(a1, (unsigned __int64)v36, 4), (v27 & 0x600) == 0) )
        {
          if ( !(unsigned int)decode_insn(&v126, v36, v65, v66, v67, v68, 0.0) || sub_3792E0(0x24u, &v126, 0) <= 50 )
            goto LABEL_129;
          sub_577F80(a1, v36, nullptr);
          v27 = sub_3BE900(a1, (unsigned __int64)v36, 4);
        }
      }
      v29 = sub_5CAA10((__int64)a1, (unsigned __int64)v36);
      v34 = v29;
      if ( v29 )
      {
        if ( (char *)*v29 != v36 )
          goto LABEL_41;
LABEL_131:
        v34[2] |= 4u;
        if ( (sub_631AD0(a1->m128i_i64[0], 10, v30, v31, v32, v33) & 0x4000000) != 0 )
          sub_5CB660((__int64)a1, (__int64)v34, 0);
        if ( (*(_BYTE *)(v10 + 28) & 2) != 0 )
          v34[2] |= 8u;
        v70 = sub_505D70((__int64)&a1[106].m128i_i64[1], (unsigned __int64)v36);
        if ( v70 && *((char *)v70 + 17) >= 0 && !(unsigned __int8)sub_5CA280(a1->m128i_i64[0], (__int64 *)v34, -1, v28) )
          sub_5C77B0((__int64)a1, v34, 0);
        mark_builtin_widgets(8, 0, 1);
        goto LABEL_41;
      }
      if ( (~v27 & 0x600) != 0 || sub_3792E0(0x47u, v36, v28) )
      {
LABEL_41:
        if ( ptr )
        {
          *(_QWORD *)v108 = 0;
          qfree(ptr);
        }
        goto LABEL_43;
      }
      s1 = v36;
      *(_QWORD *)&v111 = -1;
      *((_QWORD *)&v111 + 1) = 512;
      v112 = -1;
      v113 = 0;
      LOWORD(v114) = 0;
      v116 = 0xFFFFFFFFLL;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v123 = 0;
      v124 = 0;
      v125 = 0;
      v115 = 0;
      add_func_ex((int)p_s1);
LABEL_129:
      v69 = sub_5CAA10((__int64)a1, (unsigned __int64)v36);
      v34 = v69;
      if ( v69 && (char *)*v69 == v36 )
        goto LABEL_131;
      goto LABEL_41;
    }
    if ( ptr )
    {
      *(_QWORD *)v108 = 0;
      v10 += 32;
      qfree(ptr);
      if ( v10 == v92 )
        goto LABEL_99;
    }
    else
    {
LABEL_43:
      v10 += 32;
      if ( v10 == v92 )
        goto LABEL_99;
    }
  }
  if ( *v28 != 63 )
  {
    if ( *v28 == 46 )
    {
      v28 = (char *)(v87 + 22);
      if ( (v37 & 0xC000) != 0x4000 )
      {
LABEL_55:
        if ( (debug & 4) != 0 )
          sub_3879F0();
        sub_61B5E0(a1->m128i_i64[0], v36, (__int64)v28);
        if ( !(_BYTE)v95 )
        {
          if ( v28 )
          {
            sub_4D7EC0(
              a1->m128i_i64,
              (__int64)v36,
              v28,
              0x1800u,
              v38,
              v39,
              v86,
              v87,
              (int)p_s1,
              (int)v90,
              v92,
              v93,
              (__int64)v94,
              v95,
              v96,
              v100,
              v101,
              (int)v102,
              (int)v103,
              v104,
              v105,
              v106,
              (int)ptr,
              v108[0],
              *(__int64 *)&v108[2],
              v109,
              (int)s1,
              v111,
              SDWORD2(v111),
              v112,
              v113,
              v114,
              v115,
              SDWORD2(v115),
              v116);
          }
          else
          {
            v71 = sub_7BE710(&a1[172].m128i_u64[1], a1->m128i_i64[0], 0, 65);
            v72 = a1->m128i_i64[0];
            v106 = (unsigned int)(v71 + 1);
            sub_7BE7C0(&a1[172].m128i_u64[1], v72, 0, &v106, 8, 65);
            sub_35A790((char **)&ptr);
            v28 = (char *)ptr;
            if ( (sub_631AD0(a1->m128i_i64[0], 10, v73, v74, v75, v76) & 0x1000000) != 0 )
            {
              v79 = haystack;
              if ( *(_QWORD *)(v87 + 64) )
                v79 = *(const char **)(v87 + 56);
              append_cmt(v36, v79, 1u);
            }
            sub_4D7EC0(
              a1->m128i_i64,
              (__int64)v36,
              v28,
              0x1800u,
              v77,
              v78,
              v86,
              v87,
              (int)p_s1,
              (int)v90,
              v92,
              v93,
              (__int64)v94,
              v95,
              v96,
              v100,
              v101,
              (int)v102,
              (int)v103,
              v104,
              v105,
              v106,
              (int)ptr,
              v108[0],
              *(__int64 *)&v108[2],
              v109,
              (int)s1,
              v111,
              SDWORD2(v111),
              v112,
              v113,
              v114,
              v115,
              SDWORD2(v115),
              v116);
            sub_4CE550(a1->m128i_i64, v36);
          }
          v40 = haystack;
          if ( *(_QWORD *)(v87 + 64) )
            v40 = *(const char **)(v87 + 56);
          sub_39ADA0(0x54u, v36, v28, v40);
          v98 = v99 + 1;
          goto LABEL_37;
        }
        if ( !v28 )
          goto LABEL_37;
        s1 = nullptr;
        v111 = 0;
        v55 = sub_3C33E0(a1, p_s1, (unsigned __int64)v36);
        if ( v55 <= 0 )
          goto LABEL_159;
        v56 = (char *)haystack;
        if ( (_QWORD)v111 )
          v56 = s1;
        v104 = v111;
        v103 = v56;
        v57 = strstr(v56, v28);
        if ( !v57 || (v58 = v104, v57 - v103 == -1) )
        {
LABEL_159:
          append_cmt(v36, v28, 1u);
          v80 = haystack;
          if ( *(_QWORD *)(v87 + 64) )
            v80 = *(const char **)(v87 + 56);
          sub_39ADA0(0x54u, v36, v28, v80);
          ++v98;
          if ( v55 > 0 )
          {
            v58 = v111;
            goto LABEL_121;
          }
        }
        else
        {
LABEL_121:
          if ( v58 )
          {
            v59 = s1;
            v103 = "doubtful name";
            v60 = strstr(s1, "doubtful name");
            if ( v60 )
            {
              if ( v60 - v59 != -1 )
              {
LABEL_124:
                if ( v59 )
                {
                  *(_QWORD *)&v111 = 0;
                  qfree(v59);
                }
                goto LABEL_37;
              }
            }
          }
        }
        append_cmt(v36, "doubtful name", 1u);
        v59 = s1;
        goto LABEL_124;
      }
      s1 = nullptr;
      v111 = 0;
      goto LABEL_84;
    }
    goto LABEL_140;
  }
  if ( (_DWORD)v101 != 1 )
  {
LABEL_54:
    v28 = nullptr;
    if ( (v27 & 0xC000) != 0x4000 )
      goto LABEL_55;
    s1 = nullptr;
    v111 = 0;
LABEL_148:
    v28 = nullptr;
LABEL_88:
    if ( sub_687AF0((unsigned __int64)v90, (unsigned int *)v93) <= 15
      && ((*(_BYTE *)(v10 + 28) & 1) != 0 || (~(_WORD)v27 & 0x600) == 0 && (v27 & 0x10000000) != 0) )
    {
      if ( (debug & 4) != 0 )
        sub_3879F0();
      if ( s1 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(s1);
      }
      goto LABEL_113;
    }
    goto LABEL_91;
  }
LABEL_110:
  if ( sub_687AF0((unsigned __int64)v90, (unsigned int *)v93) > 7 )
    goto LABEL_54;
  if ( (debug & 4) != 0 )
    sub_3879F0();
LABEL_113:
  if ( ptr )
  {
    *(_QWORD *)v108 = 0;
    qfree(ptr);
  }
  return 1;
}
