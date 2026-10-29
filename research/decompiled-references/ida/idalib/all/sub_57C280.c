__int64 __fastcall sub_57C280(__int64 a1, unsigned __int8 *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned __int8 v8; // r8
  __m128 v9; // xmm0
  int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // r13
  Elf64_Rela *v15; // rdx
  char v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r14d
  __int64 v20; // rcx
  int v21; // r15d
  int v22; // eax
  __int16 v23; // ax
  unsigned __int8 v24; // al
  bool v25; // cc
  __int64 v26; // rcx
  unsigned int v27; // r13d
  __int64 v28; // rdx
  unsigned int radix; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rbx
  signed __int8 v33; // al
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rax
  __int16 *v40; // r14
  __int64 v41; // rax
  __int64 custom_data_format; // rax
  unsigned int v43; // r14d
  __int64 v44; // rax
  void **p_src; // rdx
  __int64 v46; // rax
  void *v47; // rax
  const char *v48; // rsi
  char v49; // al
  unsigned __int8 v51; // al
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r15
  unsigned int v56; // r14d
  int offset_expr; // r9d
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  char v61; // al
  unsigned __int64 v62; // rdx
  int v63; // r9d
  __int64 (__fastcall *v64)(_QWORD *, char); // rcx
  int v65; // edi
  void (__fastcall *v66)(__int64, char *, _QWORD); // rax
  char *v67; // rsi
  __int64 (__fastcall *v68)(_QWORD *, char); // rdx
  __int64 v69; // r15
  __int64 *p_s; // r11
  int v71; // eax
  __int64 v72; // r13
  __int64 tinfo_property; // rax
  char *v74; // rdx
  char *v75; // r13
  __int64 v76; // r8
  char *v77; // r9
  bool v78; // r13
  __int64 v79; // rax
  char v80; // r15
  __int64 v81; // rax
  int v82; // eax
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // r8
  int v88; // esi
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 (__fastcall *v91)(_QWORD *, char); // rax
  __int64 v92; // rax
  __int64 v93; // r12
  _BYTE *v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 (__fastcall *v97)(_QWORD *, char); // rax
  __int64 *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 ph; // rax
  __int64 v102; // rdi
  __int64 func; // rax
  __int64 v104; // rsi
  __int64 effective_spd; // rax
  __int64 v106; // rcx
  __int64 v107; // r10
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 (__fastcall *v110)(_QWORD *, char); // rax
  char *v111; // r14
  __int64 (__fastcall *v112)(_QWORD *, char); // rax
  __int64 v113; // rax
  __int64 (__fastcall *v114)(_QWORD *, char); // rax
  char *v115; // r12
  __int64 v116; // r8
  __int64 v117; // r9
  unsigned __int64 v118; // rdx
  char *v119; // rsi
  char *v120; // rax
  __int64 (__fastcall *v121)(_QWORD *, char); // rax
  char v122; // al
  unsigned __int64 v123; // rsi
  __int64 *v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  const char *v127; // rsi
  __int64 v128; // rdx
  __int64 tinfo_size; // rax
  int v130; // r8d
  int v131; // r9d
  void *v132; // rcx
  char aflags; // al
  __int64 v134; // r13
  __int64 v135; // r8
  __int64 v136; // rdx
  char *v137; // rax
  unsigned __int8 v138; // [rsp+7h] [rbp-7C9h]
  char v139; // [rsp+8h] [rbp-7C8h]
  int v140; // [rsp+10h] [rbp-7C0h]
  __int64 tinfo_tid; // [rsp+10h] [rbp-7C0h]
  __int64 v142; // [rsp+10h] [rbp-7C0h]
  unsigned __int8 v143; // [rsp+18h] [rbp-7B8h]
  __int64 v144; // [rsp+18h] [rbp-7B8h]
  __int64 v145; // [rsp+18h] [rbp-7B8h]
  char *v146; // [rsp+18h] [rbp-7B8h]
  __int64 v147; // [rsp+20h] [rbp-7B0h]
  __int64 v148; // [rsp+20h] [rbp-7B0h]
  __int64 v149; // [rsp+20h] [rbp-7B0h]
  int stroff_path; // [rsp+20h] [rbp-7B0h]
  __int64 v151; // [rsp+20h] [rbp-7B0h]
  __int64 v152; // [rsp+20h] [rbp-7B0h]
  unsigned __int8 v153; // [rsp+28h] [rbp-7A8h]
  unsigned int v154; // [rsp+28h] [rbp-7A8h]
  __int64 v155; // [rsp+28h] [rbp-7A8h]
  __int64 v156; // [rsp+28h] [rbp-7A8h]
  unsigned __int64 v157; // [rsp+28h] [rbp-7A8h]
  char *v158; // [rsp+28h] [rbp-7A8h]
  __int64 v159; // [rsp+30h] [rbp-7A0h]
  unsigned int v160; // [rsp+38h] [rbp-798h]
  unsigned int v161; // [rsp+40h] [rbp-790h]
  __int64 v162; // [rsp+48h] [rbp-788h] BYREF
  unsigned __int8 v163; // [rsp+5Bh] [rbp-775h] BYREF
  char v164[4]; // [rsp+5Ch] [rbp-774h] BYREF
  unsigned __int64 v165; // [rsp+60h] [rbp-770h] BYREF
  __m128i v166; // [rsp+68h] [rbp-768h] BYREF
  __int64 v167; // [rsp+78h] [rbp-758h] BYREF
  const char *v168; // [rsp+80h] [rbp-750h] BYREF
  unsigned __int64 v169; // [rsp+88h] [rbp-748h] BYREF
  char *s; // [rsp+90h] [rbp-740h] BYREF
  __int128 v171; // [rsp+98h] [rbp-738h]
  void *ptr; // [rsp+B0h] [rbp-720h] BYREF
  __int128 v173; // [rsp+B8h] [rbp-718h]
  void *src; // [rsp+D0h] [rbp-700h] BYREF
  void *v175[2]; // [rsp+D8h] [rbp-6F8h]
  __int128 v176; // [rsp+E8h] [rbp-6E8h]
  void *v177; // [rsp+F8h] [rbp-6D8h]
  __int128 v178; // [rsp+100h] [rbp-6D0h]
  _OWORD v179[3]; // [rsp+110h] [rbp-6C0h] BYREF
  __int64 v180; // [rsp+140h] [rbp-690h]
  int v181; // [rsp+148h] [rbp-688h]
  __int64 v182; // [rsp+150h] [rbp-680h]
  char v183; // [rsp+158h] [rbp-678h]
  _QWORD v184[32]; // [rsp+160h] [rbp-670h] BYREF
  __int64 opinfo; // [rsp+260h] [rbp-570h]
  _BYTE v186[272]; // [rsp+268h] [rbp-568h] BYREF
  __m128 v187; // [rsp+378h] [rbp-458h]
  unsigned int v188; // [rsp+388h] [rbp-448h]
  char v189; // [rsp+38Ch] [rbp-444h]
  _BYTE v190[1032]; // [rsp+390h] [rbp-440h] BYREF
  unsigned __int64 v191; // [rsp+798h] [rbp-38h]

  v161 = a3;
  v191 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
    v162 = *(_QWORD *)(a1 + 720);
  else
    v162 = *(unsigned int *)(a1 + 60);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *a2;
  opinfo = a4;
  v8 = 1;
  v189 = 0;
  v188 = v7;
  v9 = _mm_loadh_ps((const double *)&v162);
  s = nullptr;
  v10 = a3 & 0x100;
  v187 = v9;
  v11 = v10 | v7;
  v159 = qword_2CCB598;
  v12 = *(_QWORD *)(qword_2CCB598 + 1672);
  v160 = v11;
  v140 = a3 & 4;
  v171 = 0;
  if ( !v140 )
  {
    v51 = is_stkvar(v162, v11);
    v6 = *(_QWORD *)(a1 + 16);
    v8 = v51;
  }
  v166.m128i_i64[0] = sub_579E80(v12, v6, (__int64)a2, v161, v8, &v163, &v165);
  v13 = (v161 >> 3) & 1;
  v14 = v162;
  if ( (a2[4] & 0x10) != 0 )
    LOBYTE(v13) = 1;
  v166.m128i_i64[1] = 0;
  v147 = v159 + 1072;
  if ( (unsigned __int8)is_defarg(v162, v160) )
  {
    if ( v163 <= 0x12u )
    {
      v15 = &stru_48038;
      if ( _bittest64((const __int64 *)&v15, v163) )
      {
        if ( !is_fltnum(v14, v160) )
          v163 = 10;
      }
    }
  }
  v16 = is_fltnum(v162, v160);
  if ( !v16 )
  {
    if ( (_BYTE)v13 )
    {
      if ( !(unsigned __int8)is_stkvar(v162, v160) )
        goto LABEL_59;
      goto LABEL_75;
    }
    if ( !(unsigned __int8)is_off(v162, v160) )
    {
LABEL_43:
      if ( !(unsigned __int8)is_stkvar(v162, v160) )
      {
        if ( (unsigned __int8)is_seg(v162, *a2) )
        {
          v33 = a2[2];
          if ( v10 )
            v33 = a2[3];
          if ( sub_5117F0((__int64)&s, *(_QWORD *)(a1 + 16) + v33, v166.m128i_i64[0]) >= 0 )
          {
            v34 = *(__int64 **)(a1 + 64);
            v35 = v166.m128i_i64[0];
            v36 = *a2;
            if ( v34 )
            {
              *(_QWORD *)(a1 + 64) = v34 + 1;
              *v34 = v35;
            }
            if ( (*(_BYTE *)(a1 + 146) & 1) == 0 )
            {
LABEL_53:
              if ( (v161 & 3) != 2 )
                goto LABEL_54;
              goto LABEL_247;
            }
            if ( (unsigned __int8)v36 <= 7u )
            {
              *(_QWORD *)(a1 + 8 * v36 + 640) = v35;
              goto LABEL_53;
            }
            if ( !under_debugger )
              interr(2030);
LABEL_315:
            BUG();
          }
LABEL_82:
          *(_DWORD *)(a1 + 56) = 2;
          goto LABEL_18;
        }
LABEL_59:
        if ( !(unsigned __int8)is_custfmt(v162, *a2) )
          goto LABEL_18;
        v40 = (__int16 *)opinfo;
        if ( !v189 )
        {
          if ( opinfo )
          {
            v189 = 1;
            goto LABEL_62;
          }
          opinfo = get_opinfo(v186, v187.m128_u64[0], v188, v187.m128_u64[1]);
          v40 = (__int16 *)opinfo;
          v189 = 1;
        }
        if ( !v40 )
          goto LABEL_18;
LABEL_62:
        if ( (unsigned __int8)is_attached_custom_data_format((unsigned int)*v40, (unsigned int)v40[*a2 + 1]) )
        {
          v41 = *a2;
          ptr = nullptr;
          v173 = 0;
          custom_data_format = get_custom_data_format((unsigned int)v40[v41 + 1]);
          if ( custom_data_format
            && (*(unsigned __int8 (__fastcall **)(_QWORD, void **, unsigned __int8 *, unsigned __int64, _QWORD, _QWORD, _QWORD))(custom_data_format + 64))(
                 *(_QWORD *)(custom_data_format + 8),
                 &ptr,
                 a2 + 8,
                 v165,
                 *(_QWORD *)(a1 + 16),
                 *a2,
                 (unsigned int)*v40) )
          {
            v124 = *(__int64 **)(a1 + 64);
            v125 = v166.m128i_i64[0];
            v126 = *a2;
            if ( v124 )
            {
              *(_QWORD *)(a1 + 64) = v124 + 1;
              *v124 = v125;
            }
            if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
            {
              if ( (unsigned __int8)v126 > 7u )
              {
                if ( !under_debugger )
                  interr(2030);
                goto LABEL_315;
              }
              *(_QWORD *)(a1 + 8 * v126 + 640) = v125;
            }
            v127 = haystack;
            v128 = 31;
            if ( (~BYTE1(v162) & 6) == 0 )
              v128 = 12;
            if ( (_QWORD)v173 )
              v127 = (const char *)ptr;
            (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v127, v128);
            v32 = v166.m128i_i64[1];
            if ( ptr )
            {
              *(_QWORD *)&v173 = 0;
              qfree(ptr);
            }
            goto LABEL_87;
          }
          if ( ptr )
          {
            *(_QWORD *)&v173 = 0;
            qfree(ptr);
          }
        }
        goto LABEL_82;
      }
LABEL_75:
      v46 = *(_QWORD *)a1;
      v168 = nullptr;
      v47 = (void *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 *, __int64, __int64 *, char *, const char **))(v46 + 232))(
                      a1,
                      a2,
                      v166.m128i_i64[0],
                      &v167,
                      v164,
                      &v168);
      if ( v47 == (void *)-1LL )
      {
LABEL_81:
        clear_tinfo_t(&v168);
        goto LABEL_82;
      }
      v48 = v168;
      v175[0] = nullptr;
      v175[1] = nullptr;
      v177 = nullptr;
      v180 = 1;
      v181 = -1;
      v182 = 0;
      v183 = 0;
      src = v47;
      v176 = 0;
      v178 = 0;
      v179[0] = 0;
      find_tinfo_udt_member((int)&src);
      if ( (v182 & 0x300000000000LL) != 0 )
      {
        clear_tinfo_t(v179);
        if ( v177 )
        {
          *(_QWORD *)&v178 = 0;
          qfree(v177);
        }
        if ( v175[1] )
        {
          *(_QWORD *)&v176 = 0;
          qfree(v175[1]);
        }
        goto LABEL_81;
      }
      v98 = *(__int64 **)(a1 + 64);
      v99 = v166.m128i_i64[0];
      v100 = *a2;
      if ( v98 )
      {
        v48 = (const char *)(v98 + 1);
        *(_QWORD *)(a1 + 64) = v98 + 1;
        *v98 = v99;
      }
      if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
      {
        if ( (unsigned __int8)v100 > 7u )
        {
          if ( !under_debugger )
            interr(2030);
          goto LABEL_315;
        }
        *(_QWORD *)(a1 + 8 * v100 + 640) = v99;
      }
      ph = get_ph(&src, v48, v100, v99);
      v102 = *(_QWORD *)(a1 + 16);
      LODWORD(v162) = *(_DWORD *)(ph + 8) & 0x8000;
      func = get_func(v102);
      if ( !func )
      {
        if ( !under_debugger )
          interr(626);
        goto LABEL_315;
      }
      if ( (v164[0] & 1) == 0 && (*(_BYTE *)(func + 17) & 1) == 0 && !*(_QWORD *)(func + 56) )
      {
LABEL_216:
        v166.m128i_i64[0] = v167 - ((unsigned __int64)src >> 3);
        v109 = *(_QWORD *)(v159 + 1672);
        ptr = nullptr;
        v149 = v109;
        ptr = (void *)get_tinfo_property(*(_QWORD *)&v179[0], 289);
        sub_60EE60(v149, 0, &v166.m128i_u64[1], 0, &ptr, 0);
        clear_tinfo_t(&ptr);
        sub_35A910((__int64 *)&s);
        if ( (v166.m128i_i16[4] & 0x600) != 0x400 || (v166.m128i_i32[2] & 0xF0000000) != 0x60000000 )
        {
          if ( (_DWORD)v162 )
          {
            append_disp(&s, -v166.m128i_i64[0], 1);
            goto LABEL_219;
          }
          append_disp(&s, v166.m128i_i64[0], 1);
LABEL_241:
          if ( (v164[0] & 2) != 0 )
            goto LABEL_220;
LABEL_242:
          clear_tinfo_t(v179);
          if ( v177 )
          {
            *(_QWORD *)&v178 = 0;
            qfree(v177);
          }
          if ( v175[1] )
          {
            *(_QWORD *)&v176 = 0;
            qfree(v175[1]);
          }
          clear_tinfo_t(&v168);
          if ( (v161 & 3) == 2 )
          {
LABEL_247:
            v112 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
            if ( v112 == sub_572080 )
              sub_571E30((_QWORD *)a1, 43);
            else
              ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD *, char), __int64))v112)(
                a1,
                43,
                sub_572080,
                v35);
            goto LABEL_54;
          }
          goto LABEL_54;
        }
        stroff_path = get_stroff_path(v184, &v169, *(_QWORD *)(a1 + 16), *a2);
        ptr = nullptr;
        ptr = (void *)get_tinfo_property(*(_QWORD *)&v179[0], 289);
        tinfo_tid = get_tinfo_tid(&ptr, 0);
        clear_tinfo_t(&ptr);
        if ( stroff_path )
        {
          if ( v184[0] == tinfo_tid )
          {
LABEL_254:
            v166.m128i_i64[1] = sub_575F00(
                                  (__int64 *)&s,
                                  *(_QWORD *)(a1 + 16),
                                  v160,
                                  &v166,
                                  v169,
                                  v184,
                                  stroff_path,
                                  v166.m128i_i64[1],
                                  v161);
            if ( (_DWORD)v162 )
            {
LABEL_219:
              if ( (v164[0] & 2) == 0 )
              {
LABEL_220:
                v110 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
                if ( v110 == sub_572080 )
                  sub_571E30((_QWORD *)a1, 45);
                else
                  v110((_QWORD *)a1, 45);
                if ( (_QWORD)v171 )
                {
                  v111 = s;
                  if ( strchr(s, 43) )
                    v16 = 1;
                  else
                    v16 = strchr(v111, 45) != nullptr;
                }
                clear_tinfo_t(v179);
                if ( v177 )
                {
                  *(_QWORD *)&v178 = 0;
                  qfree(v177);
                }
                if ( v175[1] )
                {
                  *(_QWORD *)&v176 = 0;
                  qfree(v175[1]);
                }
                clear_tinfo_t(&v168);
LABEL_143:
                v39 = *(_QWORD *)a1;
                v38 = *(_QWORD *)a1;
                if ( !v16 )
                {
                  v37 = v171;
                  goto LABEL_113;
                }
LABEL_108:
                v64 = *(__int64 (__fastcall **)(_QWORD *, char))(v38 + 32);
                v39 = v38;
                v65 = *(char *)(v159 + 1328);
                if ( v64 == sub_572080 )
                {
                  if ( !(_BYTE)v65 )
                  {
LABEL_112:
                    v37 = v171;
                    v16 = 1;
                    goto LABEL_113;
                  }
                  sub_571E30((_QWORD *)a1, v65);
                }
                else
                {
                  v64((_QWORD *)a1, v65);
                }
                v39 = *(_QWORD *)a1;
                goto LABEL_112;
              }
              goto LABEL_242;
            }
            goto LABEL_241;
          }
          v123 = *(_QWORD *)(a1 + 16);
          v184[0] = tinfo_tid;
          sub_3C8EF0(*(__int64 **)(v159 + 1672), v123, *a2);
        }
        else
        {
          v184[0] = tinfo_tid;
        }
        stroff_path = 1;
        goto LABEL_254;
      }
      v104 = *(_QWORD *)(a1 + 16);
      if ( (_DWORD)v162 )
      {
        v148 = func;
        v155 = *(unsigned __int16 *)(func + 40);
        effective_spd = get_effective_spd(func, v104);
        v106 = v148;
        v107 = v155 - effective_spd;
      }
      else
      {
        v156 = func;
        v113 = get_effective_spd(func, v104);
        v106 = v156;
        v107 = *(unsigned __int16 *)(v156 + 40) + v113;
      }
      if ( (v164[0] & 1) == 0 )
      {
        v108 = *(_QWORD *)(v106 + 56);
        if ( v108 )
        {
          v107 = -v108;
LABEL_214:
          if ( v108 < 0 )
          {
            v116 = v171;
            if ( (_QWORD)v171 )
            {
              v117 = v171 + 4;
              v118 = v171 + 5;
              v116 = v171 - 1;
            }
            else
            {
              v118 = 6;
              v117 = 5;
            }
            v119 = s;
            if ( *((_QWORD *)&v171 + 1) < v118 )
            {
              v142 = v117;
              v145 = v116;
              v151 = v107;
              v157 = v118;
              s = (char *)qvector_reserve(&s, s, v118, 1);
              v117 = v142;
              v119 = s;
              v116 = v145;
              v107 = v151;
              v118 = v157;
            }
            *(_QWORD *)&v171 = v118;
            v108 = v107;
            v119[v117] = 0;
            LOWORD(v161) = v161 & 0xFFFD;
            v120 = &s[v116];
            *(_DWORD *)v120 = (_DWORD)"xt_seg";
            v120[4] = 9;
          }
          btoa64(v190, 136, v108, 0);
          sub_35A910((__int64 *)&s);
          goto LABEL_216;
        }
        v107 = -*(_QWORD *)(v106 + 32);
      }
      if ( !v107 )
        goto LABEL_216;
      v108 = -v107;
      goto LABEL_214;
    }
    v52 = opinfo;
    if ( !v189 )
    {
      if ( opinfo )
      {
        v189 = 1;
        goto LABEL_95;
      }
      v52 = get_opinfo(v186, v187.m128_u64[0], v188, v187.m128_u64[1]);
      opinfo = v52;
      v189 = 1;
    }
    if ( !v52 )
      goto LABEL_43;
