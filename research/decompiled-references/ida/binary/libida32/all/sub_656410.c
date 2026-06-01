__int64 __fastcall sub_656410(__int64 a1, const char *a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v2 = sub_375980(0x34u);
  result = (unsigned int)(v2 - 1);
  if ( v2 > 0 )
    return result;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(int *)(v4 + 64);
  if ( (int)v5 <= 0 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(v4 + 56);
  v7 = 0;
  while ( strcasecmp(a2, *(const char **)(v6 + 8 * v7)) )
  {
    if ( v5 == ++v7 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v7;
}

