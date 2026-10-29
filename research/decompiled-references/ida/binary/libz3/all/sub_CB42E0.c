__int64 __fastcall sub_CB42E0(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // r13
  unsigned int v11; // r12d
  bool v12; // zf
  __int64 v14; // r13
  char v15; // al
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  int v34; // [rsp+0h] [rbp-B8h]
  void *v35; // [rsp+8h] [rbp-B0h]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  __int64 v37; // [rsp+10h] [rbp-A8h]
  __int64 v38; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  int v42[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v43; // [rsp+48h] [rbp-70h]
  int v44[2]; // [rsp+50h] [rbp-68h] BYREF
  void *v45; // [rsp+58h] [rbp-60h]
  int v46[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h]
  int v48[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v49; // [rsp+78h] [rbp-40h]

  v5 = *a1;
  *(_QWORD *)v42 = 0;
  v43 = v5;
  if ( !(unsigned __int8)sub_CB1F80((__int64)a1, a2, (__int64 *)v42) )
  {
    v35 = (void *)v5;
    v6 = 0;
LABEL_5:
    *(_QWORD *)v46 = 0;
    v47 = v5;
    v7 = sub_CB2220((__int64)a1, a2, (__int64 *)v42, (__int64 *)v46);
    v38 = *(_QWORD *)v46;
    v41 = v47;
    if ( v7 )
    {
      *(_QWORD *)v44 = v6;
      v14 = *(_QWORD *)v42;
      v37 = v43;
      *(_QWORD *)v48 = 0;
      v45 = v35;
      v49 = v5;
      v15 = sub_CB2220((__int64)a1, a3, (__int64 *)v44, (__int64 *)v48);
      v6 = *(_QWORD *)v44;
      v8 = *(_QWORD *)v48;
      v5 = v49;
      v35 = v45;
      if ( v15 )
      {
        v18 = sub_CB2CA0((__int64)a1, v14, *(__int64 *)v48, 0, v16, v17);
        v21 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( v14 )
        {
          v12 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v37, v14);
        }
        v22 = sub_CB2CA0((__int64)a1, v38, v6, 0, v19, v20);
        v23 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        if ( v6 )
        {
          v12 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v35, v6);
        }
        *(_QWORD *)v42 = v21;
        *(_QWORD *)v44 = v23;
        sub_CB2B60((__int64)a1, (__int64 *)v42, (__int64 *)v44, 0);
        v10 = *(_QWORD *)v42;
        v6 = *(_QWORD *)v44;
        v35 = v45;
        v36 = v43;
        v24 = sub_15E1B70(*a1);
        v25 = v24;
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        v26 = *a4;
        if ( *a4 )
        {
          v27 = a4[1];
          v12 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v27, v26);
        }
        v11 = 4;
        *a4 = v25;
        goto LABEL_8;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = sub_CB3490(a1, a2, (__int64 *)v42);
    v10 = *(_QWORD *)v42;
    v11 = 5;
    v36 = v43;
    if ( v9 )
    {
      *(_QWORD *)v44 = v6;
      v45 = v35;
      if ( (unsigned __int8)sub_CB3490(a1, a3, (__int64 *)v44) )
      {
        sub_CB2B60((__int64)a1, (__int64 *)v42, (__int64 *)v44, 1);
        v10 = *(_QWORD *)v42;
        v6 = *(_QWORD *)v44;
        v35 = v45;
        v36 = v43;
        v32 = sub_15E1B70(*a1);
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        sub_CB1660(*a4, a4[1]);
        *a4 = v33;
        v11 = 4;
      }
      else
      {
        v6 = *(_QWORD *)v44;
        v11 = 5;
        v35 = v45;
      }
    }
LABEL_8:
    if ( v8 )
    {
      v12 = (*(_DWORD *)(v8 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v5, v8);
    }
    if ( v38 )
    {
      v34 = *(_DWORD *)(v38 + 8);
      *(_DWORD *)(v38 + 8) = v34 - 1;
      if ( v34 == 1 )
        sub_15D7BC0(v41, v38);
    }
    goto LABEL_14;
  }
  v45 = (void *)v5;
  *(_QWORD *)v44 = 0;
  if ( !(unsigned __int8)sub_CB1F80((__int64)a1, a3, (__int64 *)v44) )
  {
    v6 = *(_QWORD *)v44;
    v35 = v45;
    goto LABEL_5;
  }
  sub_CB2B60((__int64)a1, (__int64 *)v42, (__int64 *)v44, 0);
  v10 = *(_QWORD *)v42;
  v6 = *(_QWORD *)v44;
  v35 = v45;
  v36 = v43;
  v28 = sub_15E1B70(*a1);
  v29 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v30 = *a4;
  if ( *a4 )
  {
    v31 = a4[1];
    v12 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v31, v30);
  }
  v11 = 4;
  *a4 = v29;
LABEL_14:
  if ( v6 )
  {
    v12 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v35, v6);
  }
  if ( v10 )
  {
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v36, v10);
  }
  return v11;
}

