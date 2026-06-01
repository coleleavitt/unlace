void __fastcall sub_710580(__int64 a1, __int64 a2, _QWORD *a3, int a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // r12
  int v10; // ebp
  _QWORD *v11; // rbx
  __int64 *v12; // rdx
  __int64 v13; // rsi
  char v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // rax
  void *v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // dl
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r15d
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r15
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned int *v38; // r8
  __int64 v39; // rax
  __int64 v40; // r10
  unsigned int v41; // ebp
  __int64 v42; // r10
  __int64 *v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r13
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 *v59; // rdx
  __int64 *v60; // r12
  __int64 *v61; // rbp
  __int64 v62; // r13
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rsi
  __int128 *v67; // rbp
  char v68; // al
  _BYTE *v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  const char *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // r8
  __int64 v85; // rsi
  __int64 *v86; // rax
  unsigned __int64 v87; // r15
  __int64 v88; // rax
  unsigned __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rax
  unsigned __int64 i; // r15
  __int64 v93; // rdi
  __int64 v94; // rax
  char *v95; // r8
  int v96; // eax
  unsigned __int64 v97; // r10
  void *v98; // rax
  __int128 *v99; // rdi
  unsigned __int64 v100; // rax
  _DWORD *v101; // rax
  unsigned __int64 v102; // rbp
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  __int64 *v106; // rdx
  __int64 *v107; // r12
  __int64 *v108; // rbp
  __int64 v109; // r13
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 *v115; // [rsp+0h] [rbp-198h]
  __int64 *v116; // [rsp+0h] [rbp-198h]
  __int64 *v117; // [rsp+0h] [rbp-198h]
  __int64 v118; // [rsp+0h] [rbp-198h]
  __int64 *v119; // [rsp+0h] [rbp-198h]
  __int64 *v120; // [rsp+0h] [rbp-198h]
  __int64 v121; // [rsp+0h] [rbp-198h]
  __int64 v122; // [rsp+0h] [rbp-198h]
  __int64 v123; // [rsp+0h] [rbp-198h]
  __int64 *v124; // [rsp+0h] [rbp-198h]
  __int64 *v125; // [rsp+0h] [rbp-198h]
  __int64 v126; // [rsp+0h] [rbp-198h]
  __int64 *v127; // [rsp+0h] [rbp-198h]
  __int64 *v128; // [rsp+0h] [rbp-198h]
  __int64 v129; // [rsp+0h] [rbp-198h]
  __int64 v130; // [rsp+0h] [rbp-198h]
  __int64 *v131; // [rsp+0h] [rbp-198h]
  __int64 v132; // [rsp+8h] [rbp-190h]
  unsigned int *n; // [rsp+10h] [rbp-188h]
  _BYTE *na; // [rsp+10h] [rbp-188h]
  char *src; // [rsp+18h] [rbp-180h]
  _BYTE *v136; // [rsp+28h] [rbp-170h]
  _BYTE v137[11]; // [rsp+45h] [rbp-153h] BYREF
  void *ptr; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v139; // [rsp+58h] [rbp-140h]
  __int128 v140; // [rsp+60h] [rbp-138h] BYREF
  __int64 v141; // [rsp+70h] [rbp-128h]
  char v142; // [rsp+78h] [rbp-120h]
  int v143; // [rsp+7Ch] [rbp-11Ch]
  _QWORD *v144; // [rsp+80h] [rbp-118h]

  while ( 2 )
  {
    v6 = a2;
    v7 = a5;
    v8 = (__int64)a6;
    v9 = (_QWORD *)a1;
    v10 = a4;
    v11 = a3;
    v12 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
    v14 = *(_BYTE *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    switch ( v14 )
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
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 44:
      case 45:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        if ( a6 )
          *a6 = v6;
        return;
      case 2:
      case 5:
      case 6:
        v118 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
        v25 = a4 & 2;
        if ( v14 == 5 && (a4 & 0x10) == 0 )
        {
          std::string::push_back();
          a6 = nullptr;
          a5 = v7;
          a2 = *(_QWORD *)(v118 + 32);
          a4 = v10 & 2;
          goto LABEL_56;
        }
        std::string::push_back();
        v65 = v118;
        if ( (unsigned int)*(unsigned __int8 *)(v118 + 16) - 2 > 1 )
        {
          std::string::push_back();
          v70 = v118;
          goto LABEL_94;
        }
        v66 = *(_QWORD *)(v118 + 40);
        if ( (*(_BYTE *)(v118 + 19) & 2) != 0 )
        {
          if ( *(_DWORD *)(v66 + 8) <= 0x40u )
            v66 = *(_QWORD *)v66;
          else
            v66 = **(_QWORD **)v66;
        }
        if ( !v66 )
        {
          v67 = &v140;
          v68 = 48;
          ptr = &v140;
LABEL_92:
          LOBYTE(v140) = v68;
          v69 = (_BYTE *)(&dword_0 + 1);
LABEL_93:
          v139 = (unsigned __int64)v69;
          v69[(_QWORD)v67] = 0;
          v126 = v65;
          sub_6A7B40((__int64)v11, (__int64)ptr, v139);
          std::string::_M_dispose();
          v70 = v126;
LABEL_94:
          sub_710580(v9, *(_QWORD *)(v70 + 32), v11, v25, v7, v8);
          goto LABEL_24;
        }
        v95 = v137;
        do
        {
          --v95;
          v96 = v66 % 0xA;
          v97 = v66;
          v66 /= 0xAu;
          v68 = v96 + 48;
          *v95 = v68;
        }
        while ( v97 > 9 );
        v67 = &v140;
        v139 = 0;
        v69 = (_BYTE *)(v137 - v95);
        ptr = &v140;
        v136 = (_BYTE *)(v137 - v95);
        if ( (unsigned __int64)(v137 - v95) <= 0xF )
        {
          if ( v69 == (_BYTE *)&dword_0 + 1 )
            goto LABEL_92;
          if ( !v69 )
            goto LABEL_93;
          v99 = &v140;
        }
        else
        {
          src = v95;
          na = (_BYTE *)(v137 - v95);
          v98 = (void *)std::string::_M_create();
          v65 = v118;
          v69 = na;
          ptr = v98;
          v99 = (__int128 *)v98;
          v95 = src;
          *(_QWORD *)&v140 = v136;
        }
        v130 = v65;
        memcpy(v99, v95, (size_t)v69);
        v69 = v136;
        v67 = (__int128 *)ptr;
        v65 = v130;
        goto LABEL_93;
      case 7:
        v125 = v12;
        std::string::push_back();
        v45 = *v125;
        if ( *(_BYTE *)(*v125 + 16) != 7 )
          goto LABEL_58;
        goto LABEL_55;
      case 11:
        v39 = *v12;
        if ( *(_BYTE *)(*v12 + 16) != 11 )
          v39 = sub_B0D320(*v12);
        v121 = v39;
        sub_6A7840((__int64)v11, "@?");
        if ( (v10 & 0x20) == 0 )
          return;
        v40 = *(_QWORD *)(*(_QWORD *)(v121 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v40 + 16) - 25 > 1 )
          v40 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(v121 + 32) & 0xFFFFFFFFFFFFFFF0LL));
        v122 = v40;
        v41 = v10 & 0xFFFFFFEB;
        std::string::push_back();
        sub_710580(a1, *(_QWORD *)(v122 + 24), v11, v41, v7, v8);
        sub_6A7840((__int64)v11, "@?");
        v42 = v122;
        if ( *(_BYTE *)(v122 + 16) == 26 )
        {
          v123 = v122 + 48 + 8LL * (unsigned __int16)(*(_DWORD *)(v122 + 20) >> 6);
          if ( v123 != v42 + 48 )
          {
            v43 = (__int64 *)(v42 + 48);
            do
            {
              v44 = *v43++;
              sub_710580(a1, v44, v11, v41, v7, v8);
            }
            while ( (__int64 *)v123 != v43 );
          }
        }
        goto LABEL_24;
      case 13:
      case 46:
        if ( v7 && (*(_BYTE *)(v7 + 68) & 1) != 0 )
        {
          sub_6B2040(a1, v11, v6, v7);
          return;
        }
        if ( v14 == 13 )
        {
          sub_6B1990(a1, *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
        }
        else
        {
          v77 = sub_B14A40(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
          if ( (*(_BYTE *)(v77 + 77) & 2) != 0 )
          {
            v78 = *(_QWORD *)(v77 + 128);
            v79 = 0;
            if ( v78 > 7 )
            {
              if ( (v78 & 4) != 0 )
              {
                v112 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF8LL);
                v113 = *(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF0LL);
                v114 = *(_QWORD *)(v113 + 8);
                if ( (v114 & 7) != 0 || (v114 & 8) != 0 )
                  v113 = sub_B0CF30(v112, 105);
                v79 = v113 & 0xFFFFFFFFFFFFFFF0LL;
              }
              else
              {
                v79 = v78 & 0xFFFFFFFFFFFFFFF0LL;
              }
            }
            sub_6B1990((__int64)v9, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v79 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
          }
        }
        goto LABEL_24;
      case 14:
        v124 = v12;
        std::string::push_back();
        v45 = *v124;
        if ( *(_BYTE *)(*v124 + 16) == 14 )
          goto LABEL_55;
LABEL_58:
        v45 = sub_B0D320(v45);
LABEL_55:
        a2 = *(_QWORD *)(v45 + 32);
        a6 = nullptr;
        a5 = 0;
        a4 = 0;
LABEL_56:
        a3 = v11;
        a1 = (__int64)v9;
        continue;
      case 16:
      case 17:
        return;
      case 25:
      case 26:
        goto LABEL_24;
      case 33:
        v46 = *v12;
        if ( *(_BYTE *)(*v12 + 16) != 33 )
          v46 = sub_B0D320(*v12);
        v47 = *(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v47 + 16) - 34 > 1 )
          v47 = sub_B0D320(v47);
        if ( !(*(_BYTE *)(v47 + 19) >> 2) )
        {
          v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v48 + 16) == 13 && ((*(_WORD *)(v48 + 18) >> 3) & 0x1FF) == 0x1E8 )
            goto LABEL_24;
        }
        v49 = *(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v49 + 16) - 34 > 1 )
          v49 = sub_B0D320(v49);
        if ( !(*(_BYTE *)(v49 + 19) >> 2) )
        {
          v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v50 + 16) == 13 && ((*(_WORD *)(v50 + 18) >> 3) & 0x1FF) == 0x1E9 )
            goto LABEL_24;
        }
        v51 = *(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v51 + 16) - 34 > 1 )
          v51 = sub_B0D320(v51);
        if ( *(_BYTE *)(v51 + 19) >> 2 )
        {
          v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v52 + 16) == 13 && ((*(_WORD *)(v52 + 18) >> 3) & 0x1FF) == 0x1E9 )
            goto LABEL_24;
        }
        if ( sub_6B2F40(v46) )
        {
          v104 = sub_6E8F50(v9);
          sub_710580(v9, v104, v11, v10 & 3, v7, 0);
          if ( !v7 && (v10 & 0x48) == 0 )
            return;
          std::string::push_back();
          v105 = sub_6B2FB0(v46);
          v107 = v106;
          v108 = (__int64 *)v105;
          while ( v107 != v108 )
          {
            v109 = *v108++;
            std::string::push_back();
            v110 = sub_7B8A60(v109, 60);
            sub_6A7B40((__int64)v11, v110, v111);
            std::string::push_back();
          }
        }
        else
        {
          std::string::push_back();
          v53 = sub_6B2F10(v46);
          if ( !sub_6A8100(*(_QWORD *)(v53 + 24)) || !v7 && (v10 & 0x48) == 0 )
            return;
          std::string::push_back();
          v54 = sub_6B2F10(v46);
          v55 = sub_6A8100(*(_QWORD *)(v54 + 24));
          v56 = sub_7B7DE0(v55, 34);
          sub_6A7B40((__int64)v11, v56, v57);
          v58 = sub_6B2FB0(v46);
          v60 = v59;
          v61 = (__int64 *)v58;
          while ( v60 != v61 )
          {
            v62 = *v61++;
            std::string::push_back();
            v63 = sub_7B8A60(v62, 60);
            sub_6A7B40((__int64)v11, v63, v64);
            std::string::push_back();
          }
        }
        goto LABEL_24;
      case 34:
        v119 = v12;
        v26 = sub_6C94F0(a1, v13);
        v12 = v119;
        v26 &= 0xFFFFFFFFFFFFFFF0LL;
        v27 = *(_QWORD *)v26;
        v28 = v26;
        if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) == 33 )
          goto LABEL_29;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          goto LABEL_35;
        v75 = sub_B0D320(v27);
        v12 = v119;
        v27 = v75;
        if ( !v75 )
          goto LABEL_32;
