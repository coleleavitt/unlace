__int64 *__fastcall sub_D60A90(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-88h]
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+18h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  v22 = 0;
  a1[1] = v5;
  v23 = v5;
  sub_D5BB00(a2, a3, &v22);
  v6 = sub_15D1F10(a3);
  v25 = v5;
  v24 = 0;
  sub_D5B8E0(a2, v6, &v24);
  v7 = v24;
  v26 = 0;
  v19 = v25;
  v27 = v5;
  sub_D52910(a2, v24, &v26);
  v20 = 0;
  v8 = v26;
  v18 = v27;
  v21 = v5;
  sub_D52910(a2, a3, &v20);
  v9 = v20;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = v21;
  v12 = sub_15E1BF0(v10);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = *a1;
  *a1 = v12;
  if ( v13 )
  {
    v14 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v10, v13);
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v18, v8);
  }
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v19, v7);
  }
  v15 = v22;
  if ( v22 )
  {
    v16 = v23;
    v14 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v16, v15);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v11, v9);
  }
  return a1;
}

