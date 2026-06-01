const char *__fastcall sub_B84BF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  const char *result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v6 = sub_B68690(a1, a2, a3, a4, a5, a6);
    v7 = *v6;
    v8 = *v6 + 8LL * *((unsigned int *)v6 + 2);
    if ( v7 < v8 )
    {
      v9 = v7;
      while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 432 )
      {
        v9 += 8LL;
        if ( v8 == v9 )
          goto LABEL_6;
      }
      if ( v8 == v9 )
        goto LABEL_6;
      while ( 1 )
      {
        v13 = *(_QWORD *)v7;
        if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 432 )
          break;
LABEL_15:
        v7 += 8LL;
      }
      return *(const char **)(v13 + 48);
    }
    if ( v7 != v8 )
    {
      while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 432 )
      {
        v8 += 8LL;
        if ( v7 == v8 )
          goto LABEL_6;
      }
      v13 = *(_QWORD *)v7;
      if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 432 )
        goto LABEL_15;
      return *(const char **)(v13 + 48);
    }
  }
LABEL_6:
  v10 = *(_QWORD *)(a1 + 40);
  if ( (v10 & 7) != 0 )
    return &byte_22CD811;
  result = &byte_22CD811;
  v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12 )
    return (const char *)(*(_QWORD *)(v12 + 16) + 16LL);
  return result;
}

