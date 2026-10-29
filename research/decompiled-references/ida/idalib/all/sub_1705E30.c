bool __fastcall sub_1705E30(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // rcx

  v1 = *a1;
  v2 = a1[1];
  if ( v2 > *a1 )
  {
    if ( *(_WORD *)(*v1 + 36) == 206 )
      return v2 == v1;
    while ( v2 != ++v1 )
    {
      if ( *(_WORD *)(*v1 + 36) == 206 )
        return v2 == v1;
    }
    return 1;
  }
  if ( v2 == *a1 )
    return 1;
  v3 = *v2;
  v4 = v2 + 1;
  if ( *(_WORD *)(v3 + 36) != 206 )
  {
    while ( v4 != v1 )
    {
      v5 = *v4++;
      if ( *(_WORD *)(v5 + 36) == 206 )
        return 0;
    }
    return 1;
  }
  return 0;
}
