unsigned __int64 __fastcall sub_7CE1C0(_QWORD *a1, char *a2)
{
  __int64 v2; // r15
  __int64 v4; // rbp
  unsigned int v5; // eax
  char *v6; // rax
  _BYTE *v7; // rdi
  size_t v8; // rdx
  size_t v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  _WORD *v18; // rdx
  int v19; // ebp
  int v20; // r13d
  __int64 v21; // rdi
  _WORD *v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // r13
  _BYTE *v33; // rax
  unsigned __int8 v34; // al
  unsigned int *v35; // r12
  __int64 v36; // r14
  __int64 v37; // rdi
  _WORD *v38; // rdx
  __int64 v39; // rdx
  unsigned __int8 v40; // al
  unsigned int *v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  char *v53; // rsi
  __int64 v54; // rdi
  _WORD *v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  _DWORD *v59; // rdx
  __int64 v60; // rdi
  int v61; // eax
  __int64 v62; // rdi
  __int64 v63; // r14
  __int64 v64; // rbp
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  _DWORD *v67; // rdx
  __int64 v68; // rdi
  int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // r12
  __int64 v72; // rbp
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  _DWORD *v75; // rdx
  __int64 v76; // rdi
  int v77; // eax
  __int64 v78; // r13
  _DWORD *v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdi
  _WORD *v83; // rdx
  unsigned __int8 v84; // al
  char v85; // al
  unsigned __int64 v86; // rdx
  __int64 v87; // rdi
  _QWORD *v88; // rax
  __int64 v89; // rdi
  _BYTE *v90; // rax
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r12
  __int64 v95; // rdi
  unsigned __int64 v96; // rax
  _QWORD *v97; // rdi
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rdi
  _QWORD *v101; // rdx
  __int64 v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rdi
  _BYTE *v105; // rax
  unsigned __int64 v106; // r9
  __int64 v107; // rax
  unsigned int v108; // r8d
  unsigned int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // rax
  int v112; // edx
  _QWORD *v113; // rdx
  __int64 v114; // r13
  _QWORD *v115; // rdx
  __int64 v116; // r12
  _QWORD *v117; // rdx
  __int64 v118; // r12
  __int64 v119; // rcx
  unsigned int *v120; // r12
  __int64 i; // r14
  __int64 v122; // rdi
  _WORD *v123; // rdx
  unsigned int *v124; // rdi
  __int64 v125; // [rsp+0h] [rbp-88h]
  __int64 v126; // [rsp+18h] [rbp-70h]
  unsigned __int64 v127; // [rsp+28h] [rbp-60h] BYREF
  void *v128[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v129; // [rsp+40h] [rbp-48h] BYREF

  v2 = (__int64)a2;
  if ( (*((_BYTE *)a1 + 9) & 1) == 0 && (*((_QWORD *)a2 + 1) & 7LL) == 4 )
  {
    v50 = *a1;
    v51 = *(_QWORD *)(v50 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v50 + 24) - v51) <= 0x12 )
    {
      a2 = "__module_private__ ";
      sub_26240F0(v50, "__module_private__ ", 19);
    }
    else
    {
      *(__m128i *)v51 = _mm_load_si128((const __m128i *)&xmmword_3C7E8C0);
      *(_DWORD *)(v51 + 15) = 543121253;
      *(_QWORD *)(v50 + 32) += 19LL;
    }
  }
  v4 = *a1;
  v5 = sub_B08AA0(*(_BYTE *)(v2 + 73) >> 5);
  v6 = (char *)sub_B08AC0(v5);
  v7 = *(_BYTE **)(v4 + 32);
  v9 = v8;
  v10 = *(_QWORD *)(v4 + 24);
  if ( v10 - (unsigned __int64)v7 < v9 )
  {
    a2 = v6;
    v43 = sub_26240F0(v4, v6, v9);
    v10 = *(_QWORD *)(v43 + 24);
    v7 = *(_BYTE **)(v43 + 32);
    v4 = v43;
LABEL_5:
    if ( (unsigned __int64)v7 < v10 )
      goto LABEL_6;
LABEL_27:
    a2 = (char *)&qword_20;
    sub_26239D0(v4, 32);
    if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
      goto LABEL_7;
    goto LABEL_28;
  }
  if ( !v9 )
    goto LABEL_5;
  a2 = v6;
  memcpy(v7, v6, v9);
  v23 = *(_QWORD *)(v4 + 24);
  v7 = (_BYTE *)(v9 + *(_QWORD *)(v4 + 32));
  *(_QWORD *)(v4 + 32) = v7;
  if ( (unsigned __int64)v7 >= v23 )
    goto LABEL_27;
