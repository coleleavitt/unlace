__int64 __fastcall sub_D86A70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _DWORD *v6; // r8
  _DWORD *v7; // r13
  _DWORD *v8; // r14
  unsigned int v9; // r12d
  _BYTE *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 *v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // r15
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rdi
  int v47; // edx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r14
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int8 **v53; // r12
  unsigned __int64 v54; // r13
  unsigned __int8 *v55; // rbp
  unsigned __int8 *v56; // rdx
  __int64 v57; // rax
  unsigned __int8 *v58; // rbp
  unsigned int v59; // r15d
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // eax
  unsigned __int8 **v65; // r12
  unsigned __int64 v66; // r15
  unsigned __int8 *v67; // rbp
  unsigned __int8 *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r12
  unsigned __int8 **v71; // rax
  unsigned __int8 **v72; // rdx
  unsigned __int8 *v73; // rax
  unsigned __int8 *v74; // rcx
  __int64 v75; // rax
  unsigned __int8 *v76; // rax
  unsigned __int8 *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rsi
  unsigned __int8 *v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  unsigned __int8 *v83; // rdx
  int v84; // eax
  unsigned __int8 *v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // r13
  __int64 v90; // r14
  void *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // rdx
  __int64 v95; // r15
  __int64 v96; // rbx
  void *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // r13
  __int64 v100; // r14
  __int64 v101; // r13
  void *v102; // rdi
  unsigned __int8 *v103; // rcx
  int v104; // eax
  unsigned __int8 *v105; // rcx
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // rcx
  unsigned __int8 **v111; // r14
  unsigned __int8 *v112; // r15
  __int64 v113; // rbx
  void *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rsi
  __int64 v118; // rcx
  unsigned __int8 **v119; // r14
  unsigned __int8 *v120; // r15
  __int64 v121; // rbx
  void *v122; // rdi
  unsigned int v125; // [rsp+Ch] [rbp-9Ch]
  __int64 *v126; // [rsp+10h] [rbp-98h]
  unsigned __int8 **v127; // [rsp+10h] [rbp-98h]
  unsigned __int8 **v128; // [rsp+10h] [rbp-98h]
  _DWORD *v129; // [rsp+10h] [rbp-98h]
  _DWORD *v130; // [rsp+10h] [rbp-98h]
  __int64 v131; // [rsp+20h] [rbp-88h]
  __int64 v132; // [rsp+20h] [rbp-88h]
  _BYTE *v133; // [rsp+28h] [rbp-80h]
  _BYTE *v134; // [rsp+28h] [rbp-80h]
  unsigned __int64 v135; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v136; // [rsp+38h] [rbp-70h]
  _BYTE v137[24]; // [rsp+40h] [rbp-68h] BYREF
  int v138; // [rsp+58h] [rbp-50h]
  __int64 v139; // [rsp+60h] [rbp-48h]
  unsigned int v140; // [rsp+68h] [rbp-40h]

  v4 = a4;
  v6 = *(_DWORD **)(a4 + 280);
  v7 = &v6[6 * *(unsigned int *)(a4 + 288)];
  if ( v7 != v6 )
  {
    v8 = *(_DWORD **)(a4 + 280);
    v9 = 1;
    v10 = v137;
    while ( 1 )
    {
      v11 = (unsigned int)(*(_DWORD *)a3 + v8[2]);
      sub_DFF4E0(v10, *(_QWORD *)(a3 + 32), v11, (unsigned int)v11);
      v12 = *(_QWORD *)v8;
      v13 = *(_QWORD *)(*(_QWORD *)v8 + 48LL);
      if ( *(_BYTE *)(v4 + 648) )
      {
        if ( !v138 )
          break;
      }
      v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v17 != 48 )
        goto LABEL_9;
      if ( v138 != 1 )
      {
        if ( v138 )
        {
          if ( v138 == 2 || v138 == 3 )
            BUG();
          v32 = *(_QWORD *)(v139 + 32);
          goto LABEL_26;
        }
        v14 = v139;
        if ( v139 )
        {
          v15 = v140;
LABEL_31:
          v32 = *(_QWORD *)(v14 + 32);
          if ( *(_DWORD *)(v32 + 24) != (_DWORD)v15 && (_DWORD)v15 )
            v32 = *(_QWORD *)(v14 + v15 + 32);
          goto LABEL_26;
        }
        goto LABEL_64;
      }
      v32 = v139;
LABEL_26:
      v9 &= sub_D86A70(a1, a2, v10, *(_QWORD *)(v32 + 32));
LABEL_17:
      v8 += 6;
      sub_DFF560(v10);
      if ( v7 == v8 )
        goto LABEL_18;
    }
    v14 = v139;
    if ( v139 )
    {
      v15 = v140;
      if ( *(_DWORD *)(*(_QWORD *)(v139 + 32) + 24LL) != v140 && v140 && (*(_BYTE *)(v139 + v140 + 28) & 0x10) == 0 )
        goto LABEL_17;
      v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v17 != 48 )
        goto LABEL_9;
      goto LABEL_31;
    }
    v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (_BYTE)v17 != 48 )
    {
LABEL_9:
      if ( (_BYTE)v17 != 5 && ((*(_BYTE *)(v12 + 68) & 1) == 0 || *(_QWORD *)(v12 + 40)) )
      {
        if ( (unsigned __int8)(v17 - 3) <= 2u || (v17 = (unsigned int)v17 & 0xFFFFFFFB, (_BYTE)v17 == 2) )
        {
          if ( (unsigned __int8)(*(_BYTE *)(v16 + 16) - 2) > 4u )
            sub_F3F310(v16, v12, v17, v16);
          v9 &= sub_D87BC0(a1, a2, v10);
        }
        else if ( !(unsigned __int8)sub_DFFEE0(v10) )
        {
          v70 = *(_QWORD *)v8;
          v71 = (unsigned __int8 **)sub_E0FF40(a1, a2, 2490, 0);
          v72 = v71;
          if ( v71 )
          {
            v73 = *v71;
            if ( !v73 )
            {
              v105 = v72[1];
              v106 = *((_DWORD *)v105 + 3744);
              if ( v106 )
              {
                v115 = (unsigned int)(v106 - 1);
                *((_DWORD *)v105 + 3744) = v115;
                v73 = *(unsigned __int8 **)&v105[8 * v115 + 14848];
                v116 = *((unsigned int *)v73 + 134);
                *v73 = 0;
                v117 = *((_QWORD *)v73 + 66);
                *((_DWORD *)v73 + 106) = 0;
                v118 = v117 + (v116 << 6);
                if ( v117 != v118 )
                {
                  v130 = v8;
                  v119 = v72;
                  v132 = v4;
                  v120 = v73;
                  v134 = v10;
                  v121 = v118;
                  do
                  {
                    while ( 1 )
                    {
                      v121 -= 64;
                      v122 = *(void **)(v121 + 24);
                      if ( v122 == (void *)(v121 + 40) )
                        break;
                      operator delete(v122);
                      if ( v117 == v121 )
                        goto LABEL_129;
                    }
                  }
                  while ( v117 != v121 );
LABEL_129:
                  v72 = v119;
                  v73 = v120;
                  v8 = v130;
                  v4 = v132;
                  v10 = v134;
                }
                *((_DWORD *)v73 + 134) = 0;
              }
              else
              {
                v128 = v72;
                v73 = (unsigned __int8 *)operator new(0x3A0u);
                *v73 = 0;
                *((_QWORD *)v73 + 12) = v73 + 112;
                *((_QWORD *)v73 + 16) = v73 + 144;
                *((_QWORD *)v73 + 20) = v73 + 176;
                *((_QWORD *)v73 + 24) = v73 + 208;
                *((_QWORD *)v73 + 28) = v73 + 240;
                *((_QWORD *)v73 + 32) = v73 + 272;
                *((_QWORD *)v73 + 36) = v73 + 304;
                *((_QWORD *)v73 + 40) = v73 + 336;
                *((_QWORD *)v73 + 44) = v73 + 368;
                *((_QWORD *)v73 + 48) = v73 + 400;
                *((_QWORD *)v73 + 52) = v73 + 432;
                *((_QWORD *)v73 + 13) = 0;
                v73[112] = 0;
                *((_QWORD *)v73 + 17) = 0;
                v73[144] = 0;
                *((_QWORD *)v73 + 21) = 0;
                v73[176] = 0;
                *((_QWORD *)v73 + 25) = 0;
                v73[208] = 0;
                *((_QWORD *)v73 + 29) = 0;
                v73[240] = 0;
                *((_QWORD *)v73 + 33) = 0;
                v73[272] = 0;
                *((_QWORD *)v73 + 37) = 0;
                v73[304] = 0;
                *((_QWORD *)v73 + 41) = 0;
                v73[336] = 0;
                *((_QWORD *)v73 + 45) = 0;
                v73[368] = 0;
                *((_QWORD *)v73 + 49) = 0;
                v73[400] = 0;
                *((_QWORD *)v73 + 53) = 0x800000000LL;
                v72 = v128;
                *((_QWORD *)v73 + 66) = v73 + 544;
                *((_QWORD *)v73 + 67) = 0x600000000LL;
              }
              *v72 = v73;
            }
            v73[*v73 + 1] = 2;
            v74 = *v72;
            v75 = **v72;
            *v74 = v75 + 1;
            *(_QWORD *)&v74[8 * v75 + 16] = 1;
            v76 = *v72;
            if ( !*v72 )
            {
              v103 = v72[1];
              v104 = *((_DWORD *)v103 + 3744);
              if ( v104 )
              {
                v107 = (unsigned int)(v104 - 1);
                *((_DWORD *)v103 + 3744) = v107;
                v76 = *(unsigned __int8 **)&v103[8 * v107 + 14848];
                v108 = *((unsigned int *)v76 + 134);
                *v76 = 0;
                v109 = *((_QWORD *)v76 + 66);
                *((_DWORD *)v76 + 106) = 0;
                v110 = v109 + (v108 << 6);
                if ( v109 != v110 )
                {
                  v129 = v8;
                  v111 = v72;
                  v131 = v4;
                  v112 = v76;
                  v133 = v10;
                  v113 = v110;
                  do
                  {
                    while ( 1 )
                    {
                      v113 -= 64;
                      v114 = *(void **)(v113 + 24);
                      if ( v114 == (void *)(v113 + 40) )
                        break;
                      operator delete(v114);
                      if ( v109 == v113 )
                        goto LABEL_121;
                    }
                  }
                  while ( v109 != v113 );
LABEL_121:
                  v72 = v111;
                  v76 = v112;
                  v8 = v129;
                  v4 = v131;
                  v10 = v133;
                }
                *((_DWORD *)v76 + 134) = 0;
              }
              else
              {
                v127 = v72;
                v76 = (unsigned __int8 *)operator new(0x3A0u);
                *v76 = 0;
                *((_QWORD *)v76 + 12) = v76 + 112;
                *((_QWORD *)v76 + 16) = v76 + 144;
                *((_QWORD *)v76 + 20) = v76 + 176;
                *((_QWORD *)v76 + 24) = v76 + 208;
                *((_QWORD *)v76 + 28) = v76 + 240;
                *((_QWORD *)v76 + 32) = v76 + 272;
                *((_QWORD *)v76 + 36) = v76 + 304;
                *((_QWORD *)v76 + 40) = v76 + 336;
                *((_QWORD *)v76 + 44) = v76 + 368;
                *((_QWORD *)v76 + 48) = v76 + 400;
                *((_QWORD *)v76 + 52) = v76 + 432;
                *((_QWORD *)v76 + 13) = 0;
                v76[112] = 0;
                *((_QWORD *)v76 + 17) = 0;
                v76[144] = 0;
                *((_QWORD *)v76 + 21) = 0;
                v76[176] = 0;
                *((_QWORD *)v76 + 25) = 0;
                v76[208] = 0;
                *((_QWORD *)v76 + 29) = 0;
                v76[240] = 0;
                *((_QWORD *)v76 + 33) = 0;
                v76[272] = 0;
                *((_QWORD *)v76 + 37) = 0;
                v76[304] = 0;
                *((_QWORD *)v76 + 41) = 0;
                v76[336] = 0;
                *((_QWORD *)v76 + 45) = 0;
                v76[368] = 0;
                *((_QWORD *)v76 + 49) = 0;
                v76[400] = 0;
                *((_QWORD *)v76 + 53) = 0x800000000LL;
                v72 = v127;
                *((_QWORD *)v76 + 66) = v76 + 544;
                *((_QWORD *)v76 + 67) = 0x600000000LL;
              }
              *v72 = v76;
            }
            v76[*v76 + 1] = 10;
            v77 = *v72;
            v78 = *v77;
            *v77 = v78 + 1;
            *(_QWORD *)&v77[8 * v78 + 16] = v70;
          }
          v79 = *(unsigned int *)(v70 + 24);
          v9 = 0;
          sub_E10070(a1, v79, 2486);
        }
      }
      goto LABEL_17;
    }
