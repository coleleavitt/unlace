void __fastcall sub_16F5290(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5,
        __m128i a6,
        double a7)
{
  unsigned __int64 v10; // r13

  v10 = sub_BFBAE0(a2);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 48 )
  {
    sub_1E63D90(a1, v10, 3968);
  }
  if ( (*(_WORD *)v10 & 0x1FFu) - 128 > 1 )
  {
    sub_16F5530(a1, v10, a4);
    if ( a3 != *(_QWORD *)(v10 + 8) )
      sub_16F1980(a1, v10, a3, a4, a5, 0, a6, a7);
  }
  else
  {
    sub_16F5360(a1, v10, a4, a3);
  }
}
