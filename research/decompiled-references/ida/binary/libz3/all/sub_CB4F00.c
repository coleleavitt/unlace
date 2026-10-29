__int64 __fastcall sub_CB4F00(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // r14
  char v9; // al
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r12
  __int64 v13; // r13
  char v14; // al
  unsigned int v15; // edx
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // [rsp+0h] [rbp-D0h]
  __int64 v34; // [rsp+0h] [rbp-D0h]
  __int64 v35; // [rsp+8h] [rbp-C8h]
  __int64 v36; // [rsp+10h] [rbp-C0h]
  __int64 v39; // [rsp+28h] [rbp-A8h]
  int v40; // [rsp+30h] [rbp-A0h]
  unsigned int v41; // [rsp+30h] [rbp-A0h]
  unsigned int v42; // [rsp+30h] [rbp-A0h]
  unsigned int v43; // [rsp+30h] [rbp-A0h]
  unsigned int v44; // [rsp+30h] [rbp-A0h]
  struct _Unwind_Exception *v45; // [rsp+30h] [rbp-A0h]
  struct _Unwind_Exception *v46; // [rsp+30h] [rbp-A0h]
  int v47[2]; // [rsp+38h] [rbp-98h]
  int v48[2]; // [rsp+40h] [rbp-90h] BYREF
  int v49[2]; // [rsp+48h] [rbp-88h] BYREF
  int v50[2]; // [rsp+50h] [rbp-80h] BYREF
  __int64 v51; // [rsp+58h] [rbp-78h]
  int v52[2]; // [rsp+60h] [rbp-70h] BYREF
  __int64 v53; // [rsp+68h] [rbp-68h]
  int v54[2]; // [rsp+70h] [rbp-60h] BYREF
  __int64 v55; // [rsp+78h] [rbp-58h]
  int v56[2]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v57; // [rsp+88h] [rbp-48h]
  __int64 v58; // [rsp+90h] [rbp-40h] BYREF
  __int64 v59; // [rsp+98h] [rbp-38h]

  v6 = *a1;
  *(_QWORD *)v50 = 0;
  v51 = v6;
  *(_QWORD *)v54 = 0;
  v55 = v6;
  v7 = sub_CB2220((__int64)a1, a2, (__int64 *)v50, (__int64 *)v54);
  v8 = *(_QWORD *)v54;
  v36 = v55;
  if ( !v7 )
  {
    v35 = v6;
    v13 = 0;
    v12 = 0;
LABEL_3:
    v14 = sub_CB3490(a1, a2, (__int64 *)v50);
    v15 = 5;
    *(_QWORD *)v47 = *(_QWORD *)v50;
    v39 = v51;
    if ( v14 )
    {
      v53 = v6;
      *(_QWORD *)v52 = v12;
      if ( (unsigned __int8)sub_CB3490(a1, a3, (__int64 *)v52) )
      {
        sub_CB2B60((__int64)a1, (__int64 *)v50, (__int64 *)v52, 1);
        v58 = 1;
        v6 = v53;
        v46 = *(struct _Unwind_Exception **)v52;
        v34 = *(_QWORD *)v50;
        v28 = a1[3];
        *(_QWORD *)v48 = *(_QWORD *)v50;
        v39 = v51;
        v59 = 0;
        *(_QWORD *)v47 = sub_15DCAD0(v28, (int)v48, 0);
        sub_15D0DF0(&v58);
        if ( *(_QWORD *)v47 )
          ++*(_DWORD *)(*(_QWORD *)v47 + 8LL);
        sub_CB1660(v34, v39);
        v58 = 1;
        v29 = a1[3];
        v59 = 0;
        *(_QWORD *)v49 = v46;
        v12 = sub_15DCAD0(v29, (int)v49, 0);
        sub_15D0DF0(&v58);
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        sub_CB1660((__int64)v46, v6);
        v30 = sub_15E1B70(a1[3]);
        v31 = sub_CB26C0(a1, v30);
        v32 = v31;
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        sub_CB1660(*a4, a4[1]);
        v15 = 4;
        *a4 = v32;
      }
      else
      {
        v12 = *(_QWORD *)v52;
        v6 = v53;
        v15 = 5;
      }
    }
    goto LABEL_4;
  }
  *(_QWORD *)v52 = 0;
  v33 = *(_QWORD *)v50;
  v53 = v6;
  v39 = v51;
  *(_QWORD *)v56 = 0;
  v57 = v6;
  v9 = sub_CB2220((__int64)a1, a3, (__int64 *)v52, (__int64 *)v56);
  v12 = *(_QWORD *)v52;
  v13 = *(_QWORD *)v56;
  v6 = v53;
  v35 = v57;
  if ( !v9 )
    goto LABEL_3;
  v18 = sub_CB2CA0((__int64)a1, v33, *(__int64 *)v56, 0, v10, v11);
  v19 = sub_16747F0(a1 + 2, v18);
  *(_QWORD *)v47 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  if ( v33 )
  {
    v16 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v39, v33);
  }
  v22 = sub_CB2CA0((__int64)a1, v8, v12, 0, v20, v21);
  v23 = sub_16747F0(a1 + 2, v22);
  v45 = (struct _Unwind_Exception *)v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  if ( v8 )
  {
    v16 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v36, v8);
  }
  v24 = sub_15E1B70(a1[5]);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v26 = *a4;
  if ( *a4 )
  {
    v27 = a4[1];
    v16 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v27, v26);
  }
  v15 = 4;
  *a4 = v25;
  v8 = (__int64)v45;
LABEL_4:
  if ( v13 )
  {
    v16 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v16 )
    {
      v44 = v15;
      sub_15D7BC0(v35, v13);
      v15 = v44;
    }
  }
  if ( v8 )
  {
    v16 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v16 )
    {
      v43 = v15;
      sub_15D7BC0(v36, v8);
      v15 = v43;
    }
  }
  if ( v12 )
  {
    v16 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v16 )
    {
      v42 = v15;
      sub_15D7BC0(v6, v12);
      v15 = v42;
    }
  }
  if ( *(_QWORD *)v47 )
  {
    v40 = *(_DWORD *)(*(_QWORD *)v47 + 8LL);
    *(_DWORD *)(*(_QWORD *)v47 + 8LL) = v40 - 1;
    if ( v40 == 1 )
    {
      v41 = v15;
      sub_15D7BC0(v39, *(_QWORD *)v47);
      return v41;
    }
  }
  return v15;
}