LABEL_6:
  *(_QWORD *)(v4 + 32) = v7 + 1;
  *v7 = 32;
  if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
  {
LABEL_7:
    result = *(_QWORD *)(v2 + 40);
    if ( (result & 7) != 0 || result <= 7 )
      goto LABEL_9;
    goto LABEL_35;
  }
LABEL_28:
  a2 = (char *)v2;
  if ( (unsigned __int8)sub_7C2320((__int64)a1, v2, 1) )
  {
    v24 = *a1;
    v25 = *(_BYTE **)(*a1 + 32LL);
    if ( (unsigned __int64)v25 >= *(_QWORD *)(*a1 + 24LL) )
    {
      a2 = (char *)&qword_20;
      sub_26239D0(v24, 32);
    }
    else
    {
      *(_QWORD *)(v24 + 32) = v25 + 1;
      *v25 = 32;
    }
  }
  result = *(_QWORD *)(v2 + 40);
  if ( (result & 7) != 0 || result <= 7 )
    goto LABEL_33;
LABEL_35:
  v26 = *(_QWORD *)(v2 + 120);
  if ( (v26 & 4) != 0 )
  {
    v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v27 )
      sub_A7B4E0(v27, *a1, a1 + 1, 0);
  }
  a2 = (char *)*a1;
  sub_77A870(v2, *a1);
  result = (*(_BYTE *)(v2 + 28) & 0x7Fu) - 58;
  if ( (unsigned int)result > 1 )
    goto LABEL_33;
  v125 = *(_QWORD *)(sub_7D65F0(v2) + 56);
  v28 = *(_QWORD *)(v2 + 160);
  if ( !v28 )
    goto LABEL_42;
  v29 = v28 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v28 & 4) != 0 )
  {
    if ( !v29 )
      goto LABEL_42;
    v29 = *(_QWORD *)v29;
  }
  if ( !v29 || (*((_BYTE *)a1 + 13) & 1) != 0 )
  {
LABEL_42:
    v30 = *(unsigned int **)(v2 + 168);
    v31 = *a1;
    v32 = *v30;
    v33 = *(_BYTE **)(*a1 + 32LL);
    if ( *(_BYTE **)(*a1 + 24LL) == v33 )
    {
      a2 = "<";
      sub_26240F0(v31, "<", 1);
    }
    else
    {
      *v33 = 60;
      ++*(_QWORD *)(v31 + 32);
    }
    if ( v32 )
    {
      if ( v125 )
      {
        v34 = sub_7D2C40(a1 + 1, v125, 0);
        a2 = (char *)(a1 + 1);
        sub_AFE2C0(v30 + 2, a1 + 1, *a1, v34);
        if ( v32 != 1 )
        {
          v35 = v30 + 8;
          v36 = 1;
          do
          {
            v37 = *a1;
            v38 = *(_WORD **)(*a1 + 32LL);
            if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v38 <= 1u )
            {
              sub_26240F0(v37, ", ", 2);
            }
            else
            {
              *v38 = 8236;
              *(_QWORD *)(v37 + 32) += 2LL;
            }
            v39 = (unsigned int)v36++;
            v40 = sub_7D2C40(a1 + 1, v125, v39);
            v41 = v35;
            a2 = (char *)(a1 + 1);
            v35 += 6;
            sub_AFE2C0(v41, a1 + 1, *a1, v40);
          }
          while ( v32 != v36 );
        }
      }
      else
      {
        a2 = (char *)(a1 + 1);
        sub_AFE2C0(v30 + 2, a1 + 1, *a1, 1);
        if ( v32 != 1 )
        {
          v120 = v30 + 8;
          for ( i = 1; i != v32; ++i )
          {
            v122 = *a1;
            v123 = *(_WORD **)(*a1 + 32LL);
            if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v123 <= 1u )
            {
              sub_26240F0(v122, ", ", 2);
            }
            else
            {
              *v123 = 8236;
              *(_QWORD *)(v122 + 32) += 2LL;
            }
            v124 = v120;
            a2 = (char *)(a1 + 1);
            v120 += 6;
            sub_AFE2C0(v124, a1 + 1, *a1, 1);
          }
        }
      }
    }
    v42 = *a1;
    result = *(_QWORD *)(*a1 + 32LL);
    if ( *(_QWORD *)(*a1 + 24LL) == result )
    {
      a2 = ">";
      result = sub_26240F0(v42, ">", 1);
    }
    else
    {
      *(_BYTE *)result = 62;
      ++*(_QWORD *)(v42 + 32);
    }
    goto LABEL_33;
  }
  a2 = (char *)(v29 + 16);
  result = (unsigned __int64)sub_7C2900(a1, v29 + 16, *(unsigned int *)(v29 + 8), v125);
