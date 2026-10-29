void __fastcall sub_1371FC0(__int64 a1, __m128i **a2, __int64 a3, int a4)
{
  char v4; // al
  unsigned int v5; // r8d
  __m128i *v6; // rsi
  int v7; // r8d
  __int64 i; // rax
  unsigned __int64 v9; // rax

  v4 = **(_BYTE **)(a1 + 24);
  if ( (v4 & 0x20) != 0 && ((v4 & 1) != 0 || !a4 || a4 == 3) )
  {
    if ( *(_BYTE *)(a1 + 36) )
    {
      v5 = *(_DWORD *)(a1 + 32);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 38) )
        return;
      v5 = *(_DWORD *)(a1 + 32);
      if ( v5 <= 2 )
        return;
    }
    v6 = *a2;
    v7 = v5 + 1;
    for ( i = v6->m128i_i64[1]; i; i = *(_QWORD *)(v9 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v9 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        break;
      v6 = (__m128i *)v9;
    }
    sub_1371C80(*(_QWORD *)(a1 + 16), v6 + 2, v6->m128i_i64[0], *(_BYTE *)(a1 + 39), v7, *(_BYTE *)(a1 + 40));
  }
}
