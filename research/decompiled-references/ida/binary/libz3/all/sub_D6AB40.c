__int64 __fastcall sub_D6AB40(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 result; // rax
  bool v11; // zf
  __int64 v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a1[1];
  v6 = *(_QWORD *)(*a4 + 32LL);
  v12[1] = v5;
  v13[1] = v5;
  v14[1] = v5;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = a4[1];
  v12[0] = v6;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = a4[2];
  v13[0] = v7;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *(_QWORD *)(a2 + 40);
  v14[0] = v8;
  result = sub_D690E0(a1, v9, v12, v13, v14, a5);
  if ( v8 )
  {
    v11 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v5, v8);
  }
  if ( v7 )
  {
    v11 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v5, v7);
  }
  if ( v6 )
  {
    v11 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v5, v6);
  }
  return result;
}

