__int64 __fastcall sub_1A02500(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rbp
  __int64 **v10; // rax
  __int64 *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // r13
  __int64 *v17; // rdx
  unsigned __int8 v18; // al
  int v19; // eax
  unsigned __int16 v21; // ax
  _BOOL4 v22; // r14d
  __int64 v23; // r15
  unsigned int v24; // eax
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned __int8 v44; // al
  int v45; // edx
  __int64 v46; // r15
  __int16 v47; // ax
  __int16 v48; // ax
  unsigned __int8 v49; // al
  unsigned __int64 v50; // rax
  __int64 v51; // rbx
  unsigned int v52; // eax
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // r13
  __int16 v56; // ax
  __int16 v57; // ax
  unsigned __int8 v58; // al
  __int64 v59; // rbx
  unsigned int v60; // eax
  __int64 v61; // rax
  int v62; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v63; // [rsp+10h] [rbp-E8h]
  __int64 v64; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v65; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v66; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v68[2]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v69; // [rsp+40h] [rbp-B8h]
  int v70; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v71; // [rsp+50h] [rbp-A8h] BYREF
  char v72; // [rsp+A8h] [rbp-50h]
  unsigned int v73; // [rsp+B0h] [rbp-48h]
  char v74; // [rsp+B4h] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_53;
  v9 = a2;
  v10 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v11 = *v10;
  v12 = (unsigned __int64)&(*v10)[*((unsigned int *)v10 + 2)];
  if ( (unsigned __int64)v11 < v12 )
  {
    v15 = v11;
    while ( 1 )
    {
      a2 = *v15;
      if ( *(_WORD *)(*v15 + 36) == 92 )
        break;
      if ( (__int64 *)v12 == ++v15 )
        goto LABEL_53;
    }
    if ( (__int64 *)v12 == v15 )
      goto LABEL_53;
  }
  else
  {
    if ( v11 == (__int64 *)v12 )
      goto LABEL_53;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 92 )
    {
      v13 = v12 + 8;
      v14 = v13;
      if ( (__int64 *)v13 == v11 )
        goto LABEL_53;
      while ( 1 )
      {
        v13 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 92 )
          break;
        v14 = v13;
        if ( (__int64 *)v13 == v11 )
          goto LABEL_53;
      }
    }
  }
  v16 = *v11;
  if ( *(_WORD *)(*v11 + 36) != 92 )
  {
    v17 = v11 + 1;
    do
      v16 = *v17++;
    while ( *(_WORD *)(v16 + 36) != 92 );
  }
  v18 = *(_BYTE *)(v16 + 34);
  if ( (v18 & 0xF0) != 0xF0 )
  {
    if ( v18 >> 4 == 2 )
      goto LABEL_35;
LABEL_18:
    v19 = v18 >> 4;
    goto LABEL_19;
  }
  if ( (unsigned int)sub_FA77D0(v16) == 2 )
    goto LABEL_21;
  v18 = *(_BYTE *)(v16 + 34);
  if ( (v18 & 0xF0) != 0xF0 )
    goto LABEL_18;
  v19 = sub_FA77D0(v16);
LABEL_19:
  if ( v19 != 1 )
    return a3;
LABEL_21:
  v21 = *(_WORD *)(v16 + 36);
  if ( v21 != 92 )
  {
    if ( v21 >= 0x5Cu && v21 <= 0x60u )
      goto LABEL_24;
LABEL_53:
    BUG();
  }
  v18 = *(_BYTE *)(v16 + 34);
  if ( (v18 & 0xF0) == 0xF0 )
  {
    if ( (unsigned int)sub_FA77D0(v16) != 2 )
    {
      if ( (*(_BYTE *)(v16 + 34) & 0xF0) == 0xF0 )
        v45 = sub_FA77D0(v16);
      else
        v45 = *(_BYTE *)(v16 + 34) >> 4;
      goto LABEL_36;
    }
LABEL_24:
    v22 = 0;
    goto LABEL_25;
  }
LABEL_35:
  v44 = v18 >> 4;
  v45 = v44;
  if ( v44 == 2 )
    goto LABEL_24;
LABEL_36:
  v22 = v45 == 1;
