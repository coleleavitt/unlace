const char *__fastcall sub_B84CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  const char *result; // rax
  unsigned __int64 v13; // rdx

  v6 = *(_QWORD *)(a1 + 88);
  if ( !v6 )
    BUG();
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    goto LABEL_7;
  v7 = sub_B68690(*(_QWORD *)(a1 + 88), a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( v8 >= v9 )
  {
    if ( v8 != v9 )
    {
      while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 432 )
      {
        v9 += 8LL;
        if ( v8 == v9 )
          goto LABEL_7;
      }
      goto LABEL_18;
    }
LABEL_7:
    v11 = *(_QWORD *)(v6 + 40);
    if ( (v11 & 7) != 0 )
      return &byte_22CD811;
    result = &byte_22CD811;
    v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 )
      return (const char *)(*(_QWORD *)(v13 + 16) + 16LL);
    return result;
  }
  v10 = v8;
  while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 432 )
  {
    v10 += 8LL;
    if ( v9 == v10 )
      goto LABEL_7;
  }
  if ( v9 == v10 )
    goto LABEL_7;
LABEL_18:
  while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 432 )
    v8 += 8LL;
  return *(const char **)(*(_QWORD *)v8 + 48LL);
}

