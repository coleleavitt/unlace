_QWORD *__fastcall sub_3EC280(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  void *v11; // r15
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rax
  void *v20; // r13
  void *v21; // r13
  int v22; // eax
  _DWORD *v23; // rax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  bool v27; // bp
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r12
  void *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rbp
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  _DWORD *v38; // rax
  bool v39; // bp
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbp
  void *v43; // r14
  __int64 v44; // r15
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r14
  bool v48; // zf
  int v50; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+20h] [rbp-78h]
  __int64 v53; // [rsp+28h] [rbp-70h]
  __int64 v54; // [rsp+30h] [rbp-68h]
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h] BYREF
  __int64 v57; // [rsp+48h] [rbp-50h]
  __int64 v58; // [rsp+50h] [rbp-48h] BYREF
  __int64 v59; // [rsp+58h] [rbp-40h]

  v5 = a2[9];
  v6 = v5 + 32LL * a3;
  v7 = 32LL * a4 + v5;
  v53 = a3;
  v55 = a4;
  v54 = *a2;
  v8 = a2[8];
  v9 = *(_QWORD *)(v8 + 8LL * a3);
  v10 = *(_QWORD *)(v8 + 8LL * a4);
  LODWORD(v56) = 0;
  BYTE4(v56) &= 0xFCu;
  BYTE4(v58) &= 0xFCu;
  v57 = 0;
  LODWORD(v58) = 1;
  v59 = 0;
  v11 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v56, v7);
  else
    LODWORD(v56) = *(_DWORD *)v7;
  if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
  {
    sub_182C690(v11, &v58, v7 + 16);
  }
  else
  {
    v12 = *(_DWORD *)(v7 + 16);
    BYTE4(v58) &= ~1u;
    LODWORD(v58) = v12;
  }
  sub_1831690(qword_1C7F2C0, &v56);
  v13 = *(_DWORD **)(sub_15D1F10(v9) + 24);
  v17 = 0;
  if ( v13 && *v13 == 5 )
    v17 = v13[1] == 1;
  v18 = a2[2];
  if ( !v18 )
  {
    sub_16669E0(a2 + 1);
    v18 = a2[2];
  }
  sub_166A700(v18, (unsigned int)&v56, v17, v14, v15, v16);
  v19 = sub_15E1B70(a2[1]);
  v52 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v56);
  sub_182CBA0(v20, &v58);
  BYTE4(v56) &= 0xFCu;
  v21 = qword_1C7F2C0;
  BYTE4(v58) &= 0xFCu;
  LODWORD(v56) = 0;
  v57 = 0;
  LODWORD(v58) = 1;
  v59 = 0;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v56, v6);
  else
    LODWORD(v56) = *(_DWORD *)v6;
  if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
  {
    sub_182C690(v21, &v58, v6 + 16);
  }
  else
  {
    v22 = *(_DWORD *)(v6 + 16);
    BYTE4(v58) &= ~1u;
    LODWORD(v58) = v22;
  }
  sub_1831690(qword_1C7F2C0, &v56);
  v23 = *(_DWORD **)(sub_15D1F10(v10) + 24);
  v27 = 0;
  if ( v23 && *v23 == 5 )
    v27 = v23[1] == 1;
  v28 = a2[2];
  if ( !v28 )
  {
    sub_16669E0(a2 + 1);
    v28 = a2[2];
  }
  sub_166A700(v28, (unsigned int)&v56, v27, v24, v25, v26);
  v29 = sub_15E1B70(a2[1]);
  v30 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v56);
  sub_182CBA0(v31, &v58);
  v32 = sub_15E1B70(a2[1]);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = sub_15D1F10(v9);
  v56 = 0;
  v57 = 0;
  v58 = 1;
  v59 = 0;
  sub_182CBA0(qword_1C7F2C0, &v58);
  v38 = *(_DWORD **)(v34 + 24);
  BYTE4(v58) &= ~1u;
  v39 = 0;
  LODWORD(v58) = 1;
  if ( v38 && *v38 == 5 )
    v39 = v38[1] == 1;
  v40 = a2[2];
  if ( !v40 )
  {
    sub_16669E0(a2 + 1);
    v40 = a2[2];
  }
  v41 = sub_166A700(v40, (unsigned int)&v56, v39, v35, v36, v37);
  v42 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v43 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v56);
  sub_182CBA0(v43, &v58);
  v44 = *a2;
  v45 = a2[1];
  *a1 = 0;
  a1[1] = v44;
  v46 = a2[11];
  if ( *(_BYTE *)(v46 + v53) || *(_BYTE *)(v46 + v55) )
  {
    v47 = sub_15E1B70(v45);
    if ( v47 )
      goto LABEL_35;
LABEL_51:
    sub_14B9BF0(a2 + 3, 0, a1);
    goto LABEL_37;
  }
  v47 = sub_15E1B70(v45);
  if ( !v47 )
    goto LABEL_51;
LABEL_35:
  ++*(_DWORD *)(v47 + 8);
  sub_14B9BF0(a2 + 3, v47, a1);
  v48 = (*(_DWORD *)(v47 + 8))-- == 1;
  if ( v48 )
    sub_15D7BC0(v44, v47);
LABEL_37:
  if ( v42 )
  {
    v48 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v54, v42);
  }
  if ( v33 )
  {
    v48 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v54, v33);
  }
  if ( v30 )
  {
    v48 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v54, v30);
  }
  if ( v52 )
  {
    v50 = *(_DWORD *)(v52 + 8);
    *(_DWORD *)(v52 + 8) = v50 - 1;
    if ( v50 == 1 )
      sub_15D7BC0(v54, v52);
  }
  return a1;
}

