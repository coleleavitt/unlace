_BYTE *__fastcall sub_20D7650(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // r12d
  void *v5; // rax
  unsigned __int64 v6; // rsi
  size_t v7; // rdx
  size_t v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  size_t v11; // rdx
  size_t v12; // rsi
  _BYTE *result; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_DWORD *)(a2 + 40);
  v5 = *(void **)(a2 + 8);
  *(_DWORD *)(a2 + 40) = 0;
  v6 = *(_QWORD *)(a2 + 24);
  if ( v2 + 1 > v6 )
  {
    v7 = v2 + 993;
    v8 = 2 * v6;
    if ( v7 <= v8 )
    {
      *(_QWORD *)(a2 + 24) = v8;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v7;
      v8 = v7;
    }
    v5 = realloc(v5, v8);
    *(_QWORD *)(a2 + 8) = v5;
    if ( !v5 )
      goto LABEL_15;
    v2 = *(_QWORD *)(a2 + 16);
  }
  *((_BYTE *)v5 + v2) = 60;
  ++*(_QWORD *)(a2 + 16);
  sub_20D6480((_QWORD *)(a1 + 16), a2);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 24);
  if ( v9 + 1 <= v10 )
  {
    result = *(_BYTE **)(a2 + 8);
    goto LABEL_12;
  }
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
  if ( !result )
LABEL_15:
    abort();
  v9 = *(_QWORD *)(a2 + 16);
LABEL_12:
  result[v9] = 62;
  *(_DWORD *)(a2 + 40) = v4;
  ++*(_QWORD *)(a2 + 16);
  return result;
}
