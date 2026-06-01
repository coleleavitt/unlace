__int64 __fastcall sub_6E27D0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+10h] [rbp-28h]

  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v17 = 0;
  v18 = *v4;
  sub_6E2420(v4, v5, a2, &v17);
  v6 = v17;
  v7 = v18;
  result = sub_6E15B0((_DWORD)v4, v17, v8, v9, v10, v11, v17, v18, v19);
  v13 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v14 = *a3;
  if ( *a3 )
  {
    v15 = a3[1];
    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v15, v14);
  }
  *a3 = v13;
  if ( v6 )
  {
    v16 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v7, v6);
  }
  return result;
}

