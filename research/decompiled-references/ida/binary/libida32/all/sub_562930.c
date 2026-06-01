__int64 __fastcall sub_562930(__int64 a1, unsigned __int8 *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int8 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r13
  int v11; // r14d
  __int64 v12; // rdx
  char v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r14d
  unsigned int v17; // ecx
  int v18; // eax
  char v19; // r8
  __int16 v20; // ax
  unsigned __int8 v21; // al
  bool v22; // cc
  unsigned __int64 v23; // r13
  __int64 v24; // rcx
  unsigned __int8 v25; // r8
  unsigned int v26; // edx
  unsigned int radix; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rbx
  signed __int8 v31; // al
  _DWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  __int16 *v38; // r14
  __int64 v39; // rax
  __int64 custom_data_format; // rax
  unsigned int v41; // r14d
  __int64 v42; // rax
  void **p_src; // rdx
  __int64 v44; // rax
  void *v45; // rax
  const char *v46; // rsi
  char v47; // al
  int v48; // eax
  unsigned __int8 v50; // al
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdi
  _BOOL4 v54; // r14d
  int offset_expr; // r9d
  unsigned int *v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rdx
  char v59; // al
  __int64 v60; // rdx
  int v61; // r9d
  __int64 (__fastcall *v62)(_QWORD *, char); // rcx
  int v63; // edi
  void (__fastcall *v64)(__int64, char *, _QWORD); // rax
  char *v65; // rsi
  __int64 (__fastcall *v66)(_QWORD *, char); // rdx
  int v67; // edx
  int v68; // eax
  int v69; // edx
  __int64 v70; // r9
  _DWORD *v71; // r9
  int v72; // eax
  __int64 v73; // r12
  __int64 tinfo_property; // rax
  size_t v75; // r12
  __int64 v76; // r13
  size_t v77; // rdx
  bool v78; // r13
  __int64 v79; // rax
  __int64 v80; // r12
  _BYTE *v81; // rsi
  __int64 v82; // rdx
  unsigned int *v83; // rax
  unsigned int v84; // eax
  int v85; // eax
  __int64 (__fastcall *v86)(_QWORD *, char); // rax
  _DWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  int v90; // r15d
  __int64 func; // rax
  __int64 v92; // rsi
  int effective_spd; // eax
  __int64 v94; // rcx
  unsigned int v95; // r10d
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 (__fastcall *v98)(_QWORD *, char); // rax
  char *v99; // r15
  __int64 v100; // rdx
  __int64 (__fastcall *v101)(_QWORD *, char); // rax
  __int64 (__fastcall *v102)(_QWORD *, char); // rax
  int v103; // eax
  unsigned __int64 v104; // rdx
  __int64 (__fastcall *v106)(_QWORD *, char); // rax
  char *v107; // r12
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned __int64 v110; // rdx
  char *v111; // rsi
  char *v112; // rax
  __int64 (__fastcall *v113)(_QWORD *, char); // rax
  unsigned int v114; // esi
  char v115; // al
  unsigned int *v116; // rdx
  unsigned int v117; // ecx
  __int64 v118; // rax
  const char *v119; // rsi
  __int64 v120; // rdx
  __int64 tinfo_size; // rax
  int v122; // r8d
  void *v123; // rcx
  char aflags; // al
  __int64 v125; // r12
  char *v126; // r12
  char v127; // [rsp+0h] [rbp-6B0h]
  unsigned __int8 v128; // [rsp+7h] [rbp-6A9h]
  unsigned __int8 v129; // [rsp+8h] [rbp-6A8h]
  char v130; // [rsp+10h] [rbp-6A0h]
  unsigned int v131; // [rsp+10h] [rbp-6A0h]
  char v132; // [rsp+10h] [rbp-6A0h]
  int tinfo_tid; // [rsp+10h] [rbp-6A0h]
  __int64 v134; // [rsp+10h] [rbp-6A0h]
  int v135; // [rsp+18h] [rbp-698h]
  __int64 v136; // [rsp+18h] [rbp-698h]
  _DWORD *v137; // [rsp+18h] [rbp-698h]
  unsigned __int8 v138; // [rsp+20h] [rbp-690h]
  unsigned int v139; // [rsp+20h] [rbp-690h]
  __int64 v140; // [rsp+20h] [rbp-690h]
  __int64 v141; // [rsp+20h] [rbp-690h]
  int stroff_path; // [rsp+20h] [rbp-690h]
  unsigned int v143; // [rsp+20h] [rbp-690h]
  size_t v144; // [rsp+20h] [rbp-690h]
  int v145; // [rsp+28h] [rbp-688h]
  int v146; // [rsp+28h] [rbp-688h]
  unsigned int v147; // [rsp+28h] [rbp-688h]
  unsigned __int8 v148; // [rsp+28h] [rbp-688h]
  __int64 v149; // [rsp+30h] [rbp-680h]
  int v150; // [rsp+30h] [rbp-680h]
  _DWORD *v151; // [rsp+30h] [rbp-680h]
  _DWORD *v152; // [rsp+30h] [rbp-680h]
  _DWORD *v153; // [rsp+30h] [rbp-680h]
  int v154; // [rsp+30h] [rbp-680h]
  __int64 v155; // [rsp+30h] [rbp-680h]
  unsigned __int64 v156; // [rsp+30h] [rbp-680h]
  __int64 v157; // [rsp+38h] [rbp-678h]
  unsigned int v158; // [rsp+40h] [rbp-670h]
  char v159; // [rsp+40h] [rbp-670h]
  unsigned int v160; // [rsp+48h] [rbp-668h]
  unsigned __int8 v161; // [rsp+57h] [rbp-659h] BYREF
  unsigned int v162; // [rsp+58h] [rbp-658h] BYREF
  int v163; // [rsp+5Ch] [rbp-654h] BYREF
  char v164[4]; // [rsp+60h] [rbp-650h] BYREF
  int v165; // [rsp+64h] [rbp-64Ch] BYREF
  unsigned __int64 v166; // [rsp+68h] [rbp-648h] BYREF
  __int64 item_flag; // [rsp+70h] [rbp-640h] BYREF
  const char *v168; // [rsp+78h] [rbp-638h] BYREF
  char *s; // [rsp+80h] [rbp-630h] BYREF
  __int128 v170; // [rsp+88h] [rbp-628h]
  void *ptr; // [rsp+A0h] [rbp-610h] BYREF
  __int128 v172; // [rsp+A8h] [rbp-608h]
  void *src; // [rsp+C0h] [rbp-5F0h] BYREF
  void *v174[2]; // [rsp+C8h] [rbp-5E8h]
  __int128 v175; // [rsp+D8h] [rbp-5D8h]
  void *v176; // [rsp+E8h] [rbp-5C8h]
  __int128 v177; // [rsp+F0h] [rbp-5C0h]
  _OWORD v178[2]; // [rsp+100h] [rbp-5B0h] BYREF
  __int64 v179; // [rsp+120h] [rbp-590h]
  int v180; // [rsp+128h] [rbp-588h]
  __int64 v181; // [rsp+130h] [rbp-580h]
  char v182; // [rsp+138h] [rbp-578h]
  _DWORD v183[32]; // [rsp+140h] [rbp-570h] BYREF
  __int64 opinfo; // [rsp+1C0h] [rbp-4F0h]
  _BYTE v185[136]; // [rsp+1C8h] [rbp-4E8h] BYREF
  unsigned int v186; // [rsp+250h] [rbp-460h]
  __int64 v187; // [rsp+258h] [rbp-458h]
  unsigned int v188; // [rsp+260h] [rbp-450h]
  char v189; // [rsp+264h] [rbp-44Ch]
  _BYTE v190[1032]; // [rsp+270h] [rbp-440h] BYREF
  unsigned __int64 v191; // [rsp+678h] [rbp-38h]

  v160 = a3;
  v191 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
    v6 = *(_QWORD *)(a1 + 528);
  else
    v6 = *(unsigned int *)(a1 + 60);
  opinfo = a4;
  v7 = *(unsigned int *)(a1 + 16);
  v8 = 1;
  v187 = v6;
  v9 = *a2;
  v186 = v7;
  v189 = 0;
  v188 = v9;
  v145 = a3 & 0x100;
  v10 = *(_QWORD *)(qword_2CA1698 + 1480);
  v157 = qword_2CA1698;
  s = nullptr;
  v158 = v9 | v145;
  v135 = a3 & 4;
  v170 = 0;
  if ( !v135 )
  {
    v50 = is_stkvar(v6, v9 | v145);
    v7 = *(unsigned int *)(a1 + 16);
    v8 = v50;
  }
  v11 = (v160 >> 3) & 1;
  v162 = sub_5605C0(v10, v7, (__int64)a2, v160, v8, &v161, &v166);
  if ( (a2[4] & 0x10) != 0 )
    LOBYTE(v11) = 1;
  item_flag = 0;
  v149 = v157 + 904;
  if ( (unsigned __int8)is_defarg(v6, v158) )
  {
    if ( v161 <= 0x12u )
    {
      v12 = 294968;
      if ( _bittest64(&v12, v161) )
      {
        if ( !(unsigned __int8)is_fltnum(v6, v158) )
          v161 = 10;
      }
    }
  }
  v13 = is_fltnum(v6, v158);
  if ( !v13 )
  {
    if ( (_BYTE)v11 )
    {
      if ( !(unsigned __int8)is_stkvar(v6, v158) )
        goto LABEL_59;
      goto LABEL_75;
    }
    if ( !(unsigned __int8)is_off(v6, v158) )
    {
LABEL_43:
      if ( !(unsigned __int8)is_stkvar(v6, v158) )
      {
        if ( (unsigned __int8)is_seg(v6, *a2) )
        {
          v31 = a2[2];
          if ( v145 )
            v31 = a2[3];
          if ( sub_4F9D30((__int64)&s, *(_DWORD *)(a1 + 16) + v31, v162) >= 0 )
          {
            v32 = *(_DWORD **)(a1 + 64);
            v33 = v162;
            v34 = *a2;
            if ( v32 )
            {
              *(_QWORD *)(a1 + 64) = v32 + 1;
              *v32 = v33;
            }
            if ( (*(_BYTE *)(a1 + 146) & 1) == 0 )
            {
LABEL_53:
              if ( (v160 & 3) != 2 )
                goto LABEL_54;
              goto LABEL_236;
            }
            if ( (unsigned __int8)v34 <= 7u )
            {
              *(_DWORD *)(a1 + 4 * v34 + 488) = v33;
              goto LABEL_53;
            }
            if ( !under_debugger )
              interr(2030);
LABEL_318:
            BUG();
          }
LABEL_82:
          *(_DWORD *)(a1 + 56) = 2;
          goto LABEL_18;
        }
LABEL_59:
        if ( !(unsigned __int8)is_custfmt(v6, *a2) )
          goto LABEL_18;
        v38 = (__int16 *)opinfo;
        if ( !v189 )
        {
          if ( opinfo )
          {
            v189 = 1;
            goto LABEL_62;
          }
          opinfo = get_opinfo(v185, v186, v188, v187);
          v38 = (__int16 *)opinfo;
          v189 = 1;
        }
        if ( !v38 )
          goto LABEL_18;
LABEL_62:
        if ( (unsigned __int8)is_attached_custom_data_format((unsigned int)*v38, (unsigned int)v38[*a2 + 1]) )
        {
          v39 = *a2;
          ptr = nullptr;
          v172 = 0;
          custom_data_format = get_custom_data_format((unsigned int)v38[v39 + 1]);
          if ( custom_data_format
            && (*(unsigned __int8 (__fastcall **)(_QWORD, void **, unsigned __int8 *, _QWORD, _QWORD, _QWORD, _QWORD))(custom_data_format + 56))(
                 *(_QWORD *)(custom_data_format + 8),
                 &ptr,
                 a2 + 8,
                 (unsigned int)v166,
                 *(unsigned int *)(a1 + 16),
                 *a2,
                 (unsigned int)*v38) )
          {
            v116 = *(unsigned int **)(a1 + 64);
            v117 = v162;
            v118 = *a2;
            if ( v116 )
            {
              *(_QWORD *)(a1 + 64) = v116 + 1;
              *v116 = v117;
            }
            if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
            {
              if ( (unsigned __int8)v118 > 7u )
              {
                if ( !under_debugger )
                  interr(2030);
                goto LABEL_318;
              }
              *(_DWORD *)(a1 + 4 * v118 + 488) = v117;
            }
            v119 = haystack;
            v120 = 31;
            if ( (~BYTE1(v6) & 6) == 0 )
              v120 = 12;
            if ( (_QWORD)v172 )
              v119 = (const char *)ptr;
            (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v119, v120);
            v30 = item_flag;
            if ( ptr )
            {
              *(_QWORD *)&v172 = 0;
              qfree(ptr);
            }
            goto LABEL_88;
          }
          if ( ptr )
          {
            *(_QWORD *)&v172 = 0;
            qfree(ptr);
          }
        }
        goto LABEL_82;
      }
LABEL_75:
      v44 = *(_QWORD *)a1;
      v168 = nullptr;
      v45 = (void *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD, int *, char *, const char **))(v44 + 232))(
                      a1,
                      a2,
                      v162,
                      &v163,
                      v164,
                      &v168);
      if ( v45 == (void *)-1LL )
      {
LABEL_81:
        clear_tinfo_t(&v168);
        goto LABEL_82;
      }
      v46 = v168;
      v174[0] = nullptr;
      v174[1] = nullptr;
      v176 = nullptr;
      v179 = 1;
      v180 = -1;
      v181 = 0;
      v182 = 0;
      src = v45;
      v175 = 0;
      v177 = 0;
      v178[0] = 0;
      find_tinfo_udt_member((int)&src);
      if ( (v181 & 0x300000000000LL) != 0 )
      {
        clear_tinfo_t(v178);
        if ( v176 )
        {
          *(_QWORD *)&v177 = 0;
          qfree(v176);
        }
        if ( v174[1] )
        {
          *(_QWORD *)&v175 = 0;
          qfree(v174[1]);
        }
        goto LABEL_81;
      }
      v87 = *(_DWORD **)(a1 + 64);
      v88 = v162;
      v89 = *a2;
      if ( v87 )
      {
        v46 = (const char *)(v87 + 1);
        *(_QWORD *)(a1 + 64) = v87 + 1;
        *v87 = v88;
      }
      if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
      {
        if ( (unsigned __int8)v89 > 7u )
        {
          if ( !under_debugger )
            interr(2030);
          goto LABEL_318;
        }
        *(_DWORD *)(a1 + 4 * v89 + 488) = v88;
      }
      v90 = *(_DWORD *)(get_ph(&src, v46, v89, v88) + 8) & 0x8000;
      func = get_func(*(unsigned int *)(a1 + 16));
      if ( !func )
      {
        if ( !under_debugger )
          interr(626);
        goto LABEL_318;
      }
      if ( (v164[0] & 1) == 0 && (*(_BYTE *)(func + 9) & 1) == 0 && !*(_DWORD *)(func + 32) )
      {
LABEL_202:
        v162 = v163 - ((unsigned __int64)src >> 3);
        v97 = *(_QWORD *)(v157 + 1480);
        ptr = nullptr;
        v141 = v97;
        ptr = (void *)get_tinfo_property(*(_QWORD *)&v178[0], 289);
        sub_5F2E00(v141, 0, &item_flag, 0, &ptr, 0);
        clear_tinfo_t(&ptr);
        sub_357520((__int64 *)&s);
        if ( (item_flag & 0x600) != 0x400 || (item_flag & 0xF0000000) != 0x60000000 )
        {
          if ( v90 )
          {
            append_disp(&s, -v162, 1);
            goto LABEL_205;
          }
          append_disp(&s, v162, 1);
LABEL_230:
          if ( (v164[0] & 2) != 0 )
            goto LABEL_206;
LABEL_231:
          clear_tinfo_t(v178);
          if ( v176 )
          {
            *(_QWORD *)&v177 = 0;
            qfree(v176);
          }
          if ( v174[1] )
          {
            *(_QWORD *)&v175 = 0;
            qfree(v174[1]);
          }
          clear_tinfo_t(&v168);
          if ( (v160 & 3) == 2 )
          {
LABEL_236:
            v102 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
            if ( v102 == sub_558570 )
              sub_558320((_QWORD *)a1, 43);
            else
              ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD *, char), __int64))v102)(
                a1,
                43,
                sub_558570,
                v33);
            goto LABEL_54;
          }
          goto LABEL_54;
        }
        stroff_path = get_stroff_path(v183, &v165, *(unsigned int *)(a1 + 16), *a2);
        ptr = nullptr;
        ptr = (void *)get_tinfo_property(*(_QWORD *)&v178[0], 289);
        tinfo_tid = get_tinfo_tid(&ptr, 0);
        clear_tinfo_t(&ptr);
        if ( stroff_path )
        {
          if ( v183[0] == tinfo_tid )
          {
LABEL_254:
            item_flag = sub_55C530(
                          (__int64 *)&s,
                          *(_DWORD *)(a1 + 16),
                          v158,
                          &v162,
                          v165,
                          (__int64)v183,
                          stroff_path,
                          item_flag,
                          v160);
            if ( v90 )
            {
LABEL_205:
              if ( (v164[0] & 2) == 0 )
              {
LABEL_206:
                v98 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
                if ( v98 == sub_558570 )
                  sub_558320((_QWORD *)a1, 45);
                else
                  v98((_QWORD *)a1, 45);
                if ( (_QWORD)v170 )
                {
                  v99 = s;
                  if ( strchr(s, 43) )
                    v13 = 1;
                  else
                    v13 = strchr(v99, 45) != nullptr;
                }
                clear_tinfo_t(v178);
                if ( v176 )
                {
                  *(_QWORD *)&v177 = 0;
                  qfree(v176);
                }
                if ( v174[1] )
                {
                  *(_QWORD *)&v175 = 0;
                  qfree(v174[1]);
                }
                clear_tinfo_t(&v168);
LABEL_152:
                v37 = *(_QWORD *)a1;
                v36 = *(_QWORD *)a1;
                if ( !v13 )
                {
                  v35 = v170;
                  goto LABEL_115;
                }
LABEL_110:
                v62 = *(__int64 (__fastcall **)(_QWORD *, char))(v36 + 32);
                v37 = v36;
                v63 = *(char *)(v157 + 1160);
                if ( v62 == sub_558570 )
                {
                  if ( !(_BYTE)v63 )
                  {
LABEL_114:
                    v35 = v170;
                    v13 = 1;
                    goto LABEL_115;
                  }
                  sub_558320((_QWORD *)a1, v63);
                }
                else
                {
                  v62((_QWORD *)a1, v63);
                }
                v37 = *(_QWORD *)a1;
                goto LABEL_114;
              }
              goto LABEL_231;
            }
            goto LABEL_230;
          }
          v114 = *(_DWORD *)(a1 + 16);
          v183[0] = tinfo_tid;
          sub_3C3C20(*(__int64 **)(v157 + 1480), v114, *a2);
        }
        else
        {
          v183[0] = tinfo_tid;
        }
        stroff_path = 1;
        goto LABEL_254;
      }
      v92 = *(unsigned int *)(a1 + 16);
      if ( v90 )
      {
        v140 = func;
        v154 = *(unsigned __int16 *)(func + 24);
        effective_spd = get_effective_spd(func, v92);
        v94 = v140;
        v95 = v154 - effective_spd;
      }
      else
      {
        v155 = func;
        v103 = get_effective_spd(func, v92);
        v94 = v155;
        v95 = *(unsigned __int16 *)(v155 + 24) + v103;
      }
      if ( (v164[0] & 1) == 0 )
      {
        v96 = *(unsigned int *)(v94 + 32);
        if ( (_DWORD)v96 )
        {
          v95 = -(int)v96;
LABEL_200:
          if ( (int)v96 < 0 )
          {
            v108 = v170;
            if ( (_QWORD)v170 )
            {
              v109 = v170 + 4;
              v110 = v170 + 5;
              v108 = v170 - 1;
            }
            else
            {
              v110 = 6;
              v109 = 5;
            }
            v111 = s;
            if ( *((_QWORD *)&v170 + 1) < v110 )
            {
              v134 = v109;
              v136 = v108;
              v143 = v95;
              v156 = v110;
              s = (char *)qvector_reserve(&s, s, v110, 1);
              v109 = v134;
              v111 = s;
              v108 = v136;
              v95 = v143;
              v110 = v156;
            }
            *(_QWORD *)&v170 = v110;
            v96 = v95;
            v111[v109] = 0;
            LOWORD(v160) = v160 & 0xFFFD;
            v112 = &s[v108];
            *(_DWORD *)v112 = (_DWORD)" (CXXTemporary";
            v112[4] = 9;
          }
          btoa32(v190, 136, v96, 0);
          sub_357520((__int64 *)&s);
          goto LABEL_202;
        }
        v95 = -*(_DWORD *)(v94 + 20);
      }
      if ( !v95 )
        goto LABEL_202;
      v96 = -v95;
      goto LABEL_200;
    }
    v51 = opinfo;
    if ( !v189 )
    {
      if ( opinfo )
      {
        v189 = 1;
        goto LABEL_96;
      }
      v51 = get_opinfo(v185, v186, v188, v187);
      opinfo = v51;
      v189 = 1;
    }
    if ( !v51 )
      goto LABEL_43;