LABEL_29:
        v29 = *(_QWORD *)(*(_QWORD *)(v27 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v29 + 16) - 34 > 1 )
        {
          v128 = v12;
          v80 = sub_B0D320(v29);
          v12 = v128;
          v29 = v80;
        }
        if ( !(*(_BYTE *)(v29 + 19) >> 2) )
        {
          v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v76 + 16) == 13 )
          {
            v74 = "{objc_object=}";
            if ( ((*(_WORD *)(v76 + 18) >> 3) & 0x1FF) == 0x1E8 )
              goto LABEL_103;
          }
        }
LABEL_32:
        v30 = *(_QWORD *)v28;
        if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) == 33
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
          && (v120 = v12, v31 = sub_B0D320(v30), v12 = v120, (v30 = v31) != 0) )
        {
          v71 = *(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v71 + 16) - 34 > 1 )
          {
            v127 = v12;
            v72 = sub_B0D320(v71);
            v12 = v127;
            v71 = v72;
          }
          if ( !(*(_BYTE *)(v71 + 19) >> 2) )
          {
            v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v73 + 16) == 13 && ((*(_WORD *)(v73 + 18) >> 3) & 0x1FF) == 0x1E9 )
            {
              v74 = "{objc_class=}";
              goto LABEL_103;
            }
          }
        }
