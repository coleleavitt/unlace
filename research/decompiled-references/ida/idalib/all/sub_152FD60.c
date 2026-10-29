__int64 __fastcall sub_152FD60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
  __int64 *v10; // r13
  __int64 *v11; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  bool v16; // r15
  int *v17; // r13
  bool v18; // zf
  __int64 v19; // r12
  unsigned int v20; // eax
  unsigned __int8 *v21; // rbp
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  _QWORD *v25; // rdx
  __int64 v26; // rax
  void **v27; // rbp
  unsigned __int64 v28; // rax
  void **v29; // r15
  void **v30; // r12
  void **v31; // rdi
  void **v32; // rdi
  void **v33; // r15
  void **v34; // r12
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rdx
  unsigned int *v40; // rbp
  __int64 v41; // rax
  unsigned int *v42; // r12
  int v43; // edx
  unsigned int *v44; // rbp
  unsigned int **v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // r12
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 v59; // r14
  __int64 v60; // rbx
  void *v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r9
  unsigned __int64 *v64; // r8
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rbp
  unsigned __int64 *v67; // rdx
  __int64 v68; // r13
  __int64 v69; // rax
  int v70; // edx
  unsigned __int64 v71; // r15
  __int64 v72; // rax
  unsigned __int8 v73; // r13
  __int64 v74; // r15
  char v75; // al
  __int64 v76; // rax
  __int64 v77; // rdx
  int v78; // edx
  unsigned __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  unsigned int **v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // r8
  int v86; // eax
  int v87; // esi
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  _BOOL8 v94; // [rsp+8h] [rbp-110h]
  __int64 v95; // [rsp+8h] [rbp-110h]
  __int64 v96; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v97; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v98; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v99; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v100; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v101; // [rsp+10h] [rbp-108h]
  unsigned __int64 v102; // [rsp+10h] [rbp-108h]
  unsigned __int8 v105; // [rsp+33h] [rbp-E5h]
  unsigned int v106; // [rsp+34h] [rbp-E4h]
  __int64 *v107; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v108; // [rsp+48h] [rbp-D0h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+58h] [rbp-C0h]
  _BYTE v111[48]; // [rsp+60h] [rbp-B8h] BYREF
  void *v112; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-80h]
  __int64 v114; // [rsp+A0h] [rbp-78h]
  void *v115; // [rsp+B0h] [rbp-68h]
  __int64 v116; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v117; // [rsp+D0h] [rbp-48h]

  v3 = a1;
  v106 = *(_DWORD *)(a1 + 16);
  v105 = sub_1569A00(a1, 22, 2192, a2, a3);
  if ( v105 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = sub_2244B30("__INTRIN_H", 10);
  v9 = sub_2244CB0(v5 + 552, "__INTRIN_H", 10, v6);
  v10 = (__int64 *)(*(_QWORD *)(v5 + 552) + 8LL * v9);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      v11 = (__int64 *)&v112;
      sub_989490((__int64 **)&v112, v10, 0);
      v12 = *(_QWORD *)v112;
      v13 = *(_QWORD *)(*(_QWORD *)v112 + 8LL);
      if ( v13 )
        goto LABEL_48;
      goto LABEL_7;
    }
    --*(_DWORD *)(v5 + 568);
  }
  v35 = *(_QWORD *)(v5 + 576);
  *(_QWORD *)(v5 + 656) += 27LL;
  v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v5 + 584) >= v36 + 27 && v35 )
    *(_QWORD *)(v5 + 576) = v36 + 27;
  else
    v36 = sub_986170(v5 + 576, 27, 27, 3, v7, v8);
  strcpy((char *)(v36 + 16), "__INTRIN_H");
  v37 = v9;
  v11 = (__int64 *)&v112;
  *(_QWORD *)v36 = 10;
  *(_QWORD *)(v36 + 8) = 0;
  *v10 = v36;
  ++*(_DWORD *)(v5 + 564);
  v38 = sub_22450D0(v5 + 552, v37);
  sub_989490((__int64 **)&v112, (__int64 *)(*(_QWORD *)(v5 + 552) + 8LL * v38), 0);
  v12 = *(_QWORD *)v112;
  v13 = *(_QWORD *)(*(_QWORD *)v112 + 8LL);
  if ( v13 )
  {
LABEL_48:
    if ( (*(_BYTE *)(v13 + 3) & 2) == 0 )
      goto LABEL_10;
LABEL_49:
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 56) + 21LL) & 2) == 0 )
    {
      v16 = 0;
      goto LABEL_11;
    }
    v62 = *(_QWORD *)(v5 + 1704);
    v108 = v13;
    if ( (unsigned __int8)sub_12EC520((__int64 *)v62, (__int64 *)&v108, &ptr) )
    {
      v64 = (unsigned __int64 *)((char *)ptr + 8);
      goto LABEL_80;
    }
    v84 = *(unsigned int *)(v62 + 16);
    v85 = ptr;
    v86 = *(_DWORD *)(v62 + 8) + 1;
    v87 = 2 * v84;
    v88 = (unsigned int)(3 * v84);
    v112 = ptr;
    if ( 4 * v86 < (unsigned int)v88 )
    {
      v88 = (unsigned int)(v84 - *(_DWORD *)(v62 + 12) - v86);
      if ( (unsigned int)v88 > (unsigned int)v84 >> 3 )
      {
LABEL_121:
        v18 = *v85 == -4096;
        *(_DWORD *)(v62 + 8) = v86;
        if ( !v18 )
          --*(_DWORD *)(v62 + 12);
        v89 = v108;
        v85[1] = 0;
        v64 = v85 + 1;
        *(v64 - 1) = v89;
LABEL_80:
        v65 = *v64;
        v66 = 0;
        if ( !*v64 )
          goto LABEL_87;
        v67 = (unsigned __int64 *)(v65 & 0xFFFFFFFFFFFFFFF8LL);
        v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v65 & 4) != 0 )
        {
          v66 = 0;
          if ( !v67 )
            goto LABEL_87;
          v66 = *v67;
        }
        while ( v66 && (*(_BYTE *)(v66 + 12) & 3) == 2 )
          v66 = *(_QWORD *)v66;
