__int64 __fastcall sub_C531F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
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
  __int64 v25; // rax
  __int64 *v26; // rdx
  int v27; // eax
  _QWORD *v28; // [rsp+20h] [rbp-150h]
  _QWORD *v29; // [rsp+20h] [rbp-150h]
  int v30[2]; // [rsp+30h] [rbp-140h]
  int v31[2]; // [rsp+30h] [rbp-140h]
  __int64 v32; // [rsp+38h] [rbp-138h]
  __int64 v33; // [rsp+40h] [rbp-130h]
  __int64 v34; // [rsp+48h] [rbp-128h]
  _QWORD *v35; // [rsp+48h] [rbp-128h]
  unsigned int v37; // [rsp+50h] [rbp-120h]
  _QWORD *v38; // [rsp+70h] [rbp-100h]
  void *v39; // [rsp+70h] [rbp-100h]
  void *v40; // [rsp+70h] [rbp-100h]
  void *v41; // [rsp+70h] [rbp-100h]
  __int64 v42; // [rsp+78h] [rbp-F8h]
  _QWORD *v43; // [rsp+78h] [rbp-F8h]
  __int64 v44; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v45; // [rsp+88h] [rbp-E8h]
  __int64 v46; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+98h] [rbp-D8h]
  __int64 v48; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-C8h]
  __int64 v50; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-B8h]
  _QWORD v52[2]; // [rsp+C0h] [rbp-B0h] BYREF
  _QWORD v53[2]; // [rsp+D0h] [rbp-A0h] BYREF
  _QWORD v54[2]; // [rsp+E0h] [rbp-90h] BYREF
  _QWORD v55[2]; // [rsp+F0h] [rbp-80h] BYREF
  _QWORD v56[2]; // [rsp+100h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+110h] [rbp-60h] BYREF
  _QWORD v58[2]; // [rsp+120h] [rbp-50h] BYREF
  _QWORD v59[8]; // [rsp+130h] [rbp-40h] BYREF

  v6 = *a1;
  v52[0] = 0;
  v42 = v6;
  v52[1] = 0;
  v53[0] = 1;
  v53[1] = 0;
  v54[0] = 0;
  v54[1] = 0;
  v55[0] = 1;
  v55[1] = 0;
  v56[0] = 0;
  v56[1] = 0;
  v57[0] = 1;
  v57[1] = 0;
  v58[0] = 0;
  v58[1] = 0;
  v59[0] = 1;
  v59[1] = 0;
  v7 = a1[1];
  v45 = v6;
  v47 = v6;
  v38 = a1;
  v44 = 0;
  v46 = 0;
  v8 = sub_C50710(v7, a2, &v44, &v46, (__int64)v52, (__int64)v56);
  v9 = v44;
  v10 = v46;
  v33 = v47;
  v32 = v45;
  if ( v8 )
  {
    v16 = v38[1];
    v49 = v42;
    v51 = v42;
    v48 = 0;
    v50 = 0;
    v17 = sub_C50710(v16, a3, &v48, &v50, (__int64)v54, (__int64)v58);
    v12 = v48;
    v11 = v50;
    v34 = v51;
    v18 = v38;
    v42 = v49;
    if ( v17
      && ((v19 = qword_1C7F2C0, (v56[0] & 0x100000000LL) == 0) && (v58[0] & 0x100000000LL) == 0
        ? (v21 = LODWORD(v56[0]) == LODWORD(v58[0]))
        : (v20 = sub_182C7B0(qword_1C7F2C0, v56, v58), v18 = v38, v21 = v20 == 0),
          v21
       && ((v57[0] & 0x100000000LL) != 0 || (v59[0] & 0x100000000LL) != 0
         ? (v29 = v18, v27 = sub_182C7B0(v19, v57, v59), v18 = v29, v22 = v27 == 0)
         : (v22 = LODWORD(v57[0]) == LODWORD(v59[0])),
           v22)) )
    {
      v43 = v18;
      sub_C528A0((__int64 *)v18[1], &v44, &v46, &v48, &v50, (__int64)v52, (__int64)v54);
      sub_C4F590(v43[1], &v44, &v48);
      v23 = v43;
      v42 = v49;
      v35 = v23;
      v9 = v44;
      v12 = v48;
      v32 = v45;
      sub_C4F590(v23[1], &v46, &v50);
      v24 = v35;
      v10 = v46;
      v11 = v50;
      v34 = v51;
      v28 = v24;
      v33 = v47;
      *(_QWORD *)v30 = *v24;
      sub_15E1B70(*v24);
      sub_15E1B70(*v28);
      v25 = sub_15E1B70(v30[0]);
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      *(_QWORD *)v31 = v25;
      sub_C4E2C0(*a4, a4[1]);
      v26 = a4;
      v37 = 4;
      *v26 = *(_QWORD *)v31;
    }
    else
    {
      v37 = 5;
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v37 = 5;
    v34 = v42;
  }
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v58);
  sub_182CBA0(v39, v59);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v56);
  sub_182CBA0(v40, v57);
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v54);
  sub_182CBA0(v41, v55);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v52);
  sub_182CBA0(v13, v53);
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
      sub_15D7BC0(v42, v12);
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
  return v37;
}