LABEL_96:
    if ( v166 == 8 )
    {
      v104 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v51 + 13) & 2) != 0 ? (int)v104 != v104 : HIDWORD(v104) != 0 )
        goto LABEL_82;
    }
    v52 = (char)a2[2];
    v53 = *(unsigned int *)(a1 + 16);
    if ( v145 )
      v52 = (char)a2[3];
    v147 = v53 + v52;
    v54 = (get_aflags(v53) & 0x80) != 0;
    offset_expr = get_offset_expr(
                    (int)&s,
                    *(_DWORD *)(a1 + 16),
                    v158,
                    opinfo,
                    v147,
                    v162,
                    (unsigned int)v54 | *(_DWORD *)(a1 + 72));
    if ( !offset_expr )
      goto LABEL_82;
    v56 = *(unsigned int **)(a1 + 64);
    v57 = v162;
    v58 = *a2;
    if ( v56 )
    {
      *(_QWORD *)(a1 + 64) = v56 + 1;
      *v56 = v57;
    }
    if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
    {
      if ( (unsigned __int8)v58 > 7u )
      {
        if ( !under_debugger )
          interr(2030);
        goto LABEL_318;
      }
      *(_DWORD *)(a1 + 4 * v58 + 488) = v57;
    }
    v150 = offset_expr;
    v59 = calc_reference_data(&src, 0, v147, opinfo, v162);
    v60 = 0xFFFFFFFFLL;
    if ( v59 )
      v60 = (unsigned int)src;
    item_flag = get_item_flag(*(unsigned int *)(a1 + 16), v158, v60, v54);
    v61 = v150;
    if ( (v160 & 3) == 2 )
    {
      v113 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
      if ( v113 == sub_558570 )
        sub_558320((_QWORD *)a1, 43);
      else
        v113((_QWORD *)a1, 43);
      v61 = v150;
    }
    if ( v61 == 2 )
    {
      v36 = *(_QWORD *)a1;
      goto LABEL_110;
    }
