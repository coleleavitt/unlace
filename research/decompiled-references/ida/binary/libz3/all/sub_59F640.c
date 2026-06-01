__int64 __fastcall sub_59F640(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  int v4; // ecx
  __int64 (__fastcall *v5)(); // rax
  _QWORD *v6; // r12
  __int64 (__fastcall *v7)(); // rax
  _QWORD *v8; // r13
  __int64 (__fastcall *v9)(); // rax
  _QWORD *v10; // r14
  __int64 (__fastcall *v11)(); // rax
  _QWORD *v12; // r15
  __int64 (__fastcall *v13)(); // rax
  _QWORD *v14; // r10
  __int64 (__fastcall *v15)(); // rax
  _QWORD *v16; // r11
  __int64 (__fastcall *v17)(); // rax
  _QWORD **v18; // rcx
  __int64 (__fastcall *v19)(); // rax
  __int64 v20; // r9
  _QWORD *v21; // r10
  _QWORD *v22; // r11
  __int64 v23; // r9
  _QWORD *v24; // r10
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // r9
  __int64 v34; // r14
  char *v35; // r15
  __int64 v36; // r12
  __int64 v37; // r9
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  __int64 v44; // r13
  char *v45; // r14
  __int64 v46; // rbp
  __int64 v47; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD **v51; // [rsp+8h] [rbp-70h]
  char *v52; // [rsp+8h] [rbp-70h]
  char *v53; // [rsp+8h] [rbp-70h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  char *v55; // [rsp+8h] [rbp-70h]
  char *v56; // [rsp+8h] [rbp-70h]
  char *v57; // [rsp+8h] [rbp-70h]
  _QWORD *v58; // [rsp+8h] [rbp-70h]
  _QWORD *v59; // [rsp+8h] [rbp-70h]
  _QWORD **v60; // [rsp+10h] [rbp-68h]
  _QWORD *v61; // [rsp+10h] [rbp-68h]
  char *v62; // [rsp+10h] [rbp-68h]
  char *v63; // [rsp+10h] [rbp-68h]
  __int64 v64; // [rsp+10h] [rbp-68h]
  __int64 v65; // [rsp+10h] [rbp-68h]
  _QWORD *v66; // [rsp+10h] [rbp-68h]
  __int64 v67; // [rsp+18h] [rbp-60h]
  __int64 v68; // [rsp+18h] [rbp-60h]
  _QWORD *v69; // [rsp+18h] [rbp-60h]
  __int64 v70; // [rsp+18h] [rbp-60h]
  __int64 v71; // [rsp+20h] [rbp-58h]
  _QWORD *v72; // [rsp+20h] [rbp-58h]
  __int64 v73; // [rsp+20h] [rbp-58h]
  __int64 v74; // [rsp+20h] [rbp-58h]
  _QWORD *v75; // [rsp+28h] [rbp-50h]
  __int64 v76; // [rsp+28h] [rbp-50h]
  __int64 v77; // [rsp+30h] [rbp-48h]
  _QWORD *v78; // [rsp+38h] [rbp-40h]

  v3 = (_QWORD *)a1[8];
  v4 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  v5 = *(__int64 (__fastcall **)())(*v3 + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v4 != 4 )
      goto LABEL_21;
  }
  else if ( v4 != 4 )
  {
    if ( v5 == sub_59F640 )
      goto LABEL_4;
LABEL_47:
    v36 = ((__int64 (__fastcall *)(_QWORD *))v5)(v3);
    goto LABEL_48;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_21:
  if ( v5 != sub_59F640 )
    goto LABEL_47;
  v38 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v38 != 4 )
      goto LABEL_24;
  }
  else if ( v38 != 4 )
  {
LABEL_4:
    v6 = (_QWORD *)v3[8];
    v7 = *(__int64 (__fastcall **)())(*v6 + 16LL);
    if ( v7 == sub_59F640 )
      goto LABEL_5;
LABEL_54:
    v32 = ((__int64 (__fastcall *)(_QWORD *))v7)(v6);
    goto LABEL_18;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_24:
  v6 = (_QWORD *)v3[8];
  v7 = *(__int64 (__fastcall **)())(*v6 + 16LL);
  if ( v7 != sub_59F640 )
    goto LABEL_54;
  v39 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v39 != 4 )
      goto LABEL_27;
  }
  else if ( v39 != 4 )
  {
LABEL_5:
    v8 = (_QWORD *)v6[8];
    v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
    if ( v9 == sub_59F640 )
      goto LABEL_6;
LABEL_57:
    v29 = ((__int64 (__fastcall *)(_QWORD *))v9)(v8);
    goto LABEL_17;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_27:
  v8 = (_QWORD *)v6[8];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59F640 )
    goto LABEL_57;
  v40 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v40 != 4 )
      goto LABEL_30;
  }
  else if ( v40 != 4 )
  {
LABEL_6:
    v10 = (_QWORD *)v8[8];
    v11 = *(__int64 (__fastcall **)())(*v10 + 16LL);
    if ( v11 == sub_59F640 )
      goto LABEL_7;
LABEL_51:
    v27 = ((__int64 (__fastcall *)(_QWORD *))v11)(v10);
    goto LABEL_16;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_30:
  v10 = (_QWORD *)v8[8];
  v11 = *(__int64 (__fastcall **)())(*v10 + 16LL);
  if ( v11 != sub_59F640 )
    goto LABEL_51;
  v41 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v41 != 4 )
      goto LABEL_33;
  }
  else if ( v41 != 4 )
  {
LABEL_7:
    v12 = (_QWORD *)v10[8];
    v13 = *(__int64 (__fastcall **)())(*v12 + 16LL);
    if ( v13 == sub_59F640 )
      goto LABEL_8;
LABEL_62:
    v70 = ((__int64 (__fastcall *)(_QWORD *))v13)(v12);
    goto LABEL_15;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_33:
  v12 = (_QWORD *)v10[8];
  v13 = *(__int64 (__fastcall **)())(*v12 + 16LL);
  if ( v13 != sub_59F640 )
    goto LABEL_62;
  v42 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v42 != 4 )
      goto LABEL_36;
  }
  else if ( v42 != 4 )
  {
LABEL_8:
    v14 = (_QWORD *)v12[8];
    v15 = *(__int64 (__fastcall **)())(*v14 + 16LL);
    if ( v15 == sub_59F640 )
      goto LABEL_9;
LABEL_63:
    v54 = ((__int64 (__fastcall *)(_QWORD *))v15)(v14);
    goto LABEL_14;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_36:
  v14 = (_QWORD *)v12[8];
  v15 = *(__int64 (__fastcall **)())(*v14 + 16LL);
  if ( v15 != sub_59F640 )
    goto LABEL_63;
  v43 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v43 != 4 )
      goto LABEL_39;
  }
  else if ( v43 != 4 )
  {
LABEL_9:
    v16 = (_QWORD *)v14[8];
    v17 = *(__int64 (__fastcall **)())(*v16 + 16LL);
    if ( v17 == sub_59F640 )
      goto LABEL_10;
LABEL_64:
    v58 = v14;
    v49 = ((__int64 (__fastcall *)(_QWORD *))v17)(v16);
    v24 = v58;
    v76 = v49;
    goto LABEL_13;
  }
  a3 = *(_QWORD *)(a3 + 64);
