__int64 __fastcall sub_C57F20(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  void *v13; // rbx
  bool v14; // zf
  __int64 v16; // rdi
  char v17; // al
  _QWORD *v18; // r10
  void *v19; // rdi
  int v20; // eax
  bool v21; // al
  bool v22; // al
  _DWORD *v23; // rax
  int v24; // eax
  _QWORD *v25; // [rsp+20h] [rbp-150h]
  _QWORD *v26; // [rsp+20h] [rbp-150h]
  __int64 v27; // [rsp+28h] [rbp-148h]
  __int64 v28; // [rsp+30h] [rbp-140h]
  __int64 v29; // [rsp+38h] [rbp-138h]
  __int64 v30; // [rsp+40h] [rbp-130h]
  __int64 v31; // [rsp+48h] [rbp-128h]
  unsigned int v33; // [rsp+50h] [rbp-120h]
  _QWORD *v34; // [rsp+68h] [rbp-108h]
  void *v35; // [rsp+68h] [rbp-108h]
  void *v36; // [rsp+70h] [rbp-100h]
  void *v37; // [rsp+70h] [rbp-100h]
  __int64 v38; // [rsp+78h] [rbp-F8h]
  __int64 v39; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v40; // [rsp+88h] [rbp-E8h]
  __int64 v41; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+98h] [rbp-D8h]
  __int64 v43; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-C8h]
  __int64 v45; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-B8h]
  _QWORD v47[2]; // [rsp+C0h] [rbp-B0h] BYREF
  _QWORD v48[2]; // [rsp+D0h] [rbp-A0h] BYREF
  _QWORD v49[2]; // [rsp+E0h] [rbp-90h] BYREF
  _QWORD v50[2]; // [rsp+F0h] [rbp-80h] BYREF
  _QWORD v51[2]; // [rsp+100h] [rbp-70h] BYREF
  _QWORD v52[2]; // [rsp+110h] [rbp-60h] BYREF
  _QWORD v53[2]; // [rsp+120h] [rbp-50h] BYREF
  _QWORD v54[8]; // [rsp+130h] [rbp-40h] BYREF

  v6 = *a1;
  v47[0] = 0;
  v38 = v6;
  v47[1] = 0;
  v48[0] = 1;
  v48[1] = 0;
  v49[0] = 0;
  v49[1] = 0;
  v50[0] = 1;
  v50[1] = 0;
  v51[0] = 0;
  v51[1] = 0;
  v52[0] = 1;
  v52[1] = 0;
  v53[0] = 0;
  v53[1] = 0;
  v54[0] = 1;
  v54[1] = 0;
  v7 = a1[1];
  v40 = v6;
  v42 = v6;
  v34 = a1;
  v39 = 0;
  v41 = 0;
  v8 = sub_C50710(v7, a2, &v39, &v41, (__int64)v47, (__int64)v51);
  v9 = v39;
  v10 = v41;
  v30 = v42;
  v29 = v40;
  if ( v8 )
  {
    v16 = v34[1];
    v44 = v38;
    v46 = v38;
    v43 = 0;
    v45 = 0;
    v17 = sub_C50710(v16, a3, &v43, &v45, (__int64)v49, (__int64)v53);
    v12 = v43;
    v11 = v45;
    v31 = v46;
    v18 = v34;
    v38 = v44;
    if ( v17
      && ((v19 = qword_1C7F2C0, (v51[0] & 0x100000000LL) == 0) && (v53[0] & 0x100000000LL) == 0
        ? (v21 = LODWORD(v51[0]) == LODWORD(v53[0]))
        : (v20 = sub_182C7B0(qword_1C7F2C0, v51, v53), v18 = v34, v21 = v20 == 0),
          v21
       && ((v52[0] & 0x100000000LL) != 0 || (v54[0] & 0x100000000LL) != 0
         ? (v26 = v18, v24 = sub_182C7B0(v19, v52, v54), v18 = v26, v22 = v24 == 0)
         : (v22 = LODWORD(v52[0]) == LODWORD(v54[0])),
           v22)) )
    {
      v25 = v18;
      sub_C528A0((__int64 *)v18[1], &v39, &v41, &v43, &v45, (__int64)v47, (__int64)v49);
      v31 = v46;
      v11 = v45;
      v10 = v41;
      v38 = v44;
      v9 = v39;
      v12 = v43;
      v30 = v42;
      v29 = v40;
      v27 = v25[1];
      v28 = sub_C4F690(v27, v41, v45);
      v23 = (_DWORD *)sub_C4F690(v25[1], v9, v12);
      v33 = 5 - (unsigned __int8)sub_C56150(v27, v23, v28, (__int64)v47, (int *)v51, a4);
    }
    else
    {
      v33 = 5;
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v33 = 5;
    v31 = v38;
  }
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v53);
  sub_182CBA0(v35, v54);
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v51);
  sub_182CBA0(v36, v52);
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v49);
  sub_182CBA0(v37, v50);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v47);
  sub_182CBA0(v13, v48);
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v31, v11);
  }
  if ( v12 )
  {
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v38, v12);
  }
  if ( v10 )
  {
    v14 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v30, v10);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v29, v9);
  }
  return v33;
}

