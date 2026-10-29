const char *__fastcall sub_7B7DE0(__int64 a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v6; // rax
  const char *v7; // rdx
  unsigned __int64 v8; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_11;
  v1 = sub_79A2B0(a1);
  v2 = *v1;
  v3 = *v1 + 8LL * *((unsigned int *)v1 + 2);
  if ( v2 >= v3 )
  {
    if ( v2 == v3 )
      goto LABEL_11;
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 422 )
    {
      v3 += 8LL;
      if ( v2 == v3 )
        goto LABEL_11;
    }
    v4 = v2;
  }
  else
  {
    v4 = v2;
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 422 )
    {
      v4 += 8LL;
      if ( v3 == v4 )
        goto LABEL_11;
    }
  }
  if ( v4 == v3 )
  {
LABEL_11:
    v6 = *(_QWORD *)(a1 + 40);
    if ( (v6 & 7) != 0 )
      return &byte_3B9466E;
    v7 = &byte_3B9466E;
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
      return (const char *)(*(_QWORD *)(v8 + 16) + 16LL);
    return v7;
  }
  while ( *(_WORD *)(*(_QWORD *)v2 + 32LL) != 422 )
    v2 += 8LL;
  return *(const char **)(*(_QWORD *)v2 + 40LL);
}

