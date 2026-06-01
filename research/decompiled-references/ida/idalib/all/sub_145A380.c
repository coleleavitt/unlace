__int64 __fastcall sub_145A380(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 136);
  v3 = (*(_QWORD *)(a1 + 144) - v2) >> 3;
  v4 = v3 + a2;
  if ( v4 > v3 )
  {
    sub_145A250(a1 + 136, a2);
    return (unsigned int)v3;
  }
  else
  {
    if ( __CFADD__(v3, a2) )
    {
      v5 = v2 + 8 * v4;
      if ( *(_QWORD *)(a1 + 144) != v5 )
        *(_QWORD *)(a1 + 144) = v5;
    }
    return (unsigned int)v3;
  }
}