LABEL_39:
  v16 = (_QWORD *)v14[8];
  v17 = *(__int64 (__fastcall **)())(*v16 + 16LL);
  if ( v17 != sub_59F640 )
    goto LABEL_64;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 || *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL) == 4 )
  {
    v18 = (_QWORD **)v16[8];
    v19 = (__int64 (__fastcall *)())(*v18)[2];
    if ( v19 == sub_59F640 )
      goto LABEL_11;
LABEL_65:
    v66 = v16;
    v59 = v14;
    v50 = ((__int64 (__fastcall *)(_QWORD **))v19)(v18);
    v22 = v66;
    v21 = v59;
    v77 = v50;
    goto LABEL_12;
  }
LABEL_10:
  v18 = (_QWORD **)v16[8];
  v19 = (__int64 (__fastcall *)())(*v18)[2];
  if ( v19 != sub_59F640 )
    goto LABEL_65;
LABEL_11:
  v78 = v16;
  v75 = v14;
  v51 = v18;
  v71 = (*(__int64 (__fastcall **)(_QWORD *))(*v18[8] + 16LL))(v18[8]);
  v60 = v51;
  v67 = (__int64)v51[4];
  v52 = (char *)v51[7];
  v77 = sub_186B270(0x48u);
  sub_59A080(v77, v67, v60 + 1, v52, v71, v20);
  v21 = v75;
  v22 = v78;
LABEL_12:
  v72 = v21;
  v61 = v22;
  v68 = v22[4];
  v53 = (char *)v22[7];
  v76 = sub_186B270(0x48u);
  sub_59A080(v76, v68, v61 + 1, v53, v77, v23);
  v24 = v72;
LABEL_13:
  v69 = v24;
  v73 = v24[4];
  v62 = (char *)v24[7];
  v54 = sub_186B270(0x48u);
  sub_59A080(v54, v73, v69 + 1, v62, v76, v25);
LABEL_14:
  v74 = v12[4];
  v63 = (char *)v12[7];
  v70 = sub_186B270(0x48u);
  sub_59A080(v70, v74, v12 + 1, v63, v54, v26);
LABEL_15:
  v64 = v10[4];
  v55 = (char *)v10[7];
  v27 = sub_186B270(0x48u);
  sub_59A080(v27, v64, v10 + 1, v55, v70, v28);
LABEL_16:
  v65 = v8[4];
  v56 = (char *)v8[7];
  v29 = sub_186B270(0x48u);
  sub_59A080(v29, v65, v8 + 1, v56, v27, v30);
LABEL_17:
  v31 = v6[4];
  v57 = (char *)v6[7];
  v32 = sub_186B270(0x48u);
  sub_59A080(v32, v31, v6 + 1, v57, v29, v33);
LABEL_18:
  v34 = v3[4];
  v35 = (char *)v3[7];
  v36 = sub_186B270(0x48u);
  sub_59A080(v36, v34, v3 + 1, v35, v32, v37);
LABEL_48:
  v44 = a1[4];
  v45 = (char *)a1[7];
  v46 = sub_186B270(0x48u);
  sub_59A080(v46, v44, a1 + 1, v45, v36, v47);
  return v46;
}

