__int64 __fastcall sub_16C0D20(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  char v9; // cl
  int v10; // ecx
  __int64 v11; // rdi
  int v12; // esi
  unsigned int v13; // edx
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // r13
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // cl
  int v20; // ecx
  __int64 v21; // rdi
  int v22; // esi
  unsigned int v23; // edx
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // r12
  __int64 v26; // rdx
  _QWORD *v27; // r11
  unsigned int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r10
  bool v33; // zf
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // edi
  unsigned __int64 v37; // rcx
  unsigned __int8 *v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // r10d
  __int64 v41; // r8
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // r11
  unsigned int *v45; // rax
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int32 v50; // eax
  unsigned __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned int v56; // esi
  unsigned int v57; // ecx
  __int64 v58; // r13
  unsigned int *v59; // rsi
  unsigned int v60; // ecx
  __int64 v61; // r13
  unsigned int *v62; // rsi
  unsigned int v63; // esi
  unsigned int v64; // eax
  __int64 v65; // rdx
  unsigned int v66; // edi
  __int64 v67; // rcx
  unsigned __int8 *v68; // rax
  __int64 v69; // r11
  unsigned __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int32 v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned int v78; // eax
  unsigned int v79; // ecx
  __int64 v80; // r13
  unsigned int *v81; // rsi
  unsigned int v82; // ecx
  __int64 v83; // r13
  unsigned int *v84; // rsi
  __int64 v85; // r9
  unsigned int *v86; // rdi
  __int64 v87; // r9
  unsigned int *v88; // rdi
  int v89; // r10d
  unsigned __int8 *v90; // r11
  __int64 v91; // r14
  unsigned int *v92; // rdi
  __int64 v93; // r14
  unsigned int *v94; // rdi
  int v95; // r11d
  unsigned __int8 *v96; // r10
  __int64 v97; // r15
  __int64 v98; // r9
  __int64 v99; // r15
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r10
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int64 v107; // rcx
  __int64 v108; // rax
  unsigned __int64 v109; // rdi
  unsigned __int64 v110; // rcx
  __int64 v111; // rax
  unsigned __int64 v112; // rdi
  unsigned int v113; // eax
  char *v114; // rsi
  unsigned int v115; // eax
  char *v116; // rsi
  unsigned int v117; // eax
  char *v118; // rsi
  unsigned int v119; // eax
  char *v120; // rsi
  int v121; // esi
  int v122; // eax
  __int64 v123; // r8
  int v124; // esi
  int v125; // eax
  __int64 v126; // r8
  int v127; // esi
  int v128; // eax
  __int64 v129; // r9
  int v130; // esi
  int v131; // eax
  __int64 v132; // r10
  unsigned __int64 v133; // [rsp+8h] [rbp-90h] BYREF
  unsigned __int64 v134; // [rsp+10h] [rbp-88h] BYREF
  __int64 v135; // [rsp+18h] [rbp-80h]
  __int64 v136; // [rsp+28h] [rbp-70h] BYREF
  __m128 v137; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 *v138; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v139; // [rsp+48h] [rbp-50h]

  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 4 )
    return sub_16C38D0(a1, a2);
  v5 = sub_16B5F60(a1, *(_QWORD *)(a2 + 16), 0);
  v8 = v5;
  if ( !v5 )
    return sub_16C38D0(a1, a2);
  v9 = *(_BYTE *)(a1 + 64);
  v136 = v5;
  v10 = v9 & 1;
  if ( v10 )
  {
    v11 = a1 + 72;
    v12 = 15;
  }
  else
  {
    v63 = *(_DWORD *)(a1 + 80);
    v11 = *(_QWORD *)(a1 + 72);
    if ( !v63 )
    {
      v138 = nullptr;
      v64 = *(_DWORD *)(a1 + 64);
      v65 = (v64 >> 1) + 1;
LABEL_46:
      v66 = 3 * v63;
      goto LABEL_47;
    }
    v12 = v63 - 1;
  }
  v13 = v12 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v14 = (unsigned __int8 *)(v11 + ((unsigned __int64)v13 << 6));
  v6 = *(_QWORD *)v14;
  if ( v8 == *(_QWORD *)v14 )
    goto LABEL_8;
  v95 = 1;
  v96 = nullptr;
  if ( v6 != -4096 )
  {
    while ( 1 )
    {
      if ( !v96 && v6 == -8192 )
        v96 = v14;
      v7 = (unsigned int)(v95 + 1);
      v13 = v12 & (v95 + v13);
      v14 = (unsigned __int8 *)(v11 + ((unsigned __int64)v13 << 6));
      v6 = *(_QWORD *)v14;
      if ( v8 == *(_QWORD *)v14 )
        break;
      if ( v6 == -4096 )
      {
        if ( v96 )
          v14 = v96;
        goto LABEL_79;
      }
      ++v95;
    }
LABEL_8:
    v15 = v14 + 8;
    v16 = v8;
    if ( v14[56] )
      goto LABEL_9;
    goto LABEL_52;
  }
