_QWORD *__fastcall sub_3EC8A0(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r13
  int *v6; // rbp
  int *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  void *v11; // rdi
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17; // dl
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r12
  void *v21; // rdi
  int v22; // eax
  _DWORD *v23; // rax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  bool v27; // bp
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbp
  void *v31; // r15
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 v35; // r15
  bool v36; // zf
  __int64 v38; // [rsp+0h] [rbp-88h]
  void *v39; // [rsp+8h] [rbp-80h]
  bool v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+10h] [rbp-78h]
  void *v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  int v45; // [rsp+30h] [rbp-58h] BYREF
  char v46; // [rsp+34h] [rbp-54h]
  __int64 v47; // [rsp+38h] [rbp-50h]
  int v48; // [rsp+40h] [rbp-48h] BYREF
  char v49; // [rsp+44h] [rbp-44h]
  __int64 v50; // [rsp+48h] [rbp-40h]

  v5 = a2[9];
  v43 = a3;
  v6 = (int *)(v5 + 32LL * a3);
  v7 = (int *)(32LL * a4 + v5);
  v41 = a4;
  v44 = *a2;
  v8 = a2[8];
  v9 = *(_QWORD *)(v8 + 8LL * a3);
  v10 = *(_QWORD *)(v8 + 8LL * a4);
  v45 = 0;
  v46 &= 0xFCu;
  v49 &= 0xFCu;
  v38 = v10;
  v47 = 0;
  v48 = 1;
  v50 = 0;
  v11 = qword_1C7F2C0;
  if ( (v7[1] & 1) != 0 )
  {
    v39 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v45, v7);
    v11 = v39;
  }
  else
  {
    v45 = *v7;
  }
  if ( (v7[5] & 1) != 0 )
  {
    sub_182C690(v11, &v48, v7 + 4);
  }
  else
  {
    v12 = v7[4];
    v49 &= ~1u;
    v48 = v12;
  }
  sub_1831690(qword_1C7F2C0, &v45);
  v13 = *(_DWORD **)(sub_15D1F10(v9) + 24);
  v17 = 0;
  if ( v13 && *v13 == 5 )
    v17 = v13[1] == 1;
  v18 = a2[2];
  if ( !v18 )
  {
    v40 = v17;
    sub_16669E0(a2 + 1);
    v18 = a2[2];
    v17 = v40;
  }
  sub_166A700(v18, (unsigned int)&v45, v17, v14, v15, v16);
  v19 = sub_15E1B70(a2[1]);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v45);
  sub_182CBA0(v42, &v48);
  v46 &= 0xFCu;
  v21 = qword_1C7F2C0;
  v49 &= 0xFCu;
  v45 = 0;
  v47 = 0;
  v48 = 1;
  v50 = 0;
  if ( (v6[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v45, v6);
  else
    v45 = *v6;
  if ( (v6[5] & 1) != 0 )
  {
    sub_182C690(v21, &v48, v6 + 4);
  }
  else
  {
    v22 = v6[4];
    v49 &= ~1u;
    v48 = v22;
  }
  sub_1831690(qword_1C7F2C0, &v45);
  v23 = *(_DWORD **)(sub_15D1F10(v38) + 24);
  v27 = 0;
  if ( v23 && *v23 == 5 )
    v27 = v23[1] == 1;
  v28 = a2[2];
  if ( !v28 )
  {
    sub_16669E0(a2 + 1);
    v28 = a2[2];
  }
  sub_166A700(v28, (unsigned int)&v45, v27, v24, v25, v26);
  v29 = sub_15E1B70(a2[1]);
  v30 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v45);
  sub_182CBA0(v31, &v48);
  v32 = a2[11];
  v33 = *a2;
  v34 = a2[1];
  *a1 = 0;
  a1[1] = v33;
  if ( *(_BYTE *)(v32 + v41) || !*(_BYTE *)(v32 + v43) )
  {
    v35 = sub_15E1B70(v34);
    if ( v35 )
      goto LABEL_26;
LABEL_36:
    sub_14B9BF0(a2 + 3, 0, a1);
    goto LABEL_28;
  }
  v35 = sub_15E1B70(v34);
  if ( !v35 )
    goto LABEL_36;
LABEL_26:
  ++*(_DWORD *)(v35 + 8);
  sub_14B9BF0(a2 + 3, v35, a1);
  v36 = (*(_DWORD *)(v35 + 8))-- == 1;
  if ( v36 )
    sub_15D7BC0(v33, v35);
LABEL_28:
  if ( v30 )
  {
    v36 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v36 )
      sub_15D7BC0(v44, v30);
  }
  if ( v20 )
  {
    v36 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v36 )
      sub_15D7BC0(v44, v20);
  }
  return a1;
}

