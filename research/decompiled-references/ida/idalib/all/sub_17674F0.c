__int64 __fastcall sub_17674F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  v2 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v2 == 1 )
    return 1;
  v4 = v2;
  v5 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v5 == 1 )
    return 1;
  v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 40));
  if ( v6 == 1 )
    return 1;
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v8 = v4 & 0xFFFFFFFFFFFFFFFELL;
  v9 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v8, v9, v7);
  if ( *(_QWORD *)(a2 + 24) != v8 )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v8, v9, v7);
  if ( *(_QWORD *)(a2 + 32) != v9 )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v8, v9, v7);
  result = a2;
  if ( *(_QWORD *)(a2 + 40) != v7 )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v8, v9, v7);
  return result;
}