LABEL_33:
  if ( (*(_BYTE *)(v2 + 29) & 1) != 0 )
  {
    a2 = (char *)v2;
    result = sub_7C2320((__int64)a1, v2, 2);
  }
LABEL_9:
  if ( (*(_BYTE *)(v2 + 74) & 1) == 0 )
    return result;
  v12 = *a1;
  v13 = *(_BYTE **)(*a1 + 32LL);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 24LL) )
  {
    a2 = (char *)&qword_20;
    sub_26239D0(v12, 32);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v13 + 1;
    *v13 = 32;
  }
  v14 = *(_QWORD *)(v2 + 104);
  v15 = *(_QWORD *)(v14 + 96);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_14;
  }
  else
  {
    if ( v16 <= 3 || (v15 & 2) == 0 )
      goto LABEL_14;
    v44 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    v45 = v44[2275];
    if ( !v45 )
    {
      *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_14;
    }
    v46 = v44[274];
    v44[284] += 24LL;
    v16 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = (char *)(v16 + 24);
    if ( v44[275] >= v16 + 24 && v46 )
    {
      v44[274] = a2;
    }
    else
    {
      a2 = (char *)&qword_18;
      v16 = sub_7C2590((__int64)(v44 + 274), 24, 3);
    }
    *(_QWORD *)v16 = v45;
    v15 = v16 | 5;
    *(_DWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = v14;
    *(_QWORD *)(v14 + 96) = v16 | 5;
    LOBYTE(v16) = v16 & 0xFA | 4;
  }
  if ( (v16 & 4) != 0 )
  {
    v47 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v47 )
    {
      v48 = *(_QWORD *)v47;
      v49 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
      if ( v47[2] != v49 )
      {
        v47[2] = v49;
        a2 = (char *)v14;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 144LL))(v48, v14);
      }
    }
  }
LABEL_14:
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 128) + 16LL) )
    goto LABEL_15;
  v54 = *a1;
  v55 = *(_WORD **)(*a1 + 32LL);
  if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v55 <= 1u )
  {
    a2 = ": ";
    sub_26240F0(v54, ": ", 2);
  }
  else
  {
    *v55 = 8250;
    *(_QWORD *)(v54 + 32) += 2LL;
  }
  v56 = *(_QWORD *)(v2 + 104);
  v57 = *(_QWORD *)(v56 + 96);
  v58 = v57 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v57 & 1) != 0 )
  {
    if ( !v58 )
      goto LABEL_82;
  }
  else
  {
    if ( v58 <= 3 || (v57 & 2) == 0 )
      goto LABEL_82;
    v117 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
    v118 = v117[2275];
    if ( !v118 )
    {
      *(_QWORD *)(v56 + 96) = v56 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_82;
    }
    v119 = v117[274];
    v117[284] += 24LL;
    v58 = (v119 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = (char *)(v58 + 24);
    if ( v117[275] >= v58 + 24 && v119 )
    {
      v117[274] = a2;
    }
    else
    {
      a2 = (char *)&qword_18;
      v58 = sub_7C2590((__int64)(v117 + 274), 24, 3);
    }
    *(_QWORD *)v58 = v118;
    *(_DWORD *)(v58 + 8) = 0;
    v57 = v58 | 5;
    *(_QWORD *)(v58 + 16) = v56;
    *(_QWORD *)(v56 + 96) = v58 | 5;
    LOBYTE(v58) = v58 & 0xFA | 4;
  }
  if ( (v58 & 4) != 0 )
  {
    v59 = (_DWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v59 )
    {
      v60 = *(_QWORD *)v59;
      v61 = *(_DWORD *)(*(_QWORD *)v59 + 12LL);
      if ( v59[2] != v61 )
      {
        v59[2] = v61;
        a2 = (char *)v56;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 144LL))(v60, v56);
      }
    }
  }
