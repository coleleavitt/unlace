__int64 __fastcall sub_6E28A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]

  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v14 = *v4;
  sub_6E2420(v4, v5, a2, &v13);
  v6 = v13;
  v7 = v14;
  result = sub_6E1010((__int64)v4, v13);
  v9 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v10 = *a3;
  if ( *a3 )
  {
    v11 = a3[1];
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v11, v10);
  }
  *a3 = v9;
  if ( v6 )
  {
    v12 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v7, v6);
  }
  return result;
}

