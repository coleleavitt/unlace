__int64 __fastcall sub_C56770(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // r14
  __int64 v10; // r15
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
  _QWORD *v23; // r10
  _QWORD *v24; // r10
  _DWORD *v25; // rax
  int v26; // eax
  _QWORD *v27; // [rsp+18h] [rbp-158h]
  _QWORD *v28; // [rsp+18h] [rbp-158h]
  __int64 v29; // [rsp+20h] [rbp-150h]
  __int64 v31; // [rsp+30h] [rbp-140h]
  __int64 v32; // [rsp+38h] [rbp-138h]
  __int64 v33; // [rsp+40h] [rbp-130h]
  __int64 v34; // [rsp+48h] [rbp-128h]
  _QWORD *v35; // [rsp+48h] [rbp-128h]
  unsigned int v36; // [rsp+50h] [rbp-120h]
  _QWORD *v37; // [rsp+68h] [rbp-108h]
  void *v38; // [rsp+68h] [rbp-108h]
  void *v39; // [rsp+70h] [rbp-100h]
  void *v40; // [rsp+70h] [rbp-100h]
  __int64 v41; // [rsp+78h] [rbp-F8h]
  _QWORD *v42; // [rsp+78h] [rbp-F8h]
  __int64 v43; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v44; // [rsp+88h] [rbp-E8h]
  __int64 v45; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+98h] [rbp-D8h]
  __int64 v47; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-C8h]
  __int64 v49; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-B8h]
  _QWORD v51[2]; // [rsp+C0h] [rbp-B0h] BYREF
  _QWORD v52[2]; // [rsp+D0h] [rbp-A0h] BYREF
  _QWORD v53[2]; // [rsp+E0h] [rbp-90h] BYREF
  _QWORD v54[2]; // [rsp+F0h] [rbp-80h] BYREF
  _QWORD v55[2]; // [rsp+100h] [rbp-70h] BYREF
  _QWORD v56[2]; // [rsp+110h] [rbp-60h] BYREF
  _QWORD v57[2]; // [rsp+120h] [rbp-50h] BYREF
  _QWORD v58[8]; // [rsp+130h] [rbp-40h] BYREF

  v41 = *a1;
  v51[0] = 0;
  v51[1] = 0;
  v52[0] = 1;
  v52[1] = 0;
  v53[0] = 0;
  v53[1] = 0;
  v54[0] = 1;
  v54[1] = 0;
  v55[0] = 0;
  v55[1] = 0;
  v56[0] = 1;
  v56[1] = 0;
  v57[0] = 0;
  v57[1] = 0;
  v58[0] = 1;
  v7 = a1[1];
  v44 = v41;
  v46 = v41;
  v58[1] = 0;
  v37 = a1;
  v43 = 0;
  v45 = 0;
  v8 = sub_C50710(v7, a3, &v43, &v45, (__int64)v51, (__int64)v55);
  v9 = v43;
  v10 = v45;
  v33 = v46;
  v32 = v44;
  if ( v8 )
  {
    v16 = v37[1];
    v48 = v41;
    v50 = v41;
    v47 = 0;
    v49 = 0;
    v17 = sub_C50710(v16, a4, &v47, &v49, (__int64)v53, (__int64)v57);
    v12 = v47;
    v11 = v49;
    v34 = v50;
    v18 = v37;
    v41 = v48;
    if ( v17
      && ((v19 = qword_1C7F2C0, (v55[0] & 0x100000000LL) == 0) && (v57[0] & 0x100000000LL) == 0
        ? (v21 = LODWORD(v55[0]) == LODWORD(v57[0]))
        : (v20 = sub_182C7B0(qword_1C7F2C0, v55, v57), v18 = v37, v21 = v20 == 0),
          v21
       && ((v56[0] & 0x100000000LL) != 0 || (v58[0] & 0x100000000LL) != 0
         ? (v28 = v18, v26 = sub_182C7B0(v19, v56, v58), v18 = v28, v22 = v26 == 0)
         : (v22 = LODWORD(v56[0]) == LODWORD(v58[0])),
           v22)) )
    {
      v42 = v18;
      sub_C528A0((__int64 *)v18[1], &v43, &v45, &v47, &v49, (__int64)v51, (__int64)v53);
      sub_C4F590(v42[1], &v43, &v47);
      v23 = v42;
      v41 = v48;
      v35 = v23;
      v9 = v43;
      v12 = v47;
      v32 = v44;
      sub_C4F590(v23[1], &v45, &v49);
      v24 = v35;
      v10 = v45;
      v11 = v49;
      v34 = v50;
      v33 = v46;
      v27 = v24;
      v29 = v24[1];
      v31 = sub_15E1BF0(*v24);
      v25 = (_DWORD *)sub_15E1BF0(*v27);
      v36 = 5 - (unsigned __int8)sub_C56150(v29, v25, v31, (__int64)v51, (int *)v55, a5);
    }
    else
    {
      v36 = 5;
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v36 = 5;
    v34 = v41;
  }
  v38 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v57);
  sub_182CBA0(v38, v58);
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v55);
  sub_182CBA0(v39, v56);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v53);
  sub_182CBA0(v40, v54);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v51);
  sub_182CBA0(v13, v52);
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v34, v11);
  }
  if ( v12 )
  {
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v41, v12);
  }
  if ( v10 )
  {
    v14 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v33, v10);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v32, v9);
  }
  return v36;
}

