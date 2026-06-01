__int64 __fastcall sub_CB4990(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  char v7; // al
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // r15
  __int64 v13; // r14
  char v14; // al
  unsigned int v15; // edx
  bool v16; // zf
  char v18; // al
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  char v32; // al
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  void *v43; // [rsp+8h] [rbp-B0h]
  unsigned int v44; // [rsp+8h] [rbp-B0h]
  unsigned int v45; // [rsp+8h] [rbp-B0h]
  unsigned int v46; // [rsp+8h] [rbp-B0h]
  unsigned int v47; // [rsp+8h] [rbp-B0h]
  __int64 v48; // [rsp+18h] [rbp-A0h]
  __int64 v49; // [rsp+20h] [rbp-98h]
  __int64 v52; // [rsp+38h] [rbp-80h]
  __int64 v53; // [rsp+40h] [rbp-78h] BYREF
  __int64 v54; // [rsp+48h] [rbp-70h]
  int v55[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v56; // [rsp+58h] [rbp-60h]
  int v57[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v58; // [rsp+68h] [rbp-50h]
  int v59[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v60; // [rsp+78h] [rbp-40h]

  v5 = *a1;
  v53 = 0;
  v54 = v5;
  if ( !(unsigned __int8)sub_CB1F80((__int64)a1, a2, &v53) )
  {
    v48 = v5;
    v10 = 0;
LABEL_3:
    *(_QWORD *)v57 = 0;
    v58 = v5;
    v11 = sub_CB2220((__int64)a1, a2, &v53, (__int64 *)v57);
    v12 = *(_QWORD *)v57;
    v52 = v58;
    if ( v11 )
    {
      *(_QWORD *)v55 = v10;
      v6 = v53;
      v49 = v54;
      *(_QWORD *)v59 = 0;
      v56 = v48;
      v60 = v5;
      v18 = sub_CB2220((__int64)a1, a3, (__int64 *)v55, (__int64 *)v59);
      v10 = *(_QWORD *)v55;
      v13 = *(_QWORD *)v59;
      v5 = v60;
      v48 = v56;
      if ( v18 )
      {
        v21 = sub_CB2CA0((__int64)a1, v6, *(__int64 *)v55, 0, v19, v20);
        v22 = sub_16747F0(a1 + 2, v21);
        v43 = (void *)v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        if ( v10 )
        {
          v16 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v48, v10);
        }
        v25 = sub_CB2CA0((__int64)a1, v12, v13, 0, v23, v24);
        v26 = sub_16747F0(a1 + 2, v25);
        v27 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        if ( v13 )
        {
          v16 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v5, v13);
        }
        v28 = sub_15E1B70(a1[5]);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        v30 = *a4;
        if ( *a4 )
        {
          v31 = a4[1];
          v16 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v31, v30);
        }
        v13 = v27;
        v15 = 4;
        v10 = (__int64)v43;
        *a4 = v29;
        goto LABEL_6;
      }
    }
    else
    {
      v13 = 0;
    }
    v14 = sub_CB3490(a1, a2, &v53);
    v6 = v53;
    v15 = 5;
    v49 = v54;
    if ( v14 )
    {
      *(_QWORD *)v55 = v10;
      v56 = v48;
      v32 = sub_CB3490(a1, a3, (__int64 *)v55);
      v10 = *(_QWORD *)v55;
      v15 = 5;
      v48 = v56;
      if ( v32 )
      {
        v35 = sub_CB2CA0((__int64)a1, v6, *(__int64 *)v55, 1, v33, v34);
        v36 = sub_CB26C0(a1, v35);
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        sub_CB1660(*a4, a4[1]);
        v15 = 4;
        *a4 = v37;
      }
    }
LABEL_6:
    if ( v13 )
    {
      v16 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v16 )
      {
        v47 = v15;
        sub_15D7BC0(v5, v13);
        v15 = v47;
      }
    }
    if ( v12 )
    {
      v16 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v16 )
      {
        v44 = v15;
        sub_15D7BC0(v52, v12);
        v15 = v44;
      }
    }
    goto LABEL_12;
  }
  *(_QWORD *)v55 = 0;
  v6 = v53;
  v49 = v54;
  v56 = v5;
  v7 = sub_CB1F80((__int64)a1, a3, (__int64 *)v55);
  v10 = *(_QWORD *)v55;
  v48 = v56;
  if ( !v7 )
    goto LABEL_3;
  v38 = sub_CB2CA0((__int64)a1, v6, *(__int64 *)v55, 0, v8, v9);
  v39 = sub_16747F0(a1 + 2, v38);
  v40 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v41 = *a4;
  if ( *a4 )
  {
    v42 = a4[1];
    v16 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v42, v41);
  }
  v15 = 4;
  *a4 = v40;
LABEL_12:
  if ( v10 )
  {
    v16 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v16 )
    {
      v45 = v15;
      sub_15D7BC0(v48, v10);
      v15 = v45;
    }
  }
  if ( v6 )
  {
    v16 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v16 )
    {
      v46 = v15;
      sub_15D7BC0(v49, v6);
      return v46;
    }
  }
  return v15;
}

