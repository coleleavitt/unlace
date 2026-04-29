__int64 __fastcall sub_14CBB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rdi
  char *v4; // rdx

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(char **)(v2 + 1064);
  v4 = &v3[8 * *(_QWORD *)(v2 + 1072)];
  if ( v3 == v4 )
    return 0;
  while ( a2 != *(_QWORD *)v3 )
  {
    v3 += 8;
    if ( v4 == v3 )
      return 0;
  }
  if ( v4 == v3 )
    return 0;
  memmove(v3, v3 + 8, v4 - v3 - 8);
  --*(_QWORD *)(v2 + 1072);
  return 1;
}
