__int64 __fastcall sub_6224C0(_QWORD *a1, __int64 a2, const char *a3)
{
  const char **v4; // rbx
  __int64 v5; // r12
  const char **v6; // r12

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( *(char *)(a2 + 9) < 0 )
    return 0xFFFFFFFFLL;
  sub_622250(a1, a2);
  v4 = *(const char ***)(a2 + 80);
  v5 = *(int *)(a2 + 72);
  if ( (int)v5 <= 0 )
    return 0xFFFFFFFFLL;
  v6 = &v4[2 * v5];
  while ( strcmp(v4[1], a3) )
  {
    v4 += 2;
    if ( v4 == v6 )
      return 0xFFFFFFFFLL;
  }
  return *(unsigned int *)v4;
}

