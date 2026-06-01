__int64 __fastcall sub_51E020(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QWidget *v9; // rdi
  int v10; // eax
  int v11; // esi

  v9 = *(QT::QWidget **)(a1 + 248);
  if ( !v9 )
    return 0;
  v10 = *((_DWORD *)v9 + 26);
  v11 = v10 & 0xFFFFFFDF;
  if ( (v10 & 0x20) == 0 )
    v11 = v10 | 0x20;
  sub_51DD00(v9, v11, a2, a3, a4, a5, a6, a7, a8, a9);
  return 1;
}