LABEL_35:
        v32 = *v12;
        if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 34 > 1 )
          v32 = sub_B0D320(v32);
        v33 = sub_6A8100(*(_QWORD *)(v32 + 24));
        std::string::push_back();
        sub_7B7DE0(v33, 123);
        if ( 0x3FFFFFFFFFFFFFFFLL - v11[1] < v34 )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append();
        if ( (v10 & 2) != 0 )
        {
          std::string::push_back();
          ptr = &v140;
          v139 = 0x2000000000LL;
          sub_6C0500((__int64)v9, v33, 1, (__int64)&ptr);
          v83 = 0;
          v129 = 8LL * (unsigned int)v139;
          if ( (_DWORD)v139 )
          {
            do
            {
              v84 = *(_QWORD *)((char *)ptr + v83);
              v85 = *(_QWORD *)(v84 + 48);
              if ( (*(_BYTE *)(v84 + 68) & 1) != 0 )
                sub_710580(v9, v85, v11, 2, v84, 0);
              else
                sub_710580(v9, v85, v11, 2, v7, v8);
              v83 += 8;
            }
            while ( v83 != v129 );
          }
          if ( ptr != &v140 )
            free(ptr);
        }
        goto LABEL_24;
      case 35:
        goto LABEL_35;
      case 41:
      case 42:
      case 43:
        v15 = *v12;
        v16 = *(unsigned __int8 *)(*v12 + 16);
        if ( v14 == 41 )
        {
          v81 = *v12;
          if ( (_BYTE)v16 == 41
            || (v131 = v12, v81 = sub_B0D320(v15), v12 = v131, v15 = v81, *(_BYTE *)(v81 + 16) == 41)
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41
            && (v81 = sub_B0D320(v81), v12 = v131, v81) )
          {
            v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v82 + 16) == 13 )
            {
              v13 = 58;
              if ( ((*(_WORD *)(v82 + 18) >> 3) & 0x1FF) == 0x1EA )
                goto LABEL_24;
            }
          }
          v19 = *(_QWORD *)(v15 + 32);
        }
        else
        {
          if ( (unsigned int)(v16 - 42) > 1 )
          {
            v115 = v12;
            v17 = sub_B0D320(v15);
            v12 = v115;
            v15 = v17;
          }
          v116 = v12;
          v18 = (void *)sub_6B2590(v15);
          v12 = v116;
          ptr = v18;
          v19 = (unsigned __int64)v18;
        }
        v117 = v12;
        if ( sub_B10DA0(*v12, v13) )
        {
          if ( (v10 & 4) == 0 )
            goto LABEL_17;
          v20 = (unsigned __int64)v117;
          if ( (v6 & 1) != 0 )
            goto LABEL_14;
          goto LABEL_13;
        }
        if ( (v10 & 4) == 0 )
          goto LABEL_17;
        for ( i = v19; ; i = *(_QWORD *)(v93 + 32) )
        {
          v20 = i & 0xFFFFFFFFFFFFFFF0LL;
          v93 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v93 + 16) != 41 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v93 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
              break;
            v94 = sub_B0D320(v93);
            v20 = i & 0xFFFFFFFFFFFFFFF0LL;
            v93 = v94;
            if ( !v94 )
              break;
          }
        }
        if ( (i & 1) == 0 )
        {
LABEL_13:
          if ( (*(_BYTE *)(v20 + 8) & 1) == 0 )
            goto LABEL_17;
        }
