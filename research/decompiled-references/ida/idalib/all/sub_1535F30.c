__int64 __fastcall sub_1535F30(__int64 a1, char a2, __m128i a3, __m128 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  _BYTE *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // r15
  _BYTE *v27; // r14
  int v28; // eax
  unsigned int v29; // esi
  unsigned int i; // ebx
  __int64 v31; // rax
  void **v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rbx
  void **v36; // r12
  void *v37; // rbx
  __int64 v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  char v41; // al
  _BYTE *v42; // rbp
  _BYTE *v43; // r14
  _BYTE *v44; // rdi
  _QWORD *v45; // rbp
  _QWORD *v46; // r14
  _QWORD *v47; // rdi
  _QWORD *v48; // rax
  _QWORD *v49; // rbp
  _QWORD *v50; // r14
  _QWORD *v51; // rdi
  _QWORD *v52; // rdi
  void *v53; // rdi
  __int64 v54; // rsi
  void **v55; // r14
  int v56; // eax
  _QWORD *v57; // rbp
  _QWORD *v58; // r14
  _QWORD *v59; // rdi
  _QWORD *v60; // rdi
  _QWORD *v61; // rbp
  _QWORD *v62; // r14
  _QWORD *v63; // rdi
  _QWORD *v64; // rdi
  int *v65; // [rsp+8h] [rbp-CB0h]
  unsigned int v66; // [rsp+14h] [rbp-CA4h]
  __int64 v67; // [rsp+18h] [rbp-CA0h]
  __int64 v68; // [rsp+20h] [rbp-C98h]
  __int64 v69; // [rsp+28h] [rbp-C90h]
  __int64 v70; // [rsp+48h] [rbp-C70h] BYREF
  _BYTE *v71; // [rsp+50h] [rbp-C68h] BYREF
  char v72; // [rsp+58h] [rbp-C60h]
  __int64 v73; // [rsp+60h] [rbp-C58h]
  int v74; // [rsp+68h] [rbp-C50h]
  __int16 v75; // [rsp+6Ch] [rbp-C4Ch]
  __int64 (__fastcall *v76)(__int64); // [rsp+70h] [rbp-C48h]
  __int64 v77; // [rsp+78h] [rbp-C40h]
  __int64 v78; // [rsp+80h] [rbp-C38h]
  __int64 v79; // [rsp+90h] [rbp-C28h] BYREF
  void *v80; // [rsp+98h] [rbp-C20h]
  __int64 v81; // [rsp+A0h] [rbp-C18h]
  _BYTE v82[16]; // [rsp+A8h] [rbp-C10h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-C00h] BYREF
  void *v84; // [rsp+C0h] [rbp-BF8h]
  __int64 v85; // [rsp+C8h] [rbp-BF0h]
  _BYTE v86[16]; // [rsp+D0h] [rbp-BE8h] BYREF
  _QWORD v87[5]; // [rsp+E0h] [rbp-BD8h] BYREF
  void *v88; // [rsp+108h] [rbp-BB0h]
  __int64 v89; // [rsp+110h] [rbp-BA8h]
  _BYTE v90[16]; // [rsp+118h] [rbp-BA0h] BYREF
  __int64 v91; // [rsp+128h] [rbp-B90h] BYREF
  void *ptr; // [rsp+130h] [rbp-B88h]
  __int64 v93; // [rsp+138h] [rbp-B80h]
  _QWORD v94[4]; // [rsp+140h] [rbp-B78h] BYREF
  void *v95; // [rsp+160h] [rbp-B58h]
  __int64 v96; // [rsp+168h] [rbp-B50h]
  __int64 v97; // [rsp+170h] [rbp-B48h]
  __int64 v98; // [rsp+178h] [rbp-B40h]
  __int64 v99; // [rsp+180h] [rbp-B38h]
  __int64 v100; // [rsp+188h] [rbp-B30h]
  __int64 v101; // [rsp+190h] [rbp-B28h]
  __int64 v102; // [rsp+198h] [rbp-B20h]
  __int64 v103; // [rsp+1A0h] [rbp-B18h]
  __int64 v104; // [rsp+1A8h] [rbp-B10h]
  __int64 v105; // [rsp+1B0h] [rbp-B08h]
  __int64 v106; // [rsp+1B8h] [rbp-B00h]
  __int64 v107; // [rsp+1C0h] [rbp-AF8h]
  __int64 v108; // [rsp+1C8h] [rbp-AF0h]
  __int64 v109; // [rsp+1D0h] [rbp-AE8h]
  __int64 v110; // [rsp+1D8h] [rbp-AE0h]
  __int64 v111; // [rsp+1E0h] [rbp-AD8h]
  __int64 v112; // [rsp+1E8h] [rbp-AD0h]
  __int64 v113; // [rsp+1F0h] [rbp-AC8h]
  __int16 v114; // [rsp+1F8h] [rbp-AC0h]
  __int64 v115; // [rsp+200h] [rbp-AB8h]
  unsigned __int8 *v116; // [rsp+210h] [rbp-AA8h] BYREF
  __int64 v117; // [rsp+218h] [rbp-AA0h]
  void *v118[2]; // [rsp+220h] [rbp-A98h]
  __int64 v119; // [rsp+230h] [rbp-A88h]
  __int64 v120; // [rsp+238h] [rbp-A80h]
  __int64 v121; // [rsp+240h] [rbp-A78h]
  int v122; // [rsp+248h] [rbp-A70h]
  __int64 v123; // [rsp+250h] [rbp-A68h]
  __int64 v124; // [rsp+260h] [rbp-A58h]
  __int64 v125; // [rsp+268h] [rbp-A50h]
  int v126; // [rsp+270h] [rbp-A48h]
  __int64 v127; // [rsp+278h] [rbp-A40h]
  _QWORD *v128; // [rsp+280h] [rbp-A38h]
  int v129; // [rsp+288h] [rbp-A30h]
  _BYTE *v130; // [rsp+290h] [rbp-A28h]
  __int64 v131; // [rsp+298h] [rbp-A20h]
  _BYTE v132[576]; // [rsp+2A0h] [rbp-A18h] BYREF
  __int16 v133; // [rsp+4E0h] [rbp-7D8h]
  __int64 v134; // [rsp+4E8h] [rbp-7D0h]
  void *v135; // [rsp+4F0h] [rbp-7C8h]
  __int64 v136; // [rsp+4F8h] [rbp-7C0h]
  _BYTE v137[16]; // [rsp+500h] [rbp-7B8h] BYREF
  __int64 v138; // [rsp+510h] [rbp-7A8h] BYREF
  void *v139; // [rsp+518h] [rbp-7A0h]
  __int64 v140; // [rsp+520h] [rbp-798h]
  _BYTE v141[16]; // [rsp+528h] [rbp-790h] BYREF
  __int64 *v142; // [rsp+538h] [rbp-780h]
  __int64 v143; // [rsp+540h] [rbp-778h]
  __int64 v144; // [rsp+548h] [rbp-770h]
  __int64 v145; // [rsp+550h] [rbp-768h]
  __int64 v146; // [rsp+558h] [rbp-760h]
  __int64 v147; // [rsp+560h] [rbp-758h]
  __int64 v148; // [rsp+C68h] [rbp-50h]
  __int64 v149; // [rsp+C70h] [rbp-48h]

  v4 = a1;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v65 = (int *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  v73 = a1;
  v66 = v5;
  v71 = (_BYTE *)(a1 + 1952);
  LOBYTE(v5) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v72 = v5;
  v76 = sub_146A990;
  v75 = 63;
  v74 = 1507350;
  v77 = 0;
  v78 = 0;
  if ( (unsigned __int8)sub_156A040(&v71, 14, &byte_22F0C30, 0) )
  {
    v6 = 1;
    goto LABEL_3;
  }
  sub_146B5E0(&v70, a1, a2 == 0 ? 16777240 : 16793624, 1, 0);
  v8 = *(_WORD *)(a1 + 32);
  if ( v8 == 27 )
  {
    v15 = *(__int64 **)(a1 + 8);
    v16 = (__int64 *)v65;
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
    sub_14634E0(v15, v65);
    v68 = 0;
    goto LABEL_30;
  }
  v9 = a1 + 504;
  v79 = 0;
  v83 = a1 + 504;
  v80 = v82;
  v81 = 0x200000000LL;
  v84 = v86;
  v85 = 0x200000000LL;
  if ( (unsigned __int16)(v8 - 406) <= 8u || (v56 = sub_155CBC0(a1, 0, 0), v9 = a1 + 504, v56) )
  {
    v67 = v9;
    sub_14AB020(a1, (unsigned int *)&v79, a3, a4);
    v9 = v67;
  }
  v87[0] &= 0xFFFFFFC000000000LL;
  v88 = v90;
  memset(&v87[2], 0, 24);
  v89 = 0x200000000LL;
  v91 = v9;
  ptr = v94;
  v93 = 0x200000000LL;
  v94[2] = 0;
  v94[3] = 0;
  v95 = nullptr;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 &= 0xF000u;
  v115 = 0;
  if ( !(unsigned __int8)sub_14C6C30(a1, (__int64)v87, 5, a3, a4) )
  {
    *(_OWORD *)v118 = 0;
    v125 = v99;
    v130 = v132;
    v131 = 0x400000000LL;
    v116 = (unsigned __int8 *)v87;
    v117 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    LOBYTE(v133) = (((LODWORD(v87[0]) >> 12) & 0x7F) == 69) | v133 & 0xFE;
    v135 = v137;
    v133 &= 0xFC01u;
    v138 = v91;
    v139 = v141;
    v123 = 0;
    v124 = 0;
    v126 = 14;
    v127 = 0;
    v128 = nullptr;
    v129 = 0;
    v134 = 0;
    v136 = 0x200000000LL;
    v140 = 0x200000000LL;
    v142 = &v79;
    v143 = 0;
    v144 = 0;
    v145 = 0;
    v146 = 0;
    v147 = 0;
    v148 = 0;
    sub_147E3E0(a1, (__int64)&v116);
    v10 = sub_1867FF0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), &v116);
    v117 = 0;
    v68 = v10;
    v118[0] = nullptr;
    LODWORD(v119) = 0;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v125 = *((_QWORD *)v116 + 20);
    v127 = 0;
    if ( v129 < 0 )
    {
      v57 = v128;
      if ( v128 )
      {
        v23 = 14LL * *(v128 - 1);
        v58 = &v128[v23];
        if ( v128 != &v128[v23] )
        {
          while ( 1 )
          {
            v57 = v58 - 14;
            if ( *((_BYTE *)v58 - 16) )
            {
              sub_15DCED0(*(v58 - 7), v57 + 7);
              v59 = (_QWORD *)*(v58 - 6);
              if ( v59 != v57 + 10 )
                free(v59);
              v60 = (_QWORD *)v57[3];
              if ( v60 != v57 + 5 )
                free(v60);
            }
            if ( v128 == v57 )
              break;
            v58 -= 14;
          }
          v23 = 14LL * *(v58 - 15);
        }
        operator delete[](v57 - 1, v23 * 8 + 8);
      }
    }
    else
    {
      v11 = &v128[14 * (v129 & 0x7FFFFFFF)];
      if ( v128 != v11 )
      {
        v12 = v128;
        do
        {
          if ( *((_BYTE *)v12 + 96) )
          {
            *((_BYTE *)v12 + 96) = 0;
            sub_15DCED0(v12[7], v12 + 7);
            v13 = (_QWORD *)v12[8];
            if ( v13 != v12 + 10 )
              free(v13);
            v14 = (_QWORD *)v12[3];
            if ( v14 != v12 + 5 )
              free(v14);
          }
          v12 += 14;
        }
        while ( v11 != v12 );
      }
    }
    v128 = nullptr;
    v129 = 0;
    if ( !(_DWORD)v131 )
      goto LABEL_80;
    v24 = v130;
    v25 = 0;
    v69 = v4;
    v26 = 16 * (9LL * (unsigned int)(v131 - 1) + 9);
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = &v24[v25];
        v28 = *(_DWORD *)&v24[v25];
        if ( v28 == 3 )
          break;
        if ( v28 != 5 || !*((_DWORD *)v27 + 23) )
          goto LABEL_41;
        free(*((void **)v27 + 10));
LABEL_75:
        v25 += 144;
        v24 = v130;
        if ( v26 == v25 )
        {
LABEL_76:
          v4 = v69;
          v42 = &v24[144 * (unsigned int)v131];
          if ( v42 != v24 )
          {
            v43 = v24;
            do
            {
              while ( 1 )
              {
                v42 -= 144;
                v44 = *((_BYTE **)v42 + 3);
                if ( v44 == v42 + 40 )
                  break;
                free(v44);
                if ( v42 == v43 )
                  goto LABEL_80;
              }
            }
            while ( v42 != v43 );
          }
LABEL_80:
          LODWORD(v131) = 0;
          LODWORD(v136) = 0;
          sub_15DCED0(v138, &v138);
          LODWORD(v140) = 0;
          v134 = 0;
          v143 = 0;
          v133 &= 0xFC3Fu;
          v148 = 0;
          v149 = 0;
          sub_15DCED0(v138, &v138);
          if ( v139 != v141 )
            free(v139);
          if ( v135 != v137 )
            free(v135);
          v45 = &v130[144 * (unsigned int)v131];
          if ( v130 != (_BYTE *)v45 )
          {
            v46 = v130;
            do
            {
              while ( 1 )
              {
                v45 -= 18;
                v47 = (_QWORD *)v45[3];
                if ( v47 == v45 + 5 )
                  break;
                free(v47);
                if ( v46 == v45 )
                  goto LABEL_88;
              }
            }
            while ( v46 != v45 );
LABEL_88:
            v45 = v130;
          }
          if ( v45 != (_QWORD *)v132 )
            free(v45);
          v48 = v128;
          v127 = 0;
          if ( v129 < 0 )
          {
            if ( v128 )
            {
              v54 = 14LL * *(v128 - 1);
              v61 = &v128[v54];
              if ( &v128[v54] != v128 )
              {
                while ( 1 )
                {
                  v62 = v61 - 14;
                  if ( *((_BYTE *)v61 - 16) )
                  {
                    sub_15DCED0(*(v61 - 7), v62 + 7);
                    v63 = (_QWORD *)*(v61 - 6);
                    if ( v63 != v62 + 10 )
                      free(v63);
                    v64 = (_QWORD *)v62[3];
                    if ( v64 != v62 + 5 )
                      free(v64);
                  }
                  if ( v128 == v62 )
                    break;
                  v61 -= 14;
                }
                v48 = v61 - 14;
                v54 = 14LL * *(v61 - 15);
              }
              operator delete[](v48 - 1, v54 * 8 + 8);
            }
          }
          else
          {
            v49 = &v128[14 * (v129 & 0x7FFFFFFF)];
            if ( v49 != v128 )
            {
              v50 = v128;
              do
              {
                if ( *((_BYTE *)v50 + 96) )
                {
                  *((_BYTE *)v50 + 96) = 0;
                  sub_15DCED0(v50[7], v50 + 7);
                  v51 = (_QWORD *)v50[8];
                  if ( v51 != v50 + 10 )
                    free(v51);
                  v52 = (_QWORD *)v50[3];
                  if ( v52 != v50 + 5 )
                    free(v52);
                }
                v50 += 14;
              }
              while ( v49 != v50 );
            }
          }
          if ( HIDWORD(v119) )
            free(v118[1]);
          if ( HIDWORD(v96) )
            free(v95);
          sub_15DCED0(v91, &v91);
          if ( ptr != v94 )
            free(ptr);
          if ( v88 != v90 )
            free(v88);
          v16 = &v83;
          sub_15DCED0(v83, &v83);
          if ( v84 != v86 )
            free(v84);
          if ( v80 != v82 )
            free(v80);
LABEL_30:
          sub_14808E0((__int64)&v71, v16, v17, v18, v19, v20);
          if ( HIDWORD(v78) )
          {
            if ( *(_WORD *)(v4 + 32) != 24 )
            {
              v21 = v4;
              v6 = 1;
              sub_1564840(&v116, v21, v65, 14);
              sub_AE9DF0(&v116, 24, 4u);
              sub_AEA040((__int64)&v116);
              goto LABEL_18;
            }
            v22 = sub_1533380(v4, 0, 0x400008u);
            if ( v22 != 1 )
            {
              v6 = sub_1C37600(*(_QWORD *)(v4 + 96), v66, v68, v22 & 0xFFFFFFFFFFFFFFFELL);
              goto LABEL_18;
            }
          }
          v6 = 1;
          goto LABEL_18;
        }
      }
      v29 = *((_DWORD *)v27 + 18);
      for ( i = 0; i < v29; ++i )
      {
        v31 = *((_QWORD *)v27 + 12) + 32LL * i;
        v32 = *(void ***)(v31 + 24);
        *(_QWORD *)(v31 + 24) = 0;
        if ( v32 )
        {
          if ( *v32 != v32 + 2 )
            free(*v32);
          operator delete(v32, 0x70u);
          v29 = *((_DWORD *)v27 + 18);
        }
      }
      if ( (v27[57] & 1) != 0 )
      {
        v33 = *((_QWORD *)v27 + 12);
        if ( v33 )
        {
          v34 = 32LL * *(_QWORD *)(v33 - 8);
          v35 = v33 + v34;
          if ( v33 != v33 + v34 )
          {
            while ( 1 )
            {
              v36 = *(void ***)(v35 - 8);
              if ( v36 )
              {
                if ( *v36 != v36 + 2 )
                  free(*v36);
                operator delete(v36, 0x70u);
                v33 = *((_QWORD *)v27 + 12);
              }
              if ( v35 - 32 == v33 )
                break;
              v35 -= 32;
            }
            v34 = 32LL * *(_QWORD *)(v35 - 40);
          }
          operator delete[]((void *)(v33 - 8), v34 + 8);
        }
        v27[57] &= ~1u;
      }
      v37 = *((void **)v27 + 14);
      *((_DWORD *)v27 + 18) = 0;
      if ( v37 )
      {
        sub_15D7C30(v37);
        operator delete(v37, 0x520u);
      }
      v38 = *((_QWORD *)v27 + 13);
      if ( v38 )
      {
        if ( *(_DWORD *)(v38 + 140) )
          free(*(void **)(v38 + 128));
        sub_15DCED0(*(_QWORD *)(v38 + 72), v38 + 72);
        v39 = *(void **)(v38 + 80);
        if ( v39 != (void *)(v38 + 96) )
          free(v39);
        v40 = *(void **)(v38 + 40);
        if ( v40 != (void *)(v38 + 56) )
          free(v40);
        operator delete((void *)v38, 0x128u);
      }
      v41 = v27[56] >> 4;
      if ( v41 == 2 )
        goto LABEL_101;
      if ( v41 == 11 )
      {
        v55 = *((void ***)v27 + 15);
        if ( v55 )
        {
          if ( *v55 != v55 + 2 )
            free(*v55);
          operator delete(v55, 0x70u);
          v24 = v130;
          goto LABEL_41;
        }
        goto LABEL_75;
      }
      if ( v41 || !*((_DWORD *)v27 + 19) )
        goto LABEL_75;
LABEL_101:
      v53 = *((void **)v27 + 15);
      if ( !v53 )
        goto LABEL_75;
      operator delete[](v53);
      v24 = v130;
LABEL_41:
      v25 += 144;
      if ( v26 == v25 )
        goto LABEL_76;
    }
  }
  v6 = 1;
  if ( HIDWORD(v96) )
    free(v95);
  sub_15DCED0(v91, &v91);
  if ( ptr != v94 )
    free(ptr);
  if ( v88 != v90 )
    free(v88);
  sub_15DCED0(v83, &v83);
  if ( v84 != v86 )
    free(v84);
  if ( v80 != v82 )
    free(v80);
LABEL_18:
  if ( v70 )
    sub_1564F70(v70);
LABEL_3:
  *v71 = v72;
  return v6;
}
