void __fastcall sub_154F3E0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r13
  char *v22; // r13
  int v23; // r12d
  char *v24; // rbp
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // r13
  __int64 v31; // rdx
  char v32; // si
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  unsigned __int64 v36; // rax
  int v37; // edx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // rdx
  const __m128i *v43; // r13
  __m128i v44; // xmm0
  __m128i *v45; // rax
  char *v46; // rsi
  __int64 v47; // rdx
  __int16 v48; // ax
  unsigned __int16 v49; // cx
  __int64 *v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r13
  int v57; // eax
  __int16 v58; // ax
  __int64 v59; // rsi
  __int64 v60; // rsi
  char ***v61; // r13
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rdi
  int v65; // edx
  __int64 v66; // rbp
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  unsigned __int16 v71; // cx
  unsigned int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  unsigned __int16 v75; // cx
  unsigned int v76; // eax
  unsigned __int16 v77; // si
  _WORD *v78; // rdx
  char *v79; // rcx
  __int64 v80; // rsi
  unsigned __int64 v81; // r13
  int v82; // eax
  __int64 *v83; // rdi
  unsigned int v84; // eax
  unsigned __int16 v85; // si
  __int64 v86; // rdx
  unsigned __int64 v87; // [rsp+0h] [rbp-1A8h]
  __int64 v88; // [rsp+8h] [rbp-1A0h]
  __int64 v89; // [rsp+8h] [rbp-1A0h]
  __int64 v90; // [rsp+10h] [rbp-198h]
  __int64 v91; // [rsp+20h] [rbp-188h]
  __int64 v92; // [rsp+28h] [rbp-180h]
  int v93; // [rsp+34h] [rbp-174h]
  __int64 v94; // [rsp+38h] [rbp-170h]
  __int64 v95; // [rsp+40h] [rbp-168h]
  int v96; // [rsp+40h] [rbp-168h]
  int v97; // [rsp+48h] [rbp-160h]
  int v98; // [rsp+4Ch] [rbp-15Ch]
  __int64 v99; // [rsp+58h] [rbp-150h] BYREF
  __int64 v100; // [rsp+60h] [rbp-148h] BYREF
  int v101; // [rsp+68h] [rbp-140h]
  __int64 v102; // [rsp+88h] [rbp-120h]
  unsigned int v103[6]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-F0h]
  void *v105; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-D0h]
  _BYTE v107[32]; // [rsp+E0h] [rbp-C8h] BYREF
  char ***v108; // [rsp+100h] [rbp-A8h] BYREF
  void *ptr[2]; // [rsp+108h] [rbp-A0h] BYREF
  _BYTE v110[64]; // [rsp+118h] [rbp-90h] BYREF
  char **v111; // [rsp+158h] [rbp-50h]
  char **v112; // [rsp+160h] [rbp-48h]
  int v113; // [rsp+168h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    return;
  v5 = a2;
  v7 = sub_B8BF30(v4);
  v10 = *(_QWORD *)(a1 + 96);
  v90 = v7;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 248) + 2264LL) + 80LL);
  v12 = *(_QWORD *)(v11 + 72);
  if ( (v12 & 1) != 0 )
  {
    v62 = v12 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v14 = 0;
      goto LABEL_5;
    }
    v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v12 & 2) == 0 )
      goto LABEL_5;
    v66 = v13[2295];
    v67 = v11 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v66 )
    {
      v68 = v13[294];
      v13[304] += 24LL;
      v69 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13[295] >= v69 + 24 && v68 )
      {
        v13[294] = v69 + 24;
        v70 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v70 = sub_986170((__int64)(v13 + 294), 24, 24, 3, v8, v9);
        v69 = v70 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v70 = v66;
      v67 = v69 | 4;
      *(_DWORD *)(v70 + 8) = 0;
      *(_QWORD *)(v70 + 16) = v11;
    }
    v62 = v67 & 0xFFFFFFFFFFFFFFFELL;
    v12 = v62 | 1;
    *(_QWORD *)(v11 + 72) = v62 | 1;
  }
  v63 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v63;
  if ( v62 && (v62 & 4) != 0 && v63 )
  {
    v64 = *(_QWORD *)v63;
    v65 = *(_DWORD *)(*(_QWORD *)v63 + 12LL);
    if ( *(_DWORD *)(v63 + 8) != v65 )
    {
      *(_DWORD *)(v63 + 8) = v65;
      v87 = v63;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 152LL))(v64, v11);
      v63 = v87;
    }
    v14 = *(_QWORD *)(v63 + 16);
    v10 = *(_QWORD *)(a1 + 96);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 96);
  }
