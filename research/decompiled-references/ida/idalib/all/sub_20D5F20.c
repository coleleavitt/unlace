_BYTE *__fastcall sub_20D5F20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  size_t v6; // rdx
  size_t v7; // rsi
  _BYTE *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  size_t v11; // rdx
  size_t v12; // rsi
  _BYTE *result; // rax
  __int64 v14; // rdx

  sub_20D1ED0((_QWORD *)a2, 8u, "noexcept");
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 40);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 )
  {
    v8 = *(_BYTE **)(a2 + 8);
  }
  else
  {
    v6 = v3 + 993;
    v7 = 2 * v4;
    if ( v6 > v7 )
    {
      *(_QWORD *)(a2 + 24) = v6;
      v7 = v6;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v7;
    }
    v8 = realloc(*(void **)(a2 + 8), v7);
    *(_QWORD *)(a2 + 8) = v8;
    if ( !v8 )
      goto LABEL_15;
    v3 = *(_QWORD *)(a2 + 16);
    v5 = v3 + 1;
  }
  *(_QWORD *)(a2 + 16) = v5;
  v8[v3] = 40;
  sub_20D5A60(*(_BYTE **)(a1 + 16), a2, 0x13u, 0);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 24);
  --*(_DWORD *)(a2 + 40);
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
      result[v14] = 41;
      return result;
    }
LABEL_15:
    abort();
  }
  result = *(_BYTE **)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v9 + 1;
  result[v9] = 41;
  return result;
}