LABEL_95:
    v53 = (char)a2[2];
    v54 = *(_QWORD *)(a1 + 16);
    if ( v10 )
      v53 = (char)a2[3];
    v55 = v53 + v54;
    v56 = ((unsigned int)get_aflags(v54) >> 7) & 1;
    offset_expr = get_offset_expr(
                    (unsigned int)&s,
                    *(_QWORD *)(a1 + 16),
                    v160,
                    opinfo,
                    v55,
                    v166.m128i_i32[0],
                    *(_DWORD *)(a1 + 72) | v56);
    if ( !offset_expr )
      goto LABEL_82;
    v58 = *(__int64 **)(a1 + 64);
    v59 = v166.m128i_i64[0];
    v60 = *a2;
    if ( v58 )
    {
      *(_QWORD *)(a1 + 64) = v58 + 1;
      *v58 = v59;
    }
    if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
    {
      if ( (unsigned __int8)v60 > 7u )
      {
        if ( !under_debugger )
          interr(2030);
        goto LABEL_315;
      }
      *(_QWORD *)(a1 + 8 * v60 + 640) = v59;
    }
    LODWORD(v162) = offset_expr;
    v61 = calc_reference_data(&src, 0, v55, opinfo, v166.m128i_i64[0]);
    v62 = -1;
    if ( v61 )
      v62 = (unsigned __int64)src;
    v166.m128i_i64[1] = get_item_flag(*(_QWORD *)(a1 + 16), v160, v62, v56);
    v63 = v162;
    if ( (v161 & 3) == 2 )
    {
      v121 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
      if ( v121 == sub_572080 )
        sub_571E30((_QWORD *)a1, 43);
      else
        v121((_QWORD *)a1, 43);
      v63 = v162;
    }
    if ( v63 == 2 )
    {
      v38 = *(_QWORD *)a1;
      goto LABEL_108;
    }
