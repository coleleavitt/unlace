__int64 __fastcall sub_999A50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  int v6; // edx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // edi
  __int64 v11; // r8
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  _DWORD *v31; // rsi
  __int64 v32; // rdi
  _DWORD *v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  _BYTE *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdi
  _BYTE *v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned int v53; // edx
  __int64 v54; // rsi
  const __m128i *v55; // rdx
  __int64 v56; // rdi
  __m128i *v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 *v61; // r13
  __int64 v62; // rbp
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r12
  __int64 v69; // rsi
  __int64 v70; // rbp
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rcx
  _WORD *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdi
  _WORD *v79; // rcx
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rbp
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rcx
  _QWORD *v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdi
  _QWORD *v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // rdi
  unsigned __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // rdi
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rcx
  __int64 v110; // rdi
  _QWORD *v111; // rdi
  __int64 v112; // rax
  _QWORD *v113; // rdi
  __int64 v114; // rax
  _QWORD *v115; // rdi
  _QWORD *v116; // r12
  _QWORD *v117; // rdi
  _QWORD *v118; // r15
  __int64 v119; // r14
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rsi
  __int64 v123; // rsi
  __int64 v124; // [rsp+0h] [rbp-B8h]
  _QWORD *v125; // [rsp+8h] [rbp-B0h]
  __int64 *v126; // [rsp+10h] [rbp-A8h]
  _QWORD *v127; // [rsp+18h] [rbp-A0h]
  _QWORD *v128; // [rsp+28h] [rbp-90h]
  _QWORD *v129; // [rsp+30h] [rbp-88h]
  _QWORD *v130; // [rsp+38h] [rbp-80h]
  _QWORD v131[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v132; // [rsp+58h] [rbp-60h]
  unsigned int v133; // [rsp+60h] [rbp-58h]
  int v134; // [rsp+70h] [rbp-48h]

  v4 = a3;
  v6 = *(_DWORD *)(a2 + 48);
  v7 = *(_QWORD *)a2;
  if ( v6 == 1 )
  {
    v13 = v7 + *(_DWORD *)(a2 + 32);
  }
  else if ( v6
         || (v8 = *(_QWORD *)(a2 + 24)) == 0
         || ((v9 = *(_QWORD *)(v8 + 32), v10 = *(_DWORD *)(a2 + 32), *(_DWORD *)(v9 + 16) != v10) && v10
           ? (v11 = *(_QWORD *)(v8 + v10 + 32))
           : (v11 = *(_QWORD *)(v8 + 32)),
             v12 = *(_DWORD *)(v11 + 12),
             v12 == -1) )
  {
    v13 = v7;
  }
  else
  {
    v13 = -1;
    if ( v7 != 0xFFFFFFFF && *(unsigned int *)(v9 + 20) >= v7 )
    {
      v13 = v7;
      v14 = v7;
      if ( v10 != -1 )
      {
        v15 = 0;
        if ( v10 != v7 )
        {
          v15 = 32;
          if ( *(_QWORD *)(v11 + 32) )
            v15 = 16;
        }
        v14 = v7 - v10 - v15;
      }
      if ( v12 && v12 == v14 )
        v13 = -1;
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = v131;
  v18 = *(_QWORD *)(v16 + 24);
  sub_A1C030(v131, v18, *(unsigned int *)(v16 + 32), (unsigned int)(**(_DWORD **)(a1 + 16) + v13 - **(_DWORD **)a1));
  switch ( v4 )
  {
    case 0LL:
    case 1LL:
      v34 = *(_QWORD *)a2;
      v35 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_57;
      v36 = *(_QWORD *)(v35 + 32);
      v37 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v36 + 16) != (_DWORD)v37 && (_DWORD)v37 )
        v36 = *(_QWORD *)(v35 + (unsigned int)v37 + 32);
      if ( !*(_BYTE *)(v36 + 51) || (v38 = (_BYTE *)(v35 + v34 + 72), v37 != v34) )
LABEL_57:
        v38 = (_BYTE *)(v35 + v34 + 40);
      v39 = v131[0];
      v40 = v132;
      if ( v134 )
        goto LABEL_63;
      v41 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v41 + 16) != v133 && v133 )
        v41 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v41 + 51) )
        goto LABEL_63;
      v42 = (_BYTE *)(v132 + v131[0] + 72);
      if ( v133 != v131[0] )
        goto LABEL_63;
      goto LABEL_64;
    case 2LL:
      v106 = *(_QWORD *)a2;
      v107 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_209;
      v108 = *(_QWORD *)(v107 + 32);
      v109 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v108 + 16) != (_DWORD)v109 && (_DWORD)v109 )
        v108 = *(_QWORD *)(v107 + (unsigned int)v109 + 32);
      if ( !*(_BYTE *)(v108 + 51) || (v75 = (_WORD *)(v107 + v106 + 72), v109 != v106) )
