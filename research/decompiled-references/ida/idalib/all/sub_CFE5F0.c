unsigned __int64 __fastcall sub_CFE5F0(__int64 a1)
{
  __int64 v1; // rbp

  if ( *(_DWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  v1 = sub_CFDF60(a1);
  return *(unsigned int *)(v1 + 20) / (unsigned __int64)sub_CFE390(a1);
}