LABEL_54:
    v37 = v171;
    v38 = *(_QWORD *)a1;
    v39 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(v159 + 1400) & 1) == 0 )
    {
LABEL_113:
      v66 = *(void (__fastcall **)(__int64, char *, _QWORD))(v39 + 56);
      v67 = (char *)haystack;
      if ( v37 )
        v67 = s;
      v66(a1, v67, 0);
      if ( v16 )
      {
        v68 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
        if ( v68 == sub_572080 )
        {
          if ( *(_BYTE *)(v159 + 1329) )
            sub_571E30((_QWORD *)a1, *(_BYTE *)(v159 + 1329));
        }
        else
        {
          v68((_QWORD *)a1, *(_BYTE *)(v159 + 1329));
        }
      }
      goto LABEL_119;
    }
    if ( (_QWORD)v171 )
    {
      v115 = s;
      if ( strchr(s, 43) || strchr(v115, 45) )
        goto LABEL_108;
      (*(void (__fastcall **)(__int64, char *, _QWORD))(v38 + 56))(a1, v115, 0);
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL))(a1, haystack);
    }
LABEL_119:
    v32 = v166.m128i_i64[1];
    goto LABEL_87;
  }
  v16 = v163 == 7 || (unsigned __int8)(v163 - 1) <= 1u;
  if ( !v16 )
  {
    v17 = v165;
    if ( v165 != 8 )
      goto LABEL_15;
LABEL_90:
    v163 = 4;
    goto LABEL_18;
  }
  v16 = getinf_flag(3, 32);
  v17 = v165;
  if ( v165 == 8 )
    goto LABEL_90;
