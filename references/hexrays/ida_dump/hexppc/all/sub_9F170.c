__int64 __fastcall sub_9F170(__int64 a1)
{
  unsigned int *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = *(unsigned int **)(a1 + 56);
  result = 1;
  if ( v1 )
  {
    v3 = *v1;
    if ( (unsigned int)(v3 - 56) > 1 )
      return (unsigned int)sub_32AA00(v3, 0) ^ 1;
    result = 0;
    if ( *((_BYTE *)v1 + 64) == 8 )
      return (unsigned int)sub_32AA00(v3, 0) ^ 1;
  }
  return result;
}
