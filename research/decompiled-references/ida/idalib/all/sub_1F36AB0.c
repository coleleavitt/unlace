__int64 __fastcall sub_1F36AB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r14
  bool v26; // r15
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // r10
  unsigned int v30; // r9d
  __int64 *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // esi
  __int64 v40; // rdx
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // esi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 result; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r14
  unsigned int v59; // esi
  unsigned __int64 v60; // r12
  int v61; // r15d
  int v62; // ebx
  int v63; // r14d
  unsigned __int64 v64; // r13
  __int64 v65; // r8
  int v66; // ecx
  __int64 v67; // rdx
  unsigned int v68; // r13d
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rdx
  unsigned __int64 v73; // r13
  __int64 v74; // rdx
  int v75; // r9d
  __int64 v76; // r8
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // rsi
  unsigned __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r9
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // r15
  unsigned int v92; // esi
  __int64 v93; // r9
  unsigned int v94; // edx
  __int64 *v95; // rax
  __int64 v96; // rdi
  int v97; // eax
  int v98; // r11d
  __int64 v99; // r10
  unsigned int v100; // ecx
  __int64 v101; // rsi
  __int64 v102; // r9
  int v103; // eax
  int v104; // r10d
  __int64 v105; // r11
  unsigned int v106; // ecx
  int v107; // edi
  __int64 *v108; // r9
  __int64 *v109; // r11
  __int64 *v110; // [rsp+0h] [rbp-68h]
  __int64 v111; // [rsp+0h] [rbp-68h]
  _QWORD *v112; // [rsp+0h] [rbp-68h]
  __int64 v113; // [rsp+0h] [rbp-68h]
  int v114; // [rsp+0h] [rbp-68h]
  int v115; // [rsp+0h] [rbp-68h]
  int v116; // [rsp+0h] [rbp-68h]
  unsigned __int8 v117; // [rsp+8h] [rbp-60h]
  __int64 *v118; // [rsp+8h] [rbp-60h]
  int v119; // [rsp+10h] [rbp-58h]
  int v120; // [rsp+10h] [rbp-58h]
  __int64 v121; // [rsp+18h] [rbp-50h] BYREF
  __int64 *v122; // [rsp+28h] [rbp-40h] BYREF

  v6 = a5;
  v121 = a3;
  v10 = a1[2];
  v11 = *(unsigned int *)(v10 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11);
  *(_BYTE *)a2 = ((unsigned __int8)((unsigned int)v12 >> 7) << 7) | v12 & 1 | (2 * (((unsigned int)v12 >> 1) & 0x3F));
  *(_BYTE *)(a2 + 1) = ((unsigned __int8)((unsigned int)v12 >> 15) << 7)
                     | (((v12 & 0x4000) != 0) << 6)
                     | (32 * ((v12 & 0x2000) != 0)) & 0x3F
                     | (16 * ((v12 & 0x1000) != 0)) & 0x3F
                     | (8 * ((v12 & 0x800) != 0)) & 0xF
                     | (4 * ((v12 & 0x400) != 0)) & 0xF
                     | (2 * ((v12 & 0x200) != 0)) & 3
                     | BYTE1(v12) & 1;
  *(_BYTE *)(a2 + 2) = ((unsigned __int8)((unsigned int)v12 >> 23) << 7)
                     | (((v12 & 0x400000) != 0) << 6)
                     | (32 * ((v12 & 0x200000) != 0)) & 0x3F
                     | (16 * ((v12 & 0x100000) != 0)) & 0x3F
                     | (8 * ((v12 & 0x80000) != 0)) & 0xF
                     | (4 * ((v12 & 0x40000) != 0)) & 0xF
                     | (2 * ((v12 & 0x20000) != 0)) & 3
                     | BYTE2(v12) & 1;
  *(_BYTE *)(a2 + 3) = (32 * ((v12 & 0x20000000) != 0)) & 0xBF
                     | (16 * ((v12 & 0x10000000) != 0)) & 0xBF
                     | (8 * ((v12 & 0x8000000) != 0)) & 0x8F
                     | (4 * ((v12 & 0x4000000) != 0)) & 0x8F
                     | (2 * ((v12 & 0x2000000) != 0)) & 0x83
                     | BYTE3(v12) & 1
                     | *(_BYTE *)(a2 + 3) & 0x80
                     | (((v12 & 0x40000000) != 0) << 6);
  v13 = a1[2];
  v14 = *(unsigned int *)(v13 + 24);
  *(_DWORD *)(v13 + 24) = v14 + 1;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14);
  *(_BYTE *)(a2 + 3) = ((_BYTE)v15 << 7) | *(_BYTE *)(a2 + 3) & 0x7F;
  *(_BYTE *)(a2 + 4) = (((v15 & 0x80) != 0) << 6)
                     | (32 * ((v15 & 0x40) != 0)) & 0xBF
                     | (16 * ((v15 & 0x20) != 0)) & 0xBF
                     | (8 * ((v15 & 0x10) != 0)) & 0x8F
                     | (4 * ((v15 & 8) != 0)) & 0x8F
                     | (2 * ((v15 & 4) != 0)) & 0x83
                     | ((v15 & 2) != 0)
                     | *(_BYTE *)(a2 + 4) & 0x80;
  *(_WORD *)(a2 + 4) = ((((unsigned int)v15 >> 8) & 0x3F) << 7) | *(_WORD *)(a2 + 4) & 0xE07F;
  LODWORD(v14) = ((unsigned int)v15 >> 1) & 0x7E000 | *(_DWORD *)(a2 + 4) & 0xFFF81FFF;
  *(_DWORD *)(a2 + 4) = v14;
  *(_WORD *)(a2 + 6) = WORD1(v14) & 0xFE07 | (8 * (((unsigned int)v15 >> 20) & 0x3F));
  v16 = a1[2];
  v17 = *(unsigned int *)(v16 + 24);
  *(_DWORD *)(v16 + 24) = v17 + 1;
  v18 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17);
  *(_BYTE *)(a2 + 7) = ((unsigned __int8)((unsigned int)v18 >> 6) << 7) | (2 * (v18 & 0x3F)) | *(_BYTE *)(a2 + 7) & 1;
  *(_BYTE *)(a2 + 8) = ((unsigned __int8)((unsigned int)v18 >> 14) << 7)
                     | (((v18 & 0x2000) != 0) << 6)
                     | (32 * ((v18 & 0x1000) != 0)) & 0x3F
                     | (16 * ((v18 & 0x800) != 0)) & 0x3F
                     | (8 * ((v18 & 0x400) != 0)) & 0xF
                     | (4 * ((v18 & 0x200) != 0)) & 0xF
                     | (2 * (BYTE1(v18) & 1)) & 3
                     | ((v18 & 0x80) != 0);
  *(_BYTE *)(a2 + 9) = ((unsigned __int8)((unsigned int)v18 >> 22) << 7)
                     | ((unsigned int)v18 >> 15) & 0x3F
                     | (((v18 & 0x200000) != 0) << 6);
  *(_BYTE *)(a2 + 10) = (8 * ((v18 & 0x4000000) != 0)) & 0xEF
                      | (4 * ((v18 & 0x2000000) != 0)) & 0xEF
                      | (2 * (BYTE3(v18) & 1)) & 0xE3
                      | ((v18 & 0x800000) != 0)
                      | *(_BYTE *)(a2 + 10) & 0xE0
                      | (16 * ((v18 & 0x8000000) != 0));
  v19 = a1[2];
  v20 = *(unsigned int *)(v19 + 24);
  v21 = (unsigned int)(v20 + 1);
  *(_DWORD *)(v19 + 24) = v21;
  v22 = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 8 * v20);
  *(_BYTE *)(a2 + 11) |= 1u;
  *(_DWORD *)(a2 + 12) = v22;
  v23 = a1[2];
  v24 = *(unsigned int *)(v23 + 24);
  *(_DWORD *)(v23 + 24) = v24 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v23 + 32) + 8 * v24) )
  {
    v25 = *a1;
    v26 = 1;
    if ( *(_DWORD *)(a1[3] + 4) != 4 )
      v26 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 144) + 2320LL) + 21LL) & 0x40) != 0;
    v27 = *(_DWORD *)(v25 + 13264);
    v28 = v121;
    v110 = (__int64 *)(v25 + 13248);
    if ( !v27 )
      goto LABEL_47;
    v29 = *(_QWORD *)(v25 + 13248);
    v21 = ((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4);
    v30 = (v27 - 1) & (((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4));
    v31 = (__int64 *)(v29 + 16LL * v30);
    v32 = *v31;
    if ( v121 == *v31 )
    {
LABEL_6:
      *((_BYTE *)v31 + 8) = v26;
      goto LABEL_7;
    }
    if ( v32 != -4096 )
    {
      v120 = 1;
      v118 = nullptr;
      while ( 1 )
      {
        if ( !v118 )
        {
          if ( v32 != -8192 )
            v31 = nullptr;
          v118 = v31;
        }
        v30 = (v27 - 1) & (v120 + v30);
        v31 = (__int64 *)(v29 + 16LL * v30);
        v32 = *v31;
        if ( v121 == *v31 )
          goto LABEL_6;
        if ( v32 == -4096 )
          break;
        ++v120;
      }
      v21 = (unsigned int)v21;
      if ( v118 )
        v31 = v118;
    }
    a6 = 3 * v27;
    a5 = (unsigned int)(*(_DWORD *)(v25 + 13256) + 1);
    if ( 4 * (int)a5 < (unsigned int)a6 )
    {
      v102 = v27 - *(_DWORD *)(v25 + 13260) - (unsigned int)a5;
      if ( (unsigned int)v102 > v27 >> 3 )
      {
        v101 = *v31;
        goto LABEL_49;
      }
      v119 = v21;
      sub_1F36030(v110, v27, v121, v21, a5, v102);
      v103 = *(_DWORD *)(v25 + 13264);
      if ( v103 )
      {
        v104 = v103 - 1;
        v105 = *(_QWORD *)(v25 + 13248);
        v28 = v121;
        v106 = (v103 - 1) & v119;
        LODWORD(a5) = *(_DWORD *)(v25 + 13256) + 1;
        v23 = a1[2];
        v31 = (__int64 *)(v105 + 16LL * v106);
        v101 = *v31;
        if ( v121 == *v31 )
        {
LABEL_49:
          *(_DWORD *)(v25 + 13256) = a5;
          if ( v101 != -4096 )
            --*(_DWORD *)(v25 + 13260);
          goto LABEL_51;
        }
        if ( v101 != -4096 )
        {
          v116 = 1;
          v108 = nullptr;
          while ( 1 )
          {
            if ( v101 == -8192 && !v108 )
              v108 = v31;
            v106 = v104 & (v116 + v106);
            v31 = (__int64 *)(v105 + 16LL * v106);
            v101 = *v31;
            if ( v121 == *v31 )
              goto LABEL_49;
            if ( v101 == -4096 )
              goto LABEL_88;
            ++v116;
          }
        }
LABEL_61:
        *(_DWORD *)(v25 + 13256) = a5;
LABEL_51:
        *v31 = v28;
        *((_BYTE *)v31 + 8) = 0;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_47:
      sub_1F36030(v110, 2 * v27, v121, v21, a5, a6);
      v97 = *(_DWORD *)(v25 + 13264);
      if ( v97 )
      {
        v28 = v121;
        v98 = v97 - 1;
        v99 = *(_QWORD *)(v25 + 13248);
        LODWORD(a5) = *(_DWORD *)(v25 + 13256) + 1;
        v23 = a1[2];
        v100 = (v97 - 1) & (((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4));
        v31 = (__int64 *)(v99 + 16LL * v100);
        v101 = *v31;
        if ( v121 == *v31 )
          goto LABEL_49;
        if ( v101 != -4096 )
        {
          v114 = 1;
          v108 = nullptr;
          while ( 1 )
          {
            if ( !v108 && v101 == -8192 )
              v108 = v31;
            v100 = v98 & (v114 + v100);
            v31 = (__int64 *)(v99 + 16LL * v100);
            v101 = *v31;
            if ( v121 == *v31 )
              goto LABEL_49;
            if ( v101 == -4096 )
            {
LABEL_88:
              if ( !v108 )
                goto LABEL_61;
              v101 = *v108;
              v31 = v108;
              goto LABEL_49;
            }
            ++v114;
          }
        }
        goto LABEL_61;
      }
    }
    ++*(_DWORD *)(v25 + 13256);
    BUG();
  }
LABEL_7:
  sub_1EE1420(v23, a2 + 40);
  v34 = a1[2];
  v35 = *(unsigned int *)(v34 + 24);
  *(_DWORD *)(v34 + 24) = v35 + 1;
  v36 = ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(v34 + 32) + 8 * v35) << 7) | *(_BYTE *)(a2 + 10) & 0x7F;
  *(_BYTE *)(a2 + 10) = v36;
  if ( v36 < 0 )
  {
    sub_1EE1420(a1[2], a2 + 64);
    v36 = *(_BYTE *)(a2 + 10);
  }
  v37 = a1[2];
  v38 = *(unsigned int *)(v37 + 24);
  v39 = v38 + 1;
  v40 = *(_QWORD *)(*(_QWORD *)(v37 + 32) + 8 * v38);
  *(_DWORD *)(v37 + 24) = v39;
  if ( (v36 & 0x20) == 0 )
  {
    v41 = (_DWORD)v40 == 0;
    *(_DWORD *)(a2 + 16) = v40;
    v42 = a1[2];
    if ( v41 )
    {
      v43 = *(unsigned int *)(v42 + 24);
      v44 = *(_QWORD *)(v42 + 32);
    }
    else
    {
      v78 = *(unsigned int *)(v42 + 24);
      v44 = *(_QWORD *)(v42 + 32);
      v43 = (unsigned int)(v78 + 1);
      v79 = *(_QWORD *)(v44 + 8 * v78);
      *(_DWORD *)(v42 + 24) = v43;
      if ( v79 && (v80 = a1[4] - v79) != 0 && (v81 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 432LL) + v80) != 0 )
      {
        *(_QWORD *)(a2 + 24) = 2 * v81 + 1;
      }
      else
      {
        *(_QWORD *)(a2 + 24) = 0;
        v44 = *(_QWORD *)(v42 + 32);
      }
    }
    v45 = v43 + 1;
    v46 = *(_QWORD *)(v44 + 8 * v43);
    *(_DWORD *)(v42 + 24) = v45;
    v41 = (_DWORD)v46 == 0;
    *(_DWORD *)(a2 + 20) = v46;
    v47 = a1[2];
    if ( v41 )
    {
      v48 = *(_QWORD *)(v47 + 16);
    }
    else
    {
      v87 = *(unsigned int *)(v47 + 24);
      v48 = *(_QWORD *)(v47 + 16);
      *(_DWORD *)(v47 + 24) = v87 + 1;
      v88 = *(_QWORD *)(*(_QWORD *)(v47 + 32) + 8 * v87);
      if ( v88 && (v89 = a1[4] - v88) != 0 && (v90 = *(_QWORD *)(v48 + 432) + v89) != 0 )
        *(_QWORD *)(a2 + 32) = 2 * v90 + 1;
      else
        *(_QWORD *)(a2 + 32) = 0;
    }
    result = sub_1EE13A0(*(_QWORD *)(v47 + 8), v48, (__int64 *)(v47 + 32), (_DWORD *)(v47 + 24));
    if ( result )
    {
      result = 2 * result + 1;
      *(_QWORD *)(a2 + 96) = result;
    }
    else
    {
      *(_QWORD *)(a2 + 96) = 0;
    }
    return result;
  }
  *(_BYTE *)(a2 + 104) = (8 * (((unsigned int)v40 >> 3) & 3))
                       | (4 * ((v40 & 4) != 0)) & 0xE7
                       | v40 & 3
                       | *(_BYTE *)(a2 + 104) & 0xE0;
  *(_DWORD *)(a2 + 104) = v40 & 0xFFFE0 | *(_DWORD *)(a2 + 104) & 0xFFF0001F;
  *(_BYTE *)(a2 + 108) = *(_BYTE *)(a2 + 108) & 0xFE | ((v40 & 0x100000) != 0);
  v50 = a1[2];
  v51 = *(unsigned int *)(v50 + 24);
  *(_DWORD *)(v50 + 24) = v51 + 1;
  *(_WORD *)(a2 + 106) = (16 * *(_QWORD *)(*(_QWORD *)(v50 + 32) + 8 * v51)) | *(_WORD *)(a2 + 106) & 0xF;
  v52 = a1[2];
  v53 = *(unsigned int *)(v52 + 24);
  *(_DWORD *)(v52 + 24) = v53 + 1;
  *(_DWORD *)(a2 + 108) = (2 * *(_QWORD *)(*(_QWORD *)(v52 + 32) + 8 * v53)) | *(_DWORD *)(a2 + 108) & 1;
  v54 = a1[2];
  v55 = *(unsigned int *)(v54 + 24);
  v56 = (unsigned int)(v55 + 1);
  *(_DWORD *)(v54 + 24) = v56;
  v57 = *(_QWORD *)(v54 + 32);
  v58 = *(_QWORD *)(v57 + 8 * v55);
  if ( (_DWORD)v58 )
  {
    v91 = *(_QWORD *)(*a1 + 144);
    v92 = *(_DWORD *)(v91 + 2168);
    if ( v92 )
    {
      v56 = v121;
      v93 = *(_QWORD *)(v91 + 2152);
      v94 = (v92 - 1) & (((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4));
      v95 = (__int64 *)(v93 + 16LL * v94);
      v96 = *v95;
      if ( *v95 == v121 )
      {
LABEL_46:
        *((_DWORD *)v95 + 2) = v58;
        goto LABEL_18;
      }
      if ( v96 != -4096 )
      {
        v115 = 1;
        v109 = nullptr;
        while ( 1 )
        {
          if ( !v109 && v96 == -8192 )
            v109 = v95;
          v94 = (v92 - 1) & (v115 + v94);
          v95 = (__int64 *)(v93 + 16LL * v94);
          v96 = *v95;
          if ( v121 == *v95 )
            goto LABEL_46;
          if ( v96 == -4096 )
          {
            if ( v109 )
              v95 = v109;
            break;
          }
          ++v115;
        }
      }
      v107 = *(_DWORD *)(v91 + 2160);
      v122 = v95;
      v57 = (unsigned int)(v107 + 1);
      v33 = (unsigned int)(4 * v57);
      if ( (unsigned int)v33 < 3 * v92 )
      {
        v33 = v92 >> 3;
        if ( v92 - *(_DWORD *)(v91 + 2164) - (unsigned int)v57 > (unsigned int)v33 )
        {
LABEL_65:
          v41 = *v95 == -4096;
          *(_DWORD *)(v91 + 2160) = v57;
          if ( !v41 )
            --*(_DWORD *)(v91 + 2164);
          *v95 = v56;
          *((_DWORD *)v95 + 2) = 0;
          goto LABEL_46;
        }
LABEL_70:
        sub_BA5420((__int64 *)(v91 + 2152), v92, v57, v56, v91 + 2152, v33);
        sub_B9B690((__int64 *)(v91 + 2152), &v121, &v122);
        v56 = v121;
        LODWORD(v57) = *(_DWORD *)(v91 + 2160) + 1;
        v95 = v122;
        goto LABEL_65;
      }
    }
    else
    {
      v122 = nullptr;
    }
    v92 *= 2;
    goto LABEL_70;
  }
LABEL_18:
  v59 = *(_DWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 120) = a4;
  v60 = 0;
  *(_DWORD *)(a2 + 112) = v6;
  if ( (v59 & 0xFFFE0) != 0 )
  {
    v60 = sub_1F21B20((__int64 *)(*(_QWORD *)(*a1 + 144) + 2352LL), 16LL * ((v59 >> 5) & 0x7FFF), 3u);
    sub_B96DD0(a2, *(_QWORD *)(*a1 + 144), v60);
  }
  v61 = 0;
  result = (__int64)sub_1F19370(a1[2]);
  *(_QWORD *)(a2 + 136) = result;
  v62 = (*(_DWORD *)(a2 + 104) >> 5) & 0x7FFF;
  if ( v62 )
  {
    while ( 1 )
    {
      result = a1[2];
      v69 = *(unsigned int *)(result + 24);
      v65 = *(_QWORD *)(result + 16);
      v70 = *(_QWORD *)(result + 32);
      v71 = *(_QWORD *)(result + 8);
      v72 = (unsigned int)(v69 + 1);
      v41 = *(_QWORD *)(v65 + 856) == 0;
      *(_DWORD *)(result + 24) = v72;
      v73 = *(_QWORD *)(v70 + 8 * v69);
      if ( !v41 )
      {
        v111 = v65;
        sub_1EDF870(v71, v65);
        result = a1[2];
        v65 = v111;
        v72 = *(unsigned int *)(result + 24);
        v70 = *(_QWORD *)(result + 32);
      }
      v63 = __ROR4__(v73, 1);
      v64 = HIDWORD(v73);
      if ( v64 )
        v65 = *(_QWORD *)(*(_QWORD *)(v65 + 3320) + 8LL * (unsigned int)(v64 - 1));
      if ( v63 )
        v63 = v63 + *(_DWORD *)(v65 + 1648) - 2;
      v66 = v72 + 1;
      v67 = *(_QWORD *)(v70 + 8 * v72);
      *(_DWORD *)(result + 24) = v66;
      v68 = ((unsigned int)v67 >> 1) & 7;
      if ( v68 > 4 )
        goto LABEL_29;
      if ( ((1LL << v68) & 0x13) != 0 )
        break;
      if ( ((1LL << v68) & 0xC) != 0 )
      {
        v117 = v67 & 1;
        v112 = *(_QWORD **)(result + 8);
        v82 = sub_1EE13A0((__int64)v112, *(_QWORD *)(result + 16), (__int64 *)(result + 32), (_DWORD *)(result + 24));
        v113 = sub_1EDB980(v112, v82, v83, v84, (__int64)v112, v85);
        v86 = sub_1EE7490(a1[2]);
        v74 = v117;
        v76 = v113;
        v75 = v86;
        goto LABEL_33;
      }
LABEL_29:
      if ( v62 == ++v61 )
        return result;
    }
    v74 = v67 & 1;
    v75 = 0;
    v76 = 0;
LABEL_33:
    v77 = v60;
    v60 += 16LL;
    result = sub_C94E00(v77, v63, v74, v68, v76, v75);
    goto LABEL_29;
  }
  return result;
}
