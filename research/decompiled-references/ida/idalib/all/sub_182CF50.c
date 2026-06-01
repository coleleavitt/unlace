void __fastcall sub_182CF50(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __m128i a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  v9 = ((_BYTE)v8 + 120) & 0x7F;
  if ( (unsigned __int8)v9 > 0x3Au )
  {
    if ( (_BYTE)v8 == 75 )
      return;
LABEL_5:
    sub_182C660(a1, a2, a3, v8, a7, a8, a4, a5);
    return;
  }
  v8 = 0x7000FFFFC000001LL;
  if ( !_bittest64(&v8, v9) )
    goto LABEL_5;
}
