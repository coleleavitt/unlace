__int64 __fastcall sub_804060(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  char *v4; // rdx

  v2 = sub_7E4F00(a1 - 48, a2);
  v3 = 0;
  if ( !v2 )
    return v3;
  v4 = (char *)(v2 + 88);
  if ( *(int *)(v2 + 88) >> 8 == -1 )
    return v3;
  do
  {
    if ( *v4 == *(_DWORD *)(a1 - 36) )
    {
      LOBYTE(v3) = *(int *)v4 >> 8 != -1;
      return v3;
    }
    v4 = *((char **)v4 + 1);
  }
  while ( v4 );
  return 0;
}