LABEL_79:
  v138 = v14;
  v64 = *(_DWORD *)(a1 + 64);
  v66 = 48;
  v63 = 16;
  v65 = (v64 >> 1) + 1;
  if ( !(_BYTE)v10 )
  {
    v63 = *(_DWORD *)(a1 + 80);
    goto LABEL_46;
  }
LABEL_47:
  v67 = (unsigned int)(4 * v65);
  if ( (unsigned int)v67 >= v66 )
  {
    v63 *= 2;
    goto LABEL_77;
  }
  v65 = v63 - *(_DWORD *)(a1 + 68) - (unsigned int)v65;
  v67 = v8;
  if ( (unsigned int)v65 <= v63 >> 3 )
  {
LABEL_77:
    sub_16B9B50(a1 + 64, v63, v65, (_QWORD *)v67, v6, v7);
    sub_16B5A70(a1 + 64, &v136, &v138);
    v67 = v136;
    v64 = *(_DWORD *)(a1 + 64);
  }
  *(_DWORD *)(a1 + 64) = (2 * (v64 >> 1) + 2) | v64 & 1;
  v68 = v138;
  if ( *(_QWORD *)v138 != -4096 )
    --*(_DWORD *)(a1 + 68);
  *((_QWORD *)v68 + 1) = 0;
  v15 = v68 + 8;
  *((_DWORD *)v68 + 4) = 0;
  *((_QWORD *)v68 + 3) = 0;
  *((_DWORD *)v68 + 8) = 0;
  *((_QWORD *)v68 + 5) = 0;
  *((_DWORD *)v68 + 12) = 0;
  v68[56] = 0;
  *(_QWORD *)v68 = v67;
  v16 = v136;
LABEL_52:
  if ( *((_QWORD *)v15 + 2)
    && (unsigned __int8)sub_16BB1E0((__int64 *)(a1 + 16), *(_DWORD *)(a1 + 1096), *((_DWORD *)v15 + 6)) )
  {
    v69 = *(_QWORD *)(a1 + 8);
    v70 = *((_QWORD *)v15 + 2);
    v133 = (unsigned __int64)&v138;
    v135 = v69;
    sub_168B9B0((__int64)&v138, v69 + 8, 7507);
    sub_16B73F0(&v138, v16);
    v74 = sub_C00A40(a2, v16, v71, v72, v73);
    v137.m128_i8[8] = 1;
    v137.m128_i32[0] = v74;
    v137.m128_i32[1] = v74;
    sub_AEC610((__int64 *)&v138, (__int64 *)&v137);
    v134 = a2;
    v137 = _mm_loadh_ps((const double *)&v134);
    v78 = sub_C00A40(v70, (__int64)&v137, v75, v76, v77);
    sub_18CA280(v135, v78, &v137, 2, &v138);
    if ( v138 && v139 )
      sub_1580C40(v139, (unsigned __int64)v138);
    v15[48] = 1;
  }
