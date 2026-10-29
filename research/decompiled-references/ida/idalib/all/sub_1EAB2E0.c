__int64 __fastcall sub_1EAB2E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 *v5; // rdx
  __int64 *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = a2 + 16;
  v3 = *(_QWORD *)(a1 + 1648) + 16LL * *(unsigned int *)(a1 + 1656);
  if ( a2 + 16 != v3 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v4 + 2552) )
      return *(unsigned int *)(v4 + 2504);
    while ( 1 )
    {
      v2 += 16;
      if ( v2 == v3 )
        break;
      v4 = *(_QWORD *)(v2 + 8);
      if ( *(_DWORD *)(v4 + 2552) )
        return *(unsigned int *)(v4 + 2504);
    }
  }
  v5 = *(__int64 **)(a1 + 160);
  v6 = &v5[*(unsigned int *)(a1 + 168)];
  for ( result = 0; v6 != v5; result = (unsigned int)(*(_DWORD *)(v8 + 2552) + result) )
    v8 = *v5++;
  return result;
}