LABEL_64:
    v32 = 64;
    goto LABEL_26;
  }
  v9 = 1;
LABEL_18:
  v18 = *(_QWORD *)(v4 + 8);
  v19 = 32LL * *(unsigned int *)(v4 + 16);
  v20 = v18 + v19;
  if ( v18 != v18 + v19 )
  {
    v126 = (__int64 *)v4;
    v21 = *(_QWORD *)(v4 + 8);
    v22 = 0;
    v23 = v20;
    while ( 1 )
    {
      v24 = *(_QWORD *)(a3 + 32);
      v25 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)(v21 + 8));
      sub_DFF4E0(v137, v24, v25, (unsigned int)v25);
      if ( !(unsigned __int8)sub_DFFEE0(v137) )
        break;
      v30 = *(_QWORD *)(v21 + 24);
      v21 += 32;
      ++v22;
      v9 &= sub_D86A70(a1, a2, v137, v30);
      sub_DFF560(v137);
      if ( v23 == v21 )
        return v9;
    }
    v33 = *(_DWORD *)(a3 + 24);
    if ( v33 == 1 )
    {
      v34 = *(__int64 **)(a3 + 32);
    }
    else if ( (unsigned int)(v33 - 2) <= 1 )
    {
      v34 = nullptr;
    }
    else
    {
      v34 = *(__int64 **)(*(_QWORD *)(a3 + 32) + 32LL);
    }
    v35 = *v126;
    if ( !*v126 || (*(_BYTE *)(v35 + 28) & 0x7Fu) - 59 > 2 )
    {
      v64 = sub_CCBBD0(v34, v24, v26, v27, v28);
      v65 = (unsigned __int8 **)sub_E0FF40(a1, v64, 2491, 0);
      v66 = sub_CCB860(*(__int64 **)(v21 + 16));
      if ( v65 )
      {
        v67 = *v65;
        if ( !*v65 )
        {
          v85 = v65[1];
          v86 = *((_DWORD *)v85 + 3744);
          if ( v86 )
          {
            v98 = (unsigned int)(v86 - 1);
            *((_DWORD *)v85 + 3744) = v98;
            v67 = *(unsigned __int8 **)&v85[8 * v98 + 14848];
            v99 = *((unsigned int *)v67 + 134);
            *v67 = 0;
            v100 = *((_QWORD *)v67 + 66);
            *((_DWORD *)v67 + 106) = 0;
            v101 = v100 + (v99 << 6);
            while ( v100 != v101 )
            {
              while ( 1 )
              {
                v101 -= 64;
                v102 = *(void **)(v101 + 24);
                if ( v102 == (void *)(v101 + 40) )
                  break;
                operator delete(v102);
                if ( v100 == v101 )
                  goto LABEL_110;
              }
            }
LABEL_110:
            *((_DWORD *)v67 + 134) = 0;
          }
          else
          {
            v67 = (unsigned __int8 *)operator new(0x3A0u);
            *v67 = 0;
            *((_QWORD *)v67 + 12) = v67 + 112;
            *((_QWORD *)v67 + 16) = v67 + 144;
            *((_QWORD *)v67 + 20) = v67 + 176;
            *((_QWORD *)v67 + 24) = v67 + 208;
            *((_QWORD *)v67 + 28) = v67 + 240;
            *((_QWORD *)v67 + 32) = v67 + 272;
            *((_QWORD *)v67 + 36) = v67 + 304;
            *((_QWORD *)v67 + 40) = v67 + 336;
            *((_QWORD *)v67 + 44) = v67 + 368;
            *((_QWORD *)v67 + 48) = v67 + 400;
            *((_QWORD *)v67 + 52) = v67 + 432;
            *((_QWORD *)v67 + 13) = 0;
            v67[112] = 0;
            *((_QWORD *)v67 + 17) = 0;
            v67[144] = 0;
            *((_QWORD *)v67 + 21) = 0;
            v67[176] = 0;
            *((_QWORD *)v67 + 25) = 0;
            v67[208] = 0;
            *((_QWORD *)v67 + 29) = 0;
            v67[240] = 0;
            *((_QWORD *)v67 + 33) = 0;
            v67[272] = 0;
            *((_QWORD *)v67 + 37) = 0;
            v67[304] = 0;
            *((_QWORD *)v67 + 41) = 0;
            v67[336] = 0;
            *((_QWORD *)v67 + 45) = 0;
            v67[368] = 0;
            *((_QWORD *)v67 + 49) = 0;
            v67[400] = 0;
            *((_QWORD *)v67 + 53) = 0x800000000LL;
            *((_QWORD *)v67 + 66) = v67 + 544;
            *((_QWORD *)v67 + 67) = 0x600000000LL;
          }
          *v65 = v67;
        }
        v67[*v67 + 1] = 8;
        v68 = *v65;
        v69 = **v65;
        *v68 = v69 + 1;
        *(_QWORD *)&v68[8 * v69 + 16] = v66;
      }
      goto LABEL_62;
    }
    v36 = *(_QWORD *)(v35 + 104);
    v37 = *(_QWORD *)(v36 + 96);
    v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v37 & 1) == 0 )
    {
      v39 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v37 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v37 & 2) == 0 )
          goto LABEL_53;
        v40 = v39[2295];
        v41 = v36 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v40 )
        {
          v42 = v39[294];
          v39[304] += 24LL;
          v43 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v39[295] >= v43 + 24 && v42 )
          {
            v39[294] = v43 + 24;
            v44 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v44 = sub_962430((__int64)(v39 + 294), 24, 24, 3, v28, v29);
            v43 = v44 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v44 = v40;
          v41 = v43 | 4;
          *(_DWORD *)(v44 + 8) = 0;
          *(_QWORD *)(v44 + 16) = v36;
        }
        v38 = v41 & 0xFFFFFFFFFFFFFFFELL;
        v37 = v38 | 1;
        *(_QWORD *)(v36 + 96) = v38 | 1;
      }
    }
    if ( v38 )
    {
      if ( (v38 & 4) != 0 )
      {
        v45 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v45 )
        {
          v46 = *(_QWORD *)v45;
          v47 = *(_DWORD *)(*(_QWORD *)v45 + 12LL);
          if ( v45[2] != v47 )
          {
            v45[2] = v47;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 152LL))(v46, v36);
          }
        }
      }
    }