LABEL_54:
    v35 = v170;
    v36 = *(_QWORD *)a1;
    v37 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(v157 + 1232) & 1) == 0 )
    {
LABEL_115:
      v64 = *(void (__fastcall **)(__int64, char *, _QWORD))(v37 + 56);
      v65 = (char *)haystack;
      if ( v35 )
        v65 = s;
      v64(a1, v65, 0);
      if ( v13 )
      {
        v66 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
        if ( v66 == sub_558570 )
        {
          if ( *(_BYTE *)(v157 + 1161) )
            sub_558320((_QWORD *)a1, *(_BYTE *)(v157 + 1161));
        }
        else
        {
          v66((_QWORD *)a1, *(_BYTE *)(v157 + 1161));
        }
      }
      goto LABEL_121;
    }
    if ( (_QWORD)v170 )
    {
      v107 = s;
      if ( strchr(s, 43) || strchr(v107, 45) )
        goto LABEL_110;
      (*(void (__fastcall **)(__int64, char *, _QWORD))(v36 + 56))(a1, v107, 0);
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL))(a1, haystack);
    }
LABEL_121:
    v30 = item_flag;
    goto LABEL_88;
  }
  v13 = v161 == 7 || (unsigned __int8)(v161 - 1) <= 1u;
  if ( !v13 )
  {
    v14 = v166;
    if ( v166 != 8 )
      goto LABEL_15;
LABEL_91:
    v161 = 4;
    goto LABEL_18;
  }
  v13 = getinf_flag(3, 32);
  v14 = v166;
  if ( v166 == 8 )
    goto LABEL_91;
