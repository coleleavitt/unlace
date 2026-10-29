void __fastcall sub_1816B80(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, char a5)
{
  unsigned int *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // al
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 *v18; // r15
  __int64 v19; // rax
  __int64 *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rdi
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r14d
  bool v36; // al
  __int64 v37; // rax
  bool v38; // al
  int v39; // eax
  unsigned __int64 v40; // rdx
  __int64 v41; // rdi
  unsigned __int8 v42; // al
  _QWORD *v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __m128i *v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 *v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // r15
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rax
  __m128i *v58; // r13
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 *v66; // rsi
  unsigned int v67; // ecx
  int v68; // eax
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // [rsp-10h] [rbp-138h]
  unsigned __int64 v75; // [rsp+0h] [rbp-128h]
  unsigned __int64 v76; // [rsp+0h] [rbp-128h]
  __int64 v77; // [rsp+0h] [rbp-128h]
  __int64 v78; // [rsp+0h] [rbp-128h]
  __int64 v79; // [rsp+0h] [rbp-128h]
  unsigned __int64 v80; // [rsp+0h] [rbp-128h]
  __int64 v81; // [rsp+0h] [rbp-128h]
  __int64 v82; // [rsp+0h] [rbp-128h]
  unsigned int v83; // [rsp+8h] [rbp-120h]
  unsigned int v84; // [rsp+14h] [rbp-114h]
  __int64 v85[2]; // [rsp+18h] [rbp-110h] BYREF
  char v86; // [rsp+2Eh] [rbp-FAh] BYREF
  char v87; // [rsp+2Fh] [rbp-F9h] BYREF
  unsigned int v88; // [rsp+30h] [rbp-F8h] BYREF
  int v89; // [rsp+34h] [rbp-F4h] BYREF
  __int64 v90; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE *v91; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v92; // [rsp+48h] [rbp-E0h]
  void *v93; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v94; // [rsp+58h] [rbp-D0h]
  _QWORD v95[25]; // [rsp+60h] [rbp-C8h] BYREF

  v9 = *(unsigned int **)(a4 + 16);
  v85[0] = a4;
  v10 = *v9;
  v91 = v9 + 4;
  v92 = v10;
  sub_1805A60(&v91);
  v11 = a3[1].m128i_u32[2];
  v88 = 0;
  v86 = 1;
  v87 = 0;
  v89 = 0;
  v94 = 64;
  v93 = nullptr;
  if ( v92 <= 3 || *v91 != 86 )
    goto LABEL_2;
  for ( i = 1; (unsigned int)((char)v91[i] - 48) <= 9; ++i )
  {
    if ( i + 1 == v92 )
    {
      v76 = v92;
      goto LABEL_36;
    }
  }
  if ( i == 1 )
  {
LABEL_98:
    v93 = nullptr;
    goto LABEL_2;
  }
  v76 = i--;
LABEL_36:
  v33 = v92 - 1;
  v95[0] = v91 + 1;
  if ( v92 - 1 > i )
    v33 = i;
  v95[1] = v33;
  if ( (unsigned __int8)sub_2248060(v95, 10) )
  {
    v34 = v94;
    if ( v94 <= 0x40 )
      goto LABEL_98;
    goto LABEL_40;
  }
  if ( v94 <= 0x40 )
  {
    if ( !v93 || ((unsigned __int64)v93 & ((unsigned __int64)v93 - 1)) != 0 )
      goto LABEL_98;
  }
  else
  {
    v84 = v94;
    v68 = sub_22069E0(&v93);
    v34 = v84;
    if ( v68 != 1 )
    {
LABEL_40:
      v12 = 0;
      *(_QWORD *)v93 = 0;
      memset((char *)v93 + 8, 0, 8 * ((unsigned int)((unsigned __int64)(v34 + 63) >> 6) + 0x1FFFFFFF));
      goto LABEL_41;
    }
  }
  v69 = v92;
  v70 = 0;
  if ( v92 >= v76 )
  {
    v70 = v92 - v76;
    v69 = v76;
  }
  sub_1805AF0((__int64)(a1 + 31), (__int64)&v91[v69], v70, &v88, &v86, &v87, &v89);
  v12 = v74;
  if ( !a5 )
  {
    v12 = (__int64)(a1 + 1);
    sub_168B9F0((__int64)v95, a1 + 1, v11, 0x1D88u, 0);
    sub_15F7200(v95);
  }
LABEL_41:
  v35 = v94;
  if ( v94 <= 0x40 )
    v36 = v93 == nullptr;
  else
    v36 = (unsigned int)sub_2206780(&v93) == v35;
  if ( !v36 )
  {
    if ( v88 )
      goto LABEL_3;
    goto LABEL_45;
  }
LABEL_2:
  v12 = (__int64)v91;
  sub_1805AF0((__int64)(a1 + 31), (__int64)v91, v92, &v88, &v86, &v87, &v89);
  if ( !v88 )
  {
LABEL_45:
    sub_168B9F0((__int64)v95, a1 + 1, v11, 0x101Cu, 0);
    LODWORD(v90) = 0;
    goto LABEL_46;
  }
LABEL_3:
  v15 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v15 - 64 <= 2 )
  {
    v16 = (unsigned __int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v17 = v16[1];
    else
      v17 = *v16;
    goto LABEL_6;
  }
  if ( v15 != 62 )
  {
    v17 = *(_QWORD *)(a2 + 48);
LABEL_6:
    v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_7;
  }
  v52 = *(_QWORD *)(a2 + 128);
  v53 = (__int64 *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v52 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && ((v52 & 4) == 0
     || (v71 = *v53,
         v72 = *v53 & 0xFFFFFFFFFFFFFFF0LL,
         v52 = *(_QWORD *)v72,
         v73 = *(_QWORD *)(*(_QWORD *)v72 + 8LL) & 7LL,
         (v12 = v73 | (*(__int64 *)(*(_QWORD *)v72 + 8LL) >> 3) & 1) == 0)
      ? (v17 = v52 & 0xFFFFFFFFFFFFFFF0LL)
      : (v17 = sub_F64F00(v71, v12, v52, v73, v13) & 0xFFFFFFFFFFFFFFF0LL),
        v17) )
  {
    v18 = (__int64 *)v17;
  }
  else
  {
    v17 = *(_QWORD *)(a1[31] + 18720);
    v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_7:
  v19 = *v18;
  if ( (*(_BYTE *)(*v18 + 17) & 4) != 0 )
  {
    v58 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
    sub_B14A60(v58, a1[31], a3, v85[0]);
    sub_B8CC60(a2, (__int64)v58, v59, v60, v61, v62);
    goto LABEL_47;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 57 <= 1
    || (v51 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57,
        (unsigned int)v51 <= 1)
    && (v80 = v17, v19 = sub_F63050(*v18, v12, v17, v51), v17 = v80, v19) )
  {
    v17 = *(_QWORD *)(v19 + 32);
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x3E )
  {
    v20 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v23) = *(_BYTE *)(v22 + 16);
    if ( (_BYTE)v23 != 47 )
    {
      if ( (_BYTE)v23 == 13 )
        goto LABEL_16;
      goto LABEL_17;
    }
  }
  v24 = v94;
  if ( v94 <= 0x40 )
  {
    LOBYTE(v12) = v93 == nullptr;
  }
  else
  {
    v75 = v17;
    v25 = sub_2206780(&v93);
    v17 = v75;
    LOBYTE(v12) = v24 == v25;
  }
  if ( !(_BYTE)v12 )
  {
    sub_168B9F0((__int64)v95, a1 + 1, v11, 0xE90u, 0);
    v64 = sub_169D880((__int64)v95, v85);
    v90 = a3[1].m128i_i64[1];
    sub_1587DB0(v64, &v90);
    sub_15F7200(v95);
    goto LABEL_47;
  }
  v17 &= 0xFFFFFFFFFFFFFFF0LL;
  v21 = *(_QWORD *)v17;
  v20 = (__int64 *)v17;
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(v22 + 16);
  if ( (_BYTE)v23 == 13 )
  {
LABEL_16:
    LOBYTE(v23) = 13;
    if ( (((*(_WORD *)(v22 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      goto LABEL_21;
    goto LABEL_17;
  }
  if ( (_BYTE)v23 != 47 )
  {
LABEL_17:
    LOBYTE(v12) = (_BYTE)v23 == 47;
    goto LABEL_18;
  }
  v63 = sub_F60F10(v22, v12, v17, v23, v13, v14);
  v12 = (unsigned __int8)v12;
  v21 = *v20;
  if ( (*((_BYTE *)v63 + 74) & 1) != 0 )
  {
    LOBYTE(v23) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  else
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v23) = *(_BYTE *)(v17 + 16);
    if ( (v63[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_17;
  }
  if ( (_BYTE)v23 == 10 )
  {
    if ( !sub_F57BD0(v21) )
      goto LABEL_123;
    v12 = 0;
    goto LABEL_55;
  }
LABEL_18:
  if ( (_BYTE)v23 != 13 )
  {
    v12 = (unsigned __int8)v12;
    if ( !sub_F57BD0(v21) )
    {
      if ( (_BYTE)v12 )
      {
LABEL_21:
        if ( !v86 )
          goto LABEL_22;
        goto LABEL_57;
      }
LABEL_123:
      v12 = (__int64)(a1 + 1);
      v54 = 4196;
      goto LABEL_81;
    }
  }
LABEL_55:
  if ( !v86 )
  {
LABEL_22:
    v26 = *v20;
    if ( v87 )
    {
      if ( sub_F57BD0(v26) )
        goto LABEL_24;
    }
    else if ( sub_F58060(v26) )
    {
      goto LABEL_24;
    }
    goto LABEL_80;
  }
  if ( (_BYTE)v12 )
  {
LABEL_57:
    v27 = (_QWORD *)a1[31];
LABEL_58:
    v77 = (__int64)v27;
    v38 = sub_F65140(*v20, v12, v17, (__int64)v27, v13, v14);
    v28 = v88;
    v30 = sub_A64980(v77, v88, v38);
    if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_26;
    goto LABEL_59;
  }
LABEL_80:
  v12 = (__int64)(a1 + 1);
  v54 = 4197;
LABEL_81:
  sub_168B9F0((__int64)v95, (__int64 *)v12, v11, v54, 0);
  sub_15F7200(v95);
LABEL_24:
  v27 = (_QWORD *)a1[31];
  if ( v86 )
    goto LABEL_58;
  v28 = v88;
  v30 = sub_A68110(v27);
  if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_26:
    if ( v88 != 128 || (v31 = a1[29], (*(_BYTE *)(v31 + 89) & 4) == 0) && (*(_BYTE *)(v31 + 96) & 0x10) == 0 )
    {
      sub_168B9F0((__int64)v95, a1 + 1, v11, 0x101Cu, 0);
      LODWORD(v90) = 1;
LABEL_46:
      v37 = sub_1587D10((__int64)v95, (int *)&v90);
      sub_169D880(v37, v85);
      sub_15F7200(v95);
    }
LABEL_47:
    if ( v94 <= 0x40 )
      return;
    goto LABEL_48;
  }
LABEL_59:
  if ( v87 )
  {
    v28 = v30;
    v30 = sub_A74CE0(a1[31], v30);
  }
  if ( v94 <= 0x40 )
  {
    v40 = (unsigned __int64)v93;
    if ( v93 )
    {
      v41 = a1[31];
      goto LABEL_64;
    }
  }
  else
  {
    v83 = v94;
    v78 = v30;
    v39 = sub_2206780(&v93);
    v40 = v83;
    v30 = v78;
    if ( v83 != v39 )
    {
      v41 = a1[31];
      v40 = *(_QWORD *)v93;
LABEL_64:
      v30 = sub_A70300(v41, v30, v40, 0);
      goto LABEL_65;
    }
  }
  v55 = *v18;
  if ( (unsigned int)*(unsigned __int8 *)(v55 + 16) - 57 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
    && (v82 = v30, v65 = sub_F63050(v55, v28, v40, v29), v30 = v82, (v55 = v65) != 0) )
  {
    if ( v87 )
    {
      v66 = a1 + 1;
      v67 = 3441;
      goto LABEL_109;
    }
    v81 = v30;
    v56 = sub_A97D20(a1[31], *v20) * *(unsigned int *)(v55 + 20);
    v57 = sub_A97D20(a1[31], *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL));
    v30 = sub_A70300(a1[31], v81, v56 / v57, (*(_BYTE *)(v55 + 18) >> 3) & 0xF);
  }
LABEL_65:
  if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v66 = a1 + 1;
    v67 = 4197;
LABEL_109:
    sub_168B9F0((__int64)v95, v66, v11, v67, 0);
    sub_15F7200(v95);
    goto LABEL_47;
  }
  v42 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v42 - 64 > 2 )
  {
    if ( v42 == 62 )
      *(_QWORD *)(a2 + 128) = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFFBLL;
    else
      *(_QWORD *)(a2 + 48) = v30;
  }
  else
  {
    v43 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v43 = (_QWORD *)*v43;
    v79 = v30;
    v44 = sub_B8C330(a2);
    v45 = sub_1806F50((__int64 *)(v44 + 2352), 16, 3u);
    *(_QWORD *)v45 = v43;
    *(_QWORD *)(v45 + 8) = v79;
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 80) & 3LL | v45 | 4;
  }
  v46 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
  sub_B14A60(v46, a1[31], a3, v85[0]);
  sub_B8CC60(a2, (__int64)v46, v47, v48, v49, v50);
  if ( v94 > 0x40 )
  {
LABEL_48:
    if ( v93 )
      operator delete[](v93);
  }
}