LABEL_53:
    v48 = *(_QWORD *)(v35 + 128);
    if ( (*(_BYTE *)(v48 + 24) & 1) != 0 )
      v49 = sub_B72C40(v48);
    else
      v49 = *(_QWORD *)(v48 + 24);
    v50 = v49 + 24 * v22;
    v51 = *(unsigned __int64 **)(v50 + 16);
    v52 = *v51;
    v136 = v51 + 1;
    v135 = v52;
    v125 = sub_F48F70(&v135);
    v53 = (unsigned __int8 **)sub_E0FF40(a1, v125, 2491, 0);
    v54 = sub_CCB860(*(__int64 **)(v21 + 16));
    if ( v53 )
    {
      v55 = *v53;
      if ( !*v53 )
      {
        v83 = v53[1];
        v84 = *((_DWORD *)v83 + 3744);
        if ( v84 )
        {
          v92 = (unsigned int)(v84 - 1);
          *((_DWORD *)v83 + 3744) = v92;
          v55 = *(unsigned __int8 **)&v83[8 * v92 + 14848];
          v93 = *((unsigned int *)v55 + 134);
          *v55 = 0;
          v94 = *((_QWORD *)v55 + 66);
          *((_DWORD *)v55 + 106) = 0;
          v95 = v94 + (v93 << 6);
          if ( v94 != v95 )
          {
            v96 = v94;
            do
            {
              while ( 1 )
              {
                v95 -= 64;
                v97 = *(void **)(v95 + 24);
                if ( v97 == (void *)(v95 + 40) )
                  break;
                operator delete(v97);
                if ( v96 == v95 )
                  goto LABEL_102;
              }
            }
            while ( v96 != v95 );
          }
LABEL_102:
          *((_DWORD *)v55 + 134) = 0;
        }
        else
        {
          v55 = (unsigned __int8 *)operator new(0x3A0u);
          *v55 = 0;
          *((_QWORD *)v55 + 12) = v55 + 112;
          *((_QWORD *)v55 + 16) = v55 + 144;
          *((_QWORD *)v55 + 20) = v55 + 176;
          *((_QWORD *)v55 + 24) = v55 + 208;
          *((_QWORD *)v55 + 28) = v55 + 240;
          *((_QWORD *)v55 + 32) = v55 + 272;
          *((_QWORD *)v55 + 36) = v55 + 304;
          *((_QWORD *)v55 + 40) = v55 + 336;
          *((_QWORD *)v55 + 44) = v55 + 368;
          *((_QWORD *)v55 + 48) = v55 + 400;
          *((_QWORD *)v55 + 52) = v55 + 432;
          *((_QWORD *)v55 + 13) = 0;
          v55[112] = 0;
          *((_QWORD *)v55 + 17) = 0;
          v55[144] = 0;
          *((_QWORD *)v55 + 21) = 0;
          v55[176] = 0;
          *((_QWORD *)v55 + 25) = 0;
          v55[208] = 0;
          *((_QWORD *)v55 + 29) = 0;
          v55[240] = 0;
          *((_QWORD *)v55 + 33) = 0;
          v55[272] = 0;
          *((_QWORD *)v55 + 37) = 0;
          v55[304] = 0;
          *((_QWORD *)v55 + 41) = 0;
          v55[336] = 0;
          *((_QWORD *)v55 + 45) = 0;
          v55[368] = 0;
          *((_QWORD *)v55 + 49) = 0;
          v55[400] = 0;
          *((_QWORD *)v55 + 53) = 0x800000000LL;
          *((_QWORD *)v55 + 66) = v55 + 544;
          *((_QWORD *)v55 + 67) = 0x600000000LL;
        }
        *v53 = v55;
      }
      v55[*v55 + 1] = 8;
      v56 = *v53;
      v57 = **v53;
      *v56 = v57 + 1;
      *(_QWORD *)&v56[8 * v57 + 16] = v54;
      v58 = *v53;
      v59 = *(_DWORD *)(v50 + 4);
      if ( *v53 )
      {
        v60 = *((unsigned int *)v58 + 106);
        v61 = *((unsigned int *)v58 + 107);
        v62 = v60 + 1;
      }
      else
      {
        v80 = v53[1];
        v81 = *((_DWORD *)v80 + 3744);
        if ( v81 )
        {
          v87 = (unsigned int)(v81 - 1);
          *((_DWORD *)v80 + 3744) = v87;
          v58 = *(unsigned __int8 **)&v80[8 * v87 + 14848];
          v88 = *((unsigned int *)v58 + 134);
          *v58 = 0;
          v89 = *((_QWORD *)v58 + 66);
          *((_DWORD *)v58 + 106) = 0;
          v90 = v89 + (v88 << 6);
          if ( v89 == v90 )
          {
            v62 = 1;
            v60 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v90 -= 64;
                v91 = *(void **)(v90 + 24);
                if ( v91 == (void *)(v90 + 40) )
                  break;
                operator delete(v91);
                if ( v89 == v90 )
                  goto LABEL_94;
              }
            }
            while ( v89 != v90 );
LABEL_94:
            v60 = *((unsigned int *)v58 + 106);
            v62 = v60 + 1;
          }
          *((_DWORD *)v58 + 134) = 0;
          v61 = *((unsigned int *)v58 + 107);
        }
        else
        {
          v82 = operator new(0x3A0u);
          v61 = 8;
          v62 = 1;
          v58 = (unsigned __int8 *)v82;
          *(_BYTE *)v82 = 0;
          *(_QWORD *)(v82 + 96) = v82 + 112;
          *(_QWORD *)(v82 + 128) = v82 + 144;
          *(_QWORD *)(v82 + 160) = v82 + 176;
          *(_QWORD *)(v82 + 192) = v82 + 208;
          *(_QWORD *)(v82 + 224) = v82 + 240;
          *(_QWORD *)(v82 + 256) = v82 + 272;
          *(_QWORD *)(v82 + 288) = v82 + 304;
          *(_QWORD *)(v82 + 320) = v82 + 336;
          *(_QWORD *)(v82 + 352) = v82 + 368;
          *(_QWORD *)(v82 + 384) = v82 + 400;
          *(_QWORD *)(v82 + 416) = v82 + 432;
          *(_QWORD *)(v82 + 104) = 0;
          *(_BYTE *)(v82 + 112) = 0;
          *(_QWORD *)(v82 + 136) = 0;
          *(_BYTE *)(v82 + 144) = 0;
          *(_QWORD *)(v82 + 168) = 0;
          *(_BYTE *)(v82 + 176) = 0;
          *(_QWORD *)(v82 + 200) = 0;
          *(_BYTE *)(v82 + 208) = 0;
          *(_QWORD *)(v82 + 232) = 0;
          *(_BYTE *)(v82 + 240) = 0;
          *(_QWORD *)(v82 + 264) = 0;
          *(_BYTE *)(v82 + 272) = 0;
          *(_QWORD *)(v82 + 296) = 0;
          *(_BYTE *)(v82 + 304) = 0;
          *(_QWORD *)(v82 + 328) = 0;
          *(_BYTE *)(v82 + 336) = 0;
          *(_QWORD *)(v82 + 360) = 0;
          *(_BYTE *)(v82 + 368) = 0;
          *(_QWORD *)(v82 + 392) = 0;
          *(_BYTE *)(v82 + 400) = 0;
          *(_QWORD *)(v82 + 424) = 0x800000000LL;
          *(_QWORD *)(v82 + 528) = v82 + 544;
          *(_QWORD *)(v82 + 536) = 0x600000000LL;
          v60 = 0;
        }
        *v53 = v58;
      }
      LOBYTE(v136) = 1;
      v135 = __PAIR64__(v59, v125);
      if ( v61 < v62 )
      {
        sub_22134E0(v58 + 416, v58 + 432, v62, 12);
        v60 = *((unsigned int *)v58 + 106);
      }
      v63 = *((_QWORD *)v58 + 52) + 12 * v60;
      *(_QWORD *)v63 = v135;
      *(_DWORD *)(v63 + 8) = (_DWORD)v136;
      ++*((_DWORD *)v58 + 106);
    }
LABEL_62:
    v9 = 0;
    sub_DFF560(v137);
  }
  return v9;
}

