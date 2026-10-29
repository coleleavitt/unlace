__int64 __fastcall sub_20520C0(__int64 a1)
{
  char *v1; // rbx
  unsigned int v2; // eax
  int v3; // ebp
  unsigned int v4; // r13d
  size_t v5; // r12
  unsigned int v6; // r14d
  int v7; // r15d

  sub_2051EA0(a1);
  v1 = *(char **)(a1 + 24);
  v2 = sub_2051EA0(a1);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v3 == 1 )
    return 1;
  v4 = v2;
  v5 = v2;
  v6 = v2;
  v7 = 1;
  while ( !memcmp(v1, &v1[v6], v5) )
  {
    ++v7;
    v6 += v4;
    if ( v7 == v3 )
      return 1;
  }
  return 0;
}
