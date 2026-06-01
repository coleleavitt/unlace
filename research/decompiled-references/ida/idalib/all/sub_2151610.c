__int64 __fastcall sub_2151610(__int64 a1, char a2, __int64 a3)
{
  size_t v4; // r8
  _BYTE *v5; // r13
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // r14
  size_t v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __m128 *p_s1; // rsi
  char v20; // al
  unsigned int v21; // ebx
  int v22; // eax
  char v23; // r15
  __int32 v24; // r12d
  const char *v25; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // r11
  __m128 *v30; // r15
  __int64 v31; // r12
  char *v32; // r12
  char v33; // al
  char *v34; // rdx
  _QWORD *v35; // rcx
  size_t v36; // r9
  int v37; // eax
  _QWORD *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  unsigned __int64 *v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  unsigned int *v51; // r15
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  int v56; // edx
  char v57; // cl
  char *v58; // r8
  _QWORD *v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rdi
  unsigned int v68; // edx
  unsigned int **v69; // rsi
  unsigned int *v70; // rcx
  char v71; // cl
  char *v72; // r8
  _QWORD *v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  const char *v78; // rax
  unsigned __int64 v79; // rdx
  char *v80; // rbx
  __int64 v81; // rdx
  _QWORD *v82; // rax
  char *v83; // rdx
  int v84; // eax
  char v85; // al
  _DWORD **v86; // r8
  char v87; // al
  size_t v88; // rax
  char *v89; // rsi
  __int64 v90; // rdx
  _QWORD *v91; // rax
  char *v92; // rdx
  char v93; // al
  char v94; // al
  char v95; // al
  size_t v96; // rax
  char v97; // al
  size_t v98; // rax
  char v99; // al
  size_t v100; // rax
  char v101; // al
  __m128 *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdi
  char v105; // al
  char v106; // al
  __int64 v107; // r8
  __int64 v108; // rdi
  const char *v109; // rax
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rdx
  void *v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 v117; // rax
  void *v118; // rax
  __int64 v119; // rdi
  int v120; // r11d
  unsigned int **v121; // r10
  int v122; // ecx
  __int64 v123; // rax
  unsigned __int64 v124; // r12
  _QWORD *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rdi
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rax
  __int64 v130; // rdi
  int v131; // esi
  size_t v132; // rax
  size_t v133; // rax
  char v134; // al
  int v136; // [rsp+8h] [rbp-190h]
  __int64 v137; // [rsp+8h] [rbp-190h]
  __int64 v138; // [rsp+8h] [rbp-190h]
  size_t n; // [rsp+18h] [rbp-180h]
  unsigned __int8 na; // [rsp+18h] [rbp-180h]
  size_t nb; // [rsp+18h] [rbp-180h]
  bool nc; // [rsp+18h] [rbp-180h]
  size_t nd; // [rsp+18h] [rbp-180h]
  size_t ne; // [rsp+18h] [rbp-180h]
  _QWORD *src; // [rsp+20h] [rbp-178h]
  char *srca; // [rsp+20h] [rbp-178h]
  _DWORD **srcb; // [rsp+20h] [rbp-178h]
  unsigned int v149; // [rsp+28h] [rbp-170h]
  __int64 v150; // [rsp+28h] [rbp-170h]
  __m128 *v151; // [rsp+28h] [rbp-170h]
  __int64 v152; // [rsp+48h] [rbp-150h] BYREF
  __int64 v153; // [rsp+50h] [rbp-148h] BYREF
  __int64 v154; // [rsp+58h] [rbp-140h] BYREF
  void *s1; // [rsp+60h] [rbp-138h] BYREF
  __int64 v156; // [rsp+68h] [rbp-130h]
  unsigned __int64 v157; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v158; // [rsp+78h] [rbp-120h]
  void *v159[2]; // [rsp+80h] [rbp-118h] BYREF
  _QWORD v160[2]; // [rsp+90h] [rbp-108h] BYREF
  void *v161[2]; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v162[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int16 v163; // [rsp+C0h] [rbp-D8h]
  _QWORD v164[2]; // [rsp+D0h] [rbp-C8h] BYREF
  const char *v165; // [rsp+E0h] [rbp-B8h]
  size_t v166; // [rsp+E8h] [rbp-B0h]
  __int16 v167; // [rsp+F0h] [rbp-A8h]
  __m128 v168; // [rsp+100h] [rbp-98h] BYREF
  _QWORD v169[2]; // [rsp+110h] [rbp-88h] BYREF
  __int16 v170; // [rsp+120h] [rbp-78h]
  __m128 v171; // [rsp+130h] [rbp-68h] BYREF
  __m128 v172; // [rsp+140h] [rbp-58h] BYREF
  __int16 v173; // [rsp+150h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE **)(v4 + 184);
  v6 = **(_DWORD **)(v4 + 48);
  if ( v6 == 3 )
  {
    v41 = sub_2153C00(v4);
    if ( *(_DWORD *)v41 == 2 )
    {
      v5 = *(_BYTE **)(v41 + 8);
      v10 = *(_QWORD *)(v41 + 16);
    }
    else
    {
      v65 = *(_QWORD *)(v41 + 16);
      v10 = 0;
      if ( v65 )
      {
        v10 = v65 - 1;
        if ( v65 != 1 )
          v10 = v65 - 2;
        v65 = 1;
      }
      v5 = (_BYTE *)(*(_QWORD *)(v41 + 8) + v65);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
    v4 = *(_QWORD *)(a1 + 8);
LABEL_22:
    p_s1 = (__m128 *)v10;
    n = v4;
    s1 = nullptr;
    v156 = 0;
    v152 = 0;
    v157 = 0;
    v158 = 0;
    v153 = 0;
    v154 = -1;
    v20 = sub_2150300(v5, v10, ".rodata", 7u);
    v4 = n;
    if ( v20 )
      goto LABEL_23;
    if ( v10 == 8 )
    {
      if ( *(_QWORD *)v5 == 0x31617461646F722ELL )
      {
LABEL_23:
        v21 = 2;
        goto LABEL_24;
      }
    }
    else if ( v10 == 5 && (*(_DWORD *)v5 == 1852401198 && v5[4] == 105 || *(_DWORD *)v5 == 1768843566 && v5[4] == 116) )
    {
      goto LABEL_41;
    }
    p_s1 = (__m128 *)v10;
    v27 = sub_2150300(v5, v10, ".text", 5u);
    v4 = n;
    if ( !v27 )
    {
      p_s1 = (__m128 *)v10;
      v85 = sub_2150300(v5, v10, ".data", 5u);
      v4 = n;
      if ( v85
        || v10 == 6 && *(_DWORD *)v5 == 1952539694 && *((_WORD *)v5 + 2) == 12641
        || (p_s1 = (__m128 *)v10, v94 = sub_2150300(v5, v10, ".bss", 4u), v4 = n, v94)
        || (p_s1 = (__m128 *)v10, v95 = sub_2150300(v5, v10, ".init_array", 0xBu), v4 = n, v95)
        || (v96 = j__strlen(".fini_array"),
            p_s1 = (__m128 *)v10,
            v97 = sub_2150300(v5, v10, ".fini_array", v96),
            v4 = n,
            v97)
        || (v98 = j__strlen(".preinit_array"),
            p_s1 = (__m128 *)v10,
            v99 = sub_2150300(v5, v10, ".preinit_array", v98),
            v4 = n,
            v99) )
      {
        v21 = 3;
      }
      else
      {
        v100 = j__strlen(".tdata");
        p_s1 = (__m128 *)v10;
        v101 = sub_2150300(v5, v10, ".tdata", v100);
        v4 = n;
        if ( v101
          || (v21 = 0,
              v133 = j__strlen(".tbss"),
              p_s1 = (__m128 *)v10,
              v134 = sub_2150300(v5, v10, ".tbss", v133),
              v4 = n,
              v134) )
        {
          v21 = 1027;
        }
      }
LABEL_24:
      v22 = **(_DWORD **)(v4 + 48);
      if ( v22 != 26 )
      {
        na = 0;
        v23 = 0;
        v24 = 0;
        src = nullptr;
        goto LABEL_26;
      }
      (*(void (__fastcall **)(size_t))(*(_QWORD *)v4 + 152LL))(v4);
      if ( a2 )
      {
        v4 = *(_QWORD *)(a1 + 8);
        if ( **(_DWORD **)(v4 + 48) == 3 )
          goto LABEL_46;
        p_s1 = (__m128 *)&v153;
        v23 = sub_2153C90(*(_QWORD *)(a1 + 8), &v153);
        if ( v23 )
          return 1;
        v4 = *(_QWORD *)(a1 + 8);
        v22 = **(_DWORD **)(v4 + 48);
        if ( v22 != 26 )
        {
          na = 0;
          v24 = 0;
          src = nullptr;
          goto LABEL_26;
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 152LL))(*(_QWORD *)(a1 + 8));
      }
      v4 = *(_QWORD *)(a1 + 8);
      v42 = **(_DWORD **)(v4 + 48);
      if ( v42 != 3 )
      {
        if ( v42 != 38 )
        {
          v25 = "expected string";
          goto LABEL_36;
        }
        v24 = 0;
        while ( 1 )
        {
          (*(void (__fastcall **)(size_t))(*(_QWORD *)v4 + 152LL))(v4);
          v4 = *(_QWORD *)(a1 + 8);
          if ( **(_DWORD **)(v4 + 48) != 2 )
            goto LABEL_153;
          v75 = sub_2153C00(*(_QWORD *)(a1 + 8));
          if ( *(_DWORD *)v75 == 2 )
          {
            v76 = *(_QWORD *)(v75 + 8);
            v77 = *(_QWORD *)(v75 + 16);
          }
          else
          {
            v79 = *(_QWORD *)(v75 + 16);
            if ( v79 < 2 )
              goto LABEL_152;
            v77 = v79 - 2;
            v76 = *(_QWORD *)(v75 + 8) + 1LL;
          }
          if ( v77 == 5 )
          {
            if ( *(_DWORD *)v76 == 1869376609 && *(_BYTE *)(v76 + 4) == 99 )
            {
              v24 |= 2u;
            }
            else
            {
              if ( *(_DWORD *)v76 != 1953067639 || *(_BYTE *)(v76 + 4) != 101 )
                goto LABEL_152;
              v24 |= 1u;
            }
          }
          else if ( v77 == 9 )
          {
            if ( *(_QWORD *)v76 != 0x74736E6963657865LL || *(_BYTE *)(v76 + 8) != 114 )
              goto LABEL_152;
            v24 |= 4u;
          }
          else
          {
            if ( v77 != 3 || *(_WORD *)v76 != 27764 || *(_BYTE *)(v76 + 2) != 115 )
            {
LABEL_152:
              v4 = *(_QWORD *)(a1 + 8);
              goto LABEL_153;
            }
            v24 |= 0x400u;
          }
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
          v4 = *(_QWORD *)(a1 + 8);
          v37 = **(_DWORD **)(v4 + 48);
          if ( v37 == 26 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 152LL))(*(_QWORD *)(a1 + 8));
            v4 = *(_QWORD *)(a1 + 8);
            v37 = **(_DWORD **)(v4 + 48);
            if ( v37 == 38 )
              continue;
          }
          goto LABEL_176;
        }
      }
LABEL_46:
      v28 = sub_2153C00(v4);
      v29 = *(_QWORD *)(v28 + 16);
      if ( v29 )
      {
        v30 = (__m128 *)(v29 - 1);
        if ( v29 == 1 )
        {
          v31 = 1;
          v29 = 1;
        }
        else
        {
          v102 = (__m128 *)(v29 - 2);
          v31 = 1;
          --v29;
          v30 = v102;
        }
      }
      else
      {
        v30 = nullptr;
        v31 = 0;
      }
      v150 = v29;
      v32 = (char *)(*(_QWORD *)(v28 + 8) + v31);
      srca = *(char **)(v28 + 8);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
      p_s1 = v30;
      nb = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v33 = sub_2247970(v32, v30, 0, &v171);
      v36 = nb;
      v23 = v33;
      if ( v33 )
      {
        v4 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v4 = *(_QWORD *)(a1 + 8);
        v34 = (char *)v171.m128_u32[0];
        if ( v171.m128_u64[0] == v171.m128_u32[0] )
        {
          v24 = v171.m128_i32[0];
          if ( v171.m128_i32[0] != -1 )
          {
LABEL_52:
            v21 |= v24;
            nc = (v21 & 0x200) != 0;
            if ( !v23 || (v21 & 0x200) == 0 )
            {
              v136 = v21 & 0x10;
              v37 = **(_DWORD **)(v4 + 48);
LABEL_55:
              if ( v37 != 26 )
                goto LABEL_164;
              srcb = (_DWORD **)v4;
              (*(void (__fastcall **)(size_t, __m128 *, char *, _QWORD *, size_t, size_t))(*(_QWORD *)v4 + 152LL))(
                v4,
                p_s1,
                v34,
                v35,
                v4,
                v36);
              v38 = *(_QWORD **)(a1 + 8);
              v39 = *srcb[6];
              if ( v39 == 46 )
                goto LABEL_247;
              if ( v39 != 3 && v39 != 37 )
              {
                v40 = *(_QWORD *)(v38[2] + 152LL);
                if ( *(_QWORD *)(v40 + 56) && **(_BYTE **)(v40 + 48) == 64 )
                {
                  v171.m128_u64[0] = (unsigned __int64)"expected '%<type>' or \"<type>\"";
                  v173 = 259;
                }
                else
                {
                  v171.m128_u64[0] = (unsigned __int64)"expected '@<type>', '%<type>' or \"<type>\"";
                  v173 = 259;
                }
                goto LABEL_62;
              }
              if ( v39 != 3 )
              {
LABEL_247:
                (*(void (__fastcall **)(_QWORD *))(*v38 + 152LL))(v38);
                v38 = *(_QWORD **)(a1 + 8);
                if ( *srcb[6] == 4 )
                {
                  v111 = sub_2153C00(v38);
                  v112 = *(_QWORD *)(a1 + 8);
                  v113 = *(_QWORD *)(v111 + 16);
                  v114 = *(void **)(v111 + 8);
                  v156 = v113;
                  s1 = v114;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 152LL))(v112);
                  v4 = *(_QWORD *)(a1 + 8);
LABEL_164:
                  if ( !v156 )
                  {
                    if ( v136 )
                    {
                      v25 = "Mergeable section must specify the type";
                      goto LABEL_36;
                    }
                    v25 = "Group section must specify the type";
                    if ( nc )
                      goto LABEL_36;
                    if ( **(_DWORD **)(v4 + 48) != 9 )
                      goto LABEL_37;
                    if ( (v21 & 0x80u) == 0 )
                    {
                      na = 0;
                      src = nullptr;
LABEL_170:
                      if ( (unsigned __int8)sub_2154910(a1, &v154) )
                        return 1;
                      v4 = *(_QWORD *)(a1 + 8);
                      v22 = **(_DWORD **)(v4 + 48);
LABEL_26:
                      if ( v22 == 9 )
                      {
                        (*(void (__fastcall **)(size_t))(*(_QWORD *)v4 + 152LL))(v4);
                        switch ( v156 )
                        {
                          case 0LL:
                            if ( v10 > 4 && *(_DWORD *)v5 == 1953459758 && v5[4] == 101 )
                              goto LABEL_31;
                            if ( (unsigned __int8)sub_2150300(v5, v10, ".init_array", 0xBu) )
                            {
LABEL_43:
                              v149 = 14;
                              goto LABEL_84;
                            }
                            if ( !(unsigned __int8)sub_2150300(v5, v10, ".bss", 4u)
                              && !(unsigned __int8)sub_2150300(v5, v10, ".tbss", 5u) )
                            {
                              if ( !(unsigned __int8)sub_2150300(v5, v10, ".fini_array", 0xBu) )
                              {
                                v88 = j__strlen(".preinit_array");
                                if ( !(unsigned __int8)sub_2150300(v5, v10, ".preinit_array", v88) )
                                  goto LABEL_266;
LABEL_257:
                                v149 = 16;
                                goto LABEL_84;
                              }
LABEL_237:
                              v149 = 15;
                              goto LABEL_84;
                            }
LABEL_127:
                            v149 = 8;
                            goto LABEL_84;
                          case 10LL:
                            if ( *(_QWORD *)s1 == 0x7272615F74696E69LL && *((_WORD *)s1 + 4) == 31073 )
                              goto LABEL_43;
                            if ( *(_QWORD *)s1 == 0x7272615F696E6966LL && *((_WORD *)s1 + 4) == 31073 )
                              goto LABEL_237;
                            break;
                          case 13LL:
                            if ( *(_QWORD *)s1 == 0x5F74696E69657270LL
                              && *((_DWORD *)s1 + 2) == 1634890337
                              && *((_BYTE *)s1 + 12) == 121 )
                            {
                              goto LABEL_257;
                            }
                            if ( !memcmp(s1, "llvm_jt_sizes", 0xDu) )
                            {
                              v149 = 1879002125;
                              goto LABEL_84;
                            }
                            break;
                          case 6LL:
                            if ( *(_DWORD *)s1 == 1768058734 && *((_WORD *)s1 + 2) == 29556 )
                              goto LABEL_127;
                            if ( *(_DWORD *)s1 == 1769434741 && *((_WORD *)s1 + 2) == 25710 )
                            {
                              v149 = 1879048193;
                              goto LABEL_84;
                            }
                            break;
                          case 8LL:
                            if ( *(_QWORD *)s1 == 0x73746962676F7270LL )
                            {
LABEL_266:
                              v149 = 1;
                              goto LABEL_84;
                            }
                            if ( *(_QWORD *)s1 == 0x6F746C5F6D766C6CLL )
                            {
                              v149 = 1879002124;
                              goto LABEL_84;
                            }
                            break;
                          case 4LL:
                            if ( *(_DWORD *)s1 == 1702129518 )
                            {
LABEL_31:
                              v149 = 7;
                              goto LABEL_84;
                            }
                            break;
                          case 11LL:
                            if ( *(_QWORD *)s1 == 0x72646F5F6D766C6CLL
                              && *((_WORD *)s1 + 4) == 24948
                              && *((_BYTE *)s1 + 10) == 98 )
                            {
                              v149 = 1879002112;
                              goto LABEL_84;
                            }
                            break;
                          case 19LL:
                            if ( !(*(_QWORD *)s1 ^ 0x6E696C5F6D766C6CLL | *((_QWORD *)s1 + 1) ^ 0x6974706F5F72656BLL)
                              && *((_WORD *)s1 + 8) == 28271
                              && *((_BYTE *)s1 + 18) == 115 )
                            {
                              v149 = 1879002113;
                              goto LABEL_84;
                            }
                            break;
                          case 23LL:
                            if ( !(*(_QWORD *)s1 ^ 0x6C61635F6D766C6CLL | *((_QWORD *)s1 + 1) ^ 0x5F68706172675F6CLL)
                              && *((_DWORD *)s1 + 4) == 1718579824
                              && *((_WORD *)s1 + 10) == 27753
                              && *((_BYTE *)s1 + 22) == 101 )
                            {
                              v149 = 1879002121;
                              goto LABEL_84;
                            }
                            break;
                          case 24LL:
                            if ( !(*(_QWORD *)s1 ^ 0x7065645F6D766C6CLL | *((_QWORD *)s1 + 1) ^ 0x6C5F746E65646E65LL)
                              && *((_QWORD *)s1 + 2) == 0x7365697261726269LL )
                            {
                              v149 = 1879002116;
                              goto LABEL_84;
                            }
                            break;
                          case 12LL:
                            if ( *(_QWORD *)s1 == 0x6D79735F6D766C6CLL && *((_DWORD *)s1 + 2) == 1953653104 )
                            {
                              v149 = 1879002117;
                              goto LABEL_84;
                            }
                            break;
                          case 16LL:
                            if ( !(*(_QWORD *)s1 ^ 0x5F62625F6D766C6CLL | *((_QWORD *)s1 + 1) ^ 0x70616D5F72646461LL) )
                            {
                              v149 = 1879002122;
                              goto LABEL_84;
                            }
                            break;
                          default:
                            if ( v156 == 15
                              && *(_QWORD *)s1 == 0x66666F5F6D766C6CLL
                              && *((_DWORD *)s1 + 2) == 1684107116
                              && *((_WORD *)s1 + 6) == 28265
                              && *((_BYTE *)s1 + 14) == 103 )
                            {
                              v149 = 1879002123;
                              goto LABEL_84;
                            }
                            break;
                        }
                        if ( (unsigned __int8)sub_2247970(s1, v156, 0, &v171) || v171.m128_u64[0] != v171.m128_u32[0] )
                        {
                          v130 = *(_QWORD *)(a1 + 8);
                          v173 = 259;
                          v171.m128_u64[0] = (unsigned __int64)"unknown section type";
                          return sub_21543E0(v130, &v171, 0, 0);
                        }
                        v149 = v171.m128_i32[0];
LABEL_84:
                        v43 = *(_QWORD *)(a1 + 8);
                        if ( v23
                          && (v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 24) + 288LL) + 8LL)) != 0
                          && (v45 = *(_QWORD *)(v44 + 192),
                              v46 = v45 & 0xFFFFFFFFFFFFFFF8LL,
                              (v45 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
                        {
                          if ( (*(_BYTE *)(v46 + 8) & 1) != 0 )
                          {
                            v47 = *(unsigned __int64 **)(v46 - 8);
                            v48 = *v47;
                            v49 = (unsigned __int64)(v47 + 3);
                          }
                          else
                          {
                            v48 = 0;
                            v49 = 0;
                          }
                          v157 = v49;
                          BYTE1(v21) |= 2u;
                          v158 = v48;
                          na = (v45 >> 2) & 1;
                        }
                        else
                        {
                          v49 = v157;
                          v48 = v158;
                        }
                        v50 = *(_QWORD *)(v43 + 16);
                        v171.m128_u64[1] = v48;
                        v170 = 261;
                        v173 = 261;
                        v171.m128_u64[0] = v49;
                        v168.m128_u64[0] = (unsigned __int64)v5;
                        v168.m128_u64[1] = v10;
                        v51 = (unsigned int *)sub_210B6D0(
                                                v50,
                                                (const char **)&v168,
                                                v149,
                                                v21,
                                                v152,
                                                (__int64)&v171,
                                                na,
                                                v154,
                                                (__int64)src);
                        sub_211C8E0(*(__int64 **)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v51, v153);
                        if ( !v156 )
                          goto LABEL_101;
                        v55 = v51[43];
                        if ( (_DWORD)v55 == v149 )
                          goto LABEL_101;
                        v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 56LL);
                        if ( v56 == 38 )
                        {
                          if ( v10 != 9 || *(_QWORD *)v5 != 0x6D6172665F68652ELL || v5[8] != 101 )
                            goto LABEL_96;
                        }
                        else if ( (unsigned int)(v56 - 16) > 3
                               || v10 <= 6
                               || *(_DWORD *)v5 != 1650811950
                               || *((_WORD *)v5 + 2) != 26485
                               || v5[6] != 95 )
                        {
                          goto LABEL_96;
                        }
                        if ( v149 == 1 )
                        {
LABEL_101:
                          if ( v24 )
                          {
                            v62 = v51[44];
                            if ( v21 == (_DWORD)v62 )
                            {
                              v61 = v152;
                              v63 = *(_QWORD *)(a1 + 8);
LABEL_106:
                              v52 = v51[46];
                              if ( v52 != v61 )
                              {
                                v161[0] = "changed section entsize for ";
                                v164[0] = v161;
                                v165 = ", expected: ";
                                v168.m128_i32[0] = v52;
                                v163 = 1283;
                                v171.m128_u64[0] = (unsigned __int64)v164;
                                v173 = 2306;
                                v167 = 770;
                                v162[0] = v5;
                                v162[1] = v10;
                                v172.m128_u64[0] = v168.m128_u64[0];
                                sub_2153E90(v63, a3, &v171, 0, 0);
LABEL_108:
                                v63 = *(_QWORD *)(a1 + 8);
                              }
LABEL_109:
                              v64 = *(_QWORD *)(v63 + 16);
                              if ( !*(_BYTE *)(v64 + 1777) || (v51[44] & 6) != 6 )
                                return 0;
                              v66 = *(unsigned int *)(v64 + 1800);
                              v168.m128_u64[0] = (unsigned __int64)v51;
                              if ( (_DWORD)v66 )
                              {
                                v53 = (unsigned int)(v66 - 1);
                                v67 = *(_QWORD *)(v64 + 1784);
                                v68 = v53 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
                                v69 = (unsigned int **)(v67 + 8LL * v68);
                                v70 = *v69;
                                if ( v51 == *v69 )
                                {
LABEL_130:
                                  sub_21314C0(&v171, v69, (_QWORD *)(v67 + 8 * v66), v64 + 1784, 1);
                                  return 0;
                                }
                                v120 = 1;
                                v121 = nullptr;
                                if ( v70 != (unsigned int *)-4096LL )
                                {
                                  while ( 1 )
                                  {
                                    if ( v70 == (unsigned int *)-8192LL && !v121 )
                                      v121 = v69;
                                    v68 = v53 & (v120 + v68);
                                    v69 = (unsigned int **)(v67 + 8LL * v68);
                                    v70 = *v69;
                                    if ( v51 == *v69 )
                                      goto LABEL_130;
                                    if ( v70 == (unsigned int *)-4096LL )
                                    {
                                      if ( v121 )
                                        goto LABEL_345;
                                      break;
                                    }
                                    ++v120;
                                  }
                                }
                                v121 = v69;
LABEL_345:
                                v122 = *(_DWORD *)(v64 + 1792);
                                v171.m128_u64[0] = (unsigned __int64)v121;
                                v61 = (unsigned int)(v122 + 1);
                                v52 = (unsigned int)(3 * v66);
                                if ( 4 * (int)v61 < (unsigned int)v52 )
                                {
                                  v52 = (unsigned int)(v66 - *(_DWORD *)(v64 + 1796) - v61);
                                  if ( (unsigned int)v52 > (unsigned int)v66 >> 3 )
                                    goto LABEL_347;
                                  v131 = v66;
LABEL_359:
                                  sub_2146850(v64 + 1784, v131, v61, v52, v53, v54);
                                  sub_21313D0((__int64 *)(v64 + 1784), (__int64 *)&v168, &v171);
                                  v51 = (unsigned int *)v168.m128_u64[0];
                                  v67 = *(_QWORD *)(v64 + 1784);
                                  v66 = *(unsigned int *)(v64 + 1800);
                                  LODWORD(v61) = *(_DWORD *)(v64 + 1792) + 1;
                                  v121 = (unsigned int **)v171.m128_u64[0];
LABEL_347:
                                  v14 = *v121 + 1024 == nullptr;
                                  *(_DWORD *)(v64 + 1792) = v61;
                                  if ( !v14 )
                                    --*(_DWORD *)(v64 + 1796);
                                  *v121 = v51;
                                  sub_21314C0(&v171, v121, (_QWORD *)(v67 + 8 * v66), v64 + 1784, 1);
                                  v123 = *(unsigned int *)(v64 + 1816);
                                  v124 = v168.m128_u64[0];
                                  if ( v123 + 1 > (unsigned __int64)*(unsigned int *)(v64 + 1820) )
                                  {
                                    sub_2237220(v64 + 1808, v64 + 1824, v123 + 1, 8);
                                    v123 = *(unsigned int *)(v64 + 1816);
                                  }
                                  *(_QWORD *)(*(_QWORD *)(v64 + 1808) + 8 * v123) = v124;
                                  v125 = *(_QWORD **)(a1 + 8);
                                  ++*(_DWORD *)(v64 + 1816);
                                  if ( *(_WORD *)(v125[2] + 1880LL) <= 2u )
                                  {
                                    v171.m128_u64[0] = (unsigned __int64)"DWARF2 only supports one section per compilation unit";
                                    v173 = 259;
                                    (*(void (__fastcall **)(_QWORD *, __int64, __m128 *, _QWORD, _QWORD))(*v125 + 136LL))(
                                      v125,
                                      a3,
                                      &v171,
                                      0,
                                      0);
                                    return 0;
                                  }
                                  return 0;
                                }
                              }
                              else
                              {
                                v171.m128_u64[0] = 0;
                              }
                              v131 = 2 * v66;
                              goto LABEL_359;
                            }
                          }
                          else
                          {
                            v61 = v152;
                            if ( !v152 && !v156 )
                              goto LABEL_108;
                            v62 = v51[44];
                            if ( v21 == (_DWORD)v62 )
                            {
                              v63 = *(_QWORD *)(a1 + 8);
                              goto LABEL_106;
                            }
                          }
                          if ( !v62 )
                          {
                            v71 = 48;
                            v161[0] = v162;
LABEL_138:
                            LOBYTE(v162[0]) = v71;
                            v72 = (_BYTE *)(&dword_0 + 1);
                            v73 = v162;
                            goto LABEL_139;
                          }
                          v80 = &v172.m128_i8[1];
                          do
                          {
                            --v80;
                            v81 = v62 & 0xF;
                            v62 >>= 4;
                            v71 = a0123456789abcd_3[v81];
                            *v80 = v71;
                          }
                          while ( v62 );
                          v82 = v162;
                          v161[0] = v162;
                          v83 = (char *)((char *)v172.m128_f32 + 1 - v80);
                          v72 = (char *)((char *)v172.m128_f32 + 1 - v80);
                          if ( (unsigned __int64)((char *)v172.m128_f32 + 1 - v80) <= 0xF )
                          {
                            if ( v83 == (_BYTE *)&dword_0 + 1 )
                              goto LABEL_138;
                            v73 = v162;
                            if ( !v83 )
                            {
LABEL_139:
                              v161[1] = v72;
                              v72[(_QWORD)v73] = 0;
                              v164[0] = "changed section flags for ";
                              v168.m128_u64[0] = (unsigned __int64)v164;
                              v167 = 1283;
                              v74 = *(_QWORD *)(a1 + 8);
                              v169[0] = ", expected: 0x";
                              v170 = 770;
                              v172.m128_u64[0] = (unsigned __int64)v161;
                              v165 = v5;
                              v166 = v10;
                              v171.m128_u64[0] = (unsigned __int64)&v168;
                              v173 = 1026;
                              sub_2153E90(v74, a3, &v171, 0, 0);
                              if ( v161[0] != v162 )
                                operator delete(v161[0]);
                              v61 = v152;
                              v63 = *(_QWORD *)(a1 + 8);
                              if ( !v24 && !v152 && !v156 )
                                goto LABEL_109;
                              goto LABEL_106;
                            }
LABEL_162:
                            nd = (size_t)v72;
                            memcpy(v82, v80, (size_t)v83);
                            v72 = (char *)nd;
                            v73 = v161[0];
                            goto LABEL_139;
                          }
                          if ( (__int64)v83 >= 0 )
                          {
                            v82 = (_QWORD *)operator new((unsigned __int64)(v83 + 1));
                            v83 = (char *)((char *)v172.m128_f32 + 1 - v80);
                            v72 = (char *)((char *)v172.m128_f32 + 1 - v80);
                            v161[0] = v82;
                            v162[0] = (char *)v172.m128_f32 + 1 - v80;
                            goto LABEL_162;
                          }
LABEL_384:
                          std::__throw_length_error("basic_string::_M_create");
                        }
LABEL_96:
                        if ( !v51[43] )
                        {
                          v57 = 48;
                          v159[0] = v160;
LABEL_98:
                          LOBYTE(v160[0]) = v57;
                          v58 = (_BYTE *)(&dword_0 + 1);
                          v59 = v160;
                          goto LABEL_99;
                        }
                        v89 = (char *)v169 + 1;
                        do
                        {
                          --v89;
                          v90 = v55 & 0xF;
                          v55 >>= 4;
                          v57 = a0123456789abcd_3[v90];
                          *v89 = v57;
                        }
                        while ( v55 );
                        v91 = v160;
                        v159[0] = v160;
                        v92 = (char *)((char *)v169 + 1 - v89);
                        v58 = (char *)((char *)v169 + 1 - v89);
                        if ( (unsigned __int64)((char *)v169 + 1 - v89) <= 0xF )
                        {
                          if ( v92 == (_BYTE *)&dword_0 + 1 )
                            goto LABEL_98;
                          v59 = v160;
                          if ( !v92 )
                          {
LABEL_99:
                            v159[1] = v58;
                            v58[(_QWORD)v59] = 0;
                            v60 = *(_QWORD *)(a1 + 8);
                            v164[0] = "changed section type for ";
                            v168.m128_u64[0] = (unsigned __int64)v164;
                            v169[0] = ", expected: 0x";
                            v170 = 770;
                            v172.m128_u64[0] = (unsigned __int64)v159;
                            v171.m128_u64[0] = (unsigned __int64)&v168;
                            v167 = 1283;
                            v165 = v5;
                            v166 = v10;
                            v173 = 1026;
                            sub_2153E90(v60, a3, &v171, 0, 0);
                            if ( v159[0] != v160 )
                              operator delete(v159[0]);
                            goto LABEL_101;
                          }
                        }
                        else
                        {
                          if ( (__int64)v92 < 0 )
                            goto LABEL_384;
                          v91 = (_QWORD *)operator new((unsigned __int64)(v92 + 1));
                          v92 = (char *)((char *)v169 + 1 - v89);
                          v159[0] = v91;
                          v58 = (char *)((char *)v169 + 1 - v89);
                          v160[0] = (char *)v169 + 1 - v89;
                        }
                        ne = (size_t)v58;
                        memcpy(v91, v89, (size_t)v92);
                        v58 = (char *)ne;
                        v59 = v159[0];
                        goto LABEL_99;
                      }
LABEL_37:
                      v25 = "expected end of directive";
                      goto LABEL_36;
                    }
                    goto LABEL_326;
                  }
                  if ( !v136 )
                  {
LABEL_224:
                    if ( (v21 & 0x80u) != 0 )
                    {
                      v4 = *(_QWORD *)(a1 + 8);
                      if ( **(_DWORD **)(v4 + 48) != 26 )
                      {
LABEL_326:
                        v171.m128_u64[0] = (unsigned __int64)"expected linked-to symbol";
                        v173 = 259;
                        p_s1 = &v171;
                        v105 = sub_21543E0(v4, &v171, 0, 0);
                        src = nullptr;
                        goto LABEL_305;
                      }
                      v137 = *(_QWORD *)(a1 + 8);
                      (*(void (__fastcall **)(__int64, __m128 *, char *, _QWORD *, size_t, size_t))(*(_QWORD *)v4 + 152LL))(
                        v137,
                        p_s1,
                        v34,
                        v35,
                        v4,
                        v36);
                      v168 = 0u;
                      p_s1 = &v168;
                      v151 = *(__m128 **)(v137 + 184);
                      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __m128 *))(**(_QWORD **)(a1 + 8) + 160LL))(
                              *(_QWORD *)(a1 + 8),
                              &v168) )
                      {
                        v116 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
                        v173 = 261;
                        v171 = v168;
                        p_s1 = &v171;
                        v117 = sub_2109620(v116, (void ***)&v171);
                        src = (_QWORD *)v117;
                        if ( v117 && (v35 = (_QWORD *)v117, (*(_WORD *)(v117 + 8) & 0x380) == 0x100) )
                        {
                          v118 = *(void **)v117;
                          if ( *v35
                            || (*((_BYTE *)v35 + 9) & 0x70) == 0x20
                            && (v35[1] & 0x40) == 0
                            && (v118 = sub_210D820(v35[3]), v35 = src, (*src = v118) != 0) )
                          {
                            v34 = (char *)&off_2C8EF40;
                            if ( off_2C8EF40 != v118 )
                              goto LABEL_226;
                          }
                        }
                        else
                        {
                          src = nullptr;
                        }
                        v119 = *(_QWORD *)(a1 + 8);
                        v171.m128_u64[0] = (unsigned __int64)"linked-to symbol is not in a section: ";
                        p_s1 = v151;
                        v173 = 1283;
                        v172 = v168;
                        v105 = sub_2153E90(v119, v151, &v171, 0, 0);
LABEL_305:
                        if ( v105 )
                          return 1;
LABEL_226:
                        if ( !nc )
                        {
LABEL_230:
                          na = 0;
                          goto LABEL_170;
                        }
                        v86 = *(_DWORD ***)(a1 + 8);
                        if ( *v86[6] != 26 )
                        {
                          v171.m128_u64[0] = (unsigned __int64)"expected group name";
                          v173 = 259;
                          v87 = sub_21543E0(v86, &v171, 0, 0);
                          goto LABEL_229;
                        }
                        v138 = *(_QWORD *)(a1 + 8);
                        (*((void (__fastcall **)(__int64, __m128 *, char *, _QWORD *, _DWORD **, size_t))*v86 + 19))(
                          v138,
                          p_s1,
                          v34,
                          v35,
                          v86,
                          v36);
                        if ( **(_DWORD **)(v138 + 48) == 4 )
                        {
                          v126 = sub_2153C00(*(_QWORD *)(a1 + 8));
                          v127 = *(_QWORD *)(a1 + 8);
                          v128 = *(_QWORD *)(v126 + 16);
                          v129 = *(_QWORD *)(v126 + 8);
                          v158 = v128;
                          v157 = v129;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 152LL))(v127);
                          v107 = v138;
                        }
                        else
                        {
                          v106 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)(a1 + 8) + 160LL))(
                                   *(_QWORD *)(a1 + 8),
                                   &v157);
                          v107 = v138;
                          if ( v106 )
                          {
                            v109 = "invalid group name";
LABEL_312:
                            v171.m128_u64[0] = (unsigned __int64)v109;
                            v110 = *(_QWORD *)(a1 + 8);
                            v173 = 259;
                            v87 = sub_21543E0(v110, &v171, 0, 0);
LABEL_229:
                            if ( v87 )
                              return 1;
                            goto LABEL_230;
                          }
                        }
                        na = 0;
                        if ( **(_DWORD **)(v107 + 48) != 26 )
                          goto LABEL_170;
                        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
                        v108 = *(_QWORD *)(a1 + 8);
                        v168 = 0u;
                        if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v108 + 160LL))(
                               v108,
                               &v168) )
                        {
                          v109 = "invalid linkage";
                        }
                        else
                        {
                          v132 = j__strlen("comdat");
                          if ( v132 == v168.m128_u64[1]
                            && (!v132 || !memcmp((const void *)v168.m128_u64[0], "comdat", v132)) )
                          {
                            na = 1;
                            goto LABEL_170;
                          }
                          v109 = "Linkage must be 'comdat'";
                        }
                        goto LABEL_312;
                      }
                      v103 = sub_2153C00(*(_QWORD *)(a1 + 8));
                      v104 = *(_QWORD *)(a1 + 8);
                      if ( *(_QWORD *)(v103 + 16) != 1 || **(_BYTE **)(v103 + 8) != 48 )
                      {
                        v173 = 259;
                        v171.m128_u64[0] = (unsigned __int64)"invalid linked-to symbol";
                        p_s1 = &v171;
                        v105 = sub_21543E0(v104, &v171, 0, 0);
                        src = nullptr;
                        goto LABEL_305;
                      }
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 152LL))(v104);
                    }
                    src = nullptr;
                    goto LABEL_226;
                  }
                  if ( **(_DWORD **)(v4 + 48) == 26 )
                  {
                    (*(void (__fastcall **)(size_t))(*(_QWORD *)v4 + 152LL))(v4);
                    p_s1 = (__m128 *)&v152;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 224LL))(
                           *(_QWORD *)(a1 + 8),
                           &v152) )
                    {
                      return 1;
                    }
                    if ( v152 > 0 )
                      goto LABEL_224;
                    v115 = *(_QWORD *)(a1 + 8);
                    v171.m128_u64[0] = (unsigned __int64)"entry size must be positive";
                    v173 = 259;
                    p_s1 = &v171;
                    v93 = sub_21543E0(v115, &v171, 0, 0);
                  }
                  else
                  {
                    v171.m128_u64[0] = (unsigned __int64)"expected the entry size";
                    v173 = 259;
                    p_s1 = &v171;
                    v93 = sub_21543E0(v4, &v171, 0, 0);
                  }
                  if ( v93 )
                    return 1;
                  goto LABEL_224;
                }
              }
              p_s1 = (__m128 *)&s1;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void **))(*v38 + 160LL))(v38, &s1) )
              {
LABEL_163:
                v4 = *(_QWORD *)(a1 + 8);
                goto LABEL_164;
              }
              v38 = *(_QWORD **)(a1 + 8);
              v171.m128_u64[0] = (unsigned __int64)"expected identifier";
              v173 = 259;
