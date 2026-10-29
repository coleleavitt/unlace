__int64 __fastcall sub_1A08010(
        __int64 a1,
        unsigned __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rsi

  v8 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 34 <= 5 )
    sub_1A078C0(a1, v8, a2, a5, a6, a7, a3);
  return 1;
}
