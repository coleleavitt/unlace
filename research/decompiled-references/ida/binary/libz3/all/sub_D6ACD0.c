__int64 __fastcall sub_D6ACD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]

  v6 = a1[1];
  v7 = *a4;
  v15[1] = v6;
  v16[1] = v6;
  v17[1] = v6;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = a4[1];
  v15[0] = v7;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = a4[2];
  v16[0] = v8;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *(_QWORD *)(a2 + 40);
  v19 = v6;
  v18 = 0;
  v17[0] = v9;
  sub_D5C740(a1, v10, v17, &v18);
  result = sub_D690E0(a1, v10, v15, v16, &v18, a5);
  v12 = v18;
  if ( v18 )
  {
    v13 = v19;
    v14 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v13, v12);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v6, v9);
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v6, v8);
  }
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      return sub_15D7BC0(v6, v7);
  }
  return result;
}

