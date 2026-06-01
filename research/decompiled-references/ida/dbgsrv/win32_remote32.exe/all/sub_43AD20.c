/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AD20
// Address: 0x0043AD20

//----- (0043AD20) --------------------------------------------------------
int __userpurge sub_43AD20@<eax>(
        int a1@<ebx>,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        unsigned int *a7,
        _DWORD *a8,
        int a9,
        const char *a10,
        unsigned int a11)
{
  int v11; // ecx
  int v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // esi
  unsigned int v17; // esi
  bool v18; // cf
  bool v19; // cc
  char *v20; // esi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // ecx
  unsigned int v24; // eax
  char *v25; // esi
  int v26; // eax
  unsigned int v27; // edx
  int v28; // esi
  char *v29; // esi
  int *v30; // ecx
  unsigned int v31; // eax
  int v32; // esi
  unsigned int v33; // ecx
  _DWORD *v34; // esi
  int v35; // eax
  char v36; // cl
  int *v37; // esi
  signed int v38; // esi
  int v39; // eax
  int **v40; // esi
  SIZE_T v41; // edx
  int ***v42; // eax
  int v43; // esi
  int v44; // eax
  void **v45; // ecx
  int v46; // ecx
  int v47; // esi
  int **v48; // esi
  _DWORD *v49; // eax
  int v50; // ecx
  int v51; // esi
  int v52; // eax
  void **v53; // ecx
  int v54; // ecx
  int v55; // esi
  int **v56; // esi
  _DWORD *v57; // eax
  int v58; // ecx
  int v59; // esi
  int v60; // eax
  void **v61; // ecx
  int v62; // ecx
  int *v63; // esi
  int v64; // eax
  int i; // eax
  int j; // ecx
  int v67; // esi
  int v69; // eax
  char *v70; // esi
  int v71; // edx
  int v72; // eax
  int v73; // ecx
  unsigned int v74; // edx
  __int64 v75; // rax
  unsigned int v76; // ecx
  __int64 v77; // rax
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // esi
  _DWORD *v83; // esi
  unsigned int v84; // eax
  unsigned int v85; // edi
  unsigned int v86; // eax
  _DWORD *v87; // esi
  _DWORD *v88; // edx
  unsigned int v89; // eax
  const char *v90; // eax
  unsigned int v91; // esi
  unsigned int *v92; // ecx
  unsigned int v93; // eax
  LPVOID v94; // eax
  _DWORD *v95; // [esp-Ch] [ebp-13Ch]
  unsigned int *v96; // [esp-Ch] [ebp-13Ch]
  _DWORD *v97; // [esp-Ch] [ebp-13Ch]
  _DWORD *v98; // [esp-Ch] [ebp-13Ch]
  int v99; // [esp-8h] [ebp-138h]
  unsigned int v100; // [esp-8h] [ebp-138h]
  int v101; // [esp-8h] [ebp-138h]
  int v102; // [esp-8h] [ebp-138h]
  unsigned int v103; // [esp-8h] [ebp-138h]
  int v104[2]; // [esp+1Ch] [ebp-114h] BYREF
  __int128 v105; // [esp+24h] [ebp-10Ch]
  _DWORD v106[2]; // [esp+34h] [ebp-FCh] BYREF
  int v107; // [esp+3Ch] [ebp-F4h]
  _DWORD v108[2]; // [esp+40h] [ebp-F0h] BYREF
  int v109; // [esp+48h] [ebp-E8h]
  _DWORD *v110[2]; // [esp+4Ch] [ebp-E4h] BYREF
  int v111; // [esp+54h] [ebp-DCh]
  _DWORD v112[2]; // [esp+58h] [ebp-D8h] BYREF
  int v113; // [esp+60h] [ebp-D0h]
  int v114[2]; // [esp+64h] [ebp-CCh] BYREF
  __int64 v115; // [esp+6Ch] [ebp-C4h]
  __int64 v116; // [esp+74h] [ebp-BCh]
  int v117; // [esp+7Ch] [ebp-B4h]
  _DWORD *v118; // [esp+80h] [ebp-B0h]
  int v119; // [esp+84h] [ebp-ACh]
  unsigned int v120; // [esp+88h] [ebp-A8h]
  const char *v121; // [esp+8Ch] [ebp-A4h]
  void *v122[2]; // [esp+90h] [ebp-A0h] BYREF
  int v123; // [esp+98h] [ebp-98h]
  __int64 v124; // [esp+9Ch] [ebp-94h]
  unsigned int *v125; // [esp+A4h] [ebp-8Ch]
  unsigned int *v126; // [esp+A8h] [ebp-88h]
  int v127; // [esp+ACh] [ebp-84h]
  unsigned int v128; // [esp+B0h] [ebp-80h]
  int v129[2]; // [esp+B4h] [ebp-7Ch] BYREF
  __int64 v130; // [esp+BCh] [ebp-74h] BYREF
  __int64 v131; // [esp+C4h] [ebp-6Ch]
  unsigned int v132; // [esp+CCh] [ebp-64h]
  int v133; // [esp+D0h] [ebp-60h]
  char *v134; // [esp+D4h] [ebp-5Ch] BYREF
  int v135; // [esp+D8h] [ebp-58h]
  int v136; // [esp+DCh] [ebp-54h]
  int v137; // [esp+E0h] [ebp-50h]
  char *v138; // [esp+E4h] [ebp-4Ch]
  int **v139; // [esp+E8h] [ebp-48h] BYREF
  int v140; // [esp+ECh] [ebp-44h]
  unsigned int v141; // [esp+F0h] [ebp-40h] BYREF
  _DWORD v142[3]; // [esp+F4h] [ebp-3Ch] BYREF
  char v143; // [esp+100h] [ebp-30h]
  int v144; // [esp+104h] [ebp-2Ch]
  __int128 v145; // [esp+108h] [ebp-28h]
  __int64 v146; // [esp+118h] [ebp-18h]
  int v147; // [esp+12Ch] [ebp-4h]

  v137 = a6;
  v125 = a7;
  v118 = a8;
  v126 = (unsigned int *)a9;
  v131 = 0;
  v121 = a10;
  v129[0] = -2;
  v130 = -1;
  v147 = 0;
  v127 = 0;
  sub_408BC0((int *)(a2 + 160), v112, &a4);
  v11 = v113;
  if ( *(_BYTE *)(v113 + 13) || a4 < *(_DWORD *)(v113 + 16) )
  {
    if ( *(_DWORD *)(a2 + 164) == 0x7FFFFFF )
      goto LABEL_195;
    v12 = *(_DWORD *)(a2 + 160);
    v119 = a2 + 160;
    LOBYTE(v147) = 1;
    v120 = 0;
    v13 = sub_4627C2(0x20u);
    LOBYTE(v147) = 0;
    v13[4] = a4;
    v13[5] = 0;
    v99 = v112[1];
    v13[6] = 0;
    v95 = (_DWORD *)v112[0];
    v13[7] = 0;
    *v13 = v12;
    v13[1] = v12;
    v13[2] = v12;
    *((_WORD *)v13 + 6) = 0;
    v11 = sub_403C10((_DWORD *)(a2 + 160), v95, v99, (int)v13);
  }
  v138 = sub_43D680((_DWORD *)(v11 + 20));
  v139 = nullptr;
  v140 = 0;
  v14 = sub_4627C2(0x30u);
  *v14 = v14;
  v14[1] = v14;
  v14[2] = v14;
  *((_WORD *)v14 + 6) = 257;
  v139 = (int **)v14;
  v15 = *(_DWORD *)(a2 + 96) & 0xFFFFFFF;
  LOBYTE(v147) = 3;
  if ( v15 == 7 )
  {
    v16 = 11;
    goto LABEL_188;
  }
  v17 = *(_DWORD *)(a2 + 268);
  if ( !v17 )
    v17 = *(_DWORD *)(a2 + 316);
  v18 = v17 < *((_DWORD *)v138 + 1);
  v19 = v17 <= *((_DWORD *)v138 + 1);
  if ( v17 != *((_DWORD *)v138 + 1) )
  {
    v114[0] = -2;
    v116 = 0;
    v115 = -1;
    LOBYTE(v147) = 6;
    if ( v18 )
    {
      sub_415E40(v138, v17);
    }
    else if ( !v19 )
    {
      if ( (unsigned int)v114 < *(_DWORD *)v138 || (unsigned int)v114 >= *(_DWORD *)v138 + 24 * *((_DWORD *)v138 + 2) )
      {
        sub_43D9E0((int)v138, v17, v114);
      }
      else
      {
        v104[0] = -2;
        v105 = 0;
        sub_43AA50(v104, v114);
        LOBYTE(v147) = 7;
        sub_43D9E0((int)v138, v17, v104);
        if ( v104[0] >= -1 )
        {
          LOBYTE(v147) = 8;
          if ( (_DWORD)v105 )
          {
            DWORD1(v105) = 0;
            sub_453A20((void *)v105);
          }
        }
      }
    }
    LOBYTE(v147) = 3;
    if ( v114[0] >= -1 )
    {
      LOBYTE(v147) = 10;
      if ( (_DWORD)v115 )
      {
        HIDWORD(v115) = 0;
        sub_453A20((void *)v115);
      }
      LOBYTE(v147) = 3;
    }
  }
  v20 = v138;
  if ( (*(int (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 108))(a2, a4, -1, *(_DWORD *)v138, 0) != 1 )
  {
    v16 = 1;
    goto LABEL_188;
  }
  v21 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 224))(a2, v20);
  v22 = v21;
  if ( v21 == -1 )
  {
    v16 = 2;
    goto LABEL_188;
  }
  v134 = nullptr;
  v135 = 0;
  v136 = 0;
  v23 = *(_DWORD *)(a2 + 128);
  LOBYTE(v147) = 12;
  v141 = -v23 & (v23 + v125[1] - 1);
  v100 = (v21 - v23 - v141) & 0xFFFFFFF0;
  v96 = v125;
  v133 = v100;
  *((_DWORD *)v138 + 4) = v100 + v141;
  if ( !sub_461180(v96, v100, 0) )
  {
    v16 = 4;
    LOBYTE(v147) = 13;
    goto LABEL_29;
  }
  sub_401600((int)&v134, (unsigned int)(v138 + 16), *(_DWORD *)(a2 + 128));
  sub_401600((int)&v134, *v125, v125[1]);
  sub_4028B0((int)&v134, v141 + *(_DWORD *)(a2 + 128));
  v24 = v133 - *(_DWORD *)(a2 + 128);
  *((_DWORD *)v138 + 3) = v24;
  if ( v24 >= v22 )
  {
    v16 = 2;
    LOBYTE(v147) = 14;
    goto LABEL_29;
  }
  v25 = v138;
  v26 = (*(int (__thiscall **)(int, char *, int ***, char **))(*(_DWORD *)a2 + 220))(a2, v138, &v139, &v134);
  v27 = v26 + *((_DWORD *)v25 + 3);
  v141 = v26;
  *((_DWORD *)v25 + 3) = v27;
  v132 = v27;
  if ( v135 - v26 > 0 )
  {
    v28 = v135 - v26;
    if ( (*(int (__stdcall **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)a2 + 144))(
           a2,
           v27,
           &v134[v141],
           v28,
           0) != v28 )
    {
      v16 = 5;
      LOBYTE(v147) = 15;
      goto LABEL_29;
    }
  }
  v29 = v138;
  (*(void (__stdcall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)a2 + 152))(a2, 0, 4, *((_DWORD *)v138 + 4), -1);
  v30 = (int *)v137;
  v132 = 0;
  if ( *(_DWORD *)(v137 + 4) )
  {
    v31 = 0;
    v128 = 0;
    do
    {
      v32 = *v30;
      v33 = *(_DWORD *)(*v30 + v31);
      v34 = (_DWORD *)(v31 + v32);
      v141 = (unsigned int)v34;
      v120 = v33;
      if ( v33 == *(_DWORD *)(a2 + 320) || v33 == *(_DWORD *)(a2 + 324) )
      {
        v16 = 3;
        LOBYTE(v147) = 20;
        goto LABEL_29;
      }
      v35 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)a2 + 300))(a2, v33);
      v36 = *(_BYTE *)(v35 + 9);
      if ( v36 == 3 || v36 == 4 || v36 == 5 || v36 == 15 || v36 == 18 )
      {
        if ( v129[0] >= -1 )
          sub_40B640((void **)&v130, 0);
        v130 = 0;
        LODWORD(v131) = 0;
        v129[0] = -1;
        sub_4028B0((int)&v130, v34[3]);
        sub_464310(v130, v34[2], v34[3]);
      }
      else if ( v34[3] > 8u || (*(_DWORD *)(v35 + 4) & 0x100) != 0 )
      {
        v37 = sub_43DC40(v129, 0);
        sub_4028B0((int)v37, *(_DWORD *)(v141 + 12));
        sub_464310(*v37, *(_DWORD *)(v141 + 8), *(_DWORD *)(v141 + 12));
      }
      else
      {
        if ( v129[0] >= -1 )
        {
          sub_40B640((void **)&v130, 0);
          v129[0] = -2;
        }
        sub_464310((unsigned int)&v130, v34[2], v34[3]);
        if ( v34[1] )
          v130 += (unsigned int)v133;
      }
      v38 = v120;
      v141 = v120;
      sub_408BC0((int *)&v139, v110, (int *)&v141);
      v39 = v111;
      if ( *(_BYTE *)(v111 + 13) || v38 < *(_DWORD *)(v111 + 16) )
      {
        if ( v140 == 89478485 )
          goto LABEL_195;
        v40 = v139;
        v124 = (unsigned int)&v139;
        LOBYTE(v147) = 16;
        v41 = sub_41EF50(a1, a2, 1u);
        HIDWORD(v124) = v41;
        *(_DWORD *)(v41 + 16) = v141;
        *(_DWORD *)(v41 + 24) = -2;
        *(_DWORD *)(v41 + 40) = 0;
        *(_DWORD *)(v41 + 44) = 0;
        v42 = (int ***)HIDWORD(v124);
        *(_DWORD *)(v41 + 32) = -1;
        *(_DWORD *)(v41 + 36) = -1;
        HIDWORD(v124) = 0;
        *v42 = v40;
        *(_DWORD *)(v41 + 4) = v40;
        *(_DWORD *)(v41 + 8) = v40;
        *(_WORD *)(v41 + 12) = 0;
        LOBYTE(v147) = 12;
        v39 = sub_403C10(&v139, v110[0], (int)v110[1], v41);
      }
      v43 = v39 + 24;
      if ( (int *)(v39 + 24) != v129 )
      {
        v44 = *(_DWORD *)v43;
        if ( v129[0] < -1 )
        {
          if ( v44 >= -1 )
            sub_40B640((void **)(v43 + 8), 0);
          v46 = HIDWORD(v130);
          *(_DWORD *)(v43 + 8) = v130;
          *(_DWORD *)(v43 + 12) = v46;
        }
        else
        {
          v45 = (void **)(v43 + 8);
          if ( v44 < -1 )
          {
            v117 = v43 + 8;
            v120 = v43 + 8;
            LOBYTE(v147) = 19;
            if ( v43 != -8 )
              sub_402AD0(v45, (unsigned int *)&v130);
            LOBYTE(v147) = 12;
          }
          else
          {
            sub_43A9B0(v45, (unsigned int *)&v130);
          }
        }
        *(_DWORD *)v43 = v129[0];
      }
      v30 = (int *)v137;
      v31 = v128 + 20;
      ++v132;
      v128 += 20;
    }
    while ( v132 < *(_DWORD *)(v137 + 4) );
    v29 = v138;
  }
  if ( v129[0] >= -1 )
  {
    LOBYTE(v147) = 21;
    if ( (_DWORD)v130 )
    {
      HIDWORD(v130) = 0;
      sub_453A20((void *)v130);
      LODWORD(v130) = 0;
      LODWORD(v131) = 0;
    }
    LOBYTE(v147) = 12;
    v129[0] = -2;
  }
  v130 = *((unsigned int *)v29 + 3);
  sub_408BC0((int *)&v139, v108, (int *)(a2 + 320));
  v47 = v109;
  if ( *(_BYTE *)(v109 + 13) || *(_DWORD *)(a2 + 320) < *(_DWORD *)(v109 + 16) )
  {
    if ( v140 == 89478485 )
      goto LABEL_195;
    v48 = v139;
    LOBYTE(v147) = 23;
    v49 = sub_4627C2(0x30u);
    v50 = *(_DWORD *)(a2 + 320);
    LOBYTE(v147) = 12;
    v49[4] = v50;
    v49[6] = -2;
    v49[10] = 0;
    v49[11] = 0;
    v101 = v108[1];
    v49[8] = -1;
    v97 = (_DWORD *)v108[0];
    v49[9] = -1;
    *v49 = v48;
    v49[1] = v48;
    v49[2] = v48;
    *((_WORD *)v49 + 6) = 0;
    v47 = sub_403C10(&v139, v97, v101, (int)v49);
  }
  v51 = v47 + 24;
  if ( (int *)v51 != v129 )
  {
    v52 = *(_DWORD *)v51;
    if ( v129[0] < -1 )
    {
      if ( v52 >= -1 )
        sub_40B640((void **)(v51 + 8), 0);
      v54 = HIDWORD(v130);
      *(_DWORD *)(v51 + 8) = v130;
      *(_DWORD *)(v51 + 12) = v54;
    }
    else
    {
      v53 = (void **)(v51 + 8);
      if ( v52 < -1 )
      {
        v117 = v51 + 8;
        v120 = v51 + 8;
        LOBYTE(v147) = 27;
        if ( v51 != -8 )
          sub_402AD0(v53, (unsigned int *)&v130);
        LOBYTE(v147) = 12;
      }
      else
      {
        sub_43A9B0(v53, (unsigned int *)&v130);
      }
    }
    *(_DWORD *)v51 = v129[0];
  }
  v130 = a3;
  sub_408BC0((int *)&v139, v106, (int *)(a2 + 324));
  v55 = v107;
  if ( !*(_BYTE *)(v107 + 13) && *(_DWORD *)(a2 + 324) >= *(_DWORD *)(v107 + 16) )
    goto LABEL_97;
  if ( v140 == 89478485 )