LABEL_62:
              p_s1 = &v171;
              if ( (unsigned __int8)sub_21543E0(v38, &v171, 0, 0) )
                return 1;
              goto LABEL_163;
            }
            v78 = "Section cannot specifiy a group name while also acting as a member of the last group";
LABEL_154:
            v171.m128_u64[0] = (unsigned __int64)v78;
            v173 = 259;
            return sub_21543E0(v4, &v171, 0, 0);
          }
LABEL_153:
          v78 = "unknown flag";
          goto LABEL_154;
        }
      }
      p_s1 = (__m128 *)&srca[v150];
      if ( &srca[v150] != v32 )
      {
        v34 = v32;
        v23 = 0;
        v24 = 0;
        while ( 2 )
        {
          switch ( *v34 )
          {
            case '?':
              v23 = 1;
              goto LABEL_186;
            case 'G':
              v24 |= 0x200u;
              goto LABEL_186;
            case 'M':
              v24 |= 0x10u;
              goto LABEL_186;
            case 'R':
              if ( *(_DWORD *)(nb + 68) == 13 )
                v24 |= 0x100000u;
              else
                v24 |= 0x200000u;
              goto LABEL_186;
            case 'S':
              v24 |= 0x20u;
              goto LABEL_186;
            case 'T':
              v24 |= 0x400u;
              goto LABEL_186;
            case 'a':
              v24 |= 2u;
              goto LABEL_186;
            case 'c':
              if ( *(_DWORD *)(nb + 56) != 39 )
                goto LABEL_153;
              goto LABEL_190;
            case 'd':
              if ( *(_DWORD *)(nb + 56) == 39 )
                goto LABEL_192;
              goto LABEL_153;
            case 'e':
              v24 |= 0x80000000;
              goto LABEL_186;
            case 'l':
              if ( *(_DWORD *)(nb + 56) != 38 )
                goto LABEL_153;
              goto LABEL_192;
            case 'o':
              LOBYTE(v24) = v24 | 0x80;
              goto LABEL_186;
            case 's':
              if ( *(_DWORD *)(nb + 56) != 12 )
                goto LABEL_153;
LABEL_192:
              v24 |= 0x10000000u;
              goto LABEL_186;
            case 'w':
              v24 |= 1u;
              goto LABEL_186;
            case 'x':
              v24 |= 4u;
              goto LABEL_186;
            case 'y':
              v84 = *(_DWORD *)(nb + 56);
              if ( (unsigned int)(v84 - 35) > 1 && (unsigned int)(v84 - 1) > 1 && (unsigned int)(v84 - 3) > 2 )
                goto LABEL_153;
LABEL_190:
              v24 |= 0x20000000u;
LABEL_186:
              if ( p_s1 == (__m128 *)++v34 )
                goto LABEL_52;
              continue;
            default:
              goto LABEL_153;
          }
        }
      }
      v24 = 0;
      v37 = **(_DWORD **)(v4 + 48);