LABEL_15:
  if ( v17 == 4 )
  {
    v163 = 3;
  }
  else if ( v17 == 2 )
  {
    v163 = 18;
  }
LABEL_18:
  v18 = *a2;
  v19 = 0;
  v20 = *(_QWORD *)(a1 + 16);
  v21 = v161 & 3;
  if ( v21 != 1 )
  {
    v22 = is_invsign(*(_QWORD *)(a1 + 16), v162, v18);
    v18 = *a2;
    v20 = *(_QWORD *)(a1 + 16);
    v19 = v22;
  }
  if ( (v161 & 0x400) == 0
    && (*(_QWORD *)(v159 + 1368) || (v144 = v20, v154 = v18, v49 = getinf_flag(2, 2), v18 = v154, v20 = v144, v49)) )
  {
    v153 = is_bnot(v20, v162, v18);
    v23 = v161;
    if ( (v161 & 0x6000) == 0 )
      goto LABEL_85;
  }
  else
  {
    v23 = v161;
    v153 = 0;
    if ( (v161 & 0x6000) == 0 )
    {
LABEL_85:
      v143 = is_lzero(*(_QWORD *)(a1 + 16), *a2);
      v24 = v163;
      v25 = v163 <= 8u;
      if ( v163 == 8 )
        goto LABEL_86;
      goto LABEL_24;
    }
  }
  v143 = (v23 & 0x2000) != 0;
  v24 = v163;
  v25 = v163 <= 8u;
  if ( v163 == 8 )
  {
LABEL_86:
    v32 = (int)sub_575C50(a1, v147, a2, (__int64)v190, v161, v19, v153);
    goto LABEL_87;
  }
