__int64 __fastcall sub_448B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // r12
  void *v7; // rbp
  void *v9; // rbp

  v2 = *(_QWORD *)(a2 + 144);
  if ( !v2 || (*(_BYTE *)(v2 + 78) & 0x40) == 0 )
    return 0;
  v3 = sub_4055A0(*(_QWORD *)(a2 + 16) + 136LL, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 24));
  if ( v3 )
  {
    v4 = *((_BYTE *)v3 + 78);
    if ( (v4 & 4) != 0 || (v4 & 1) == 0 )
    {
      v9 = *(void **)(a2 + 144);
      if ( v9 )
      {
        sub_41CB00(*(_QWORD **)(a2 + 144));
        sub_186B220(v9);
        *(_QWORD *)(a2 + 144) = 0;
      }
      return 0;
    }
  }
  v5 = sub_405720(
         *(_QWORD *)(a2 + 16) + 136LL,
         *(_QWORD *)(v2 + 8),
         *(_WORD *)(v2 + 72),
         *(_WORD *)(v2 + 74),
         *(_QWORD *)(v2 + 24),
         a2 + 40);
  *(_BYTE *)(v5 + 78) |= 0x40u;
  v6 = v5;
  sub_403E50(v5, v2);
  v7 = *(void **)(a2 + 144);
  if ( v7 )
  {
    sub_41CB00(*(_QWORD **)(a2 + 144));
    sub_186B220(v7);
    *(_QWORD *)(a2 + 144) = 0;
  }
  return v6;
}