LABEL_209:
        v75 = (_WORD *)(v107 + v106 + 40);
      v76 = v131[0];
      v77 = v132;
      if ( !v134 )
      {
        v110 = *(_QWORD *)(v132 + 32);
        if ( *(_DWORD *)(v110 + 16) != v133 && v133 )
          v110 = *(_QWORD *)(v132 + v133 + 32);
        if ( *(_BYTE *)(v110 + 51) )
        {
          v79 = (_WORD *)(v132 + v131[0] + 72);
          if ( v133 == v131[0] )
            goto LABEL_144;
        }
      }
      goto LABEL_143;
    case 3LL:
      v71 = *(_QWORD *)a2;
      v72 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_136;
      v73 = *(_QWORD *)(v72 + 32);
      v74 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v73 + 16) != (_DWORD)v74 && (_DWORD)v74 )
        v73 = *(_QWORD *)(v72 + (unsigned int)v74 + 32);
      if ( !*(_BYTE *)(v73 + 51) || (v75 = (_WORD *)(v72 + v71 + 72), v74 != v71) )
LABEL_136:
        v75 = (_WORD *)(v72 + v71 + 40);
      v76 = v131[0];
      v77 = v132;
      if ( v134 )
        goto LABEL_143;
      v78 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v78 + 16) != v133 && v133 )
        v78 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v78 + 51) || (v79 = (_WORD *)(v132 + v131[0] + 72), v131[0] != v133) )
LABEL_143:
        v79 = (_WORD *)(v77 + v76 + 40);
LABEL_144:
      *v79 = *v75;
      sub_A1DB00(v131);
      goto LABEL_37;
    case 4LL:
    case 5LL:
      v27 = *(_QWORD *)a2;
      v28 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_44;
      v29 = *(_QWORD *)(v28 + 32);
      v30 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v29 + 16) != (_DWORD)v30 && (_DWORD)v30 )
        v29 = *(_QWORD *)(v28 + (unsigned int)v30 + 32);
      if ( !*(_BYTE *)(v29 + 51) || (v31 = (_DWORD *)(v28 + v27 + 72), v30 != v27) )
LABEL_44:
        v31 = (_DWORD *)(v28 + v27 + 40);
      if ( v134 )
        goto LABEL_50;
      v32 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v32 + 16) != v133 && v133 )
        v32 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v32 + 51) || (v33 = (_DWORD *)(v132 + v131[0] + 72), v133 != v131[0]) )
LABEL_50:
        v33 = (_DWORD *)(v132 + v131[0] + 40);
      *v33 = *v31;
      sub_A1DB00(v131);
      goto LABEL_37;
    case 6LL:
      v87 = *(_QWORD *)a2;
      v88 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_166;
      v89 = *(_QWORD *)(v88 + 32);
      v90 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v89 + 16) != (_DWORD)v90 && (_DWORD)v90 )
        v89 = *(_QWORD *)(v88 + (unsigned int)v90 + 32);
      if ( !*(_BYTE *)(v89 + 51) || (v91 = (_QWORD *)(v88 + v87 + 72), v90 != v87) )
LABEL_166:
        v91 = (_QWORD *)(v88 + v87 + 40);
      v92 = v131[0];
      v93 = v132;
      if ( v134 )
        goto LABEL_173;
      v94 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v94 + 16) != v133 && v133 )
        v94 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v94 + 51) )
        goto LABEL_173;
      v95 = (_QWORD *)(v132 + v131[0] + 72);
      if ( v133 != v131[0] )
        goto LABEL_173;
      goto LABEL_174;
    case 7LL:
      v101 = *(_QWORD *)a2;
      v102 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_195;
      v103 = *(_QWORD *)(v102 + 32);
      v104 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v103 + 16) != (_DWORD)v104 && (_DWORD)v104 )
        v103 = *(_QWORD *)(v102 + (unsigned int)v104 + 32);
      if ( !*(_BYTE *)(v103 + 51) || (v91 = (_QWORD *)(v102 + v101 + 72), v101 != v104) )
