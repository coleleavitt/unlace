void __fastcall sub_AAC350(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, int a4, __int64 a5, unsigned __int64 *a6)
{
  __int64 *v6; // r15
  __int64 v8; // r8
  unsigned __int64 v13; // rax
  __int64 *v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rax
  void *v22; // rax
  char v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  size_t v27; // rax
  size_t v28; // r8
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r15
  _BYTE *v40; // rax
  size_t v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  unsigned int v50; // ebp
  __int64 *v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rax
  char v54; // si
  __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned int *v58; // rax
  char v59; // si
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  _BYTE *v94; // rsi
  size_t v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 *v100; // rdx
  __int64 *v101; // r12
  __int64 *v102; // rbp
  __int64 v103; // r13
  _BYTE *v104; // rax
  size_t v105; // rdx
  unsigned __int64 v106; // rdi
  char *v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rsi
  char v110; // si
  __int64 v111; // rax
  __int64 v112; // rax
  bool v113; // al
  __int64 v114; // rbp
  __int64 v115; // r15
  __int64 v116; // r8
  __int64 v117; // rsi
  __int64 *v118; // rax
  __int64 v119; // r15
  unsigned __int64 v120; // r14
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  size_t v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  size_t v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  unsigned int v132; // ebp
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rbp
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // rax
  __int64 *v142; // rdx
  __int64 *v143; // r12
  __int64 *v144; // rbp
  __int64 v145; // r13
  _BYTE *v146; // rax
  size_t v147; // rdx
  char v148; // [rsp+8h] [rbp-180h]
  char v149; // [rsp+8h] [rbp-180h]
  __int64 v150; // [rsp+8h] [rbp-180h]
  __int64 v151; // [rsp+8h] [rbp-180h]
  __int64 *v152; // [rsp+8h] [rbp-180h]
  char v153; // [rsp+8h] [rbp-180h]
  __int64 v154; // [rsp+8h] [rbp-180h]
  __int64 v155; // [rsp+8h] [rbp-180h]
  unsigned __int64 v156; // [rsp+10h] [rbp-178h]
  unsigned int *v157; // [rsp+18h] [rbp-170h]
  char v158; // [rsp+34h] [rbp-154h] BYREF
  _BYTE v159[11]; // [rsp+35h] [rbp-153h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  size_t v161; // [rsp+48h] [rbp-140h]
  __int128 v162; // [rsp+50h] [rbp-138h] BYREF
  __int64 v163; // [rsp+60h] [rbp-128h]
  char v164; // [rsp+68h] [rbp-120h]
  int v165; // [rsp+6Ch] [rbp-11Ch]
  _QWORD *v166; // [rsp+70h] [rbp-118h]

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = a2 & 7;
  v13 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | v8
      | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
  v14 = (__int64 *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *v14;
  v16 = *(unsigned __int8 *)(*v14 + 16);
  v17 = *(_BYTE *)(*v14 + 16);
  switch ( v17 )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
    case 12:
    case 15:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 45:
    case 46:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
      if ( a6 )
        *a6 = a2;
      return;
    case 2:
    case 5:
    case 6:
      v151 = *v14;
      if ( v17 != 5 || (a4 & 0x10) != 0 )
      {
        sub_A6F610(a3, 91);
        if ( (unsigned int)*(unsigned __int8 *)(v151 + 16) - 2 > 1 )
        {
          sub_A6F610(a3, 48);
          v108 = v151;
        }
        else
        {
          v106 = *(_QWORD *)(v151 + 40);
          if ( (*(_BYTE *)(v151 + 19) & 2) != 0 )
          {
            if ( *(_DWORD *)(v106 + 8) <= 0x40u )
              v106 = *(_QWORD *)v106;
            else
              v106 = **(_QWORD **)v106;
          }
          if ( v106 )
          {
            v107 = v159;
            while ( 1 )
            {
              *--v107 = v106 % 0xA + 48;
              if ( v106 <= 9 )
                break;
              v106 /= 0xAu;
            }
          }
          else
          {
            v158 = 48;
            v107 = &v158;
          }
          ptr = &v162;
          sub_A579B0(&ptr, v107, (__int64)v159);
          sub_9EE560(a3, ptr, v161);
          v108 = v151;
          if ( ptr != &v162 )
          {
            operator delete(ptr);
            v108 = v151;
          }
        }
        sub_AAC350(a1, *(_QWORD *)(v108 + 32), a3, a4 & 2, a5, a6);
        sub_A6F610(a3, 93);
      }
      else
      {
        sub_A6F610(a3, 94);
        sub_AAC350(a1, *(_QWORD *)(v151 + 32), a3, a4 & 2, a5, 0);
      }
      return;
    case 7:
      v42 = 65;
      sub_A6F610(a3, 65);
      v45 = *v6;
      if ( *(_BYTE *)(*v6 + 16) == 7 )
        goto LABEL_34;
      goto LABEL_50;
    case 11:
      v46 = *v6;
      if ( *(_BYTE *)(v46 + 16) != 11 )
        v46 = sub_F63050(v46, a2, v16, v15);
      sub_9EE7C0(a3, "@?");
      if ( (a4 & 0x20) != 0 )
      {
        v49 = *(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v49 + 16) - 25 > 1 )
          v49 = sub_F63050(v49, "@?", v47, v48);
        v50 = a4 & 0xFFFFFFEB;
        sub_A6F610(a3, 60);
        sub_AAC350(a1, *(_QWORD *)(v49 + 24), a3, v50, a5, a6);
        sub_9EE7C0(a3, "@?");
        if ( *(_BYTE *)(v49 + 16) == 26 )
        {
          v150 = v49 + 48 + 8LL * *(unsigned __int16 *)(v49 + 22);
          if ( v150 != v49 + 48 )
          {
            v51 = (__int64 *)(v49 + 48);
            do
            {
              v52 = *v51++;
              sub_AAC350(a1, v52, a3, v50, a5, a6);
            }
            while ( (__int64 *)v150 != v51 );
          }
        }
        sub_A6F610(a3, 62);
      }
      return;
    case 13:
    case 47:
      if ( a5 && (*(_BYTE *)(a5 + 68) & 1) != 0 )
      {
        sub_A6F690((__int64)a1, a3, a2, a5);
        return;
      }
      v109 = *v14;
      if ( v17 == 13 )
        goto LABEL_85;
      v111 = sub_F60F10(*v14, v109, v16, v15, v8);
      v110 = 105;
      if ( (*(_BYTE *)(v111 + 77) & 2) != 0 )
      {
        v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_6F3660(v111) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_85:
        v110 = sub_A69070((__int64)a1, v109);
      }
      goto LABEL_86;
    case 14:
      v42 = 106;
      sub_A6F610(a3, 106);
      v45 = *v6;
      if ( *(_BYTE *)(*v6 + 16) != 14 )
LABEL_50:
        v45 = sub_F63050(v45, v42, v43, v44);
LABEL_34:
      sub_AAC350(a1, *(_QWORD *)(v45 + 32), a3, 0, 0, 0);
      return;
    case 16:
    case 17:
      return;
    case 25:
    case 26:
      sub_A6F610(a3, 63);
      return;
    case 34:
      v65 = *v6;
      if ( *(_BYTE *)(*v6 + 16) != 34 )
        v65 = sub_F63050(*v6, a2, v16, v15);
      if ( sub_A5E7F0(v65, a2, v16, v15, v8) )
        goto LABEL_90;
      if ( sub_A5E860(v65, a2, v66, v67, v68) || sub_A5E940(v65, a2, v69, v70, v71) )
        goto LABEL_105;
      if ( !sub_A5E8D0(v65, a2, v72, v73, v74) )
      {
        sub_A6F610(a3, 64);
        v82 = sub_A5E7C0(v65, 64, v79, v80, v81);
        if ( !sub_9C7D40(v82, 64, v83, v84, v85) || !a5 && (a4 & 0x48) == 0 )
          return;
        sub_A6F610(a3, 34);
        v89 = sub_A5E7C0(v65, 34, v86, v87, v88);
        v93 = sub_9C7D40(v89, 34, v90, v91, v92);
        v94 = (_BYTE *)sub_BA8930(v93);
        sub_A6F5E0(a3, v94, v95);
        v99 = sub_A5E9B0(v65, (__int64)v94, v96, v97, v98);
        v101 = v100;
        v102 = (__int64 *)v99;
        if ( (__int64 *)v99 != v100 )
        {
          do
          {
            v103 = *v102++;
            sub_A6F610(a3, 60);
            v104 = (_BYTE *)sub_BA8DE0(v103);
            sub_A6F5E0(a3, v104, v105);
            sub_A6F610(a3, 62);
          }
          while ( v101 != v102 );
        }
LABEL_74:
        sub_A6F610(a3, 34);
        return;
      }
      v137 = sub_A8A430(a1, a2, v75, v76, v77, v78);
      sub_AAC350(a1, v137, a3, a4 & 3, a5, 0);
      if ( a5 || (a4 & 0x48) != 0 )
      {
        sub_A6F610(a3, 34);
        v141 = sub_A5E9B0(v65, 34, v138, v139, v140);
        v143 = v142;
        v144 = (__int64 *)v141;
        if ( (__int64 *)v141 != v142 )
        {
          do
          {
            v145 = *v144++;
            sub_A6F610(a3, 60);
            v146 = (_BYTE *)sub_BA8DE0(v145);
            sub_A6F5E0(a3, v146, v147);
            sub_A6F610(a3, 62);
          }
          while ( v143 != v144 );
        }
        goto LABEL_74;
      }
      return;
    case 35:
      a2 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | v8
         | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
      v152 = (__int64 *)(sub_A74EC0((__int64)a1, v13) & 0xFFFFFFFFFFFFFFF0LL);
      if ( sub_9C7DB0(*v152, a2, v60, v61, v62) )
      {
        sub_9EE7C0(a3, "{objc_object=}");
      }
      else if ( sub_A5EA70(*v152, a2, (__int64)v152, v63, v64) )
      {
        sub_9EE7C0(a3, "{objc_class=}");
      }
      else
      {
LABEL_25:
        v37 = *v6;
        v38 = (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 35;
        if ( (unsigned int)v38 > 1 )
          v37 = sub_F63050(v37, a2, v38, v15);
        v39 = sub_9C7D40(v37, a2, v38, v15, v8);
        sub_A6F610(a3, 123);
        v40 = (_BYTE *)sub_BA8930(v39);
        if ( v41 > 0x7FFFFFFFFFFFFFFFLL - a3[1] )
          std::__throw_length_error("basic_string::append");
        sub_9EE560(a3, v40, v41);
        if ( (a4 & 2) != 0 )
        {
          sub_A6F610(a3, 61);
          ptr = &v162;
          v161 = 0x2000000000LL;
          sub_A79580((__int64)a1, v39, 1, (__int64)&ptr);
          if ( (_DWORD)v161 )
          {
            v114 = 0;
            v115 = 8LL * (unsigned int)(v161 - 1) + 8;
            do
            {
              v116 = *(_QWORD *)((char *)ptr + v114);
              v117 = *(_QWORD *)(v116 + 48);
              if ( (*(_BYTE *)(v116 + 68) & 1) != 0 )
                sub_AAC350(a1, v117, a3, 2, v116, 0);
              else
                sub_AAC350(a1, v117, a3, 2, a5, a6);
              v114 += 8;
            }
            while ( v115 != v114 );
          }
          if ( ptr != &v162 )
            free(ptr);
        }
        sub_A6F610(a3, 125);
      }
      return;
    case 36:
      goto LABEL_25;
    case 42:
    case 43:
    case 44:
      ptr = nullptr;
      v18 = *v14;
      v19 = *v6;
      v20 = *(unsigned __int8 *)(*v6 + 16);
      if ( *(_BYTE *)(*v14 + 16) != 42 )
      {
        if ( (unsigned int)(v20 - 43) > 1 )
        {
          v21 = sub_F63050(*v6, a2, v18, v15);
          v8 = a2 & 7;
          v19 = v21;
        }
        v148 = v8;
        v22 = (void *)sub_9B4870(v19, a2, v18, v15, v8);
        v23 = v148;
        ptr = v22;
LABEL_6:
        v149 = v23;
        if ( sub_F6AC00(*v6) )
        {
          if ( (a4 & 4) == 0 )
            goto LABEL_15;
          if ( (v149 & 1) != 0 )
          {
LABEL_10:
            a2 = 114;
            sub_A6F610(a3, 114);
            v25 = a3[1];
            v26 = *a3;
            v27 = j__strlen("nr");
            if ( v27 <= v25 )
            {
              if ( !v27 || (a2 = (unsigned __int64)"nr", !memcmp((const void *)(v26 + v25 - v27), "nr", v27)) )
              {
                v28 = j__strlen("rn");
                if ( v25 < v25 - 2 )
                  std::__throw_out_of_range_fmt(
                    "%s: __pos (which is %zu) > this->size() (which is %zu)",
                    "basic_string::replace",
                    v25 - 2,
                    v25);
                a2 = v25 - 2;
                sub_99BDC0(a3, v25 - 2, 2u, "rn", v28);
              }
            }
            goto LABEL_15;
          }
        }
        else
        {
          v29 = (unsigned __int64)ptr;
          if ( (a4 & 4) == 0 )
          {
LABEL_16:
            if ( (unsigned __int8)sub_F57EE0(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v33 = *(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v33 + 16) != 53
                || (v34 = *(_QWORD *)(*(_QWORD *)(v33 + 32) + 40LL), (v34 & 7) != 0)
                || (v35 = v34 & 0xFFFFFFFFFFFFFFF8LL) == 0
                || (v36 = *(_DWORD **)(v35 + 16), *v36 != 4)
                || v36[4] != 1280266050 )
              {
                sub_A6F610(a3, 42);
                return;
              }
            }
            else
            {
              v118 = (__int64 *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              v119 = *v118;
              if ( *(_BYTE *)(*v118 + 16) == 48 )
              {
                v120 = 0;
                v121 = *(_QWORD *)(sub_F60F10(*v118, a2, v30, v31, v32) + 40);
                v122 = v121 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v121 & 7) != 0 )
                  v122 = 0;
                v154 = a1[2188];
                v156 = v122;
                v123 = j__strlen("objc_class");
                if ( sub_6F3470(v154, "objc_class", v123) == v156 )
                {
LABEL_105:
                  sub_A6F610(a3, 35);
                  return;
                }
                v127 = *(_QWORD *)(sub_F60F10(v119, "objc_class", v124, v125, v126) + 40);
                if ( (v127 & 7) == 0 )
                  v120 = v127 & 0xFFFFFFFFFFFFFFF8LL;
                v155 = a1[2188];
                v128 = j__strlen("objc_object");
                if ( sub_6F3470(v155, "objc_object", v128) == v120 )
                {
LABEL_90:
                  sub_A6F610(a3, 64);
                  return;
                }
                v131 = a1[290];
                v132 = a4 & 1;
                if ( (*(_BYTE *)(v131 + 1) & 8) != 0
                  && (*(_BYTE *)(v131 + 2) & 0x20) == 0
                  && (unsigned __int8)sub_A7A6F0(v119, v132, v129, v130) )
                {
                  sub_9EE7C0(a3, "^v");
                  return;
                }
                goto LABEL_115;
              }
            }
            v132 = a4 & 1;
LABEL_115:
            sub_A6F610(a3, 94);
            sub_AAC2A0((__int64)a1, (__int64 *)&ptr);
            if ( v132 )
              v132 = 2;
            sub_AAC350(a1, ptr, a3, v132, 0, a6);
            return;
          }
          while ( 1 )
          {
            v6 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
            v133 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v133 + 16) != 42 )
            {
              v134 = *(_QWORD *)(*(_QWORD *)(v133 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v134 + 16) != 42 )
                break;
              v133 = sub_F63050(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), a2, v134, v24);
              if ( !v133 )
                break;
            }
            v29 = *(_QWORD *)(v133 + 32);
          }
          if ( (v29 & 1) != 0 )
            goto LABEL_10;
        }
        if ( (v6[1] & 1) != 0 )
          goto LABEL_10;