LABEL_14:
        v13 = 114;
        std::string::push_back();
        v21 = v11[1];
        if ( v21 > 1 )
        {
          v13 = v21 - 2;
          if ( *(_WORD *)(*v11 + v21 - 2) == 29294 )
            std::string::_M_replace();
        }
LABEL_17:
        v22 = sub_B07E10(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), v13);
        v23 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v22 )
        {
          v86 = (__int64 *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v86 + 16) == 47 )
          {
            v132 = *v86;
            v87 = 0;
            v88 = *(_QWORD *)(sub_B14A40(*v86) + 40);
            v89 = v88 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v88 & 7) != 0 )
              v89 = 0;
            if ( sub_600210(v9[2168], "objc_class", 0xAu) == v89 )
              goto LABEL_24;
            v90 = *(_QWORD *)(sub_B14A40(v132) + 40);
            if ( (v90 & 7) == 0 )
              v87 = v90 & 0xFFFFFFFFFFFFFFF8LL;
            if ( sub_600210(v9[2168], "objc_object", 0xBu) == v87 )
              goto LABEL_24;
            v91 = v9[270];
            if ( (*(_BYTE *)(v91 + 1) & 8) != 0 && (*(_BYTE *)(v91 + 2) & 0x20) == 0 )
            {
              v74 = "^v";
              if ( (unsigned __int8)sub_6E88C0(v132, v10 & 1) )
              {
LABEL_103:
                sub_6A7840((__int64)v11, v74);
                return;
              }
            }
          }
