bool __fastcall sub_B78490(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 *v7; // rcx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 1;
  v1 = sub_B8C3D0(a1);
  v2 = *(__int64 **)v1;
  v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
  if ( (unsigned __int64)v2 >= v3 )
  {
    if ( v2 != (__int64 *)v3 )
    {
      if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 209 )
      {
        v4 = (__int64 *)(v3 + 8);
        while ( v2 != v4 )
        {
          v5 = *v4++;
          if ( *(_WORD *)(v5 + 36) == 209 )
            goto LABEL_10;
        }
        return 1;
      }
      goto LABEL_10;
    }
    return 1;
  }
  v7 = v2;
  while ( *(_WORD *)(*v7 + 36) != 209 )
  {
    if ( (__int64 *)v3 == ++v7 )
      return 1;
  }
  if ( (__int64 *)v3 == v7 )
    return 1;
LABEL_10:
  while ( *(_WORD *)(*v2 + 36) != 209 )
    ++v2;
  return *(_DWORD *)(*v2 + 40) == 0;
}