LABEL_24:
  if ( v25 )
  {
    if ( (unsigned __int8)(v24 - 3) > 2u )
      goto LABEL_26;
LABEL_68:
    v43 = v165;
    if ( v16 )
    {
      if ( v165 == 4 )
      {
        v44 = _byteswap_ulong(*((_DWORD *)a2 + 2));
      }
      else if ( v165 == 2 )
      {
        v44 = (unsigned __int16)__ROL2__(*((_QWORD *)a2 + 1), 8);
      }
      else
      {
        v44 = swap64(*((_QWORD *)a2 + 1));
      }
      src = (void *)v44;
      p_src = &src;
    }
    else
    {
      p_src = (void **)(a2 + 8);
    }
    if ( (unsigned __int8)print_fpval(v190, 1024, p_src, v43) )
    {
      v92 = skip_spaces(v190) - (_QWORD)v190;
      v93 = v92;
      if ( v21 == 2 && v190[v92] != 45 )
      {
        if ( v92 )
        {
          v93 = v92 - 1;
          v190[v92 - 1] = 43;
        }
        else
        {
          v114 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
          if ( v114 == sub_572080 )
            sub_571E30((_QWORD *)a1, 43);
          else
            v114((_QWORD *)a1, 43);
        }
      }
      v94 = &v190[v93];
      if ( (v161 & 0x800) != 0 )
        v94 = v190;
      v95 = 31;
      if ( (~BYTE1(v162) & 6) == 0 )
        v95 = 12;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v94, v95, 12);
      v32 = 0;
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "?bad floating?", 18);
      v32 = 0;
    }
    goto LABEL_87;
  }
  if ( v24 == 18 )
    goto LABEL_68;