LABEL_176:
      v21 |= v24;
      v23 = 0;
      nc = 0;
      v136 = 0;
      goto LABEL_55;
    }
LABEL_41:
    v21 = 6;
    goto LABEL_24;
  }
  v7 = *(_DWORD *)(v4 + 232);
  if ( v7 || v6 == 9 || v6 == 26 )
    goto LABEL_35;
  v8 = *(_QWORD *)(v4 + 184);
  do
  {
    if ( v6 == 3 )
    {
      v16 = sub_2153C00(v4);
      v17 = *(_QWORD *)(v16 + 16);
      if ( *(_DWORD *)v16 == 2 )
      {
        v18 = (unsigned int)(v17 + 2);
        LODWORD(v17) = v17 + 2;
      }
      else if ( !v17 || (v18 = (unsigned int)v17, v17 == 1) )
      {
        v18 = 2;
        LODWORD(v17) = 2;
      }
      v7 += v17;
      v8 += v18;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
    }
    else
    {
      if ( v6 == 2 )
      {
        v13 = sub_2153C00(v4);
        v14 = *(_DWORD *)v13 == 2;
        v15 = *(_QWORD *)(v13 + 16);
        if ( !v14 )
        {
          if ( v15 <= 1 )
          {
LABEL_15:
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
            goto LABEL_7;
          }
          LODWORD(v15) = v15 - 2;
        }
        v7 += v15;
        v8 += (unsigned int)v15;
        goto LABEL_15;
      }
      v9 = *(_QWORD *)(sub_2153C00(v4) + 16);
      v7 += v9;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
      v8 += (unsigned int)v9;
    }
LABEL_7:
    v10 = v7;
    v11 = sub_2153C00(*(_QWORD *)(a1 + 8));
    v12 = sub_2124B50(v11);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v12 != v8 )
      break;
    if ( *(_DWORD *)(v4 + 232) )
      break;
    v8 = *(_QWORD *)(v4 + 184);
    v6 = **(_DWORD **)(v4 + 48);
    if ( v6 == 9 )
      break;
  }
  while ( v6 != 26 );
  if ( v7 )
    goto LABEL_22;
LABEL_35:
  v25 = "expected identifier";
LABEL_36:
  v171.m128_u64[0] = (unsigned __int64)v25;
  v173 = 259;
  return sub_21543E0(v4, &v171, 0, 0);
}