LABEL_82:
  v62 = *(_QWORD *)(v2 + 128);
  if ( (*(_BYTE *)(v62 + 24) & 1) != 0 )
    v63 = sub_7A2E20(v62);
  else
    v63 = *(_QWORD *)(v62 + 24);
  v64 = *(_QWORD *)(v2 + 104);
  v65 = *(_QWORD *)(v64 + 96);
  v66 = v65 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v65 & 1) != 0 )
  {
    if ( !v66 )
      goto LABEL_90;
  }
  else
  {
    if ( v66 <= 3 || (v65 & 2) == 0 )
      goto LABEL_90;
    v115 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
    v116 = v115[2275];
    if ( !v116 )
    {
      *(_QWORD *)(v64 + 96) = v64 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_90;
    }
    a2 = (char *)v115[274];
    v115[284] += 24LL;
    v66 = (unsigned __int64)(a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v115[275] >= v66 + 24 && a2 )
    {
      v115[274] = v66 + 24;
    }
    else
    {
      a2 = (char *)&qword_18;
      v66 = sub_7C2590((__int64)(v115 + 274), 24, 3);
    }
    *(_QWORD *)v66 = v116;
    *(_DWORD *)(v66 + 8) = 0;
    v65 = v66 | 5;
    *(_QWORD *)(v66 + 16) = v64;
    *(_QWORD *)(v64 + 96) = v66 | 5;
    LOBYTE(v66) = v66 & 0xFA | 4;
  }
  if ( (v66 & 4) != 0 )
  {
    v67 = (_DWORD *)(v65 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v67 )
    {
      v68 = *(_QWORD *)v67;
      v69 = *(_DWORD *)(*(_QWORD *)v67 + 12LL);
      if ( v67[2] != v69 )
      {
        v67[2] = v69;
        a2 = (char *)v64;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 144LL))(v68, v64);
      }
    }
  }
LABEL_90:
  v70 = *(_QWORD *)(v2 + 128);
  if ( (*(_BYTE *)(v70 + 24) & 1) != 0 )
    v71 = sub_7A2E20(v70);
  else
    v71 = *(_QWORD *)(v70 + 24);
  v72 = *(_QWORD *)(v2 + 104);
  v73 = *(_QWORD *)(v72 + 96);
  v74 = v73 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v73 & 1) != 0 )
  {
    if ( !v74 )
      goto LABEL_98;
  }
  else
  {
    if ( v74 <= 3 || (v73 & 2) == 0 )
      goto LABEL_98;
    v113 = (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
    v114 = v113[2275];
    if ( !v114 )
    {
      *(_QWORD *)(v72 + 96) = v72 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_98;
    }
    a2 = (char *)v113[274];
    v113[284] += 24LL;
    v74 = (unsigned __int64)(a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v113[275] >= v74 + 24 && a2 )
    {
      v113[274] = v74 + 24;
    }
    else
    {
      a2 = (char *)&qword_18;
      v74 = sub_7C2590((__int64)(v113 + 274), 24, 3);
    }
    *(_QWORD *)v74 = v114;
    *(_DWORD *)(v74 + 8) = 0;
    v73 = v74 | 5;
    *(_QWORD *)(v74 + 16) = v72;
    *(_QWORD *)(v72 + 96) = v74 | 5;
    LOBYTE(v74) = v74 & 0xFA | 4;
  }
  if ( (v74 & 4) != 0 )
  {
    v75 = (_DWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v75 )
    {
      v76 = *(_QWORD *)v75;
      v77 = *(_DWORD *)(*(_QWORD *)v75 + 12LL);
      if ( v75[2] != v77 )
      {
        v75[2] = v77;
        a2 = (char *)v72;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 144LL))(v76, v72);
      }
    }
  }
