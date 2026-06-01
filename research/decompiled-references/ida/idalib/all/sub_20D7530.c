_BYTE *__fastcall sub_20D7530(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rdi
  size_t v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  size_t v11; // rdx
  size_t v12; // rsi
  _BYTE *result; // rax
  __int64 v14; // rdx

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(char **)(a2 + 8);
  if ( v4 + 12 > v5 )
  {
    v7 = v4 + 1004;
    v8 = 2 * v5;
    if ( v7 > v8 )
    {
      *(_QWORD *)(a2 + 24) = v7;
      v8 = v7;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v8;
    }
    v6 = (char *)realloc(v6, v8);
    *(_QWORD *)(a2 + 8) = v6;
    if ( !v6 )
      goto LABEL_14;
    v4 = *(_QWORD *)(a2 + 16);
  }
  qmemcpy(&v6[v4], " [enable_if:", 12);
  *(_QWORD *)(a2 + 16) += 12LL;
  sub_20D6480((_QWORD *)(a1 + 16), a2);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 24);
  if ( v9 + 1 > v10 )
  {
    v11 = v9 + 993;
    v12 = 2 * v10;
    if ( v11 > v12 )
    {
      *(_QWORD *)(a2 + 24) = v11;
      v12 = v11;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v12;
    }
    result = realloc(*(void **)(a2 + 8), v12);
    *(_QWORD *)(a2 + 8) = result;
    if ( result )
    {
      v14 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v14 + 1;
      result[v14] = 93;
      return result;
    }
LABEL_14:
    abort();
  }
  result = *(_BYTE **)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v9 + 1;
  result[v9] = 93;
  return result;
}
