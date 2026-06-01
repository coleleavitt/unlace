__int64 __fastcall sub_1764AE0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v2 == 1 )
    return 1;
  v4 = v2;
  v5 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v5 == 1 )
    return 1;
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  v7 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_19CFAC0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 16),
             v7,
             v6,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48));
  if ( *(_QWORD *)(a2 + 32) != v6 )
    return sub_19CFAC0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 16),
             v7,
             v6,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48));
  result = a2;
  if ( *(_QWORD *)(a2 + 24) != v7 )
    return sub_19CFAC0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 16),
             v7,
             v6,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48));
  return result;
}
