__int64 __fastcall sub_C57020(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
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
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  _DWORD *v29; // rax
  int v30; // eax
  _QWORD *v31; // [rsp+20h] [rbp-150h]
  _QWORD *v32; // [rsp+20h] [rbp-150h]
  __int64 v33; // [rsp+28h] [rbp-148h]
  __int64 v34; // [rsp+30h] [rbp-140h]
  __int64 v35; // [rsp+38h] [rbp-138h]
  __int64 v36; // [rsp+40h] [rbp-130h]
  __int64 v37; // [rsp+48h] [rbp-128h]
  unsigned int v39; // [rsp+50h] [rbp-120h]
  _QWORD *v40; // [rsp+68h] [rbp-108h]
  void *v41; // [rsp+68h] [rbp-108h]
  void *v42; // [rsp+70h] [rbp-100h]
  void *v43; // [rsp+70h] [rbp-100h]
  __int64 v44; // [rsp+78h] [rbp-F8h]
  __int64 v45; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v46; // [rsp+88h] [rbp-E8h]
  __int64 v47; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+98h] [rbp-D8h]
  __int64 v49; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-C8h]
  __int64 v51; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-B8h]
  _QWORD v53[2]; // [rsp+C0h] [rbp-B0h] BYREF
  _QWORD v54[2]; // [rsp+D0h] [rbp-A0h] BYREF
  _QWORD v55[2]; // [rsp+E0h] [rbp-90h] BYREF
  _QWORD v56[2]; // [rsp+F0h] [rbp-80h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp-70h] BYREF
  _QWORD v58[2]; // [rsp+110h] [rbp-60h] BYREF
  _QWORD v59[2]; // [rsp+120h] [rbp-50h] BYREF
  _QWORD v60[8]; // [rsp+130h] [rbp-40h] BYREF

  v6 = *a1;
  v53[0] = 0;
  v44 = v6;
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
  v58[1] = 0;
  v59[0] = 0;
  v59[1] = 0;
  v60[0] = 1;
  v60[1] = 0;
  v7 = a1[1];
  v46 = v6;
  v48 = v6;
  v40 = a1;
  v45 = 0;
  v47 = 0;
  v8 = sub_C50710(v7, a2, &v45, &v47, (__int64)v53, (__int64)v57);
  v9 = v45;
  v10 = v47;
  v36 = v48;
  v35 = v46;
  if ( v8 )
  {
    v16 = v40[1];
    v50 = v44;
    v52 = v44;
    v49 = 0;
    v51 = 0;
    v17 = sub_C50710(v16, a3, &v49, &v51, (__int64)v55, (__int64)v59);
    v12 = v49;
    v11 = v51;
    v37 = v52;
    v18 = v40;
    v44 = v50;
    if ( v17
      && ((v19 = qword_1C7F2C0, (v57[0] & 0x100000000LL) == 0) && (v59[0] & 0x100000000LL) == 0
        ? (v21 = LODWORD(v57[0]) == LODWORD(v59[0]))
        : (v20 = sub_182C7B0(qword_1C7F2C0, v57, v59), v18 = v40, v21 = v20 == 0),
          v21
       && ((v58[0] & 0x100000000LL) != 0 || (v60[0] & 0x100000000LL) != 0
         ? (v32 = v18, v30 = sub_182C7B0(v19, v58, v60), v18 = v32, v22 = v30 == 0)
         : (v22 = LODWORD(v58[0]) == LODWORD(v60[0])),
           v22)) )
    {
      v31 = v18;
      sub_C528A0((__int64 *)v18[1], &v45, &v47, &v49, &v51, (__int64)v53, (__int64)v55);
      v37 = v52;
      v11 = v51;
      v10 = v47;
      v44 = v50;
      v9 = v45;
      v12 = v49;
      v36 = v48;
      v35 = v46;
      v33 = v31[1];
      v34 = sub_C4F800(v33, v51, v47, v23, v24, v25);
      v29 = (_DWORD *)sub_C4F800(v31[1], v9, v12, v26, v27, v28);
      v39 = 5 - (unsigned __int8)sub_C56150(v33, v29, v34, (__int64)v53, (int *)v57, a4);
    }
    else
    {
      v39 = 5;
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v39 = 5;
    v37 = v44;
  }
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v59);
  sub_182CBA0(v41, v60);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v57);
  sub_182CBA0(v42, v58);
  v43 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v55);
  sub_182CBA0(v43, v56);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v53);
  sub_182CBA0(v13, v54);
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v37, v11);
  }
  if ( v12 )
  {
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v44, v12);
  }
  if ( v10 )
  {
    v14 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v36, v10);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v35, v9);
  }
  return v39;
}