LABEL_5:
  v100 = a1;
  if ( v14 )
    v14 += 40LL;
  v15 = *(_QWORD *)(v10 + 544);
  v101 = 0;
  v91 = v15;
  v16 = *(_QWORD *)(v10 + 512);
  *(_QWORD *)(v10 + 544) = v14;
  v17 = v107;
  v94 = v16;
  v18 = *(_QWORD *)(v10 + 9944);
  *(_QWORD *)(v10 + 512) = 0;
  v102 = v18;
  LODWORD(v18) = *(_DWORD *)(v10 + 80);
  *(_QWORD *)(v10 + 9944) = 0;
  v93 = v18;
  LODWORD(v18) = *(_DWORD *)(v10 + 2632);
  v105 = v107;
  v97 = v18;
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 2632) = *(_DWORD *)(v10 + 3688);
  v106 = 0x400000000LL;
  v88 = v90 + 72;
  if ( !v90 )
    goto LABEL_94;
  v19 = v90 + 72;
  v20 = 0;
  if ( (*(_BYTE *)(v90 + 80) & 0x7F) == 0 )
    goto LABEL_94;
  while ( 1 )
  {
    *(_QWORD *)&v17[8 * v20] = v19;
    LODWORD(v106) = v106 + 1;
    v21 = *(_QWORD *)(sub_B8C1B0(v19) + 16);
    if ( (v21 & 4) != 0 )
      break;
    v19 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v20 = (unsigned int)v106;
    if ( !v19 )
      goto LABEL_17;
LABEL_11:
    if ( (*(_BYTE *)(v19 + 8) & 0x7F) == 0 )
      goto LABEL_17;
    if ( v20 + 1 > (unsigned __int64)HIDWORD(v106) )
    {
      sub_2237220(&v105, v107, v20 + 1, 8);
      v20 = (unsigned int)v106;
    }
    v17 = v105;
  }
  v20 = (unsigned int)v106;
  v19 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( v19 )
    goto LABEL_11;
LABEL_17:
  v22 = (char *)v105;
  if ( v105 == (char *)v105 + 8 * v20 )
  {
LABEL_94:
    v23 = 0;
    goto LABEL_23;
  }
  v95 = v5;
  v23 = 0;
  v92 = v10;
  v24 = (char *)v105 + 8 * v20;
  do
  {
    v25 = *((_QWORD *)v24 - 1);
    v26 = sub_B8C1B0(v25);
    v27 = *(_QWORD *)(a1 + 96);
    v108 = (char ***)&v100;
    ptr[0] = (void *)a1;
    v28 = sub_183F1A0(v27, v26, sub_154D320, &v108);
    *(_DWORD *)(a1 + 2548) += v28;
    v23 += v28;
    sub_1564E40(v100, 8);
    ++v101;
    if ( v25 != v88 )
      sub_17A2E00(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v25);
    v24 -= 8;
  }
  while ( v22 != v24 );
  v10 = v92;
  v5 = v95;
