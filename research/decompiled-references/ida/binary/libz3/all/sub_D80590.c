__int64 __fastcall sub_D80590(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 result; // rax
  bool v10; // zf
  __int64 v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(*a4 + 32LL);
  v11[1] = v5;
  v12[1] = v5;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = a4[1];
  v11[0] = v6;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = *(_QWORD *)(a2 + 40);
  v12[0] = v7;
  result = sub_D7DEA0(a1, v8, v11, v12, a5);
  if ( v7 )
  {
    v10 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v5, v7);
  }
  if ( v6 )
  {
    v10 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v5, v6);
  }
  return result;
}