LABEL_195:
        v91 = (_QWORD *)(v102 + v101 + 40);
      v92 = v131[0];
      v93 = v132;
      if ( !v134 )
      {
        v105 = *(_QWORD *)(v132 + 32);
        if ( *(_DWORD *)(v105 + 16) != v133 && v133 )
          v105 = *(_QWORD *)(v132 + v133 + 32);
        if ( *(_BYTE *)(v105 + 51) )
        {
          v95 = (_QWORD *)(v132 + v131[0] + 72);
          if ( v131[0] == v133 )
            goto LABEL_174;
        }
      }
LABEL_173:
      v95 = (_QWORD *)(v93 + v92 + 40);
LABEL_174:
      *v95 = *v91;
      sub_A1DB00(v131);
      goto LABEL_37;
    case 8LL:
    case 9LL:
      v19 = *(_QWORD *)a2;
      v20 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_26;
      v21 = *(_QWORD *)(v20 + 32);
      v22 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v21 + 16) != (_DWORD)v22 && (_DWORD)v22 )
        v21 = *(_QWORD *)(v20 + (unsigned int)v22 + 32);
      if ( !*(_BYTE *)(v21 + 51) || (v23 = v20 + v19 + 72, v19 != v22) )
LABEL_26:
        v23 = v20 + v19 + 40;
      if ( v134 )
        goto LABEL_32;
      v24 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v24 + 16) != v133 && v133 )
        v24 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v24 + 51) || (v25 = v132 + v131[0] + 72, v131[0] != v133) )
LABEL_32:
        v25 = v132 + v131[0] + 40;
      if ( *(_DWORD *)(v25 + 8) <= 0x40u && *(_DWORD *)(v23 + 8) <= 0x40u )
      {
        *(_QWORD *)v25 = *(_QWORD *)v23;
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v23 + 8);
      }
      else
      {
        sub_2585EA0(v25, v23);
      }
      goto LABEL_36;
    case 10LL:
      v96 = *(_QWORD *)a2;
      v97 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_181;
      v98 = *(_QWORD *)(v97 + 32);
      v99 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v98 + 16) != (_DWORD)v99 && (_DWORD)v99 )
        v98 = *(_QWORD *)(v97 + (unsigned int)v99 + 32);
      if ( !*(_BYTE *)(v98 + 51) || (v38 = (_BYTE *)(v97 + v96 + 72), v96 != v99) )
LABEL_181:
        v38 = (_BYTE *)(v97 + v96 + 40);
      v39 = v131[0];
      v40 = v132;
      if ( v134 )
        goto LABEL_63;
      v100 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v100 + 16) != v133 && v133 )
        v100 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v100 + 51) || (v42 = (_BYTE *)(v132 + v131[0] + 72), v131[0] != v133) )
LABEL_63:
        v42 = (_BYTE *)(v40 + v39 + 40);
LABEL_64:
      *v42 = *v38;
      sub_A1DB00(v131);
      goto LABEL_37;
    case 11LL:
      v64 = *(_QWORD *)a2;
      v65 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_118;
      v66 = *(_QWORD *)(v65 + 32);
      v67 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v66 + 16) != (_DWORD)v67 && (_DWORD)v67 )
        v66 = *(_QWORD *)(v65 + (unsigned int)v67 + 32);
      if ( !*(_BYTE *)(v66 + 51) || (v68 = v65 + v64 + 72, v67 != v64) )
LABEL_118:
        v68 = v65 + v64 + 40;
      if ( v134 )
        goto LABEL_125;
      v69 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v69 + 16) != v133 && v133 )
        v69 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v69 + 51) || (v70 = v132 + v131[0] + 72, v131[0] != v133) )