LABEL_15:
        v29 = (unsigned __int64)ptr;
        goto LABEL_16;
      }
      if ( (_BYTE)v20 != 42 )
      {
        v112 = sub_F63050(*v6, a2, v18, v15);
        v8 = a2 & 7;
        v19 = v112;
      }
      v153 = v8;
      v113 = sub_A5EB20(v19, a2, v18, v15, v8);
      v23 = v153;
      if ( !v113 )
      {
        ptr = *(void **)(v19 + 32);
        goto LABEL_6;
      }
      v110 = 58;
LABEL_86:
      sub_A6F610(a3, v110);
      return;
    case 48:
      v53 = sub_F60F10(*v14, a2, v16, v15, v8);
      v54 = 40;
      v55 = v53;
      if ( *(_BYTE *)(v53 + 73) >> 5 != 2 )
        v54 = 123;
      sub_A6F610(a3, v54);
      v56 = *(_QWORD *)(v55 + 40);
      if ( (v56 & 7) != 0 || (v57 = v56 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        sub_A6F610(a3, 63);
      }
      else
      {
        sub_A6F5E0(a3, (_BYTE *)(*(_QWORD *)(v57 + 16) + 16LL), **(unsigned int **)(v57 + 16));
        if ( (*(_BYTE *)(v55 + 28) & 0x7Fu) - 60 <= 1 )
        {
          v58 = *(unsigned int **)(v55 + 168);
          v162 = 0;
          v157 = v58;
          ptr = &off_2BEBE68;
          LODWORD(v161) = 0;
          v164 = 0;
          v165 = 1;
          v163 = 0;
          v166 = a3;
          sub_227B8B0(&ptr, 0, 0, 0);
          sub_F712D0(&ptr, v157 + 2, *v157, a1 + 2183, 0);
          ptr = &off_2BEBE68;
          sub_227B7A0(&ptr);
        }
      }
      if ( (a4 & 2) == 0 )
        goto LABEL_58;
      sub_A6F610(a3, 61);
      if ( *(_BYTE *)(v55 + 73) >> 5 != 2 )
      {
        sub_AAD140(a1, v55, a3, a5, 1, a6);
        goto LABEL_58;
      }
      v135 = sub_B7E900(v55);
      if ( !v135 )
        goto LABEL_58;
LABEL_135:
      if ( a5 )
      {
        sub_A6F610(a3, 34);
        sub_B86A00(&ptr, v135 + 40);
        sub_9EE560(a3, ptr, v161);
        if ( ptr != &v162 )
          operator delete(ptr);
        sub_A6F610(a3, 34);
      }
      if ( (*(_BYTE *)(v135 + 68) & 1) != 0 )
      {
        sub_AAC350(a1, *(_QWORD *)(v135 + 48), a3, 2, v135, 0);
      }
      else
      {
        ptr = *(void **)(v135 + 48);
        sub_AAC2A0((__int64)a1, (__int64 *)&ptr);
        sub_AAC350(a1, ptr, a3, 18, a5, a6);
      }
      while ( 1 )
      {
        v136 = *(_QWORD *)(v135 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v135 = v136;
        if ( !v136 )
          break;
        if ( (*(_BYTE *)(v136 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_135;
      }
LABEL_58:
      v59 = 41;
      if ( *(_BYTE *)(v55 + 73) >> 5 != 2 )
        v59 = 125;
      sub_A6F610(a3, v59);
      return;
  }
}
