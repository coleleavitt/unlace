void __fastcall sub_16C5BF0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        double a7)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64); // rdx
  __int64 (__fastcall *v20)(__int64); // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r8
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r14
  void *v27; // rsi
  void *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rsi
  __int16 j; // ax
  unsigned __int64 v35; // rdi
  __int64 v36; // rbp
  unsigned int v37; // eax
  unsigned __int8 v38; // al
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // edx
  int v46; // r8d
  __int64 v47; // rdi
  __int64 v48; // rsi
  int v49; // eax
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // r8d
  unsigned int v53; // eax
  int v54; // edx
  unsigned int v55; // esi
  int v56; // eax
  int v57; // edx
  unsigned __int8 *v58; // rax
  unsigned int v59; // eax
  int v60; // eax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rdx
  bool v64; // zf
  unsigned __int64 v65; // rax
  unsigned __int8 *v66; // rdi
  __int64 v67; // rax
  unsigned int v68; // r14d
  __int64 *v69; // rbp
  void *v70; // rax
  unsigned int v71; // ebp
  void *v72; // rbp
  unsigned int v73; // edx
  int v74; // eax
  void *v75; // rdi
  unsigned int v76; // eax
  void *v77; // rax
  __int64 v78; // rdx
  unsigned int v79; // eax
  unsigned int v80; // r14d
  __int64 v81; // rsi
  unsigned int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned __int8 *v86; // rsi
  __int16 i; // ax
  unsigned __int64 v88; // rdi
  __int64 v89; // rbp
  unsigned int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // ebp
  int v93; // eax
  int v94; // eax
  __int64 v95; // [rsp+0h] [rbp-1A8h]
  __int64 v96; // [rsp+8h] [rbp-1A0h]
  __int64 v98; // [rsp+10h] [rbp-198h]
  __int64 v99; // [rsp+10h] [rbp-198h]
  __int64 v100; // [rsp+10h] [rbp-198h]
  int v101; // [rsp+10h] [rbp-198h]
  _DWORD *v102; // [rsp+10h] [rbp-198h]
  __int64 v104; // [rsp+18h] [rbp-190h]
  int v106; // [rsp+20h] [rbp-188h]
  _BOOL8 v107; // [rsp+20h] [rbp-188h]
  int v108; // [rsp+20h] [rbp-188h]
  bool v109; // [rsp+28h] [rbp-180h]
  __int64 v110; // [rsp+40h] [rbp-168h]
  __int64 v111; // [rsp+50h] [rbp-158h]
  unsigned int v112; // [rsp+5Ch] [rbp-14Ch]
  __int64 v113; // [rsp+64h] [rbp-144h] BYREF
  char v114; // [rsp+6Ch] [rbp-13Ch]
  void *v115; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v116; // [rsp+78h] [rbp-130h]
  char v117; // [rsp+7Ch] [rbp-12Ch]
  void *v118; // [rsp+80h] [rbp-128h] BYREF
  unsigned int v119; // [rsp+88h] [rbp-120h]
  void *v120; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v121; // [rsp+98h] [rbp-110h]
  unsigned __int8 *v122; // [rsp+A0h] [rbp-108h] BYREF
  unsigned __int64 v123; // [rsp+A8h] [rbp-100h]
  void *v124; // [rsp+C0h] [rbp-E8h] BYREF
  signed __int64 v125; // [rsp+C8h] [rbp-E0h]
  __int64 v126; // [rsp+D0h] [rbp-D8h] BYREF
  void *v127; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int64 v128; // [rsp+E8h] [rbp-C0h]
  __int64 v129; // [rsp+F0h] [rbp-B8h] BYREF
  void *v130; // [rsp+100h] [rbp-A8h] BYREF
  unsigned __int64 v131; // [rsp+108h] [rbp-A0h]
  _BYTE v132[16]; // [rsp+110h] [rbp-98h] BYREF
  __int16 v133; // [rsp+120h] [rbp-88h] BYREF
  __int64 v134; // [rsp+128h] [rbp-80h]
  unsigned int v135; // [rsp+130h] [rbp-78h] BYREF
  char v136; // [rsp+134h] [rbp-74h]
  void *v137; // [rsp+138h] [rbp-70h]
  unsigned int v138; // [rsp+140h] [rbp-68h]
  char v139; // [rsp+144h] [rbp-64h]

  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1
    && !*(_BYTE *)(a1 + 2440) )
  {
    v10 = (_DWORD *)sub_BFBAE0(a3);
    if ( (*v10 & 0x20000) == 0 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
      {
        v11 = *(_QWORD *)(sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v8, v9)
                        & 0xFFFFFFFFFFFFFFF0LL);
      }
      else if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        while ( 1 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(v11 + 16) - 2) > 4u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
              break;
            v24 = sub_F63050(v11, a2, v12, v8);
            if ( !v24 )
              break;
            v11 = v24;
          }
          v11 = *(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
      v13 = sub_BFD550(a2);
      v14 = sub_A72040(*(_QWORD **)(a1 + 248), *(_QWORD *)(v13 + 8));
      v16 = v14;
      if ( v14 && (unsigned int)*(unsigned __int8 *)(v14 + 16) - 2 <= 1 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v17 )
        {
          v109 = sub_BF76D0(v13, *(_QWORD **)(a1 + 248), (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 213LL) >> 2) & 3, 1);
          if ( v109 )
          {
            if ( (*(_BYTE *)(v11 + 17) & 4) != 0 )
              return;
          }
          else if ( (*(_BYTE *)(v11 + 17) & 4) != 0 || (*(_BYTE *)(v17 + 17) & 4) != 0 )
          {
            return;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v11 + 17) & 4) != 0 )
            return;
          v109 = 1;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v11 + 17) & 4) != 0 )
          return;
        v109 = 1;
        v17 = 0;
        v16 = 0;
      }
      v18 = *(_QWORD *)(a1 + 248);
      v136 &= ~1u;
      v133 = 0;
      v134 = 0;
      v135 = 0;
      if ( !(unsigned __int8)sub_C3F220((unsigned __int64)v10, (__int64)&v133, v18, 2, 0, v15) )
      {
LABEL_27:
        if ( v135 > 1 )
          sub_A4F8E0((int *)&v135);
        return;
      }
      v116 = v138;
      if ( v138 > 0x40 )
        sub_2205510(&v115);
      else
        v115 = v137;
      if ( !a6 )
      {
        v117 = v139;
        goto LABEL_22;
      }
      v60 = v116;
      v117 = 0;
      LODWORD(v131) = v116;
      if ( v116 > 0x40 )
      {
        sub_2205510(&v130);
        v60 = v131;
        if ( (unsigned int)v131 > 0x40 )
        {
          sub_2205FC0(&v130, &v115);
LABEL_103:
          sub_2205900(&v130);
          BYTE4(v128) = 0;
          LODWORD(v128) = v131;
          v127 = v130;
          sub_C18DB0((__int64)&v115, (__int64)&v127);
          if ( (unsigned int)v128 > 0x40 && v127 )
            operator delete[](v127);
LABEL_22:
          if ( v109 )
          {
            v23 = (_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*v23 + 16LL) - 25 <= 1 || !v117 && sub_16B6690((__int64 *)&v115) )
              goto LABEL_24;
            v110 = *(_QWORD *)(a1 + 248);
            v66 = *(unsigned __int8 **)(v110 + 17448);
            v67 = v23[1];
            if ( (v67 & 8) != 0
              && (v19 = (__int64 (__fastcall *)(__int64))(v67 & 0xFFFFFFFFFFFFFFF0LL),
                  (v76 = (*(_DWORD *)((char *)&qword_18 + (v23[1] & 0xFFFFFFFFFFFFFFF0LL)) | (_DWORD)v23[1] & 7u) >> 9) != 0)
              && (v20 = sub_A55F30, v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 936LL), v19 != sub_A55F30) )
            {
              v68 = ((__int64 (__fastcall *)(unsigned __int8 *, _QWORD))v19)(v66, v76);
            }
            else
            {
              v68 = v66[8];
            }
            if ( v68 > v116 )
            {
              sub_2206CD0(&v130, &v115, v68);
              if ( v116 > 0x40 && v115 )
                operator delete[](v115);
              v115 = v130;
              v116 = v131;
            }
            v69 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
            if ( sub_F62670(*v69, nullptr, (__int64)v19, (__int64)v20, (__int64)v23, v22) )
              goto LABEL_24;
            if ( (*(_BYTE *)(*v69 + 17) & 4) != 0 )
              goto LABEL_24;
            v70 = (void *)sub_AAE980(v110, (__int64)v69);
            v111 = (__int64)v70;
            if ( !v70 )
              goto LABEL_24;
            v71 = v116;
            v119 = v116;
            if ( v116 > 0x40 )
            {
              sub_2205470(&v118, v70, 0);
              v92 = v116;
              if ( v68 < v92 - (unsigned int)sub_C16760((__int64)&v115) )
                goto LABEL_160;
              LODWORD(v128) = v92;
              if ( v92 > 0x40 )
              {
                sub_2205510(&v127);
LABEL_119:
                sub_2205A20(&v127, 1);
                sub_220B260(&v130, &v127, &v118, &v124);
                if ( (unsigned int)v128 > 0x40 && v127 )
                  operator delete[](v127);
                v72 = v130;
                v73 = v131;
                v127 = v130;
                LODWORD(v128) = v131;
                if ( !(_BYTE)v124 )
                {
                  v112 = v131;
                  v74 = sub_C16760((__int64)&v127);
                  v73 = v112;
                  if ( v68 >= v112 - v74 )
                  {
                    if ( v112 > 0x40 && v72 )
                      operator delete[](v72);
                    goto LABEL_127;
                  }
                }
                if ( v73 > 0x40 && v72 )
                  operator delete[](v72);
LABEL_160:
                v121 = v68;
                if ( v68 > 0x40 )
                {
                  sub_2205470(&v120, -1, 1);
                }
                else
                {
                  v77 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)v68);
                  if ( !v68 )
                    v77 = nullptr;
                  v120 = v77;
                }
                v78 = v119;
                if ( v68 + 1 >= v119 )
                  v78 = v68 + 1;
                sub_2206CD0(&v130, &v120, v78);
                if ( v121 > 0x40 && v120 )
                  operator delete[](v120);
                v120 = v130;
                v121 = v131;
                sub_2205A20(&v120, 1);
                sub_2206D90(&v130, &v118, v121);
                if ( v119 > 0x40 && v118 )
                  operator delete[](v118);
                v118 = v130;
                v119 = v131;
                sub_22078F0(&v130);
                if ( v121 > 0x40 && v120 )
                  operator delete[](v120);
                v120 = v130;
                v121 = v131;
                sub_168B9B0((__int64)&v122, a1 + 8, a4 == 0 ? 7306 : 6523);
                sub_C1DEB0(&v124, (int)&v115, 10, 1u, 0, 1u, 0);
                sub_AEC220(&v122, v124, v125);
                sub_16B6F70(&v122, v68);
                v79 = sub_A98060(v110, v111);
                sub_16B6F70(&v122, v79);
                sub_C1DEB0(&v127, (int)&v118, 10, 0, 0, 1u, 0);
                sub_AEC220(&v122, v127, v128);
                sub_C1DEB0(&v130, (int)&v120, 10, 0, 0, 1u, 0);
                sub_AEC220(&v122, v130, v131);
                v80 = v121;
                if ( v121 > 0x40 )
                {
                  v81 = 0xFFFFFFFFLL;
                  if ( v80 - (unsigned int)sub_C16760((__int64)&v120) <= 0x40 && *(_QWORD *)v120 <= 0xFFFFFFFF )
                    v81 = *(_QWORD *)v120;
                }
                else
                {
                  v81 = 0xFFFFFFFFLL;
                  if ( (unsigned __int64)v120 <= 0xFFFFFFFF )
                    v81 = (__int64)v120;
                }
                sub_16B6F70(&v122, v81);
                v114 = 1;
                v113 = sub_EEC8C0((unsigned __int64)v10, v81, a7);
                sub_AEC610((__int64 *)&v122, &v113);
                v82 = sub_EEB7E0(v13, (__int64)&v113, a7);
                sub_18CAED0(a1, v82, v13, &v122);
                if ( v130 != v132 )
                  operator delete(v130);
                if ( v127 != &v129 )
                  operator delete(v127);
                if ( v124 != &v126 )
                  operator delete(v124);
                v86 = v122;
                if ( v122 && v123 )
                  sub_1580C40(v123, (unsigned __int64)v122);
                for ( i = *(_WORD *)v13 & 0x1FF; i == 123; i = *(_WORD *)v13 & 0x1FF )
                {
                  if ( sub_9ECBA0(v13, (__int64)v86, v83, v84, v85) )
                    v88 = *(_QWORD *)(v13 + 16);
                  else
                    v88 = *(_QWORD *)(v13 + 24);
                  v13 = sub_BFD550(v88);
                }
                if ( i == 71 )
                {
                  v89 = *(_QWORD *)(v13 + 16);
                }
                else
                {
                  if ( i != 46 )
                  {
LABEL_197:
                    if ( v121 > 0x40 && v120 )
                      operator delete[](v120);
LABEL_127:
                    if ( v119 > 0x40 )
                    {
                      v75 = v118;
                      if ( v118 )
LABEL_129:
                        operator delete[](v75);
                    }
LABEL_24:
                    if ( v116 > 0x40 && v115 )
                      operator delete[](v115);
                    goto LABEL_27;
                  }
                  v89 = *(_QWORD *)(v13 + 24);
                }
                if ( v89 )
                {
                  sub_168B9B0((__int64)&v130, a1 + 8, 5789);
                  sub_16B73F0((unsigned __int8 **)&v130, v89);
                  v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
                  sub_18CAED0(a1, v90, v13, &v130);
                  if ( v130 )
                  {
                    if ( v131 )
                      sub_1580C40(v131, (unsigned __int64)v130);
                  }
                }
                goto LABEL_197;
              }
            }
            else
            {
              v118 = v70;
              if ( v68 < v71 - (unsigned int)sub_C16760((__int64)&v115) )
                goto LABEL_160;
              LODWORD(v128) = v71;
            }
            v127 = v115;
            goto LABEL_119;
          }
          if ( !v117 && sub_16B6690((__int64 *)&v115) )
          {
            if ( a4 )
            {
              v25 = 6524;
            }
            else
            {
              sub_C16960((__int64)&v130, (__int64)&v115);
              sub_C18DB0((__int64)&v115, (__int64)&v130);
              if ( (unsigned int)v131 > 0x40 && v130 )
                operator delete[](v130);
              v25 = 7307;
            }
            v26 = a1 + 8;
            sub_168B9B0((__int64)&v127, a1 + 8, v25);
            sub_C1DEB0(&v130, (int)&v115, 10, 1u, 0, 1u, 0);
            v27 = v130;
            sub_AEC220((unsigned __int8 **)&v127, v130, v131);
            v28 = (void *)sub_EEC8C0((unsigned __int64)v10, (__int64)v27, a7);
            LOBYTE(v125) = 1;
            v124 = v28;
            sub_AEC610((__int64 *)&v127, (__int64 *)&v124);
            v29 = sub_EEB7E0(v13, (__int64)&v124, a7);
            sub_18CAED0(a1, v29, v13, &v127);
            v31 = v95;
            v32 = v96;
            if ( v130 != v132 )
              operator delete(v130);
            v33 = v127;
            if ( v127 && v128 )
              sub_1580C40(v128, (unsigned __int64)v127);
            goto LABEL_49;
          }
          if ( sub_F62670(v17, nullptr, (__int64)v19, (__int64)v20, v21, v22) )
            goto LABEL_24;
          v38 = *(_BYTE *)(v16 + 19);
          v39 = *(_QWORD *)(v16 + 40);
          if ( (v38 & 2) != 0 )
          {
            LODWORD(v125) = *(_DWORD *)(v39 + 8);
            if ( (unsigned int)v125 > 0x40 )
              sub_2205510(&v124);
            else
              v124 = *(void **)v39;
          }
          else
          {
            LODWORD(v125) = 8 * ((v38 >> 2) & 0x1F);
            if ( (int)v125 > 64 )
              sub_2205470(&v124, v39, 0);
            else
              v124 = (void *)v39;
          }
          if ( v11 != v17 )
          {
            v98 = sub_A97D20(*(_QWORD *)(a1 + 248), v11);
            v40 = sub_A97D20(*(_QWORD *)(a1 + 248), v17);
            v41 = v98;
            v42 = v40;
            if ( !v98 )
            {
              v100 = v40;
              v91 = sub_A97FD0(*(_QWORD *)(a1 + 248));
              v42 = v100;
              v41 = v91;
            }
            v43 = v125;
            if ( v41 == v42 || v42 / v41 * v41 != v42 )
            {
LABEL_68:
              if ( v116 < v43 )
              {
                sub_2206CD0(&v130, &v115, v43);
                if ( v116 > 0x40 && v115 )
                  operator delete[](v115);
                v115 = v130;
                v116 = v131;
              }
              else if ( v116 > v43 )
              {
                sub_2206CD0(&v130, &v124, v116);
                if ( (unsigned int)v125 > 0x40 && v124 )
                  operator delete[](v124);
                v124 = v130;
                LODWORD(v125) = v131;
                v44 = sub_2205DB0(&v115, &v124);
LABEL_71:
                v45 = v44 >> 31;
                if ( a5 )
                  LOBYTE(v45) = (int)v44 <= 0;
                if ( !(_BYTE)v45 )
                {
                  if ( !a4 )
                  {
                    v107 = 0;
                    v57 = 7305;
                    v104 = 0;
                    goto LABEL_90;
                  }
                  v46 = *(_DWORD *)(a4 + 4);
                  v47 = *(_QWORD *)(a1 + 272);
                  if ( v46 < 0 )
                  {
                    v93 = sub_1021B90(v47, v46);
                    v47 = *(_QWORD *)(a1 + 272);
                    v46 = v93;
                  }
                  if ( !v46 )
                    goto LABEL_89;
                  v48 = (unsigned int)v46;
                  v106 = v46;
                  v49 = sub_1021680(v47, v46);
                  if ( !v49 || v49 == 3 )
                    goto LABEL_89;
                  v99 = *(_QWORD *)(a1 + 272);
                  v50 = sub_EEB7E0((unsigned __int64)v10, v48, a7);
                  v51 = (_DWORD *)v99;
                  v52 = v106;
                  if ( v50 < 0 )
                  {
                    v50 = sub_1021B90(v99, v50);
                    v51 = *(_DWORD **)(a1 + 272);
                    v52 = v106;
                  }
                  v53 = v50 & 0x7FFFFFFF;
                  if ( v53 < v51[119] || v53 >= v51[120] )
                  {
                    v108 = v52;
                    v102 = v51;
                    v94 = sub_101D590((__int64)v51, v53);
                    v52 = v108;
                    v51 = v102;
                    v54 = v94;
                  }
                  else
                  {
                    v54 = v51[118];
                  }
                  v55 = v52 & 0x7FFFFFFF;
                  if ( (v52 & 0x7FFFFFFFu) < v51[119] || v55 >= v51[120] )
                  {
                    v101 = v54;
                    v56 = sub_101D590((__int64)v51, v55);
                    v54 = v101;
                  }
                  else
                  {
                    v56 = v51[118];
                  }
                  if ( v56 != v54 )
                  {
LABEL_89:
                    v57 = 6522;
                    v104 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL);
                    v107 = v11 != v17;
LABEL_90:
                    v26 = a1 + 8;
                    sub_168B9B0((__int64)&v127, a1 + 8, v57);
                    sub_C1DEB0(&v130, (int)&v115, 10, 1u, 0, 1u, 0);
                    sub_AEC220((unsigned __int8 **)&v127, v130, v131);
                    sub_AE9DF0((unsigned __int8 **)&v127, v16 & 0xFFFFFFFFFFFFFFF0LL, 8u);
                    sub_16B6F70((unsigned __int8 **)&v127, v107);
                    sub_AE9DF0((unsigned __int8 **)&v127, v104, 8u);
                    v58 = (unsigned __int8 *)sub_EEC8C0((unsigned __int64)v10, v104, a7);
                    LOBYTE(v123) = 1;
                    v122 = v58;
                    sub_AEC610((__int64 *)&v127, (__int64 *)&v122);
                    v59 = sub_EEB7E0(v13, (__int64)&v122, a7);
                    sub_18CAED0(a1, v59, v13, &v127);
                    v30 = v96;
                    if ( v130 != v132 )
                      operator delete(v130);
                    v33 = v127;
                    if ( v127 && v128 )
                      sub_1580C40(v128, (unsigned __int64)v127);
                    if ( (unsigned int)v125 > 0x40 && v124 )
                      operator delete[](v124);
LABEL_49:
                    for ( j = *(_WORD *)v13 & 0x1FF; j == 123; j = *(_WORD *)v13 & 0x1FF )
                    {
                      if ( sub_9ECBA0(v13, (__int64)v33, v31, v32, v30) )
                        v35 = *(_QWORD *)(v13 + 16);
                      else
                        v35 = *(_QWORD *)(v13 + 24);
                      v13 = sub_BFD550(v35);
                    }
                    if ( j == 71 )
                    {
                      v36 = *(_QWORD *)(v13 + 16);
                    }
                    else
                    {
                      if ( j != 46 )
                        goto LABEL_24;
                      v36 = *(_QWORD *)(v13 + 24);
                    }
                    if ( v36 )
                    {
                      sub_168B9B0((__int64)&v130, v26, 5789);
                      sub_16B73F0((unsigned __int8 **)&v130, v36);
                      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                      sub_18CAED0(a1, v37, v13, &v130);
                      if ( v130 )
                      {
                        if ( v131 )
                          sub_1580C40(v131, (unsigned __int64)v130);
                      }
                    }
                    goto LABEL_24;
                  }
                }
                if ( (unsigned int)v125 > 0x40 )
                {
                  v75 = v124;
                  if ( v124 )
                    goto LABEL_129;
                }
                goto LABEL_24;
              }
              v44 = sub_2205DB0(&v115, &v124);
              goto LABEL_71;
            }
            LODWORD(v131) = v125;
            if ( (unsigned int)v125 > 0x40 )
              sub_2205470(&v130, v42 / v41, 0);
            else
              v130 = (void *)(v42 / v41);
            sub_2209DE0(&v124, &v130);
            if ( (unsigned int)v131 > 0x40 && v130 )
              operator delete[](v130);
          }
          v43 = v125;
          goto LABEL_68;
        }
        v61 = (unsigned __int64)v130;
      }
      else
      {
        v61 = (unsigned __int64)v115;
      }
      v62 = ~v61;
      v63 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v60;
      v64 = v60 == 0;
      v65 = 0;
      if ( !v64 )
        v65 = v63;
      v130 = (void *)(v62 & v65);
      goto LABEL_103;
    }
  }
}