LABEL_125:
        v70 = v132 + v131[0] + 40;
      if ( *(_DWORD *)(v70 + 8) <= 0x40u && *(_DWORD *)(v68 + 8) <= 0x40u )
      {
        *(_QWORD *)v70 = *(_QWORD *)v68;
        *(_DWORD *)(v70 + 8) = *(_DWORD *)(v68 + 8);
      }
      else
      {
        sub_2585EA0(v70, v68);
      }
      *(_BYTE *)(v70 + 12) = *(_BYTE *)(v68 + 12);
      *(_DWORD *)(v70 + 16) = *(_DWORD *)(v68 + 16);
      goto LABEL_36;
    case 12LL:
      v58 = *(_QWORD *)a2;
      v59 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_101;
      v18 = *(_QWORD *)(v59 + 32);
      v60 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v18 + 16) != (_DWORD)v60 && (_DWORD)v60 )
        v18 = *(_QWORD *)(v59 + (unsigned int)v60 + 32);
      if ( !*(_BYTE *)(v18 + 51) || (v17 = (__int64 *)(v59 + v58 + 72), v126 = v17, v60 != v58) )
LABEL_101:
        v126 = (__int64 *)(v59 + v58 + 40);
      if ( v134 )
        goto LABEL_108;
      v18 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v18 + 16) != v133 && v133 )
        v18 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v18 + 51) || (v61 = (__int64 *)(v132 + v131[0] + 72), v133 != v131[0]) )
LABEL_108:
        v61 = (__int64 *)(v132 + v131[0] + 40);
      v62 = sub_2575D20(v17, v18, v131[0]);
      v63 = *v126;
      if ( *v61 == v62 )
      {
        if ( v62 == v63 )
        {
          sub_257D030(v61, v126);
          goto LABEL_36;
        }
        if ( v126 == v61 )
          goto LABEL_36;
        v111 = (_QWORD *)v61[1];
        v130 = v111;
        if ( v111 )
        {
          v112 = *(v111 - 1);
          v127 = &v111[3 * v112];
          if ( v111 != v127 )
          {
            do
            {
              v127 -= 3;
              if ( v62 == *v127 )
              {
                v113 = (_QWORD *)v127[1];
                v129 = v113;
                if ( v113 )
                {
                  v114 = *(v113 - 1);
                  v125 = &v113[3 * v114];
                  if ( v113 != v125 )
                  {
                    do
                    {
                      v125 -= 3;
                      if ( v62 == *v125 )
                      {
                        v115 = (_QWORD *)v125[1];
                        v128 = v115;
                        if ( v115 )
                        {
                          v116 = &v115[3 * *(v115 - 1)];
                          if ( v115 == v116 )
                          {
                            v123 = 0;
                          }
                          else
                          {
                            do
                            {
                              v116 -= 3;
                              if ( v62 == *v116 )
                              {
                                v117 = (_QWORD *)v116[1];
                                if ( v117 )
                                {
                                  v118 = &v117[3 * *(v117 - 1)];
                                  if ( v117 == v118 )
                                  {
                                    v122 = 0;
                                  }
                                  else
                                  {
                                    do
                                    {
                                      v118 -= 3;
                                      if ( v62 == *v118 )
                                      {
                                        v119 = v118[1];
                                        if ( v119 )
                                        {
                                          v120 = v119 + 24LL * *(_QWORD *)(v119 - 8);
                                          if ( v119 == v120 )
                                          {
                                            v121 = 0;
                                          }
                                          else
                                          {
                                            do
                                            {
                                              v124 = v120 - 24;
                                              sub_5FF3B0((__int64 *)(v120 - 24));
                                              v120 = v124;
                                            }
                                            while ( v119 != v124 );
                                            v121 = 24LL * *(_QWORD *)(v119 - 8);
                                          }
                                          operator delete[]((void *)(v119 - 8), v121 + 8);
                                        }
                                        v118[1] = 0;
                                      }
                                      else
                                      {
                                        sub_25769A0(v118);
                                      }
                                    }
                                    while ( v117 != v118 );
                                    v122 = 24LL * *(v117 - 1);
                                  }
                                  operator delete[](v117 - 1, v122 + 8);
                                }
                                v116[1] = 0;
                              }
                              else
                              {
                                sub_25769A0(v116);
                              }
                            }
                            while ( v128 != v116 );
                            v123 = 24LL * *(v128 - 1);
                          }
                          operator delete[](v128 - 1, v123 + 8);
                        }
                        v125[1] = 0;
                      }
                      else
                      {
                        sub_25769A0(v125);
                      }
                    }
                    while ( v129 != v125 );
                    v114 = *(v129 - 1);
                  }
                  operator delete[](v129 - 1, 24 * v114 + 8);
                }
                v127[1] = 0;
              }
              else
              {
                sub_25769A0(v127);
              }
            }
            while ( v130 != v127 );
            v112 = *(v130 - 1);
          }
          operator delete[](v130 - 1, 24 * v112 + 8);
        }
        v61[1] = 0;
        goto LABEL_265;
      }
      if ( v62 != v63 )
      {
        sub_2576220(v61, v126);
        goto LABEL_36;
      }
      if ( v126 != v61 )
      {
        sub_25769A0(v61);
LABEL_265:
        if ( v62 == *v126 )
          sub_257CF50(v61, v126);
        else
          sub_25768A0(v61, v126);
      }