LABEL_25:
  v23 = *a1;
  if ( ((*(_BYTE *)(a3 + 1) >> 1) & 3) != 1 )
  {
    v24 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v68, (__int64 *)(v23 + 8), v24, 0x156Eu, 0);
    if ( !v72 )
      goto LABEL_27;
    goto LABEL_31;
  }
  v25 = *(_QWORD **)(v23 + 248);
  v68[0] = *(_QWORD *)(v9 + 48);
  v66 = sub_F67970(v68, (__int64)v25);
  v30 = sub_F61140(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v25, v26, v27, v28, v29);
  if ( v30 != sub_F61140(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v25, v31, v32, v33, v34) )
  {
    v35 = *a1;
    v36 = sub_EEB7E0(a3, (__int64)v25, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v68, (__int64 *)(v35 + 8), v36, 0x156Fu, 0);
    if ( !v72 )
    {
LABEL_27:
      if ( v74 )
      {
        v41 = sub_168B9E0(v68);
        v42 = v69;
        if ( v69 )
          v42 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v69 + 32LL))(v69);
        v67 = v42;
        v43 = sub_1587BC0(v41, &v67, v37, v38, v39, v40);
        sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v73 + 8), a3, 0xFu);
      }
      goto LABEL_28;
    }
LABEL_31:
    sub_AE9DF0(&v71, a3, 0xFu);
LABEL_28:
    LODWORD(v67) = v22;
    sub_1587D10((__int64)v68, (int *)&v67);
    sub_15F7200(v68);
    return 1;
  }
  v62 = sub_B73090(v9);
  v64 = *(_QWORD *)(a3 + 8);
  v46 = sub_EEE9A0(24, v25, 8u);
  *(_WORD *)v46 = *(_WORD *)v46 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v47 = *(_WORD *)(v46 + 1);
  *(_QWORD *)(v46 + 16) = a3;
  *(_QWORD *)(v46 + 8) = v64;
  v48 = v47 & 0xF801 | 2;
  *(_WORD *)(v46 + 1) = v48;
  *(_BYTE *)(v46 + 2) = HIBYTE(v48) & 0xF7;
  *(_DWORD *)(v46 + 4) = v62;
  v49 = sub_B62360(v46);
  *(_BYTE *)(v46 + 1) = (v49 << 6) | *(_BYTE *)(v46 + 1) & 0x3F;
  *(_BYTE *)(v46 + 2) = *(_BYTE *)(v46 + 2) & 0xF8 | (v49 >> 2) & 7;
  v70 = 0;
  v68[1] = 0;
  LODWORD(v68[0]) = 1;
  v50 = sub_A73320(v25, v66);
  v51 = *a1;
  v71 = nullptr;
  v69 = v50;
  v52 = sub_B73090(v9);
  v53 = sub_1A24E20(v51, v68, v52, v46, 0, 0);
  if ( v53 == 1 )
    return 1;
  v63 = v53 & 0xFFFFFFFFFFFFFFFELL;
  v66 = sub_F67970(&v66, (__int64)v25);
  v54 = sub_B73090(v9);
  v65 = v66;
  v55 = sub_EEE9A0(24, v25, 8u);
  *(_WORD *)v55 = *(_WORD *)v55 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v56 = *(_WORD *)(v55 + 1);
  *(_DWORD *)(v55 + 4) = v54;
  *(_QWORD *)(v55 + 8) = v65;
  v57 = v56 & 0xF801 | 2;
  *(_WORD *)(v55 + 1) = v57;
  *(_QWORD *)(v55 + 16) = v63;
  *(_BYTE *)(v55 + 2) = HIBYTE(v57) & 0xF7;
  v58 = sub_B62360(v55);
  *(_BYTE *)(v55 + 1) = (v58 << 6) | *(_BYTE *)(v55 + 1) & 0x3F;
  *(_BYTE *)(v55 + 2) = *(_BYTE *)(v55 + 2) & 0xF8 | (v58 >> 2) & 7;
  v59 = *a1;
  v60 = sub_B73090(v9);
  v61 = sub_192A3E0(v59, *(_QWORD *)(*a1 + 608), v60, 64, v46, (_QWORD *)v55, a7, a8);
  if ( v61 == 1 )
    return 1;
  else
    return sub_C04050((__int64)v25, v66, v46, v55, v61 & 0xFFFFFFFFFFFFFFFELL, v22);
}