LABEL_15:
  if ( v14 == 4 )
  {
    v161 = 3;
  }
  else if ( v14 == 2 )
  {
    v161 = 18;
  }
LABEL_18:
  v15 = *a2;
  v16 = 0;
  v17 = *(_DWORD *)(a1 + 16);
  v146 = v160 & 3;
  if ( v146 != 1 )
  {
    v18 = is_invsign(v17, v6, v15);
    v15 = *a2;
    v17 = *(_DWORD *)(a1 + 16);
    v16 = v18;
  }
  if ( (v160 & 0x400) == 0
    && (*(_QWORD *)(v157 + 1200) || (v131 = v17, v139 = v15, v47 = getinf_flag(2, 2), v15 = v139, v17 = v131, v47)) )
  {
    v19 = is_bnot(v17, v6, v15);
    v20 = v160;
    if ( (v160 & 0x6000) == 0 )
      goto LABEL_85;
  }
  else
  {
    v20 = v160;
    v19 = 0;
    if ( (v160 & 0x6000) == 0 )
    {
LABEL_85:
      v132 = v19;
      v138 = is_lzero(*(unsigned int *)(a1 + 16), *a2);
      v21 = v161;
      v19 = v132;
      v22 = v161 <= 8u;
      if ( v161 == 8 )
        goto LABEL_86;
      goto LABEL_24;
    }
  }
  v138 = (v20 & 0x2000) != 0;
  v21 = v161;
  v22 = v161 <= 8u;
  if ( v161 == 8 )
  {
LABEL_86:
    v48 = sub_55BFF0(a1, v149, a2, (__int64)v190, v160, v16, v19);
LABEL_87:
    v30 = v48;
    goto LABEL_88;
  }