LABEL_195:
    sub_403E20();
  v56 = v139;
  LOBYTE(v147) = 28;
  v57 = sub_4627C2(0x30u);
  v58 = *(_DWORD *)(a2 + 324);
  LOBYTE(v147) = 12;
  v57[4] = v58;
  v57[6] = -2;
  v57[10] = 0;
  v57[11] = 0;
  v102 = v106[1];
  v57[8] = -1;
  v98 = (_DWORD *)v106[0];
  v57[9] = -1;
  *v57 = v56;
  v57[1] = v56;
  v57[2] = v56;
  *((_WORD *)v57 + 6) = 0;
  v55 = sub_403C10(&v139, v98, v102, (int)v57);
LABEL_97:
  v59 = v55 + 24;
  if ( (int *)v59 != v129 )
  {
    v60 = *(_DWORD *)v59;
    if ( v129[0] < -1 )
    {
      if ( v60 >= -1 )
        sub_40B640((void **)(v59 + 8), 0);
      v62 = HIDWORD(v130);
      *(_DWORD *)(v59 + 8) = v130;
      *(_DWORD *)(v59 + 12) = v62;
    }
    else
    {
      v61 = (void **)(v59 + 8);
      if ( v60 < -1 )
      {
        v117 = v59 + 8;
        v120 = v59 + 8;
        LOBYTE(v147) = 32;
        if ( v59 != -8 )
          sub_402AD0(v61, (unsigned int *)&v130);
        LOBYTE(v147) = 12;
      }
      else
      {
        sub_43A9B0(v61, (unsigned int *)&v130);
      }
    }
    *(_DWORD *)v59 = v129[0];
  }
  v63 = *v139;
  while ( v63 != (int *)v139 )
  {
    if ( (*(int (__stdcall **)(int, int, int, int *, _DWORD))(*(_DWORD *)a2 + 112))(a2, a4, v63[4], v63 + 6, 0) != 1 )
    {
      v16 = 6;
      LOBYTE(v147) = 33;
      goto LABEL_29;
    }
    v138[20] = 1;
    v64 = v63[2];
    if ( *(_BYTE *)(v64 + 13) )
    {
      for ( i = v63[1]; !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
      {
        if ( v63 != *(int **)(i + 8) )
          break;
        v63 = (int *)i;
      }
      v63 = (int *)i;
    }
    else
    {
      v63 = (int *)v63[2];
      for ( j = *(_DWORD *)v64; !*(_BYTE *)(j + 13); j = *(_DWORD *)j )
        v63 = (int *)j;
    }
  }
  if ( (a11 & 1) != 0 )
  {
    LOBYTE(v147) = 34;
LABEL_120:
    if ( v134 )
    {
      v135 = 0;
      sub_453A20(v134);
    }
    goto LABEL_122;
  }
  v69 = *(_DWORD *)a2;
  *(_BYTE *)(a2 + 92) = 1;
  if ( (*(int (__stdcall **)(int, int))(v69 + 80))(a2, a2 + 80) != 1 )
  {
    v16 = 9;
    LOBYTE(v147) = 35;
    goto LABEL_29;
  }
  v142[0] = -1;
  v142[1] = 0;
  v142[2] = -1;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v70 = (char *)v142;
  LOBYTE(v147) = 36;
  if ( v121 )
    v70 = (char *)v121;
  v124 = 0;
  v71 = 0;
  v72 = 40;
  v132 = 0;
  v137 = 40;
  if ( (a11 & 4) != 0 )
  {
    v72 = HIWORD(a11);
    v137 = HIWORD(a11);
    if ( HIWORD(a11) )
    {
      v73 = sub_453380(0);
      v128 = v74;
      v75 = 1000000LL * (unsigned int)v137;
      v18 = __CFADD__((_DWORD)v75, v73);
      v76 = v75 + v73;
      v72 = v137;
      v128 += HIDWORD(v75) + v18;
      v71 = 1;
    }
    else
    {
      v71 = 1;
      v128 = HIDWORD(v124);
      v76 = v124;
    }
    v132 = 1;
  }
  else
  {
    v128 = HIDWORD(v124);
    v76 = v124;
  }
  v141 = v76;
  while ( 1 )
  {
    do
    {
      if ( v71 )
      {
        if ( v71 == 2 )
        {
          if ( v72 <= 0
            || (LODWORD(v77) = sub_453380(0), v137 = sub_462A90(__PAIR64__(v128, v141) - v77, 1000000), v137 <= 0) )
          {
            v78 = *(_DWORD *)a2;
            v127 = 12;
            if ( (*(int (__stdcall **)(int, _DWORD))(v78 + 72))(a2, 0) <= 0 )
            {
              v16 = 12;
              goto LABEL_184;
            }
          }
        }
        else
        {
          v132 = 2;
        }
      }
      v79 = (*(int (__stdcall **)(int, char *, int))(*(_DWORD *)a2 + 64))(a2, v70, v137);
      v71 = v132;
      v80 = v79;
      v72 = v137;
    }
    while ( !v80 );
    if ( v80 == -1 )
    {
      v16 = 8;
      goto LABEL_184;
    }
    v81 = *((_DWORD *)v70 + 4) & 0xFFFFFFF;
    if ( v81 == 2 || v81 == 4 && *((_DWORD *)v70 + 1) == a4 )
    {
      sub_448030((int *)a2, (int)v70, 8u);
      v16 = v127;
      v133 = -1;
LABEL_184:
      LOBYTE(v147) = 37;
      sub_45B190(v142);
      LOBYTE(v147) = 38;
      if ( v134 )
      {
        v135 = 0;
        sub_453A20(v134);
      }
      LOBYTE(v147) = 3;
      if ( !v16 )
      {
LABEL_122:
        v67 = v133;
        goto LABEL_123;
      }
      if ( v16 != 10 )
        goto LABEL_188;
LABEL_194:
      (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 212))(a2, a4);
      v67 = -1;
      goto LABEL_123;
    }
    if ( v127 == 12 )
    {
      sub_448030((int *)a2, (int)v70, 0xAu);
      sub_45B9B0(v70, 0);
      sub_45B9B0((_DWORD *)(a2 + 80), 0);
      v16 = v127;
      goto LABEL_184;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 228))(
           a2,
           a4,
           v70,
           *((_DWORD *)v138 + 4)) )
    {
      break;
    }
    if ( (*((_DWORD *)v70 + 4) & 0xFFFFFFF) == 7 )
    {
      if ( (a11 & 2) == 0 )
        sub_403330((int)v126, (unsigned int *)v70 + 8);
      v16 = 10;
      sub_45B9B0((_DWORD *)(a2 + 80), 0);
      *(_BYTE *)(a2 + 92) = 1;
      goto LABEL_184;
    }
    if ( sub_448030((int *)a2, (int)v70, 0xAu) )
    {
      v16 = 7;
      goto LABEL_184;
    }
    (*(void (__stdcall **)(int, char *))(*(_DWORD *)a2 + 80))(a2, v70);
    sub_45B9B0(v70, 0);
    v72 = v137;
    v71 = v132;
  }
  sub_45B9B0((_DWORD *)(a2 + 80), 0);
  v16 = v127;
  if ( v127 )
    goto LABEL_184;
  v82 = a5;
  if ( a5 > 0
    && (a5 > v125[1]
     || (*(int (__stdcall **)(int, int, unsigned int, int, _DWORD))(*(_DWORD *)a2 + 144))(a2, v133, *v125, a5, 0) != v82) )
  {
    v16 = 5;
    LOBYTE(v147) = 39;
    sub_45B190(v142);
    LOBYTE(v147) = 40;
    goto LABEL_29;
  }
  v83 = v118;
  if ( !v118 || !v118[1] )
  {
LABEL_179:
    LOBYTE(v147) = 46;
    sub_45B190(v142);
    LOBYTE(v147) = 47;
    goto LABEL_120;
  }
  v122[0] = nullptr;
  v122[1] = nullptr;
  v123 = 0;
  v84 = *(_DWORD *)(a2 + 268);
  LOBYTE(v147) = 41;
  if ( !v84 )
    v84 = *(_DWORD *)(a2 + 316);
  sub_43D8D0(v122, v84);
  if ( (*(int (__stdcall **)(int, int, int, void *, _DWORD))(*(_DWORD *)a2 + 108))(a2, a4, -1, v122[0], 0) > 0 )
  {
    v85 = 0;
    if ( v83[1] )
    {
      v86 = 0;
      v141 = 0;
      do
      {
        v87 = (_DWORD *)(v86 + *v83);
        v88 = (char *)v122[0] + 24 * *v87 + 8;
        if ( *((int *)v122[0] + 6 * *v87) >= -1 )
          v88 = (_DWORD *)*v88;
        sub_464310(v87[2], (unsigned int)v88, v87[3]);
        v89 = v141;
        ++v85;
        v87[1] = 0;
        v86 = v89 + 20;
        v83 = v118;
        v141 = v86;
      }
      while ( v85 < v118[1] );
    }
    LOBYTE(v147) = 45;
    if ( v122[0] )
    {
      sub_415E40(v122, 0);
      sub_453A20(v122[0]);
    }
    goto LABEL_179;
  }
  v16 = 1;
  LOBYTE(v147) = 42;
  if ( v122[0] )
  {
    sub_415E40(v122, 0);
    sub_453A20(v122[0]);
    v122[0] = nullptr;
    v123 = 0;
  }
  LOBYTE(v147) = 43;
  sub_45B190(v142);
  LOBYTE(v147) = 44;
