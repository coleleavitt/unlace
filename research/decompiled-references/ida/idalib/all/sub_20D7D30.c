__int64 __fastcall sub_20D7D30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  size_t v5; // rdx
  size_t v6; // rsi
  _BYTE *v7; // rax

  sub_20D1ED0((_QWORD *)a2, 7u, "'lambda");
  sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 64), *(const void **)(a1 + 72));
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v3 + 1 <= v4 )
  {
    v7 = *(_BYTE **)(a2 + 8);
  }
  else
  {
    v5 = v3 + 993;
    v6 = 2 * v4;
    if ( v5 > v6 )
    {
      *(_QWORD *)(a2 + 24) = v5;
      v6 = v5;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v6;
    }
    v7 = realloc(*(void **)(a2 + 8), v6);
    *(_QWORD *)(a2 + 8) = v7;
    if ( !v7 )
      abort();
    v3 = *(_QWORD *)(a2 + 16);
  }
  v7[v3] = 39;
  ++*(_QWORD *)(a2 + 16);
  return sub_20D7AC0((_QWORD *)a1, a2);
}
