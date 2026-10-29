__int64 __fastcall sub_CB47F0(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // r13
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int v11; // edx
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // [rsp+0h] [rbp-68h]
  unsigned int v20; // [rsp+0h] [rbp-68h]
  int v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h]
  int v23[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]

  v4 = *a1;
  *(_QWORD *)v21 = 0;
  v22 = v4;
  *(_QWORD *)v23 = 0;
  v24 = v4;
  v5 = sub_CB2220((__int64)a1, a2, (__int64 *)v21, (__int64 *)v23);
  v6 = *(_QWORD *)v23;
  v7 = v24;
  if ( v5 )
  {
    v9 = *(_QWORD *)v21;
    v10 = v22;
    sub_16747F0(a1 + 2, *(_QWORD *)v21);
    sub_16747F0(a1 + 2, v6);
    v14 = sub_15E1B70(a1[5]);
  }
  else
  {
    v8 = sub_CB3490(a1, a2, (__int64 *)v21);
    v9 = *(_QWORD *)v21;
    v10 = v22;
    v11 = 5;
    if ( !v8 )
      goto LABEL_3;
    v18 = sub_15E1A70(a1[3]);
    v14 = sub_CB26C0(a1, v18);
  }
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *a3;
  if ( *a3 )
  {
    v17 = a3[1];
    v12 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v17, v16);
  }
  *a3 = v15;
  v11 = 4;
LABEL_3:
  if ( v6 )
  {
    v12 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v12 )
    {
      v20 = v11;
      sub_15D7BC0(v7, v6);
      v11 = v20;
    }
  }
  if ( v9 )
  {
    v12 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v12 )
    {
      v19 = v11;
      sub_15D7BC0(v10, v9);
      return v19;
    }
  }
  return v11;
}

