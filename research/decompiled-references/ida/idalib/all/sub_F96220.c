char *__fastcall sub_F96220(__int64 a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rax
  __int64 v3; // rdx
  char *result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return (char *)&byte_22F0C30;
  v2 = *(unsigned int **)(v1 + 16);
  v3 = *v2;
  result = (char *)(v2 + 4);
  if ( (*(_BYTE *)(a1 + 34) & 0xFu) - 2 <= 1 )
    return sub_F95FE0((__int64)result, v3);
  return result;
}
