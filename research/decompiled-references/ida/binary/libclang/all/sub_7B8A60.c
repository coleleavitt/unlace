const char *__fastcall sub_7B8A60(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v8; // rax
  const char *v9; // rdx
  unsigned __int64 v10; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_11;
  v1 = sub_79A2B0(a1);
  v2 = (_QWORD *)*v1;
  v3 = *v1 + 8LL * *((unsigned int *)v1 + 2);
  if ( (unsigned __int64)v2 >= v3 )
  {
    if ( v2 == (_QWORD *)v3 )
      goto LABEL_11;
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 422 )
    {
      v3 += 8LL;
      if ( v2 == (_QWORD *)v3 )
        goto LABEL_11;
    }
    v4 = v2;
  }
  else
  {
    v4 = v2;
    while ( *(_WORD *)(*v4 + 32LL) != 422 )
    {
      if ( (_QWORD *)v3 == ++v4 )
        goto LABEL_11;
    }
  }
  if ( v4 != (_QWORD *)v3 )
  {
    v5 = *v2;
    if ( *(_WORD *)(*v2 + 32LL) != 422 )
    {
      v6 = v2 + 1;
      do
        v5 = *v6++;
      while ( *(_WORD *)(v5 + 32) != 422 );
    }
    return *(const char **)(v5 + 40);
  }
LABEL_11:
  v8 = *(_QWORD *)(a1 + 40);
  if ( (v8 & 7) != 0 )
    return &byte_3B9466E;
  v9 = &byte_3B9466E;
  v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10 )
    return (const char *)(*(_QWORD *)(v10 + 16) + 16LL);
  return v9;
}