LABEL_36:
      sub_A1DB00(v131);
LABEL_37:
      sub_A1C0C0(v131);
      return 1;
    case 13LL:
      v43 = *(_QWORD *)a2;
      v44 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_71;
      v45 = *(_QWORD *)(v44 + 32);
      v46 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v45 + 16) != (_DWORD)v46 && (_DWORD)v46 )
        v45 = *(_QWORD *)(v44 + (unsigned int)v46 + 32);
      if ( !*(_BYTE *)(v45 + 51) || (v47 = v44 + v43 + 72, v43 != v46) )
LABEL_71:
        v47 = v44 + v43 + 40;
      if ( v134 )
        goto LABEL_78;
      v48 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v48 + 16) != v133 && v133 )
        v48 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v48 + 51) || (v49 = v132 + v131[0] + 72, v131[0] != v133) )
LABEL_78:
        v49 = v132 + v131[0] + 40;
      sub_A1C120(v49, v47, v131[0]);
      sub_A1DB00(v131);
      goto LABEL_37;
    case 14LL:
      v50 = *(_QWORD *)a2;
      v51 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_86;
      v52 = *(_QWORD *)(v51 + 32);
      v53 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(v52 + 16) != v53 && v53 )
        v52 = *(_QWORD *)(v51 + v53 + 32);
      if ( !*(_BYTE *)(v52 + 51) || (v54 = v53, v55 = (const __m128i *)(v51 + v50 + 72), v50 != v54) )
LABEL_86:
        v55 = (const __m128i *)(v51 + v50 + 40);
      if ( v134 )
        goto LABEL_93;
      v56 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v56 + 16) != v133 && v133 )
        v56 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v56 + 51) || (v57 = (__m128i *)(v132 + v131[0] + 72), v131[0] != v133) )
LABEL_93:
        v57 = (__m128i *)(v132 + v131[0] + 40);
      *v57 = _mm_loadu_si128(v55);
      v57[1].m128i_i8[0] = v55[1].m128i_i8[0];
      sub_A1DB00(v131);
      goto LABEL_37;
    case 15LL:
      v80 = *(_QWORD *)a2;
      v81 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(a2 + 48) )
        goto LABEL_151;
      v82 = *(_QWORD *)(v81 + 32);
      v83 = *(unsigned int *)(a2 + 32);
      if ( *(_DWORD *)(v82 + 16) != (_DWORD)v83 && (_DWORD)v83 )
        v82 = *(_QWORD *)(v81 + (unsigned int)v83 + 32);
      if ( !*(_BYTE *)(v82 + 51) || (v84 = v81 + v80 + 72, v80 != v83) )
LABEL_151:
        v84 = v81 + v80 + 40;
      if ( v134 )
        goto LABEL_158;
      v85 = *(_QWORD *)(v132 + 32);
      if ( *(_DWORD *)(v85 + 16) != v133 && v133 )
        v85 = *(_QWORD *)(v132 + v133 + 32);
      if ( !*(_BYTE *)(v85 + 51) || (v86 = v132 + v131[0] + 72, v131[0] != v133) )
LABEL_158:
        v86 = v132 + v131[0] + 40;
      sub_A1C120(v86, v84, v131[0]);
      *(_QWORD *)(v86 + 56) = *(_QWORD *)(v84 + 56);
      *(_DWORD *)(v86 + 64) = *(_DWORD *)(v84 + 64);
      sub_A1DB00(v131);
      goto LABEL_37;
    default:
      goto LABEL_37;
  }
}