LABEL_26:
  v138 = v24;
  v139 = (*(_DWORD *)(a1 + 144) & 0x8000) != 0;
  sub_577380(a1, *a2, v166.m128i_i64[0], ((*(_DWORD *)(a1 + 144) & 0x8000u) >> 15) ^ 1);
  v27 = v165;
  if ( v165 - 1 > 0xF )
  {
    if ( (v161 & 0x80u) == 0 || v138 != 9 )
      sub_368890();
    if ( !(_BYTE)v19 )
    {
      if ( v21 != 2 )
        goto LABEL_32;
      v97 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
      if ( v97 == sub_572080 )
      {
        sub_571E30((_QWORD *)a1, 43);
LABEL_199:
        v19 = 1;
LABEL_32:
        if ( !v153 )
        {
LABEL_33:
          v28 = v166.m128i_i64[0];
          goto LABEL_34;
        }
LABEL_186:
        v19 |= sub_575B10((_QWORD *)a1, v147);
        goto LABEL_33;
      }
LABEL_263:
      ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD *, char), __int64))v97)(
        a1,
        43,
        sub_572080,
        v26);
      goto LABEL_199;
    }
    v90 = v166.m128i_i64[0];
    goto LABEL_167;
  }
  v83 = 8 * v165 - 1;
  v84 = v166.m128i_i64[0];
  v85 = *(_QWORD *)(*(_QWORD *)(v159 + 1672) + 24LL);
  if ( v83 > 63 )
  {
    v87 = -1;
    v86 = 0;
    v26 = 0;
  }
  else
  {
    v26 = 1LL << v83;
    v86 = 2 * v26;
    v87 = 2 * v26 - 1;
  }
  v88 = *(_DWORD *)(v85 + 24);
  if ( v88 != 8 && v88 >= (int)v165 )
    v84 = *(_QWORD *)(v85 + 16) & v166.m128i_i64[0];
  if ( v140 )
  {
    LOBYTE(v88) = (v84 & v26) != 0;
    LOBYTE(v85) = v26 != v84;
    v19 ^= v85 & v88;
  }
  if ( (_BYTE)v19 )
  {
    v89 = v84 | -v86;
    if ( (v84 & v26) != 0 )
      v84 = v89;
    v90 = v87 & -v84;
    v166.m128i_i64[0] = v90;
LABEL_167:
    LOBYTE(v19) = v90 != 0 || v21 == 2;
    if ( (_BYTE)v19 )
    {
      v91 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
      if ( v91 == sub_572080 )
        sub_571E30((_QWORD *)a1, 45);
      else
        v91((_QWORD *)a1, 45);
      goto LABEL_33;
    }
    v28 = 0;
    goto LABEL_34;
  }
  if ( v153 )
  {
    v166.m128i_i64[0] = v87 & ~v84;
    if ( v21 != 2 )
      goto LABEL_186;
    v97 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
    if ( v97 == sub_572080 )
    {
      sub_571E30((_QWORD *)a1, 43);
      v19 = v153;
      goto LABEL_186;
    }
    goto LABEL_263;
  }
  v28 = v87 & v84;
  v166.m128i_i64[0] = v28;
  if ( v21 == 2 )
  {
    v97 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
    if ( v97 == sub_572080 )
    {
      sub_571E30((_QWORD *)a1, 43);
      LOBYTE(v19) = 1;
      goto LABEL_33;
    }
    goto LABEL_263;
  }
