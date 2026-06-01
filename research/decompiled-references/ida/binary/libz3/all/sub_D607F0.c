__int64 __fastcall sub_D607F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+10h] [rbp-38h] BYREF
  __int64 v23; // [rsp+18h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *a4;
  v20 = 0;
  v21 = v7;
  v22 = 0;
  v23 = v7;
  sub_D5BB00(a1, v8, &v20);
  sub_D52C50(a1, *a4, &v22);
  v9 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  result = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v12 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v13 = *a5;
  if ( *a5 )
  {
    v14 = a5[1];
    v15 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v14, v13);
  }
  *a5 = v12;
  if ( v10 )
  {
    v15 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v7, v10);
  }
  v16 = v22;
  if ( v22 )
  {
    v17 = v23;
    v15 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v17, v16);
  }
  v18 = v20;
  if ( v20 )
  {
    v19 = v21;
    v15 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v15 )
      return sub_15D7BC0(v19, v18);
  }
  return result;
}