LABEL_24:
  if ( v22 )
  {
    if ( (unsigned __int8)(v21 - 3) > 2u )
      goto LABEL_26;
LABEL_68:
    v41 = v166;
    if ( v13 )
    {
      if ( v166 == 4 )
      {
        v42 = _byteswap_ulong(*((_DWORD *)a2 + 2));
      }
      else if ( v166 == 2 )
      {
        v42 = (unsigned __int16)__ROL2__(*((_DWORD *)a2 + 2), 8);
      }
      else
      {
        v42 = swap64(*((_QWORD *)a2 + 1));
      }
      src = (void *)v42;
      p_src = &src;
    }
    else
    {
      p_src = (void **)(a2 + 8);
    }
    if ( (unsigned __int8)print_fpval(v190, 1024, p_src, v41) )
    {
      v79 = skip_spaces(v190) - (_QWORD)v190;
      v80 = v79;
      if ( v146 == 2 && v190[v79] != 45 )
      {
        if ( v79 )
        {
          v80 = v79 - 1;
          v190[v79 - 1] = 43;
        }
        else
        {
          v106 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
          if ( v106 == sub_558570 )
            sub_558320((_QWORD *)a1, 43);
          else
            v106((_QWORD *)a1, 43);
        }
      }
      v81 = &v190[v80];
      if ( (v160 & 0x800) != 0 )
        v81 = v190;
      v82 = 31;
      if ( (~BYTE1(v6) & 6) == 0 )
        v82 = 12;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v81, v82, 12);
      v30 = 0;
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "?bad floating?", 18);
      v30 = 0;
    }
    goto LABEL_88;
  }
  if ( v21 == 18 )
    goto LABEL_68;