LABEL_9:
  sub_16C38D0(a1, a2);
  v19 = *(_BYTE *)(a1 + 64);
  v136 = v8;
  v20 = v19 & 1;
  if ( v20 )
  {
    v21 = a1 + 72;
    v22 = 15;
  }
  else
  {
    v56 = *(_DWORD *)(a1 + 80);
    v21 = *(_QWORD *)(a1 + 72);
    if ( !v56 )
    {
      v138 = nullptr;
      v34 = *(_DWORD *)(a1 + 64);
      v35 = (v34 >> 1) + 1;
      goto LABEL_21;
    }
    v22 = v56 - 1;
  }
  v23 = v22 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
  v24 = (unsigned __int8 *)(v21 + ((unsigned __int64)v23 << 6));
  v17 = *(_QWORD *)v24;
  if ( v8 == *(_QWORD *)v24 )
    goto LABEL_12;
  v89 = 1;
  v90 = nullptr;
  if ( v17 == -4096 )
  {
LABEL_70:
    v138 = v24;
    v34 = *(_DWORD *)(a1 + 64);
    v36 = 48;
    v56 = 16;
    v35 = (v34 >> 1) + 1;
    if ( (_BYTE)v20 )
    {
LABEL_22:
      v37 = (unsigned int)(4 * v35);
      if ( (unsigned int)v37 >= v36 )
      {
        v56 *= 2;
      }
      else
      {
        v35 = v56 - *(_DWORD *)(a1 + 68) - (unsigned int)v35;
        v37 = v56 >> 3;
        if ( (unsigned int)v35 > (unsigned int)v37 )
        {
LABEL_24:
          *(_DWORD *)(a1 + 64) = (2 * (v34 >> 1) + 2) | v34 & 1;
          v38 = v138;
          if ( *(_QWORD *)v138 != -4096 )
            --*(_DWORD *)(a1 + 68);
          *((_QWORD *)v38 + 1) = 0;
          v25 = v38 + 8;
          *((_DWORD *)v38 + 4) = 0;
          *((_QWORD *)v38 + 3) = 0;
          *((_DWORD *)v38 + 8) = 0;
          *((_QWORD *)v38 + 5) = 0;
          *((_DWORD *)v38 + 12) = 0;
          v38[56] = 0;
          *(_QWORD *)v38 = v8;
          v8 = v136;
LABEL_27:
          if ( *((_QWORD *)v25 + 4) )
          {
            v39 = *(_QWORD *)(a1 + 16);
            v40 = *((_DWORD *)v25 + 10);
            v41 = *(unsigned int *)(a1 + 1096);
            v42 = 4 * v41;
            v43 = v39 + 4 * v41;
            if ( *(char *)(v43 + 3) < 0 )
            {
              v82 = *(_DWORD *)v43 & 0x7FFFFFFF;
              v41 = v82;
              v83 = 4LL * v82;
              v84 = (unsigned int *)(v39 + v83);
              if ( *(char *)(v39 + v83 + 3) < 0 )
              {
                v82 = *v84 & 0x7FFFFFFF;
                v41 = v82;
                v85 = 4LL * v82;
                v86 = (unsigned int *)(v39 + v85);
                if ( *(char *)(v39 + v85 + 3) < 0 )
                {
                  v82 = *v86 & 0x7FFFFFFF;
                  v133 = v82;
                  v101 = v39 + 4LL * v82;
                  if ( *(char *)(v101 + 3) < 0 )
                  {
                    v41 = *(_DWORD *)v101 & 0x7FFFFFFF;
                    v110 = (unsigned int)v41;
                    v111 = v39 + 4LL * (unsigned int)v41;
                    if ( *(char *)(v111 + 3) < 0 )
                    {
                      v113 = *(_DWORD *)v111 & 0x7FFFFFFF;
                      v114 = (char *)(v39 + 4LL * v113);
                      if ( v114[3] < 0 )
                      {
                        v121 = *(_DWORD *)v114;
                        v134 = (unsigned int)v41;
                        v122 = sub_16B5920((_QWORD *)(a1 + 16), v121 & 0x7FFFFFFF);
                        v39 = *(_QWORD *)(a1 + 16);
                        v110 = v134;
                        *(_DWORD *)(v39 + 4 * v123) = v122 & 0x7FFFFFFF | *(_DWORD *)(v39 + 4 * v123) & 0x80000000;
                        v41 = v122 & 0x7FFFFFFF;
                      }
                      else
                      {
                        v41 = v113;
                      }
                      *(_DWORD *)(v39 + 4 * v110) = v41 & 0x7FFFFFFF | *(_DWORD *)(v39 + 4 * v110) & 0x80000000;
                    }
                    v112 = v133;
                    v84 = (unsigned int *)(v39 + v83);
                    v82 = v41 & 0x7FFFFFFF;
                    LODWORD(v133) = *(_DWORD *)(v39 + 4 * v133);
                    *(_DWORD *)(v39 + 4 * v112) = v41 & 0x7FFFFFFF | v133 & 0x80000000;
                    v86 = (unsigned int *)(v39 + v85);
                    v43 = v39 + v42;
                  }
                  else
                  {
                    v41 = v82;
                  }
                  *v86 = v82 | *v86 & 0x80000000;
                }
                *v84 = v82 | *v84 & 0x80000000;
              }
              *(_DWORD *)v43 = *(_DWORD *)v43 & 0x80000000 | v82;
            }
            v44 = 4LL * v40;
            v45 = (unsigned int *)(v39 + v44);
            if ( *(char *)(v39 + v44 + 3) < 0 )
            {
              v79 = *v45 & 0x7FFFFFFF;
              v40 = v79;
              v80 = 4LL * v79;
              v81 = (unsigned int *)(v39 + v80);
              if ( *(char *)(v39 + v80 + 3) < 0 )
              {
                v79 = *v81 & 0x7FFFFFFF;
                v40 = v79;
                v87 = 4LL * v79;
                v88 = (unsigned int *)(v39 + v87);
                if ( *(char *)(v39 + v87 + 3) < 0 )
                {
                  v79 = *v88 & 0x7FFFFFFF;
                  v133 = v79;
                  v102 = v39 + 4LL * v79;
                  if ( *(char *)(v102 + 3) < 0 )
                  {
                    v40 = *(_DWORD *)v102 & 0x7FFFFFFF;
                    v107 = v40;
                    v108 = v39 + 4LL * v40;
                    if ( *(char *)(v108 + 3) < 0 )
                    {
                      v119 = *(_DWORD *)v108 & 0x7FFFFFFF;
                      v120 = (char *)(v39 + 4LL * v119);
                      if ( v120[3] < 0 )
                      {
                        v130 = *(_DWORD *)v120;
                        v134 = v40;
                        v131 = sub_16B5920((_QWORD *)(a1 + 16), v130 & 0x7FFFFFFF);
                        v39 = *(_QWORD *)(a1 + 16);
                        v107 = v134;
                        *(_DWORD *)(v39 + 4 * v132) = v131 & 0x7FFFFFFF | *(_DWORD *)(v39 + 4 * v132) & 0x80000000;
                        v40 = v131 & 0x7FFFFFFF;
                      }
                      else
                      {
                        v40 = v119;
                      }
                      *(_DWORD *)(v39 + 4 * v107) = v40 & 0x7FFFFFFF | *(_DWORD *)(v39 + 4 * v107) & 0x80000000;
                    }
                    v109 = v133;
                    v81 = (unsigned int *)(v39 + v80);
                    v79 = v40 & 0x7FFFFFFF;
                    LODWORD(v133) = *(_DWORD *)(v39 + 4 * v133);
                    *(_DWORD *)(v39 + 4 * v109) = v40 & 0x7FFFFFFF | v133 & 0x80000000;
                    v88 = (unsigned int *)(v39 + v87);
                    v45 = (unsigned int *)(v39 + v44);
                  }
                  else
                  {
                    v40 = v79;
                  }
                  *v88 = v79 | *v88 & 0x80000000;
                }
                *v81 = v79 | *v81 & 0x80000000;
              }
              *v45 = *v45 & 0x80000000 | v79;
            }
            if ( v40 <= (unsigned int)v41 )
            {
              if ( v40 == (_DWORD)v41 )
              {
LABEL_34:
                v46 = *(_QWORD *)(a1 + 8);
                v133 = *((_QWORD *)v25 + 4);
                sub_168B9B0((__int64)&v138, v46 + 8, 7507);
                sub_16B73F0(&v138, v8);
                v50 = sub_C00A40(a2, v8, v47, v48, v49);
                v137.m128_i8[8] = 1;
                v137.m128_i32[0] = v50;
                v137.m128_i32[1] = v50;
                sub_AEC610((__int64 *)&v138, (__int64 *)&v137);
                v51 = v133;
                v133 = a2;
                v137 = _mm_loadh_ps((const double *)&v133);
                v55 = sub_C00A40(v51, (__int64)&v137, v52, v53, v54);
                sub_18CA280(v46, v55, &v137, 2, &v138);
                if ( v138 && v139 )
                  sub_1580C40(v139, (unsigned __int64)v138);
                v25[48] = 1;
              }
              else
              {
                while ( 1 )
                {
                  LODWORD(v41) = *(_DWORD *)(v39 + 4 * v41) & 0x7FFFFFFF;
                  if ( (unsigned int)v41 < v40 )
                    break;
                  if ( (_DWORD)v41 == v40 )
                    goto LABEL_34;
                }
              }
            }
          }
          goto LABEL_13;
        }
      }
      sub_16B9B50(a1 + 64, v56, v35, (_QWORD *)v37, v17, v18);
      sub_16B5A70(a1 + 64, &v136, &v138);
      v8 = v136;
      v34 = *(_DWORD *)(a1 + 64);
      goto LABEL_24;
    }
    v56 = *(_DWORD *)(a1 + 80);
LABEL_21:
    v36 = 3 * v56;
    goto LABEL_22;
  }
  while ( 1 )
  {
    if ( !v90 && v17 == -8192 )
      v90 = v24;
    v18 = (unsigned int)(v89 + 1);
    v23 = v22 & (v89 + v23);
    v24 = (unsigned __int8 *)(v21 + ((unsigned __int64)v23 << 6));
    v17 = *(_QWORD *)v24;
    if ( v8 == *(_QWORD *)v24 )
      break;
    if ( v17 == -4096 )
    {
      if ( v90 )
        v24 = v90;
      goto LABEL_70;
    }
    ++v89;
  }