LABEL_87:
        v68 = v108;
        if ( (*(_BYTE *)(v108 + 4) & 0x10) != 0 )
        {
          v98 = v64;
          sub_145CD30(v5);
          v64 = v98;
          if ( (*(_BYTE *)(v68 + 3) & 2) == 0 )
            goto LABEL_135;
        }
        else if ( (*(_BYTE *)(v108 + 3) & 2) == 0 )
        {
          v73 = 0;
          goto LABEL_137;
        }
        v69 = *(_QWORD *)(v5 + 56);
        if ( (*(_BYTE *)(v69 + 21) & 2) != 0 || *(char *)(v69 + 22) < 0 )
        {
          v70 = *(_DWORD *)(*(_QWORD *)(v5 + 1704) + 48LL);
          if ( v70 )
          {
            v71 = *v64 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !*v64 || (*v64 & 4) == 0 || (v72 = *v64 & 0xFFFFFFFFFFFFFFF8LL, !v71) )
            {
              v92 = *(_QWORD *)(v5 + 128);
              *(_QWORD *)(v5 + 208) += 32LL;
              v93 = (v92 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              if ( *(_QWORD *)(v5 + 136) >= v93 + 32 && v92 )
              {
                *(_QWORD *)(v5 + 128) = v93 + 32;
                v72 = (v92 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              }
              else
              {
                v100 = v64;
                v72 = sub_986170(v5 + 128, 32, 32, 4, (__int64)v64, v63);
                v64 = v100;
                v93 = v72 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)(v72 + 8) = 0;
              *(_DWORD *)(v72 + 16) = 0;
              *(_QWORD *)(v72 + 24) = 0;
              *(_QWORD *)v72 = v71;
              *(_BYTE *)(v72 + 20) = 0;
              *v64 = v93 | 4;
              v70 = *(_DWORD *)(*(_QWORD *)(v5 + 1704) + 48LL);
            }
            if ( *(_DWORD *)(v72 + 16) != v70 )
            {
              v101 = v64;
              v95 = v72;
              sub_14476F0(v5, v68, v72);
              v72 = v95;
              v64 = v101;
            }
            v73 = *(_BYTE *)(v72 + 20);
LABEL_98:
            v74 = v108;
            if ( (*(_BYTE *)(v108 + 4) & 0x10) != 0 )
            {
              v97 = v64;
              sub_145CD30(v5);
              v64 = v97;
              v75 = *(_BYTE *)(v74 + 3) & 2;
            }
            else
            {
              v75 = *(_BYTE *)(v108 + 3) & 2;
            }
            if ( v75 )
            {
              v76 = *(_QWORD *)(v5 + 56);
              if ( (*(_BYTE *)(v76 + 21) & 2) == 0 )
              {
                v77 = 0;
                if ( *(char *)(v76 + 22) >= 0 )
                {
LABEL_111:
                  if ( !v66
                    || (*(_BYTE *)(v66 + 12) & 3) != 0
                    || (v16 = 0, !((unsigned __int16)(4 * v73) & 0xFFF8 | v66 & 0xFFFFFFFFFFFFFFF8LL)) )
                  {
                    v16 = v77 == 0;
                  }
                  goto LABEL_11;
                }
              }
              v78 = *(_DWORD *)(*(_QWORD *)(v5 + 1704) + 48LL);
              if ( v78 )
              {
                v79 = *v64 & 0xFFFFFFFFFFFFFFF8LL;
                if ( !*v64 || (*v64 & 4) == 0 || (v80 = *v64 & 0xFFFFFFFFFFFFFFF8LL, !v79) )
                {
                  v90 = *(_QWORD *)(v5 + 128);
                  *(_QWORD *)(v5 + 208) += 32LL;
                  v91 = (v90 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                  if ( *(_QWORD *)(v5 + 136) >= v91 + 32 && v90 )
                  {
                    *(_QWORD *)(v5 + 128) = v91 + 32;
                    v80 = (v90 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                  }
                  else
                  {
                    v102 = v79;
                    v99 = v64;
                    v80 = sub_986170(v5 + 128, 32, 32, 4, (__int64)v64, v79);
                    v79 = v102;
                    v64 = v99;
                    v91 = v80 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)(v80 + 8) = 0;
                  *(_DWORD *)(v80 + 16) = 0;
                  *(_QWORD *)(v80 + 24) = 0;
                  *(_QWORD *)v80 = v79;
                  *(_BYTE *)(v80 + 20) = 0;
                  *v64 = v91 | 4;
                  v78 = *(_DWORD *)(*(_QWORD *)(v5 + 1704) + 48LL);
                }
                if ( *(_DWORD *)(v80 + 16) != v78 )
                {
                  v96 = v80;
                  sub_14476F0(v5, v74, v80);
                  v80 = v96;
                }
                v81 = *(_QWORD *)(v80 + 8);
                v82 = v81 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v81 & 4) != 0 )
                  v77 = *(unsigned int *)(v82 + 8);
                else
                  v77 = v82 != 0;
                goto LABEL_111;
              }
            }
LABEL_137:
            v77 = 0;
            goto LABEL_111;
          }
        }
LABEL_135:
        v73 = 0;
        goto LABEL_98;
      }
      v87 = v84;
    }
    sub_12F12D0(v62, v87, v84, v88, (__int64)ptr, v63);
    sub_12EC520((__int64 *)v62, (__int64 *)&v108, &v112);
    v85 = v112;
    v86 = *(_DWORD *)(v62 + 8) + 1;
    goto LABEL_121;
  }