LABEL_98:
  v78 = v71 + 24LL * *(unsigned int *)(*(_QWORD *)(v2 + 128) + 16LL);
  if ( v78 != v63 )
  {
    while ( 1 )
    {
      v94 = *(_QWORD *)(v2 + 104);
      v95 = *(_QWORD *)(v94 + 96);
      v96 = v95 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v95 & 1) != 0 )
      {
        if ( !v96 )
          goto LABEL_103;
      }
      else
      {
        if ( v96 <= 3 || (v95 & 2) == 0 )
          goto LABEL_103;
        v97 = (_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL);
        v98 = v97[2275];
        if ( !v98 )
        {
          *(_QWORD *)(v94 + 96) = v94 & 0xFFFFFFFFFFFFFFFALL | 1;
          goto LABEL_103;
        }
        v99 = v97[274];
        v97[284] += 24LL;
        v96 = (v99 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        a2 = (char *)(v96 + 24);
        if ( v97[275] >= v96 + 24 && v99 )
        {
          v97[274] = a2;
        }
        else
        {
          a2 = (char *)&qword_18;
          v126 = v98;
          v96 = sub_7C2590((__int64)(v97 + 274), 24, 3);
          v98 = v126;
        }
        *(_QWORD *)v96 = v98;
        *(_DWORD *)(v96 + 8) = 0;
        v95 = v96 | 5;
        *(_QWORD *)(v96 + 16) = v94;
        *(_QWORD *)(v94 + 96) = v96 | 5;
        LOBYTE(v96) = v96 & 0xFA | 4;
      }
      if ( (v96 & 4) != 0 )
      {
        v79 = (_DWORD *)(v95 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v79 )
        {
          v111 = *(_QWORD *)v79;
          v112 = *(_DWORD *)(*(_QWORD *)v79 + 12LL);
          if ( v79[2] != v112 )
          {
            v79[2] = v112;
            a2 = (char *)v94;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v111 + 144LL))(v111, v94);
          }
        }
      }
LABEL_103:
      v80 = *(_QWORD *)(v2 + 128);
      if ( (*(_BYTE *)(v80 + 24) & 1) != 0 )
        v81 = sub_7A2E20(v80);
      else
        v81 = *(_QWORD *)(v80 + 24);
      if ( v81 != v63 )
      {
        v82 = *a1;
        v83 = *(_WORD **)(*a1 + 32LL);
        if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v83 <= 1u )
        {
          a2 = ", ";
          sub_26240F0(v82, ", ", 2);
        }
        else
        {
          *v83 = 8236;
          *(_QWORD *)(v82 + 32) += 2LL;
        }
      }
      v84 = *(_BYTE *)(v63 + 12);
      if ( (v84 & 1) != 0 )
      {
        v100 = *a1;
        v101 = *(_QWORD **)(*a1 + 32LL);
        if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v101 <= 7u )
        {
          a2 = "virtual ";
          sub_26240F0(v100, "virtual ", 8);
        }
        else
        {
          *v101 = 0x206C617574726976LL;
          *(_QWORD *)(v100 + 32) += 8LL;
        }
        v84 = *(_BYTE *)(v63 + 12);
      }
      v85 = (v84 >> 2) & 3;
      if ( v85 != 3 )
      {
        v86 = 9;
        a2 = "protected";
        if ( v85 != 1 )
        {
          v86 = 7;
          a2 = "private";
          if ( v85 != 2 )
          {
            v86 = 6;
            a2 = "public";
          }
        }
        v87 = *a1;
        v88 = *(_QWORD **)(*a1 + 32LL);
        if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v88 < v86 )
        {
          sub_26240F0(v87, a2, v86);
          v89 = *a1;
          v90 = *(_BYTE **)(*a1 + 32LL);
          if ( *(_BYTE **)(*a1 + 24LL) == v90 )
            goto LABEL_147;
        }
        else
        {
          if ( (unsigned int)v86 >= 8 )
          {
            v106 = (unsigned __int64)(v88 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            *v88 = *(_QWORD *)a2;
            *(_QWORD *)((char *)v88 + v86 - 8) = *(_QWORD *)&a2[v86 - 8];
            v107 = (__int64)v88 - v106;
            a2 -= v107;
            if ( (((_DWORD)v86 + (_DWORD)v107) & 0xFFFFFFF8) >= 8 )
            {
              v108 = (v86 + v107) & 0xFFFFFFF8;
              v109 = 0;
              do
              {
                v110 = v109;
                v109 += 8;
                *(_QWORD *)(v106 + v110) = *(_QWORD *)&a2[v110];
              }
              while ( v109 < v108 );
            }
          }
          else
          {
            *(_DWORD *)v88 = *(_DWORD *)a2;
            a2 = (char *)*(unsigned int *)&a2[(unsigned int)v86 - 4];
            *(_DWORD *)((char *)v88 + (unsigned int)v86 - 4) = (_DWORD)a2;
          }
          *(_QWORD *)(v87 + 32) += v86;
          v89 = *a1;
          v90 = *(_BYTE **)(*a1 + 32LL);
          if ( *(_BYTE **)(*a1 + 24LL) == v90 )
          {
LABEL_147:
            a2 = " ";
            sub_26240F0(v89, " ", 1);
            goto LABEL_118;
          }
        }
        *v90 = 32;
        ++*(_QWORD *)(v89 + 32);
      }
