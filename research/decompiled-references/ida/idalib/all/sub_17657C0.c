__int64 __fastcall sub_17657C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx

  v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v3 == 1 )
    return 1;
  v5 = v3;
  v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v6 == 1 )
    return 1;
  v7 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v7 == 1 )
    return 1;
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v9 = v5 & 0xFFFFFFFFFFFFFFFELL;
  v10 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_190A860(*a1, v9, v10, v8, *(unsigned int *)(a2 + 4));
  if ( v9 != *(_QWORD *)(a2 + 16) )
    return sub_190A860(*a1, v9, v10, v8, *(unsigned int *)(a2 + 4));
  if ( *(_QWORD *)(a2 + 24) != v10 )
    return sub_190A860(*a1, v9, v10, v8, *(unsigned int *)(a2 + 4));
  result = a2;
  if ( *(_QWORD *)(a2 + 32) != v8 )
    return sub_190A860(*a1, v9, v10, v8, *(unsigned int *)(a2 + 4));
  return result;
}
