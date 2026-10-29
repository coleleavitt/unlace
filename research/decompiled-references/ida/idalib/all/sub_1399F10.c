__int64 __fastcall sub_1399F10(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v4; // r14d
  unsigned int v5; // ecx
  int v6; // r15d
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // r12d
  unsigned int i; // r14d
  int v15; // edx
  int v16; // edx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int j; // r14d
  unsigned int v26; // r9d
  int v27; // edx
  unsigned int v28; // r8d
  char v29; // cl
  unsigned int v30; // r8d
  _QWORD *v31; // r12
  __int64 v32; // rcx
  unsigned int v33; // ecx
  int v34; // r15d
  int v35; // edx
  __int64 v36; // r14
  _QWORD *v37; // r12
  __int64 v38; // rdx
  unsigned int v39; // r10d
  int v40; // esi
  unsigned int v41; // ecx
  int v42; // r15d
  unsigned __int64 v43; // r10
  unsigned int v44; // r12d
  int v45; // r8d
  int v46; // edx
  unsigned int v47; // r12d
  int v48; // edx
  _QWORD *v49; // r11
  __int64 v50; // rcx
  unsigned int v51; // edx
  _QWORD *v52; // r10
  __int64 v53; // rcx
  unsigned int v54; // r8d
  int v55; // edx
  __int64 v56; // rdx
  __int64 v57; // rcx
  char *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v62; // r12d
  unsigned int v63; // edx
  _QWORD *v64; // r10
  __int64 v65; // rcx
  int v66; // edx
  unsigned int v67; // ecx
  unsigned __int8 v68; // dl
  unsigned int v69; // r10d
  int v70; // esi
  unsigned __int64 v71; // r10
  int v72; // r8d
  int v73; // edx
  unsigned int v74; // r12d
  int v75; // edx
  _QWORD *v76; // r11
  __int64 v77; // rcx
  _QWORD *v78; // r11
  __int64 v79; // rcx
  int v80; // r8d
  int v81; // edx
  int v82; // r10d
  bool v83; // zf
  char v84; // cl
  unsigned __int8 v85; // dl
  _QWORD *v86; // r11
  __int64 v87; // rcx
  int v88; // r8d
  int v89; // edx
  int v90; // r10d
  char v91; // cl
  int v92; // r8d
  int v93; // edx
  unsigned int v94; // r10d
  unsigned int v95; // r10d
  unsigned int v96; // edx
  _QWORD *v97; // r11
  __int64 v98; // rcx
  unsigned int v99; // edx
  _QWORD *v100; // r10
  __int64 v101; // rcx
  int v102; // edx
  unsigned int v103; // ecx
  _QWORD *v104; // r12
  __int64 v105; // rcx
  int v106; // edx
  _QWORD *v107; // r12
  __int64 v108; // rcx
  int v109; // edx
  int v110; // r8d
  int v111; // edx
  unsigned int v112; // r10d
  unsigned int v113; // r10d
  unsigned int v114; // edx
  _QWORD *v115; // r11
  __int64 v116; // rcx
  _QWORD *v117; // rbx
  __int64 v118; // rcx
  int v119; // edx
  _QWORD *v120; // rbx
  __int64 v121; // rcx
  int v122; // edx
  _QWORD *v123; // rbx
  __int64 v124; // rcx
  int v125; // edx
  __int64 v126; // rcx
  char *v127; // rsi
  char *v128; // rax
  __int64 v129; // rbx
  __int64 v130; // [rsp+8h] [rbp-80h]
  _QWORD *v132; // [rsp+18h] [rbp-70h]
  _QWORD *v133; // [rsp+18h] [rbp-70h]
  _QWORD *v134; // [rsp+18h] [rbp-70h]
  _QWORD *v135; // [rsp+18h] [rbp-70h]
  _QWORD *v136; // [rsp+18h] [rbp-70h]
  _QWORD *v137; // [rsp+18h] [rbp-70h]
  _QWORD *v138; // [rsp+18h] [rbp-70h]
  _QWORD *v139; // [rsp+18h] [rbp-70h]
  _QWORD *v140; // [rsp+18h] [rbp-70h]
  unsigned __int64 v141; // [rsp+20h] [rbp-68h]
  unsigned __int64 v142; // [rsp+20h] [rbp-68h]
  unsigned int v143; // [rsp+20h] [rbp-68h]
  unsigned int v144; // [rsp+20h] [rbp-68h]
  __int64 v145; // [rsp+28h] [rbp-60h]

  v4 = *(_DWORD *)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_DWORD *)(a1 + 52);
  v7 = v5 + v4;
  if ( a2 != *(_DWORD *)(a1 + 60) )
  {
    v8 = v6 | (3 << v5);
    *(_DWORD *)(a1 + 52) = v8;
    if ( v7 > 0x1F )
    {
      v104 = *(_QWORD **)(a1 + 24);
      v105 = v104[1];
      if ( (unsigned __int64)(v105 + 4) > v104[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v104 + 3, v105 + 4, 1);
        v105 = v104[1];
      }
      *(_DWORD *)(*v104 + v105) = v8;
      v106 = *(_DWORD *)(a1 + 48);
      v8 = 0;
      v104[1] += 4LL;
      if ( v106 )
        v8 = 3u >> (32 - v106);
      v7 = ((_BYTE)v106 + (_BYTE)v4) & 0x1F;
    }
    v9 = v8 | (1 << v7);
    v10 = v7 + 6;
    *(_DWORD *)(a1 + 48) = v7;
    *(_DWORD *)(a1 + 52) = v9;
    if ( v7 + 6 > 0x1F )
    {
      v107 = *(_QWORD **)(a1 + 24);
      v108 = v107[1];
      if ( (unsigned __int64)(v108 + 4) > v107[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v107 + 3, v108 + 4, 1);
        v108 = v107[1];
      }
      *(_DWORD *)(*v107 + v108) = v9;
      v109 = *(_DWORD *)(a1 + 48);
      v9 = 0;
      v107[1] += 4LL;
      if ( v109 )
        v9 = 1u >> (32 - v109);
      v10 = ((_BYTE)v109 + 6) & 0x1F;
      *(_DWORD *)(a1 + 48) = v10;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = v10;
    }
    v11 = v9 | (1 << v10);
    v12 = v10 + 6;
    v13 = v11;
    *(_DWORD *)(a1 + 52) = v11;
    if ( v12 > 0x1F )
    {
      v123 = *(_QWORD **)(a1 + 24);
      v124 = v123[1];
      if ( (unsigned __int64)(v124 + 4) > v123[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v123 + 3, v124 + 4, 1);
        v124 = v123[1];
      }
      *(_DWORD *)(*v123 + v124) = v13;
      v125 = *(_DWORD *)(a1 + 48);
      v13 = 0;
      v123[1] += 4LL;
      if ( v125 )
        v13 = 1u >> (32 - v125);
      *(_DWORD *)(a1 + 52) = v13;
      v12 = ((_BYTE)v125 + 6) & 0x1F;
      *(_DWORD *)(a1 + 48) = v12;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = v12;
    }
    for ( i = a2; i > 0x1F; *(_DWORD *)(a1 + 48) = v12 )
    {
      v16 = (i & 0x1F | 0x20) << v12;
      v12 += 6;
      v13 |= v16;
      *(_DWORD *)(a1 + 52) = v13;
      if ( v12 > 0x1F )
      {
        v17 = *(_QWORD **)(a1 + 24);
        v18 = v17[1];
        if ( (unsigned __int64)(v18 + 4) > v17[2] )
        {
          sub_2236E10(*(_QWORD *)(a1 + 24), v17 + 3, v18 + 4, 1);
          v18 = v17[1];
        }
        *(_DWORD *)(*v17 + v18) = v13;
        v15 = *(_DWORD *)(a1 + 48);
        v17[1] += 4LL;
        v13 = (i & 0x1F | 0x20) >> (32 - v15);
        if ( !v15 )
          v13 = 0;
        v12 = ((_BYTE)v15 + 6) & 0x1F;
        *(_DWORD *)(a1 + 52) = v13;
      }
      i >>= 5;
    }
    v19 = i << v12;
    v5 = v12 + 6;
    v6 = v13 | v19;
    *(_DWORD *)(a1 + 52) = v13 | v19;
    if ( v5 > 0x1F )
    {
      v20 = *(_QWORD **)(a1 + 24);
      v21 = v20[1];
      if ( (unsigned __int64)(v21 + 4) > v20[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v20 + 3, v21 + 4, 1);
        v21 = v20[1];
      }
      *(_DWORD *)(*v20 + v21) = v6;
      v22 = *(_DWORD *)(a1 + 48);
      v6 = 0;
      v20[1] += 4LL;
      if ( v22 )
        v6 = i >> (32 - v22);
      v5 = ((_BYTE)v22 + 6) & 0x1F;
    }
    v4 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 60) = a2;
    v7 = v4 + v5;
  }
  v23 = *a3;
  v24 = (2 << v5) | v6;
  *(_DWORD *)(a1 + 52) = v24;
  v130 = v23;
  if ( v7 > 0x1F )
  {
    v117 = *(_QWORD **)(a1 + 24);
    v118 = v117[1];
    if ( (unsigned __int64)(v118 + 4) > v117[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v117 + 3, v118 + 4, 1);
      v118 = v117[1];
    }
    *(_DWORD *)(*v117 + v118) = v24;
    v119 = *(_DWORD *)(a1 + 48);
    v24 = 0;
    v117[1] += 4LL;
    if ( v119 )
      v24 = 2u >> (32 - v119);
    *(_DWORD *)(a1 + 52) = v24;
    v7 = ((_BYTE)v119 + (_BYTE)v4) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v7;
  for ( j = *(_DWORD *)(v130 + 8); j > 0xF; *(_DWORD *)(a1 + 48) = v7 )
  {
    v29 = v7;
    v7 += 5;
    v30 = j & 0xF | 0x10;
    v24 |= v30 << v29;
    *(_DWORD *)(a1 + 52) = v24;
    if ( v7 > 0x1F )
    {
      v31 = *(_QWORD **)(a1 + 24);
      v32 = v31[1];
      if ( (unsigned __int64)(v32 + 4) > v31[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v31 + 3, v32 + 4, 1);
        v32 = v31[1];
        v30 = j & 0xF | 0x10;
      }
      v26 = 0;
      *(_DWORD *)(*v31 + v32) = v24;
      v27 = *(_DWORD *)(a1 + 48);
      v31[1] += 4LL;
      v28 = v30 >> (32 - v27);
      if ( v27 )
        v26 = v28;
      v7 = ((_BYTE)v27 + 5) & 0x1F;
      *(_DWORD *)(a1 + 52) = v26;
      v24 = v26;
    }
    j >>= 4;
  }
  v33 = v7 + 5;
  v34 = (j << v7) | v24;
  *(_DWORD *)(a1 + 52) = v34;
  if ( v7 + 5 > 0x1F )
  {
    v120 = *(_QWORD **)(a1 + 24);
    v121 = v120[1];
    if ( (unsigned __int64)(v121 + 4) > v120[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v120 + 3, v121 + 4, 1);
      v121 = v120[1];
    }
    *(_DWORD *)(*v120 + v121) = v34;
    v122 = *(_DWORD *)(a1 + 48);
    v34 = 0;
    v120[1] += 4LL;
    if ( v122 )
      v34 = j >> (32 - v122);
    *(_DWORD *)(a1 + 52) = v34;
    v33 = ((_BYTE)v122 + 5) & 0x1F;
  }
  *(_DWORD *)(a1 + 48) = v33;
  v35 = *(_DWORD *)(v130 + 8);
  if ( v35 )
  {
    v36 = 0;
    v145 = 16 * ((unsigned int)(v35 - 1) + 1LL);
    while ( 1 )
    {
      v37 = (_QWORD *)(v36 + *(_QWORD *)v130);
      v38 = v37[1];
      v39 = v38 & 1;
      v40 = (v37[1] & 1) << v33;
      v41 = v33 + 1;
      v42 = v40 | v34;
      *(_DWORD *)(a1 + 52) = v42;
      if ( v41 == 32 )
      {
        v86 = *(_QWORD **)(a1 + 24);
        v87 = v86[1];
        if ( (unsigned __int64)(v87 + 4) > v86[2] )
        {
          v144 = v38 & 1;
          v136 = *(_QWORD **)(a1 + 24);
          sub_2236E10(v136, v86 + 3, v87 + 4, 1);
          v86 = v136;
          v39 = v144;
          v87 = v136[1];
        }
        v88 = 0;
        *(_DWORD *)(*v86 + v87) = v42;
        v89 = *(_DWORD *)(a1 + 48);
        v86[1] += 4LL;
        v90 = v39 >> (32 - v89);
        v83 = v89 == 0;
        v91 = v89 + 1;
        v38 = v37[1];
        if ( !v83 )
          v88 = v90;
        v41 = v91 & 0x1F;
        *(_DWORD *)(a1 + 48) = v41;
        v42 = v88;
        *(_DWORD *)(a1 + 52) = v88;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v41;
      }
      if ( (v38 & 1) != 0 )
        break;
      v68 = (*((_BYTE *)v37 + 8) >> 1) & 7;
      v69 = v68;
      v70 = v68 << v41;
      v33 = v41 + 3;
      v34 = v70 | v42;
      *(_DWORD *)(a1 + 52) = v34;
      if ( v33 > 0x1F )
      {
        v78 = *(_QWORD **)(a1 + 24);
        v79 = v78[1];
        if ( (unsigned __int64)(v79 + 4) > v78[2] )
        {
          v143 = v68;
          v135 = *(_QWORD **)(a1 + 24);
          sub_2236E10(v135, v78 + 3, v79 + 4, 1);
          v78 = v135;
          v69 = v143;
          v79 = v135[1];
        }
        v80 = 0;
        *(_DWORD *)(*v78 + v79) = v34;
        v81 = *(_DWORD *)(a1 + 48);
        v78[1] += 4LL;
        v82 = v69 >> (32 - v81);
        v83 = v81 == 0;
        v84 = v81 + 3;
        v85 = *((_BYTE *)v37 + 8);
        if ( !v83 )
          v80 = v82;
        v33 = v84 & 0x1F;
        *(_DWORD *)(a1 + 48) = v33;
        v34 = v80;
        *(_DWORD *)(a1 + 52) = v80;
        v68 = (v85 >> 1) & 7;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v33;
      }
      if ( !v68 )
LABEL_91:
        sub_2221C70("Invalid encoding", 1);
      if ( v68 <= 2u )
      {
        v71 = *v37;
        v62 = *v37;
        if ( v71 == v62 )
        {
          if ( (unsigned int)v71 > 0xF )
          {
            do
            {
              v113 = v62 & 0xF | 0x10;
              v114 = v113 << v33;
              v33 += 5;
              v34 |= v114;
              *(_DWORD *)(a1 + 52) = v34;
              if ( v33 > 0x1F )
              {
                v115 = *(_QWORD **)(a1 + 24);
                v116 = v115[1];
                if ( (unsigned __int64)(v116 + 4) > v115[2] )
                {
                  v139 = *(_QWORD **)(a1 + 24);
                  sub_2236E10(v139, v115 + 3, v116 + 4, 1);
                  v115 = v139;
                  v113 = v62 & 0xF | 0x10;
                  v116 = v139[1];
                }
                v110 = 0;
                *(_DWORD *)(*v115 + v116) = v34;
                v111 = *(_DWORD *)(a1 + 48);
                v115[1] += 4LL;
                v112 = v113 >> (32 - v111);
                if ( v111 )
                  v110 = v112;
                v33 = ((_BYTE)v111 + 5) & 0x1F;
                *(_DWORD *)(a1 + 52) = v110;
                v34 = v110;
              }
              v62 >>= 4;
              *(_DWORD *)(a1 + 48) = v33;
            }
            while ( v62 > 0xF );
          }
        }
        else if ( v71 > 0xF )
        {
          do
          {
            v74 = v71 & 0xF | 0x10;
            v75 = v74 << v33;
            v33 += 5;
            v34 |= v75;
            *(_DWORD *)(a1 + 52) = v34;
            if ( v33 > 0x1F )
            {
              v76 = *(_QWORD **)(a1 + 24);
              v77 = v76[1];
              if ( (unsigned __int64)(v77 + 4) > v76[2] )
              {
                v142 = v71;
                v134 = *(_QWORD **)(a1 + 24);
                sub_2236E10(v134, v76 + 3, v77 + 4, 1);
                v76 = v134;
                v71 = v142;
                v77 = v134[1];
              }
              v72 = 0;
              *(_DWORD *)(*v76 + v77) = v34;
              v73 = *(_DWORD *)(a1 + 48);
              v76[1] += 4LL;
              if ( v73 )
                v72 = v74 >> (32 - v73);
              v33 = ((_BYTE)v73 + 5) & 0x1F;
              *(_DWORD *)(a1 + 52) = v72;
              v34 = v72;
            }
            v71 >>= 4;
            *(_DWORD *)(a1 + 48) = v33;
          }
          while ( v71 > 0xF );
          v62 = v71;
        }
        v63 = v62 << v33;
        v33 += 5;
        v34 |= v63;
        *(_DWORD *)(a1 + 52) = v34;
        if ( v33 > 0x1F )
        {
          v64 = *(_QWORD **)(a1 + 24);
          v65 = v64[1];
          if ( (unsigned __int64)(v65 + 4) > v64[2] )
          {
            v138 = *(_QWORD **)(a1 + 24);
            sub_2236E10(v138, v64 + 3, v65 + 4, 1);
            v64 = v138;
            v65 = v138[1];
          }
          *(_DWORD *)(*v64 + v65) = v34;
          v66 = *(_DWORD *)(a1 + 48);
          v64[1] += 4LL;
          v67 = 0;
          if ( v66 )
            v67 = v62 >> (32 - v66);
          v34 = v67;
          *(_DWORD *)(a1 + 52) = v67;
          v33 = ((_BYTE)v66 + 5) & 0x1F;
        }
LABEL_75:
        *(_DWORD *)(a1 + 48) = v33;
        goto LABEL_56;
      }
      if ( v68 > 5u )
        goto LABEL_91;
LABEL_56:
      v36 += 16;
      if ( v36 == v145 )
        goto LABEL_57;
    }
    v43 = *v37;
    v44 = *v37;
    if ( v43 == v44 )
    {
      if ( (unsigned int)v43 > 0x7F )
      {
        do
        {
          v95 = v44 & 0x7F | 0x80;
          v96 = v95 << v41;
          v41 += 8;
          v42 |= v96;
          *(_DWORD *)(a1 + 52) = v42;
          if ( v41 > 0x1F )
          {
            v97 = *(_QWORD **)(a1 + 24);
            v98 = v97[1];
            if ( (unsigned __int64)(v98 + 4) > v97[2] )
            {
              v137 = *(_QWORD **)(a1 + 24);
              sub_2236E10(v137, v97 + 3, v98 + 4, 1);
              v97 = v137;
              v95 = v44 & 0x7F | 0x80;
              v98 = v137[1];
            }
            v92 = 0;
            *(_DWORD *)(*v97 + v98) = v42;
            v93 = *(_DWORD *)(a1 + 48);
            v97[1] += 4LL;
            v94 = v95 >> (32 - v93);
            if ( v93 )
              v92 = v94;
            v41 = ((_BYTE)v93 + 8) & 0x1F;
            *(_DWORD *)(a1 + 52) = v92;
            v42 = v92;
          }
          v44 >>= 7;
          *(_DWORD *)(a1 + 48) = v41;
        }
        while ( v44 > 0x7F );
      }
      v99 = v44 << v41;
      v33 = v41 + 8;
      v34 = v99 | v42;
      *(_DWORD *)(a1 + 52) = v34;
      if ( v33 > 0x1F )
      {
        v100 = *(_QWORD **)(a1 + 24);
        v101 = v100[1];
        if ( (unsigned __int64)(v101 + 4) > v100[2] )
        {
          v140 = *(_QWORD **)(a1 + 24);
          sub_2236E10(v140, v100 + 3, v101 + 4, 1);
          v100 = v140;
          v101 = v140[1];
        }
        *(_DWORD *)(*v100 + v101) = v34;
        v102 = *(_DWORD *)(a1 + 48);
        v100[1] += 4LL;
        v103 = 0;
        if ( v102 )
          v103 = v44 >> (32 - v102);
        v34 = v103;
        *(_DWORD *)(a1 + 52) = v103;
        v33 = ((_BYTE)v102 + 8) & 0x1F;
        *(_DWORD *)(a1 + 48) = v33;
        goto LABEL_56;
      }
    }
    else
    {
      if ( v43 > 0x7F )
      {
        do
        {
          v47 = v43 & 0x7F | 0x80;
          v48 = v47 << v41;
          v41 += 8;
          v42 |= v48;
          *(_DWORD *)(a1 + 52) = v42;
          if ( v41 > 0x1F )
          {
            v49 = *(_QWORD **)(a1 + 24);
            v50 = v49[1];
            if ( (unsigned __int64)(v50 + 4) > v49[2] )
            {
              v141 = v43;
              v132 = *(_QWORD **)(a1 + 24);
              sub_2236E10(v132, v49 + 3, v50 + 4, 1);
              v49 = v132;
              v43 = v141;
              v50 = v132[1];
            }
            v45 = 0;
            *(_DWORD *)(*v49 + v50) = v42;
            v46 = *(_DWORD *)(a1 + 48);
            v49[1] += 4LL;
            if ( v46 )
              v45 = v47 >> (32 - v46);
            v41 = ((_BYTE)v46 + 8) & 0x1F;
            *(_DWORD *)(a1 + 52) = v45;
            v42 = v45;
          }
          v43 >>= 7;
          *(_DWORD *)(a1 + 48) = v41;
        }
        while ( v43 > 0x7F );
        v44 = v43;
      }
      v51 = v44 << v41;
      v33 = v41 + 8;
      v34 = v51 | v42;
      *(_DWORD *)(a1 + 52) = v34;
      if ( v33 > 0x1F )
      {
        v52 = *(_QWORD **)(a1 + 24);
        v53 = v52[1];
        if ( (unsigned __int64)(v53 + 4) > v52[2] )
        {
          v133 = *(_QWORD **)(a1 + 24);
          sub_2236E10(v133, v52 + 3, v53 + 4, 1);
          v52 = v133;
          v53 = v133[1];
        }
        v54 = 0;
        *(_DWORD *)(*v52 + v53) = v34;
        v55 = *(_DWORD *)(a1 + 48);
        v52[1] += 4LL;
        if ( v55 )
          v54 = v44 >> (32 - v55);
        v33 = ((_BYTE)v55 + 8) & 0x1F;
        *(_DWORD *)(a1 + 48) = v33;
        *(_DWORD *)(a1 + 52) = v54;
        v34 = v54;
        goto LABEL_56;
      }
    }
    goto LABEL_75;
  }
LABEL_57:
  v56 = *(_QWORD *)(a1 + 136);
  v57 = *(_QWORD *)(a1 + 128);
  if ( v56 != v57 )
  {
    if ( a2 == *(_DWORD *)(v56 - 32) )
    {
      v129 = v56 - 32;
      if ( v56 != 32 )
      {
        v127 = *(char **)(v56 - 16);
        if ( v127 != *(char **)(v56 - 8) )
          goto LABEL_66;
LABEL_129:
        sub_A22DA0(v129 + 8, v127, a3);
        v58 = *(char **)(v129 + 16);
        return (unsigned int)((__int64)&v58[-*(_QWORD *)(v129 + 8)] >> 4) + 3;
      }
    }
    else
    {
      if ( a2 == *(_DWORD *)v57 )
      {
        v127 = *(char **)(v57 + 16);
        v128 = *(char **)(v57 + 24);
        v129 = *(_QWORD *)(a1 + 128);
        goto LABEL_65;
      }
      while ( 1 )
      {
        v129 = v57 + 32;
        if ( v56 == v57 + 32 )
          break;
        if ( a2 == *(_DWORD *)(v57 + 32) )
        {
          v127 = *(char **)(v57 + 48);
          v128 = *(char **)(v57 + 56);
          goto LABEL_65;
        }
        v57 += 32;
      }
    }
  }
  if ( v56 == *(_QWORD *)(a1 + 144) )
  {
    sub_13999D0((__m128 *)(a1 + 128), *(char **)(a1 + 136));
    v126 = *(_QWORD *)(a1 + 136);
    v129 = v126 - 32;
    v127 = *(char **)(v126 - 16);
    v128 = *(char **)(v126 - 8);
  }
  else
  {
    v126 = v56 + 32;
    v129 = *(_QWORD *)(a1 + 136);
    v128 = nullptr;
    *(_OWORD *)v56 = 0;
    v127 = nullptr;
    *(_OWORD *)(v56 + 8) = 0;
    *(_QWORD *)(v56 + 24) = 0;
    *(_QWORD *)(a1 + 136) = v56 + 32;
  }
  *(_DWORD *)(v126 - 32) = a2;
LABEL_65:
  if ( v127 == v128 )
    goto LABEL_129;
LABEL_66:
  v58 = v127 + 16;
  v59 = *a3;
  *((_QWORD *)v58 - 1) = 0;
  *((_QWORD *)v58 - 2) = v59;
  v60 = a3[1];
  a3[1] = 0;
  *((_QWORD *)v58 - 1) = v60;
  *a3 = 0;
  *(_QWORD *)(v129 + 16) = v58;
  return (unsigned int)((__int64)&v58[-*(_QWORD *)(v129 + 8)] >> 4) + 3;
}