LABEL_34:
  sub_577380(a1, *a2, v28, v139);
  if ( !(unsigned __int8)is_char(v162, v160) )
  {
    if ( (unsigned __int8)is_stroff(v162, v160) )
    {
      v69 = opinfo;
      if ( !v189 )
      {
        if ( opinfo )
        {
          v189 = 1;
LABEL_124:
          ptr = nullptr;
          v173 = 0;
          if ( !(unsigned __int8)get_tid_name(&ptr, *(_QWORD *)(v69 + 8)) )
          {
            if ( ptr )
            {
              *(_QWORD *)&v173 = 0;
              qfree(ptr);
            }
            goto LABEL_38;
          }
          src = nullptr;
          *(_OWORD *)v175 = 0;
          sub_35A790((char **)&src);
          p_s = (__int64 *)&s;
          v169 = 0;
          if ( !*(_QWORD *)(v69 + 264) )
          {
            if ( *(_QWORD *)(v159 + 1392) || (v122 = getinf_flag(2, 2), p_s = (__int64 *)&s, v122) )
            {
              v71 = sub_6BD6E0(*(_QWORD *)(v159 + 1672), *(_QWORD *)(v69 + 8), 0, &v169);
              p_s = (__int64 *)&s;
              if ( v71 )
              {
                v72 = v166.m128i_i64[0];
                if ( *(_DWORD *)v69 == 1 )
                {
                  if ( v166.m128i_i64[0] )
                  {
                    tinfo_property = get_tinfo_property(v169, 286);
                    p_s = (__int64 *)&s;
                    if ( !tinfo_property )
                    {
                      tinfo_size = get_tinfo_size(0, v169, 0);
                      p_s = (__int64 *)&s;
                      if ( v72 == tinfo_size )
                      {
                        v162 = (__int64)v190;
                        v132 = *(void **)(v159 + 1392);
                        if ( !v132 )
                          v132 = &unk_23AF450;
                        qsnprintf((unsigned int)v190, 1024, (unsigned int)&unk_22D5BD7, (_DWORD)v132, v130, v131);
                        v162 = (__int64)&s;
                        sub_3953D0(&s);
                        aflags = get_aflags(*(_QWORD *)(a1 + 16));
                        p_s = (__int64 *)v162;
                        if ( aflags >= 0 )
                          goto LABEL_139;
                        v134 = ((_QWORD)v171 == 0) + (_QWORD)v171 - 1LL;
                        v135 = v134 + 5;
                        v136 = v134 + 6;
                        if ( *((_QWORD *)&v171 + 1) < (unsigned __int64)(v134 + 6) )
                        {
                          s = (char *)qvector_reserve(v162, s, v136, 1);
                          v135 = v134 + 5;
                          v136 = v134 + 6;
                          p_s = (__int64 *)v162;
                        }
                        *(_QWORD *)&v171 = v136;
                        s[v135] = 0;
                        v137 = &s[v134];
                        *(_DWORD *)v137 = (_DWORD)&loc_22B0901;
                        v137[4] = 9;
                        v166.m128i_i64[0] = 0;
                      }
                    }
                  }
                }
              }
            }
          }
          v74 = (char *)v175[0];
          if ( v175[0] )
          {
            v75 = (char *)v175[0] - 1;
            if ( v175[0] != (char *)&dword_0 + 1 )
            {
              v76 = v171;
              v77 = (char *)v175[0] - 1;
              if ( (_QWORD)v171 )
              {
                v76 = v171 - 1;
                v77 = &v75[v171 - 1];
                v74 = (char *)v175[0] + v171 - 1;
              }
              if ( *((_QWORD *)&v171 + 1) < (unsigned __int64)v74 )
              {
                v146 = v77;
                v152 = v76;
                v158 = v74;
                v162 = (__int64)p_s;
                s = (char *)qvector_reserve(p_s, s, v74, 1);
                v77 = v146;
                v76 = v152;
                v74 = v158;
                p_s = (__int64 *)v162;
              }
              *(_QWORD *)&v171 = v74;
              v162 = (__int64)p_s;
              v77[(_QWORD)s] = 0;
              memcpy(&s[v76], src, (size_t)v75);
              p_s = (__int64 *)v162;
            }
          }
          v166.m128i_i64[1] = sub_575F00(
                                p_s,
                                *(_QWORD *)(a1 + 16),
                                v160,
                                &v166,
                                *(_QWORD *)(v69 + 264),
                                (void *)(v69 + 8),
                                *(_DWORD *)v69,
                                0,
                                v161);
LABEL_139:
          v78 = v166.m128i_i64[0] != 0;
          clear_tinfo_t(&v169);
          v16 = v19 & v78;
          if ( src )
          {
            v175[0] = nullptr;
            qfree(src);
          }
          if ( ptr )
          {
            *(_QWORD *)&v173 = 0;
            qfree(ptr);
          }
          goto LABEL_143;
        }
        opinfo = get_opinfo(v186, v187.m128_u64[0], v188, v187.m128_u64[1]);
        v69 = opinfo;
        v189 = 1;
      }
      if ( v69 )
        goto LABEL_124;
    }
    if ( !(unsigned __int8)is_enum(v162, *a2) )
      goto LABEL_38;
    v79 = opinfo;
    if ( !v189 )
    {
      if ( opinfo )
      {
        v189 = 1;
LABEL_149:
        v80 = *(_BYTE *)(v79 + 8);
        v81 = sub_6BA0F0(*(_QWORD *)(v159 + 1672), *(_QWORD *)v79);
        v82 = sub_5771F0((_QWORD *)a1, v159, v166.m128i_i64[0], v27, v81, v80, v19, v161);
        if ( v82 != -2 )
        {
          v32 = v82;
          goto LABEL_87;
        }
        goto LABEL_37;
      }
      v79 = get_opinfo(v186, v187.m128_u64[0], v188, v187.m128_u64[1]);
      opinfo = v79;
      v189 = 1;
    }
    if ( !v79 )
      goto LABEL_38;
    goto LABEL_149;
  }
  if ( !(unsigned __int8)sub_575A50(v190, &v166, v27) )
  {
    if ( !v166.m128i_i64[0] )
    {
LABEL_38:
      radix = get_radix(v162, *a2);
      sub_589050(v190, 1024, v166.m128i_i64[0], v27, radix, v143);
      v30 = *(_DWORD *)(a1 + 56);
      if ( v30 )
      {
        v31 = 5 * (unsigned int)(v30 == 2) + 13;
      }
      else
      {
        v31 = 31;
        if ( (~BYTE1(v162) & 6) == 0 )
          v31 = 12;
      }
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v190, v31);
      v32 = -(__int64)(*(_DWORD *)(a1 + 56) == 2);
      goto LABEL_87;
    }
LABEL_37:
    *(_DWORD *)(a1 + 56) = 2;
    goto LABEL_38;
  }
  v96 = 30;
  if ( (~BYTE1(v162) & 6) == 0 )
    v96 = 10;
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v190, v96);
  v32 = 0;
LABEL_87:
  if ( s )
  {
    *(_QWORD *)&v171 = 0;
    qfree(s);
  }
  return v32;
}
