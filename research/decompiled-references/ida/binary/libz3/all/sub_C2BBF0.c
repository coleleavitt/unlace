__int64 __fastcall sub_C2BBF0(__int64 ***a1, char a2, int a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  int v7; // r13d
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 **v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 *v20; // r15
  __int64 *v21; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdi
  void *v26; // r15
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 *v33; // r14
  __int64 *v34; // r13
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdi
  void *v39; // r15
  __int64 v40; // rax
  __int64 v41; // r14
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // [rsp+0h] [rbp-98h]
  int v48; // [rsp+8h] [rbp-90h]
  __int64 *v49; // [rsp+8h] [rbp-90h]
  int v50; // [rsp+10h] [rbp-88h]
  int v51[2]; // [rsp+18h] [rbp-80h]
  int v52[2]; // [rsp+18h] [rbp-80h]
  int v53; // [rsp+20h] [rbp-78h]
  __int64 v54; // [rsp+20h] [rbp-78h]
  char v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+28h] [rbp-70h]
  __int64 v57; // [rsp+30h] [rbp-68h] BYREF
  __int64 v58; // [rsp+38h] [rbp-60h] BYREF
  int v59[2]; // [rsp+40h] [rbp-58h] BYREF
  void *v60; // [rsp+48h] [rbp-50h]
  __int64 v61; // [rsp+50h] [rbp-48h] BYREF
  __int64 v62; // [rsp+58h] [rbp-40h]

  v7 = a4;
  if ( (unsigned __int8)sub_C2B280(*a1, a4, &v57, &v58) )
  {
    if ( a2 )
      v13 = v57;
    else
      v13 = v58;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v14 = *a5;
    if ( *a5 )
    {
      v15 = a5[1];
      v16 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v15, v14);
    }
    v17 = *a1;
    *a5 = v13;
    v18 = sub_15DC610(**v17, a3, 1, (int)v59, v11, v12, v47, v48, v50, **v17, v53, v55, v57, v58, v7, v60);
    v19 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    sub_C294F0(a1, *a5, v18, a6);
    sub_C2AB80((__int64)a1, v19, *a5, *a6);
    v20 = **a1;
    sub_15E1B70(*v20);
    sub_15E1B70(***a1);
    sub_15E1B70(*v20);
    v21 = **a1;
    *(_QWORD *)v59 = 1;
    v60 = nullptr;
    v49 = v21;
    v61 = 1;
    v62 = 0;
    sub_182CBA0(qword_1C7F2C0, &v61);
    BYTE4(v61) &= ~1u;
    LODWORD(v61) = 1;
    v25 = v49[1];
    if ( !v25 )
    {
      sub_16669E0(v49);
      v25 = v49[1];
    }
    sub_166A700(v25, (unsigned int)v59, 0, v22, v23, v24);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v59);
    sub_182CBA0(v26, &v61);
    v27 = sub_15E1B70(***a1);
    *(_QWORD *)v59 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_C28530(a1 + 13, v59);
    sub_C2BA80(a1, *a6);
    if ( v19 )
    {
      v16 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(*(_QWORD *)v51, v19);
    }
    return 4;
  }
  else
  {
    *(_QWORD *)v52 = ***a1;
    v29 = sub_15E1A70(v52[0]);
    v30 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v54 = ***a1;
    v31 = sub_15E1A70(v54);
    v32 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    v33 = **a1;
    v56 = *v33;
    sub_15E1B70(*v33);
    sub_15E1B70(***a1);
    sub_15E1B70(*v33);
    v34 = **a1;
    *(_QWORD *)v59 = 1;
    v60 = nullptr;
    v61 = 1;
    v62 = 0;
    sub_182CBA0(qword_1C7F2C0, &v61);
    v38 = v34[1];
    BYTE4(v61) &= ~1u;
    LODWORD(v61) = 1;
    if ( !v38 )
    {
      sub_16669E0(v34);
      v38 = v34[1];
    }
    sub_166A700(v38, (unsigned int)v59, 0, v35, v36, v37);
    v39 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v59);
    sub_182CBA0(v39, &v61);
    v40 = sub_15E1B70(***a1);
    v41 = v40;
    if ( v40 )
    {
      v42 = *(_DWORD *)(v40 + 8);
      *(_QWORD *)v59 = v41;
      *(_DWORD *)(v41 + 8) = v42 + 2;
    }
    else
    {
      *(_QWORD *)v59 = 0;
    }
    sub_C28530(a1 + 13, v59);
    v46 = sub_15DE060(***a1, v41, v43, v44, v45);
    sub_C2BA80(a1, v46);
    if ( v41 )
    {
      v16 = (*(_DWORD *)(v41 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v56, v41);
    }
    if ( v32 )
    {
      v16 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v54, v32);
    }
    if ( v30 )
    {
      v16 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(*(_QWORD *)v52, v30);
    }
    return 5;
  }
}

