__int64 __fastcall sub_17675B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx

  v2 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v2 == 1 )
    return 1;
  v4 = v2;
  v5 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 48));
  if ( v5 == 1 )
    return 1;
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  v7 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v7, 0, v6);
  if ( *(_QWORD *)(a2 + 24) != v7 )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v7, 0, v6);
  result = a2;
  if ( *(_QWORD *)(a2 + 48) != v6 )
    return sub_1923BC0(*a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v7, 0, v6);
  return result;
}
