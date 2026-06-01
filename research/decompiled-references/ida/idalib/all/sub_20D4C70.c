_BYTE *__fastcall sub_20D4C70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  size_t v6; // rdx
  size_t v7; // rsi
  _BYTE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rdx
  size_t v13; // rsi
  _BYTE *result; // rax
  __int64 v15; // rdx
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-38h] BYREF
  __int16 v17; // [rsp+8h] [rbp-30h]
  char v18; // [rsp+Ah] [rbp-2Eh]
  __int64 v19; // [rsp+10h] [rbp-28h]

  sub_20D1ED0((_QWORD *)a2, 9u, "sizeof...");
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
  v9 = *(_QWORD *)(a1 + 16);
  v17 = 16426;
  v19 = v9;
  v18 = v18 & 0xF0 | 5;
  v16 = off_2BE7680;
  sub_20D4A40((__int64)&v16, a2);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_QWORD *)(a2 + 24);
  --*(_DWORD *)(a2 + 40);
  if ( v10 + 1 > v11 )
  {
    v12 = v10 + 993;
    v13 = 2 * v11;
    if ( v12 > v13 )
    {
      *(_QWORD *)(a2 + 24) = v12;
      v13 = v12;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v13;
    }
    result = realloc(*(void **)(a2 + 8), v13);
    *(_QWORD *)(a2 + 8) = result;
    if ( result )
    {
      v15 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v15 + 1;
      result[v15] = 41;
      return result;
    }
LABEL_15:
    abort();
  }
  result = *(_BYTE **)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v10 + 1;
  result[v10] = 41;
  return result;
}
