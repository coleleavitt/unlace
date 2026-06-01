__int64 __fastcall sub_C4EDF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 v9; // r12
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r12
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbp
  void *v17; // r15
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r14
  void *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r13
  bool v31; // zf
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // rbx
  __int64 result; // rax
  __int64 v39; // [rsp+18h] [rbp-D0h]
  __int64 v40; // [rsp+20h] [rbp-C8h]
  __int64 *v42; // [rsp+30h] [rbp-B8h]
  __int64 v43; // [rsp+38h] [rbp-B0h]
  int v44[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-A0h]
  int v46[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v47; // [rsp+58h] [rbp-90h]
  _QWORD v48[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v49[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v50[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v51[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v52[9]; // [rsp+A0h] [rbp-48h] BYREF

  v43 = *a1;
  v49[0] = 0;
  v49[1] = 0;
  v50[0] = 1;
  v50[1] = 0;
  *(_QWORD *)v44 = 0;
  v45 = v43;
  sub_C4EAA0(a1, a2, (__int64 *)v44);
  v47 = v43;
  v9 = *(_QWORD *)v44;
  *(_QWORD *)v46 = 0;
  sub_C4EAA0(a1, a3, (__int64 *)v46);
  v10 = *(_QWORD *)v46;
  sub_C4E940((__int64)a1, v9, a4, (__int64 *)v44, v11, v12);
  v13 = *(_QWORD *)v44;
  v40 = v45;
  sub_C4E940((__int64)a1, v10, a4, (__int64 *)v46, v14, v15);
  v51[0] = 1;
  v51[1] = 0;
  v16 = *(_QWORD *)v46;
  v39 = v47;
  v42 = a1 + 1;
  v52[0] = 2;
  v52[1] = 0;
  v17 = qword_1C7F2C0;
  v48[0] = 0;
  v48[1] = 0;
  sub_1832C70(qword_1C7F2C0, v51, v52, v48);
  if ( (v48[0] & 0x100000000LL) == 0 && LODWORD(v48[0]) == 1 )
  {
    sub_182CBA0(v17, v48);
    v21 = a1[2];
    if ( v21 )
      goto LABEL_4;
  }
  else
  {
    sub_1833EB0(v17, v51, v48, v51);
    sub_1833EB0(v17, v52, v48, v52);
    sub_182CBA0(v17, v48);
    v21 = a1[2];
    if ( v21 )
      goto LABEL_4;
  }
  sub_16669E0(v42);
  v21 = a1[2];
LABEL_4:
  sub_166A700(v21, (unsigned int)v51, 0, v18, v19, v20);
  v25 = a1[2];
  if ( !v25 )
  {
    sub_16669E0(v42);
    v25 = a1[2];
  }
  sub_166A700(v25, a5, 0, v22, v23, v24);
  v26 = sub_15E1B70(a1[1]);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v51);
  sub_182CBA0(v28, v52);
  v29 = sub_15E1B70(a1[1]);
  v30 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  if ( v16 )
  {
    v31 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v39, v16);
  }
  v32 = sub_15E1B70(a1[1]);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = *a6;
  if ( *a6 )
  {
    v35 = a6[1];
    v31 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v35, v34);
  }
  *a6 = v33;
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v49);
  result = sub_182CBA0(v36, v50);
  if ( v27 )
  {
    v31 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v31 )
      result = sub_15D7BC0(v43, v27);
  }
  if ( v30 )
  {
    v31 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v31 )
      result = sub_15D7BC0(v39, v30);
  }
  if ( v13 )
  {
    v31 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v31 )
      return sub_15D7BC0(v40, v13);
  }
  return result;
}

