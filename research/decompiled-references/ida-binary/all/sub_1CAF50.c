__int64 __fastcall sub_1CAF50(__int64 a1)
{
  const char *v1; // rbp
  char v2; // al

  if ( *(_QWORD *)(a1 + 8) <= 9u )
    return 0;
  v1 = *(const char **)a1;
  if ( strncmp(*(const char **)a1, "Hex View-", 9u) )
    return 0;
  v2 = v1[9];
  if ( (unsigned __int8)(v2 - 65) > 8u )
    return 0;
  *((_BYTE *)v1 + 9) = v2 - 16;
  return 1;
}