LABEL_7:
  v14 = *(_QWORD *)(v5 + 672);
  if ( v14 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v14 + 16LL))(v14, "__INTRIN_H", 10);
    *(_QWORD *)(v12 + 8) = v13;
    if ( v13 )
      goto LABEL_48;
  }
  v13 = sub_15290A0((__int64 *)(v5 + 576), 24, 3u);
  v15 = *(_QWORD *)v13 & 0xFFFFF80000000000LL;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)v13 = v15 | 0x1FFFC05;
  *(_QWORD *)(v12 + 8) = v13;
  *(_QWORD *)(v13 + 16) = v12;
  if ( (*(_BYTE *)(v13 + 3) & 2) != 0 )
    goto LABEL_49;
LABEL_10:
  v16 = 1;
LABEL_11:
  v17 = (int *)(v3 + 16);
  v18 = *(_WORD *)(v3 + 32) == 5;
  ptr = v111;
  v110 = 0x300000000LL;
  if ( v18 )
  {
    v94 = v16;
    do
    {
      v19 = *(_QWORD *)(v3 + 24);
      v20 = (unsigned __int16)(*(_DWORD *)v19 >> 9);
      if ( v20 != 65534 && v20 > 0x23 && v20 != 36 )
      {
        v40 = *(unsigned int **)(v19 + 16);
        v41 = (unsigned int)v110;
        v42 = (unsigned int *)*v40;
        v43 = v110;
        v44 = v40 + 4;
        if ( (unsigned int)v110 >= (unsigned __int64)HIDWORD(v110) )
        {
          if ( HIDWORD(v110) < (unsigned __int64)(unsigned int)v110 + 1 )
          {
            sub_2237220(&ptr, v111, (unsigned int)v110 + 1LL, 16);
            v41 = (unsigned int)v110;
          }
          v83 = (unsigned int **)((char *)ptr + 16 * v41);
          *v83 = v44;
          v83[1] = v42;
          LODWORD(v110) = v110 + 1;
        }
        else
        {
          v45 = (unsigned int **)((char *)ptr + 16 * (unsigned int)v110);
          *v45 = v44;
          v45[1] = v42;
          LODWORD(v110) = v43 + 1;
        }
      }
      else
      {
        sub_FC70B0((__int64)v11, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 48LL), *(_DWORD *)(v3 + 16), 2206);
        v21 = (unsigned __int8 *)v112;
        if ( !v112 )
        {
          v48 = v113;
          v49 = *(_DWORD *)(v113 + 14976);
          if ( v49 )
          {
            v55 = (unsigned int)(v49 - 1);
            *(_DWORD *)(v113 + 14976) = v55;
            v21 = *(unsigned __int8 **)(v48 + 8 * v55 + 14848);
            v56 = *((unsigned int *)v21 + 134);
            *v21 = 0;
            v57 = *((_QWORD *)v21 + 66);
            *((_DWORD *)v21 + 106) = 0;
            v56 <<= 6;
            v58 = v57 + v56;
            if ( v57 != v57 + v56 )
            {
              v107 = v11;
              v59 = v3;
              v60 = v57;
              do
              {
                while ( 1 )
                {
                  v58 -= 64;
                  v61 = *(void **)(v58 + 24);
                  if ( v61 == (void *)(v58 + 40) )
                    break;
                  operator delete(v61);
                  if ( v60 == v58 )
                    goto LABEL_74;
                }
              }
              while ( v60 != v58 );
LABEL_74:
              v3 = v59;
              v11 = v107;
            }
            *((_DWORD *)v21 + 134) = 0;
          }
          else
          {
            v21 = (unsigned __int8 *)operator new(0x3A0u);
            *v21 = 0;
            *((_QWORD *)v21 + 12) = v21 + 112;
            *((_QWORD *)v21 + 16) = v21 + 144;
            *((_QWORD *)v21 + 20) = v21 + 176;
            *((_QWORD *)v21 + 24) = v21 + 208;
            *((_QWORD *)v21 + 28) = v21 + 240;
            *((_QWORD *)v21 + 32) = v21 + 272;
            *((_QWORD *)v21 + 36) = v21 + 304;
            *((_QWORD *)v21 + 40) = v21 + 336;
            *((_QWORD *)v21 + 44) = v21 + 368;
            *((_QWORD *)v21 + 48) = v21 + 400;
            *((_QWORD *)v21 + 52) = v21 + 432;
            *((_QWORD *)v21 + 13) = 0;
            v21[112] = 0;
            *((_QWORD *)v21 + 17) = 0;
            v21[144] = 0;
            *((_QWORD *)v21 + 21) = 0;
            v21[176] = 0;
            *((_QWORD *)v21 + 25) = 0;
            v21[208] = 0;
            *((_QWORD *)v21 + 29) = 0;
            v21[240] = 0;
            *((_QWORD *)v21 + 33) = 0;
            v21[272] = 0;
            *((_QWORD *)v21 + 37) = 0;
            v21[304] = 0;
            *((_QWORD *)v21 + 41) = 0;
            v21[336] = 0;
            *((_QWORD *)v21 + 45) = 0;
            v21[368] = 0;
            *((_QWORD *)v21 + 49) = 0;
            v21[400] = 0;
            *((_QWORD *)v21 + 53) = 0x800000000LL;
            *((_QWORD *)v21 + 66) = v21 + 544;
            *((_QWORD *)v21 + 67) = 0x600000000LL;
          }
          v112 = v21;
        }
        v21[*v21 + 1] = 5;
        v22 = v112;
        v23 = *(unsigned __int8 *)v112;
        *(_BYTE *)v112 = v23 + 1;
        v22[v23 + 2] = v19;
        v24 = (unsigned __int8 *)v112;
        if ( !v112 )
        {
          v46 = v113;
          v47 = *(_DWORD *)(v113 + 14976);
          if ( v47 )
          {
            v50 = (unsigned int)(v47 - 1);
            *(_DWORD *)(v113 + 14976) = v50;
            v24 = *(unsigned __int8 **)(v46 + 8 * v50 + 14848);
            v51 = *((unsigned int *)v24 + 134);
            *v24 = 0;
            v52 = *((_QWORD *)v24 + 66);
            *((_DWORD *)v24 + 106) = 0;
            v53 = v52 + (v51 << 6);
            while ( v52 != v53 )
            {
              while ( 1 )
              {
                v53 -= 64;
                v54 = *(void **)(v53 + 24);
                if ( v54 == (void *)(v53 + 40) )
                  break;
                operator delete(v54);
                if ( v52 == v53 )
                  goto LABEL_69;
              }
            }
LABEL_69:
            *((_DWORD *)v24 + 134) = 0;
          }
          else
          {
            v24 = (unsigned __int8 *)operator new(0x3A0u);
            *v24 = 0;
            *((_QWORD *)v24 + 12) = v24 + 112;
            *((_QWORD *)v24 + 16) = v24 + 144;
            *((_QWORD *)v24 + 20) = v24 + 176;
            *((_QWORD *)v24 + 24) = v24 + 208;
            *((_QWORD *)v24 + 28) = v24 + 240;
            *((_QWORD *)v24 + 32) = v24 + 272;
            *((_QWORD *)v24 + 36) = v24 + 304;
            *((_QWORD *)v24 + 40) = v24 + 336;
            *((_QWORD *)v24 + 44) = v24 + 368;
            *((_QWORD *)v24 + 48) = v24 + 400;
            *((_QWORD *)v24 + 52) = v24 + 432;
            *((_QWORD *)v24 + 13) = 0;
            v24[112] = 0;
            *((_QWORD *)v24 + 17) = 0;
            v24[144] = 0;
            *((_QWORD *)v24 + 21) = 0;
            v24[176] = 0;
            *((_QWORD *)v24 + 25) = 0;
            v24[208] = 0;
            *((_QWORD *)v24 + 29) = 0;
            v24[240] = 0;
            *((_QWORD *)v24 + 33) = 0;
            v24[272] = 0;
            *((_QWORD *)v24 + 37) = 0;
            v24[304] = 0;
            *((_QWORD *)v24 + 41) = 0;
            v24[336] = 0;
            *((_QWORD *)v24 + 45) = 0;
            v24[368] = 0;
            *((_QWORD *)v24 + 49) = 0;
            v24[400] = 0;
            *((_QWORD *)v24 + 53) = 0x800000000LL;
            *((_QWORD *)v24 + 66) = v24 + 544;
            *((_QWORD *)v24 + 67) = 0x600000000LL;
          }
          v112 = v24;
        }
        v24[*v24 + 1] = 2;
        v25 = v112;
        v26 = *(unsigned __int8 *)v112;
        *(_BYTE *)v112 = v26 + 1;
        v25[v26 + 2] = v94;
        if ( (_BYTE)v117 )
        {
          sub_FC7790(v114, v11, SHIBYTE(v117));
          v114 = 0;
          v117 = 0;
        }
        if ( v115 != &v116 )
          operator delete(v115);
        v27 = (void **)v112;
        if ( v112 )
        {
          v28 = v113;
          if ( v113 )
          {
            if ( (unsigned __int64)v112 < v113 || (unsigned __int64)v112 > v113 + 14848 )
            {
              v29 = *((void ***)v112 + 66);
              v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v112 + 134)];
              if ( v29 != v30 )
              {
                do
                {
                  while ( 1 )
                  {
                    v30 -= 8;
                    v31 = (void **)v30[3];
                    if ( v31 == v30 + 5 )
                      break;
                    operator delete(v31);
                    if ( v29 == v30 )
                      goto LABEL_27;
                  }
                }
                while ( v29 != v30 );
LABEL_27:
                v30 = (void **)v27[66];
              }
              if ( v30 != v27 + 68 )
                free(v30);
              v32 = (void **)v27[52];
              if ( v32 != v27 + 54 )
                free(v32);
              v33 = v27 + 48;
              v34 = v27 + 8;
              do
              {
                while ( *v33 != v33 + 2 )
                {
                  operator delete(*v33);
                  v33 -= 4;
                  if ( v33 == v34 )
                    goto LABEL_35;
                }
                v33 -= 4;
              }
              while ( v33 != v34 );
LABEL_35:
              operator delete(v27, 0x3A0u);
            }
            else
            {
              v39 = *(unsigned int *)(v113 + 14976);
              *(_DWORD *)(v113 + 14976) = v39 + 1;
              *(_QWORD *)(v28 + 8 * v39 + 14848) = v27;
            }
          }
        }
      }
      sub_14634E0(*(__int64 **)(v3 + 8), v17);
      if ( *(_WORD *)(v3 + 32) != 66 )
        break;
      sub_14634E0(*(__int64 **)(v3 + 8), v17);
    }
    while ( *(_WORD *)(v3 + 32) == 5 );
  }
  if ( !(unsigned __int8)sub_1569A00(v3, 23, 2196, a2, a3) && !(unsigned __int8)sub_1569A00(v3, 1, 2202, a2, a3) )
  {
    sub_1670820(*(_QWORD *)(v3 + 96), v106, &ptr);
    v105 = 1;
  }
  if ( ptr != v111 )
    free(ptr);
  return v105;
}
