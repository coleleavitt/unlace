__int64 __fastcall sub_7A7360(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // esi
  char *v3; // rdx

  v1 = sub_7E4F00();
  v2 = 0;
  if ( !v1 )
    return v2;
  v3 = (char *)(v1 + 88);
  if ( *(int *)(v1 + 88) >> 8 == -1 )
    return v2;
  do
  {
    if ( *(_DWORD *)(a1 + 12) == *v3 )
    {
      LOBYTE(v2) = *(int *)v3 >> 8 != -1;
      return v2;
    }
    v3 = *((char **)v3 + 1);
  }
  while ( v3 );
  return 0;
}