LABEL_26:
  v23 = v166;
  if ( v166 == 8 )
  {
    v48 = sub_55C2A0(a1, v149, a2, (__int64)v190, v160, v16, v19, v138);
    goto LABEL_87;
  }
  v129 = v21;
  v128 = v19;
  v130 = (*(_DWORD *)(a1 + 144) & 0x8000) != 0;
  sub_55D9B0(a1, *a2, v162, ((*(_DWORD *)(a1 + 144) & 0x8000u) >> 15) ^ 1);
  v25 = v128;
  if ( v23 - 1 > 0xF )
  {
    if ( (v160 & 0x80u) == 0 || v129 != 9 )
      sub_365330();
    if ( !(_BYTE)v16 )
    {
      if ( v146 != 2 )
        goto LABEL_33;
      v101 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
      if ( v101 == sub_558570 )
      {
        v148 = v128;
        sub_558320((_QWORD *)a1, 43);
LABEL_225:
        v25 = v148;
        v16 = 1;
LABEL_33:
        if ( !v25 )
        {
LABEL_34:
          v26 = v162;
          goto LABEL_35;
        }
LABEL_183:
        v16 |= sub_55BEB0((_QWORD *)a1, v149);
        goto LABEL_34;
      }
LABEL_267:
      v148 = v128;
      v101((_QWORD *)a1, 43);
      goto LABEL_225;
    }
    v69 = v162;
    goto LABEL_172;
  }
  v24 = (unsigned int)(8 * v23 - 1);
  v67 = v162;
  if ( (int)v24 > 31 )
  {
    v68 = -1;
    if ( (_BYTE)v16 )
    {
LABEL_129:
      v69 = v68 & -v67;
      v162 = v69;
LABEL_172:
      LOBYTE(v16) = v69 != 0 || v146 == 2;
      if ( (_BYTE)v16 )
      {
        v86 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
        if ( v86 == sub_558570 )
        {
          sub_558320((_QWORD *)a1, 45);
        }
        else
        {
          LOBYTE(v24) = v69 != 0 || v146 == 2;
          ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD *, char), __int64, _QWORD))v86)(
            a1,
            45,
            sub_558570,
            v24,
            v128);
        }
        goto LABEL_34;
      }
      v26 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    v24 = (unsigned int)(1 << (8 * v23 - 1));
    v68 = 2 * (1 << (8 * v23 - 1)) - 1;
    if ( v135 )
      LOBYTE(v16) = (v162 != (_DWORD)v24 && ((unsigned int)v24 & v162) != 0) ^ v16;
    if ( (_BYTE)v16 )
    {
      if ( ((unsigned int)v24 & v162) != 0 )
        v67 = v162 | (-2 * (1 << (8 * v23 - 1)));
      goto LABEL_129;
    }
  }
  if ( v128 )
  {
    v16 = 0;
    v162 = v68 & ~v162;
    if ( v146 != 2 )
      goto LABEL_183;
    v101 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
    if ( v101 == sub_558570 )
    {
      sub_558320((_QWORD *)a1, 43);
      v16 = v128;
      goto LABEL_183;
    }
    goto LABEL_267;
  }
  v26 = v68 & v162;
  LOBYTE(v16) = 0;
  v162 &= v68;
  if ( v146 == 2 )
  {
    v101 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
    if ( v101 == sub_558570 )
    {
      sub_558320((_QWORD *)a1, 43);
      LOBYTE(v16) = 1;
      goto LABEL_34;
    }
    goto LABEL_267;
  }