LABEL_118:
      v91 = *a1;
      v92 = *(_QWORD *)(**(_QWORD **)(v63 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v93 = *(_QWORD *)(v92 + 8);
      if ( (v93 & 7) != 0 || (v93 & 8) != 0 )
        v92 = sub_B0CF30(**(_QWORD **)(v63 + 16), a2);
      v127 = v92 & 0xFFFFFFFFFFFFFFF0LL;
      sub_B2AE60(v128, &v127, a1 + 1);
      a2 = (char *)v128[0];
      sub_26240F0(v91, v128[0], v128[1]);
      if ( v128[0] != &v129 )
      {
        a2 = (char *)(v129 + 1);
        operator delete(v128[0], v129 + 1);
      }
      if ( !*(_DWORD *)(v63 + 8) )
        goto LABEL_124;
      v102 = *a1;
      v103 = *(_QWORD *)(*a1 + 32LL);
      if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24LL) - v103) <= 2 )
      {
        a2 = "...";
        sub_26240F0(v102, "...", 3);
LABEL_124:
        v63 += 24;
        if ( v63 == v78 )
          break;
      }
      else
      {
        v63 += 24;
        *(_BYTE *)(v103 + 2) = 46;
        *(_WORD *)v103 = 11822;
        *(_QWORD *)(v102 + 32) += 3LL;
        if ( v63 == v78 )
          break;
      }
    }
  }
  v104 = *a1;
  v105 = *(_BYTE **)(*a1 + 32LL);
  if ( (unsigned __int64)v105 >= *(_QWORD *)(*a1 + 24LL) )
  {
    sub_26239D0(v104, 32);
  }
  else
  {
    *(_QWORD *)(v104 + 32) = v105 + 1;
    *v105 = 32;
  }
LABEL_15:
  v17 = *a1;
  v18 = *(_WORD **)(*a1 + 32LL);
  result = *(_QWORD *)(*a1 + 24LL) - (_QWORD)v18;
  if ( *((char *)a1 + 11) < 0 )
  {
    if ( result > 1 )
    {
      *v18 = 32123;
      *(_QWORD *)(v17 + 32) += 2LL;
      return result;
    }
    v52 = 2;
    v53 = "{}";
    return sub_26240F0(v17, v53, v52);
  }
  if ( result <= 1 )
  {
    sub_26240F0(v17, "{\n", 2);
  }
  else
  {
    *v18 = 2683;
    *(_QWORD *)(v17 + 32) += 2LL;
  }
  v19 = 0;
  sub_7CBE80((__int64)a1, v2 + 64, 1);
  v20 = *((_DWORD *)a1 + 8);
  if ( v20 )
  {
    do
    {
      while ( 1 )
      {
        v21 = *a1;
        v22 = *(_WORD **)(*a1 + 32LL);
        if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v22 <= 1u )
          break;
        ++v19;
        *v22 = 8224;
        *(_QWORD *)(v21 + 32) += 2LL;
        if ( v20 == v19 )
          goto LABEL_23;
      }
      ++v19;
      sub_26240F0(v21, "  ", 2);
    }
    while ( v20 != v19 );
  }
LABEL_23:
  v17 = *a1;
  result = *(_QWORD *)(*a1 + 32LL);
  if ( *(_QWORD *)(*a1 + 24LL) == result )
  {
    v52 = 1;
    v53 = (char *)"}";
    return sub_26240F0(v17, v53, v52);
  }
  *(_BYTE *)result = 125;
  ++*(_QWORD *)(v17 + 32);
  return result;
}