LABEL_139:
          std::string::push_back();
          ptr = (void *)v19;
          sub_70B370((__int64)v9, (__int64 *)&ptr);
          sub_710580(v9, ptr, v11, (2 * (_BYTE)v10) & 2, 0, v8);
          return;
        }
        if ( *(_BYTE *)(v23 + 16) == 52 )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 40LL);
          if ( (v24 & 7) == 0 )
          {
            v100 = v24 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v100 )
            {
              v101 = *(_DWORD **)(v100 + 16);
              if ( *v101 == 4 && v101[4] == 1280266050 )
                goto LABEL_139;
            }
          }
        }
LABEL_24:
        std::string::push_back();
        return;
      case 47:
        v35 = sub_B14A40(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
        std::string::push_back();
        v36 = *(_QWORD *)(v35 + 40);
        if ( (v36 & 7) != 0 || (v37 = v36 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          std::string::push_back();
        }
        else
        {
          sub_6A7B40((__int64)v11, *(_QWORD *)(v37 + 16) + 16LL, **(unsigned int **)(v37 + 16));
          if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 58 <= 1 )
          {
            v38 = *(unsigned int **)(v35 + 168);
            v140 = 0;
            LODWORD(v139) = 0;
            ptr = &off_49DA2C8;
            n = v38;
            v142 = 0;
            v143 = 1;
            v141 = 0;
            v144 = v11;
            sub_2623850(&ptr, 0, 0, 0, v38, &off_49DA2C8);
            sub_B22390(&ptr, n + 2, *n, a1 + 17304, 0);
            ptr = &off_49DA2C8;
            sub_2623770(&ptr);
          }
        }
        if ( (v10 & 2) == 0 )
          goto LABEL_24;
        std::string::push_back();
        if ( *(_BYTE *)(v35 + 73) >> 5 != 2 )
        {
          sub_7104D0(a1, v35, v11, v7, 1, v8);
          goto LABEL_24;
        }
        v102 = sub_7868A0(v35);
        if ( !v102 )
          goto LABEL_24;
LABEL_162:
        if ( v7 )
        {
          std::string::push_back();
          sub_791DD0(&ptr, v102 + 40);
          sub_6A7B40((__int64)v11, (__int64)ptr, v139);
          std::string::_M_dispose();
          std::string::push_back();
        }
        if ( (*(_BYTE *)(v102 + 68) & 1) != 0 )
        {
          sub_710580(a1, *(_QWORD *)(v102 + 48), v11, 2, v102, 0);
        }
        else
        {
          ptr = *(void **)(v102 + 48);
          sub_70B370(a1, (__int64 *)&ptr);
          sub_710580(a1, ptr, v11, 18, v7, v8);
        }
        while ( 1 )
        {
          v103 = *(_QWORD *)(v102 + 8);
          v102 = v103 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v103 <= 7 )
            goto LABEL_24;
          if ( (*(_BYTE *)(v102 + 28) & 0x7Fu) - 47 <= 2 )
            goto LABEL_162;
        }
    }
  }
}