LABEL_35:
  sub_55D9B0(a1, *a2, v26, v130);
  if ( !(unsigned __int8)is_char(v6, v158) )
  {
    if ( (unsigned __int8)is_stroff(v6, v158) )
    {
      v70 = opinfo;
      if ( !v189 )
      {
        if ( opinfo )
        {
          v189 = 1;
LABEL_135:
          ptr = nullptr;
          v172 = 0;
          v151 = (_DWORD *)v70;
          if ( !(unsigned __int8)get_tid_name(&ptr, *(unsigned int *)(v70 + 4)) )
          {
            if ( ptr )
            {
              *(_QWORD *)&v172 = 0;
              qfree(ptr);
            }
            goto LABEL_38;
          }
          src = nullptr;
          *(_OWORD *)v174 = 0;
          sub_3573A0((char **)&src);
          v71 = v151;
          v168 = nullptr;
          if ( !v151[33] )
          {
            if ( *(_QWORD *)(v157 + 1224) || (v115 = getinf_flag(2, 2), v71 = v151, v115) )
            {
              v152 = v71;
              v72 = sub_69CC60(*(_QWORD *)(v157 + 1480), (unsigned int)v71[1], 0, &v168);
              v71 = v152;
              if ( v72 )
              {
                v73 = v162;
                if ( *v152 == 1 )
                {
                  if ( v162 )
                  {
                    tinfo_property = get_tinfo_property(v168, 286);
                    v71 = v152;
                    if ( !tinfo_property )
                    {
                      tinfo_size = get_tinfo_size(0, v168, 0);
                      v71 = v152;
                      if ( v73 == tinfo_size )
                      {
                        v123 = *(void **)(v157 + 1224);
                        if ( !v123 )
                          v123 = &unk_238B2F0;
                        qsnprintf((int)v190, 1024, (int)&unk_22B26FB, (int)v123, v122, (int)v152, v127);
                        sub_390600(&s);
                        aflags = get_aflags(*(unsigned int *)(a1 + 16));
                        v71 = v152;
                        if ( aflags >= 0 )
                          goto LABEL_148;
                        v125 = ((_QWORD)v170 == 0) + (_QWORD)v170 - 1LL;
                        if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v125 + 6) )
                        {
                          s = (char *)qvector_reserve(&s, s, v125 + 6, 1);
                          v71 = v152;
                        }
                        *(_QWORD *)&v170 = v125 + 6;
                        s[v125 + 5] = 0;
                        v126 = &s[v125];
                        *(_DWORD *)v126 = 36374785;
                        v126[4] = 9;
                        v162 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v174[0] )
          {
            v75 = (size_t)v174[0] - 1;
            if ( v174[0] != (char *)&dword_0 + 1 )
            {
              v76 = ((_QWORD)v170 == 0) + (_QWORD)v170 - 1LL;
              v77 = v75 + ((_QWORD)v170 == 0) + (_QWORD)v170;
              if ( *((_QWORD *)&v170 + 1) < v77 )
              {
                v137 = v71;
                v144 = v75 + ((_QWORD)v170 == 0) + (_QWORD)v170;
                s = (char *)qvector_reserve(&s, s, v77, 1);
                v71 = v137;
                v77 = v144;
              }
              *(_QWORD *)&v170 = v77;
              s[v75 + v76] = 0;
              v153 = v71;
              memcpy(&s[v76], src, v75);
              v71 = v153;
            }
          }
          item_flag = sub_55C530(
                        (__int64 *)&s,
                        *(_DWORD *)(a1 + 16),
                        v158,
                        &v162,
                        v71[33],
                        (__int64)(v71 + 1),
                        *v71,
                        0,
                        v160);
LABEL_148:
          v78 = v162 != 0;
          clear_tinfo_t(&v168);
          v13 = v16 & v78;
          if ( src )
          {
            v174[0] = nullptr;
            qfree(src);
          }
          if ( ptr )
          {
            *(_QWORD *)&v172 = 0;
            qfree(ptr);
          }
          goto LABEL_152;
        }
        opinfo = get_opinfo(v185, v186, v188, v187);
        v70 = opinfo;
        v189 = 1;
      }
      if ( v70 )
        goto LABEL_135;
    }
    if ( !(unsigned __int8)is_enum(v6, *a2) )
      goto LABEL_38;
    v83 = (unsigned int *)opinfo;
    if ( !v189 )
    {
      if ( opinfo )
      {
        v189 = 1;
LABEL_165:
        v159 = *((_BYTE *)v83 + 4);
        v84 = sub_699790(*(_QWORD *)(v157 + 1480), *v83);
        v85 = sub_55D810((_QWORD *)a1, v157, v162, v23, v84, v159, v16, v160);
        if ( v85 != -2 )
        {
          v30 = v85;
          goto LABEL_88;
        }
        goto LABEL_179;
      }
      v83 = (unsigned int *)get_opinfo(v185, v186, v188, v187);
      opinfo = (__int64)v83;
      v189 = 1;
    }
    if ( !v83 )
      goto LABEL_38;
    goto LABEL_165;
  }
  if ( !(unsigned __int8)sub_55BDF0(v190, &v162, (unsigned int)v23) )
  {
    if ( !v162 )
    {
LABEL_38:
      radix = get_radix(v6, *a2);
      sub_56F930(v190, 1024, v162, (unsigned int)v23, radix, v138);
      v28 = *(_DWORD *)(a1 + 56);
      if ( v28 )
      {
        v29 = 5 * (unsigned int)(v28 == 2) + 13;
      }
      else
      {
        v29 = 31;
        if ( (~BYTE1(v6) & 6) == 0 )
          v29 = 12;
      }
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v190, v29);
      v30 = -(__int64)(*(_DWORD *)(a1 + 56) == 2);
      goto LABEL_88;
    }
LABEL_179:
    *(_DWORD *)(a1 + 56) = 2;
    goto LABEL_38;
  }
  v100 = 30;
  if ( (~BYTE1(v6) & 6) == 0 )
    v100 = 10;
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v190, v100);
  v30 = 0;
LABEL_88:
  if ( s )
  {
    *(_QWORD *)&v170 = 0;
    qfree(s);
  }
  return v30;
}

