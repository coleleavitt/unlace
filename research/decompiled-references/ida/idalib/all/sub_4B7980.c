__int64 __fastcall sub_4B7980(__int64 a1, const char *a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rbp
  const char *v5; // rsi

  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *(unsigned int **)(a1 + 24);
  v4 = &v3[8 * *(_QWORD *)(a1 + 32)];
  if ( v4 == v3 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 120LL))(*(_QWORD *)v3);
    if ( !strcmp(a2, v5) )
      break;
    v3 += 8;
    if ( v4 == v3 )
      return 0xFFFFFFFFLL;
  }
  return v3[4];
}
