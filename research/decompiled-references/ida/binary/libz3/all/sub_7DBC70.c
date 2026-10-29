__int64 __fastcall sub_7DBC70(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  unsigned int v5; // ebp
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r13
  int v11; // edx
  int v12; // r14d
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  int v18[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+10h] [rbp-38h]

  v2 = *a2;
  ++*(_DWORD *)(a1 + 136);
  v3 = a2[2];
  v4 = a2[1];
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  sub_7DAE00((__int64)v18, a1, (__int64)(a2 + 3), *(_QWORD *)(v3 + 88));
  v5 = sub_79D990(*(_QWORD *)(a1 + 80), *(__int64 *)v18);
  v6 = sub_79D990(*(_QWORD *)(a1 + 80), v2);
  v10 = *(_QWORD *)(a1 + 80);
  v11 = v18[0];
  if ( v5 < v6 )
    v5 = v6;
  v12 = *(_DWORD *)(v10 + 2280);
  *(_DWORD *)(v10 + 2280) = v5 + 1;
  v13 = sub_7E58D0(a1, v2, v11, v7, v8, v9, v18[0], v19, v20);
  result = sub_7E5160(a1, v13, 0);
  v15 = *(_QWORD *)v18;
  *(_DWORD *)(v10 + 2280) = v12;
  if ( v15 )
  {
    v16 = v19;
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v16, v15);
  }
  if ( v2 )
  {
    v17 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v17 )
      return sub_15D7BC0(v4, v2);
  }
  return result;
}

