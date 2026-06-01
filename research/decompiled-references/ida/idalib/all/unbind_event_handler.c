__int64 __fastcall unbind_event_handler(__int64 a1, __int64 a2)
{
  char *v3; // rdi
  char *v4; // rdx
  char *v5; // rdi
  char *v6; // rdx

  v3 = *(char **)(a1 + 8);
  v4 = &v3[8 * *(_QWORD *)(a1 + 16)];
  if ( v3 == v4 )
    return 0;
  while ( *(_QWORD *)v3 != a2 )
  {
    v3 += 8;
    if ( v4 == v3 )
      return 0;
  }
  if ( v4 == v3 )
    return 0;
  memmove(v3, v3 + 8, v4 - v3 - 8);
  --*(_QWORD *)(a1 + 16);
  v5 = *(char **)(a2 + 8);
  v6 = &v5[8 * *(_QWORD *)(a2 + 16)];
  if ( v5 != v6 )
  {
    while ( *(_QWORD *)v5 != a1 )
    {
      v5 += 8;
      if ( v6 == v5 )
        return 1;
    }
    if ( v5 != v6 )
    {
      memmove(v5, v5 + 8, v6 - v5 - 8);
      --*(_QWORD *)(a2 + 16);
    }
  }
  return 1;
}
