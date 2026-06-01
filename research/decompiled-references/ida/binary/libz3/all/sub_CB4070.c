__int64 __fastcall sub_CB4070(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // r14
  __int64 v7; // r12
  char v8; // al
  __int64 v9; // r13
  unsigned int v10; // ebp
  bool v11; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]

  v6 = *a1;
  v22 = 0;
  v23 = v6;
  if ( (unsigned __int8)sub_CB1F80((__int64)a1, a3, &v22) )
  {
    v25 = v6;
    v24 = 0;
    if ( (unsigned __int8)sub_CB1F80((__int64)a1, a4, &v24) )
    {
      sub_CB2B60((__int64)a1, &v22, &v24, 0);
      v9 = v22;
      v7 = v24;
      v6 = v25;
      v20 = v23;
      v13 = sub_15E1BF0(*a1);
      v14 = sub_16747F0(a1 + 2, v13);
      goto LABEL_16;
    }
    v7 = v24;
    v6 = v25;
  }
  else
  {
    v7 = 0;
  }
  v8 = sub_CB3490(a1, a3, &v22);
  v9 = v22;
  v10 = 5;
  v20 = v23;
  if ( !v8 )
    goto LABEL_6;
  v24 = v7;
  v25 = v6;
  if ( !(unsigned __int8)sub_CB3490(a1, a4, &v24) )
  {
    v7 = v24;
    v6 = v25;
    v10 = 5;
    goto LABEL_6;
  }
  sub_CB2B60((__int64)a1, &v22, &v24, 1);
  v9 = v22;
  v7 = v24;
  v6 = v25;
  v20 = v23;
  v18 = sub_15E1BF0(*a1);
  v14 = sub_CB26C0(a1, v18);
LABEL_16:
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *a5;
  if ( *a5 )
  {
    v17 = a5[1];
    v11 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v17, v16);
  }
  v10 = 4;
  *a5 = v15;
LABEL_6:
  if ( v7 )
  {
    v11 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v6, v7);
  }
  if ( v9 )
  {
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v20, v9);
  }
  return v10;
}

