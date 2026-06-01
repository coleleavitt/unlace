__int64 __fastcall sub_70A970(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  unsigned __int64 v10; // rbp
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 result; // rax
  unsigned __int64 v16; // rax

  if ( !a2 )
    return 1;
  v10 = sub_B8E970(a2);
  if ( !v10 )
    return 1;
  while ( 1 )
  {
    v13 = *(_BYTE *)(v10 + 28) & 0x7F;
    if ( ((v13 + 121) & 0x7Fu) > 1
      && ((unsigned int)v13 - 59 > 2 || (v14 = *(_QWORD *)(v10 + 128)) == 0 || (*(_BYTE *)(v14 + 10) & 0x20) == 0) )
    {
      result = sub_709840(a1, v10, a3, a4, a5, a6, v11, v12, a9, a10);
      if ( !(_BYTE)result )
        break;
    }
    v16 = *(_QWORD *)(v10 + 8);
    v10 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 <= 7 )
      return 1;
  }
  return result;
}