LABEL_12:
  v25 = v24 + 8;
  if ( !v24[56] )
    goto LABEL_27;
LABEL_13:
  if ( !*(_QWORD *)v25 )
    goto LABEL_19;
  v26 = *(_QWORD *)(a1 + 16);
  v27 = (_QWORD *)(a1 + 16);
  v28 = *((_DWORD *)v25 + 2);
  v29 = *(unsigned int *)(a1 + 1096);
  v30 = 4 * v29;
  v31 = v26 + 4 * v29;
  if ( *(char *)(v31 + 3) < 0 )
  {
    v60 = *(_DWORD *)v31 & 0x7FFFFFFF;
    v29 = v60;
    v61 = 4LL * v60;
    v62 = (unsigned int *)(v26 + v61);
    if ( *(char *)(v26 + v61 + 3) < 0 )
    {
      v60 = *v62 & 0x7FFFFFFF;
      v29 = v60;
      v91 = 4LL * v60;
      v92 = (unsigned int *)(v26 + v91);
      if ( *(char *)(v26 + v91 + 3) < 0 )
      {
        v60 = *v92 & 0x7FFFFFFF;
        v99 = v60;
        v100 = v26 + 4LL * v60;
        if ( *(char *)(v100 + 3) < 0 )
        {
          v29 = *(_DWORD *)v100 & 0x7FFFFFFF;
          v105 = (unsigned int)v29;
          v106 = v26 + 4LL * (unsigned int)v29;
          if ( *(char *)(v106 + 3) < 0 )
          {
            v115 = *(_DWORD *)v106 & 0x7FFFFFFF;
            v116 = (char *)(v26 + 4LL * v115);
            if ( v116[3] < 0 )
            {
              v124 = *(_DWORD *)v116;
              v133 = (unsigned int)v29;
              v125 = sub_16B5920((_QWORD *)(a1 + 16), v124 & 0x7FFFFFFF);
              v26 = *(_QWORD *)(a1 + 16);
              v105 = v133;
              *(_DWORD *)(v26 + 4 * v126) = v125 & 0x7FFFFFFF | *(_DWORD *)(v26 + 4 * v126) & 0x80000000;
              v29 = v125 & 0x7FFFFFFF;
            }
            else
            {
              v29 = v115;
            }
            *(_DWORD *)(v26 + 4 * v105) = v29 & 0x7FFFFFFF | *(_DWORD *)(v26 + 4 * v105) & 0x80000000;
          }
          v92 = (unsigned int *)(v26 + v91);
          v62 = (unsigned int *)(v26 + v61);
          v60 = v29 & 0x7FFFFFFF;
          *(_DWORD *)(v26 + 4 * v99) = v29 & 0x7FFFFFFF | *(_DWORD *)(v26 + 4 * v99) & 0x80000000;
          v31 = v26 + v30;
        }
        else
        {
          v29 = v60;
        }
        *v92 = v60 | *v92 & 0x80000000;
      }
      *v62 = v60 | *v62 & 0x80000000;
    }
    *(_DWORD *)v31 = *(_DWORD *)v31 & 0x80000000 | v60;
  }
  v32 = 4LL * v28;
  result = v26 + v32;
  if ( *(char *)(v26 + v32 + 3) < 0 )
  {
    v57 = *(_DWORD *)result & 0x7FFFFFFF;
    v28 = v57;
    v58 = 4LL * v57;
    v59 = (unsigned int *)(v26 + v58);
    if ( *(char *)(v26 + v58 + 3) < 0 )
    {
      v57 = *v59 & 0x7FFFFFFF;
      v28 = v57;
      v93 = 4LL * v57;
      v94 = (unsigned int *)(v26 + v93);
      if ( *(char *)(v26 + v93 + 3) < 0 )
      {
        v57 = *v94 & 0x7FFFFFFF;
        v97 = v57;
        v98 = v26 + 4LL * v57;
        if ( *(char *)(v98 + 3) < 0 )
        {
          v28 = *(_DWORD *)v98 & 0x7FFFFFFF;
          v103 = v28;
          v104 = v26 + 4LL * v28;
          if ( *(char *)(v104 + 3) < 0 )
          {
            v117 = *(_DWORD *)v104 & 0x7FFFFFFF;
            v118 = (char *)(v26 + 4LL * v117);
            if ( v118[3] < 0 )
            {
              v127 = *(_DWORD *)v118;
              v133 = v28;
              v128 = sub_16B5920(v27, v127 & 0x7FFFFFFF);
              v26 = *(_QWORD *)(a1 + 16);
              v103 = v133;
              *(_DWORD *)(v26 + 4 * v129) = v128 & 0x7FFFFFFF | *(_DWORD *)(v26 + 4 * v129) & 0x80000000;
              v28 = v128 & 0x7FFFFFFF;
            }
            else
            {
              v28 = v117;
            }
            *(_DWORD *)(v26 + 4 * v103) = v28 & 0x7FFFFFFF | *(_DWORD *)(v26 + 4 * v103) & 0x80000000;
          }
          v94 = (unsigned int *)(v26 + v93);
          v59 = (unsigned int *)(v26 + v58);
          v57 = v28 & 0x7FFFFFFF;
          *(_DWORD *)(v26 + 4 * v97) = v28 & 0x7FFFFFFF | *(_DWORD *)(v26 + 4 * v97) & 0x80000000;
          result = v26 + v32;
        }
        else
        {
          v28 = *v94 & 0x7FFFFFFF;
        }
        *v94 = v57 | *v94 & 0x80000000;
      }
      *v59 = v57 | *v59 & 0x80000000;
    }
    *(_DWORD *)result = *(_DWORD *)result & 0x80000000 | v57;
  }
  v33 = v28 == (_DWORD)v29;
  if ( v28 <= (unsigned int)v29 )
  {
    while ( !v33 )
    {
      LODWORD(v29) = *(_DWORD *)(v26 + 4 * v29) & 0x7FFFFFFF;
      v33 = (_DWORD)v29 == v28;
      if ( (unsigned int)v29 < v28 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    *(_QWORD *)v25 = a2;
    result = *(unsigned int *)(a1 + 1096);
    *((_DWORD *)v25 + 2) = result;
  }
  return result;
}
