__int64 __fastcall sub_B54590(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22[2]; // [rsp+10h] [rbp-58h] BYREF
  int v23[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]

  sub_B53280(v22, (__int64)a1, *(_QWORD *)(*(_QWORD *)(a1[2] + 8840LL) + 8LL * a2), a4, a5, a6);
  v7 = v22[0];
  v8 = a1[3];
  v21 = v22[1];
  sub_B537F0((__int64 *)v23, a1);
  v9 = sub_15E1B70(v8);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( v7 )
  {
    v11 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v21, v7);
  }
  v12 = *(_QWORD *)v23;
  if ( *(_QWORD *)v23 )
  {
    v13 = v24;
    v11 = (*(_DWORD *)(*(_QWORD *)v23 + 8LL))-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  *(_QWORD *)v23 = 0;
  v24 = a1[3];
  v14 = sub_15E1B70(v24);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *(_QWORD *)v23;
  if ( *(_QWORD *)v23 )
  {
    v17 = v24;
    v11 = (*(_DWORD *)(*(_QWORD *)v23 + 8LL))-- == 1;
    if ( v11 )
      sub_15D7BC0(v17, v16);
  }
  *(_QWORD *)v23 = v15;
  sub_14B9B80(a1 + 7, v23);
  result = sub_B52AB0((__int64)a1, *(__int64 *)v23);
  v19 = *(_QWORD *)v23;
  if ( *(_QWORD *)v23 )
  {
    v20 = v24;
    v11 = (*(_DWORD *)(*(_QWORD *)v23 + 8LL))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v20, v19);
  }
  if ( v10 )
  {
    v11 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v21, v10);
  }
  return result;
}