LABEL_23:
  v29 = *(_QWORD *)(a1 + 96);
  v108 = (char ***)v29;
  ptr[0] = v110;
  ptr[1] = (void *)0x200000000LL;
  if ( *(_DWORD *)(v29 + 1872) )
    sub_154F280((char ***)ptr, (char ***)(v29 + 1864));
  v111 = *(char ***)(v29 + 1944);
  v112 = *(char ***)(v29 + 1952);
  v113 = *(_DWORD *)(v29 + 1960);
  *(_DWORD *)(v29 + 1872) = 0;
  v30 = *(_QWORD *)(a1 + 96);
  LODWORD(v99) = *(_DWORD *)(v5 + 120);
  v31 = *(_QWORD *)(v30 + 232);
  *(_DWORD *)(v30 + 224) = v99;
  v33 = (*(_WORD *)(v31 + 206) >> 7) & 3;
  if ( v33 == 3 )
    v33 = 2;
  v32 = *(_BYTE *)(v31 + 46);
  v34 = v33
      | (((v32 & 8) != 0) << 14)
      | (((v32 & 4) != 0) << 13)
      | (((v32 & 2) != 0) << 12)
      | (8 * *(unsigned __int8 *)(v31 + 45)) & 0x400
      | (((*(_BYTE *)(v31 + 45) & 0x40) != 0) << 9)
      | (4 * ((unsigned int)*(char *)(v31 + 106) >> 31))
      | ((v32 & 1) << 11)
      | (((*(_BYTE *)(v31 + 207) >> 1) & 3) << 6);
  v35 = v34 | 0x38;
  v103[0] = v34 | 0x38;
  if ( (v34 & 3) == 1 && (v34 & 4) != 0 )
  {
    v74 = v34 | 0x138;
    if ( (unsigned __int8)v35 >> 6 == 2 )
      v35 = v74;
  }
  v103[0] = v35 | ((*(_BYTE *)(v31 + 202) & 7) << 22);
  if ( (_DWORD)v99 == v103[0] )
  {
    LODWORD(v38) = 0;
    v37 = 0;
  }
  else
  {
    v36 = sub_FEAE70(&v99, v103);
    v37 = v36;
    v38 = HIDWORD(v36);
  }
  *(_DWORD *)(v30 + 1952) = v37;
  v39 = a1 + 16;
  *(_DWORD *)(v30 + 1956) = v38;
  v40 = *(unsigned int *)(v5 + 8);
  v41 = v40 + 1;
  if ( v40 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
  {
    v79 = *(char **)v5;
    v80 = v5 + 16;
    if ( *(_QWORD *)v5 > v39 || v39 >= (unsigned __int64)&v79[24 * v40] )
    {
      v43 = (const __m128i *)(a1 + 16);
      sub_2237220(v5, v80, v41, 24);
      v42 = *(char **)v5;
      v40 = *(unsigned int *)(v5 + 8);
    }
    else
    {
      v81 = v39 - (_QWORD)v79;
      sub_2237220(v5, v80, v41, 24);
      v42 = *(char **)v5;
      v40 = *(unsigned int *)(v5 + 8);
      v43 = (const __m128i *)(*(_QWORD *)v5 + v81);
    }
  }
  else
  {
    v42 = *(char **)v5;
    v43 = (const __m128i *)(a1 + 16);
  }
  v44 = _mm_loadu_si128(v43);
  v45 = (__m128i *)&v42[24 * v40];
  *v45 = v44;
  v45[1].m128i_i64[0] = v43[1].m128i_i64[0];
  v46 = *(char **)v5;
  v47 = (unsigned int)(*(_DWORD *)(v5 + 8) + 1);
  *(_DWORD *)(v5 + 8) = v47;
  sub_14368B0(*(_QWORD *)(a1 + 8), v46, v47, 1u, 0, 1u);
  v48 = *(_WORD *)(a1 + 32);
  if ( v48 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_37;
  }
  if ( v48 == 23 )
  {
    v71 = *(_WORD *)(a1 + 88);
    if ( !v71 )
      goto LABEL_37;
    v72 = *(_DWORD *)(a1 + 2792);
    if ( !v72 )
    {
LABEL_88:
      *(_WORD *)(a1 + 88) = v71 - 1;
      goto LABEL_37;
    }
    v73 = *(_QWORD *)(a1 + 2784) + 24LL * v72 - 24;
    while ( 1 )
    {
      if ( v71 == *(_WORD *)(v73 + 14) )
      {
        if ( *(_DWORD *)(v73 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_83;
      }
      else if ( v71 > *(_WORD *)(v73 + 14) )
      {
        goto LABEL_83;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v73 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v73 + 18) )
        goto LABEL_88;
LABEL_83:
      --v72;
      v73 -= 24;
      *(_DWORD *)(a1 + 2792) = v72;
      if ( !v72 )
        goto LABEL_88;
    }
  }
  if ( (unsigned __int16)(v48 - 20) <= 1u )
  {
    v49 = *(_WORD *)(a1 + 90);
    if ( v48 == 20 )
    {
      *(_WORD *)(a1 + 90) = v49 + 1;
    }
    else
    {
      if ( !v49 )
        goto LABEL_37;
      v84 = *(_DWORD *)(a1 + 2792);
      if ( v84 )
      {
        v85 = *(_WORD *)(a1 + 88);
        v86 = *(_QWORD *)(a1 + 2784) + 24LL * v84 - 24;
        do
        {
          if ( v85 == *(_WORD *)(v86 + 14) )
          {
            if ( *(_DWORD *)(v86 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_126;
          }
          else if ( v85 > *(_WORD *)(v86 + 14) )
          {
            goto LABEL_126;
          }
          if ( v49 <= *(_WORD *)(v86 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v86 + 18) )
            break;
LABEL_126:
          --v84;
          v86 -= 24;
          *(_DWORD *)(a1 + 2792) = v84;
        }
        while ( v84 );
      }
      *(_WORD *)(a1 + 90) = v49 - 1;
    }
LABEL_37:
    v50 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v50, (int *)(a1 + 16));
    goto LABEL_38;
  }
  if ( (unsigned __int16)(v48 - 24) <= 1u )
  {
    v75 = *(_WORD *)(a1 + 92);
    if ( v48 == 24 )
    {
      *(_WORD *)(a1 + 92) = v75 + 1;
      goto LABEL_37;
    }
    if ( !v75 )
      goto LABEL_37;
    v76 = *(_DWORD *)(a1 + 2792);
    if ( !v76 )
    {
LABEL_106:
      *(_WORD *)(a1 + 92) = v75 - 1;
      goto LABEL_37;
    }
    v77 = *(_WORD *)(a1 + 88);
    v78 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v76 - 24);
    while ( 2 )
    {
      if ( v77 == v78[7] )
      {
        if ( *((_DWORD *)v78 + 4) != *(_DWORD *)(a1 + 90) )
        {
LABEL_104:
          if ( *(_WORD *)(a1 + 90) <= v78[8] && v75 <= v78[9] )
            goto LABEL_106;
        }
      }
      else if ( v77 <= v78[7] )
      {
        goto LABEL_104;
      }
      --v76;
      v78 -= 12;
      *(_DWORD *)(a1 + 2792) = v76;
      if ( !v76 )
        goto LABEL_106;
      continue;
    }
  }
  if ( (unsigned __int16)(v48 - 14) <= 1u || (unsigned __int16)(v48 - 17) <= 2u || v48 == 3 || !sub_10CCDE0(v48) )
    goto LABEL_37;
  v82 = *(_DWORD *)(a1 + 20);
  v83 = *(__int64 **)(a1 + 8);
  if ( !v82 )
    v82 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v82;
  sub_14634E0(v83, (int *)(a1 + 16));
LABEL_38:
  sub_146B5E0(&v99, a1, 0x400009u, 1, 0);
  v51 = *(_QWORD *)(sub_B8C1B0(v88) + 16);
  if ( (v51 & 4) != 0 )
    v52 = *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
  v53 = *(_QWORD *)(a1 + 96);
  v54 = *(_QWORD *)(v53 + 9944);
  v55 = *(_QWORD *)(v53 + 512);
  *(_QWORD *)(v53 + 512) = 0;
  v56 = *(_QWORD *)(v53 + 544);
  v104 = v54;
  *(_QWORD *)(v53 + 544) = v52;
  v89 = v55;
  LODWORD(v55) = *(_DWORD *)(v53 + 80);
  *(_DWORD *)(v53 + 80) = *(_DWORD *)(v53 + 40);
  v57 = *(_DWORD *)(v53 + 3688);
  *(_QWORD *)(v53 + 9944) = 0;
  v96 = v55;
  LODWORD(v55) = *(_DWORD *)(v53 + 2632);
  *(_DWORD *)(v53 + 2632) = v57;
  v98 = v55;
  sub_17DE740(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v90, 0, 0);
  v58 = *(_WORD *)(a1 + 32);
  v59 = *(_QWORD *)(v5 + 112);
  if ( v58 == 150 )
  {
    sub_15372E0(a1, v59, &v99, *(double *)v44.m128i_i64, a4);
  }
  else
  {
    if ( v58 == 62 )
      sub_14A5C50(a1, v59, v44, *(double *)a4.m128_u64);
    else
      sub_187CD10(*(_QWORD *)(a1 + 96), v59);
    v60 = *(_QWORD *)(v5 + 112);
    if ( *(_WORD *)(a1 + 32) == 24 )
    {
      sub_153D670(a1, v60, &v99, *(double *)v44.m128i_i64, a4);
      sub_1CB6050(*(_QWORD *)(a1 + 96), v90);
    }
    else
    {
      sub_17F10E0(*(_QWORD *)(a1 + 96), v60, 0);
    }
  }
  if ( v56 )
  {
    *(_QWORD *)(v53 + 544) = v56;
    *(_QWORD *)(v53 + 512) = v89;
    *(_QWORD *)(v53 + 9944) = v104;
    *(_DWORD *)(v53 + 80) = v96;
    *(_DWORD *)(v53 + 2632) = v98;
  }
  if ( v99 )
    sub_1564F70(v99);
  v61 = v108;
  sub_154F280(v108 + 233, (char ***)ptr);
  v61[243] = v111;
  v61[244] = v112;
  *((_DWORD *)v61 + 490) = v113;
  if ( ptr[0] != v110 )
    free(ptr[0]);
  if ( v105 != v107 )
    free(v105);
  for ( ; v101; --v101 )
    sub_1564F70(v100);
  if ( v91 )
  {
    *(_QWORD *)(v10 + 544) = v91;
    *(_QWORD *)(v10 + 512) = v94;
    *(_QWORD *)(v10 + 9944) = v102;
    *(_DWORD *)(v10 + 80) = v93;
    *(_DWORD *)(v10 + 2632) = v97;
  }
  *(_DWORD *)(a1 + 2548) -= v23;
  if ( !*(_BYTE *)(a1 + 2696)
    && *(_DWORD *)(a1 + 2560)
    && (*(_WORD *)(a1 + 32) == 1
     || *(__int64 (__fastcall **)(__int64, __int64, __m128i, double))(*(_QWORD *)(a1 + 8) + 1152LL) == sub_1436060) )
  {
    sub_15650B0(a1);
  }
}