LABEL_29:
  if ( v134 )
  {
    v135 = 0;
    sub_453A20(v134);
  }
  LOBYTE(v147) = 3;
LABEL_188:
  v90 = off_48D6C8[v16];
  v121 = v90;
  if ( !v90 || (v91 = strlen(v90)) == 0 )
  {
    v126[1] = 0;
    goto LABEL_194;
  }
  v92 = v126;
  v93 = v91 + 1;
  if ( v91 + 1 > v126[2] )
  {
    v94 = sub_453B00((int)v126, (void *)*v126, v91 + 1, 1u);
    v92 = v126;
    *v126 = (unsigned int)v94;
    v93 = v91 + 1;
  }
  v103 = (unsigned int)v121;
  v92[1] = v93;
  sub_464310(*v92, v103, v91);
  *(_BYTE *)(v91 + *v126) = 0;
  (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 212))(a2, a4);
  v67 = -1;
LABEL_123:
  sub_43A0E0(&v139, (int)&v139, v139[1]);
  sub_4627F2(v139);
  v147 = -1;
  if ( v129[0] >= -1 )
  {
    v147 = 49;
    if ( (_DWORD)v130 )
    {
      HIDWORD(v130) = 0;
      sub_453A20((void *)v130);
    }
  }
  return v67;
}
// 43B7EE: variable 'v74' is possibly undefined
// 43B865: variable 'v77' is possibly undefined
// 48D6C8: using guessed type char *off_48D6C8[13];
