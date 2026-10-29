_BOOL8 __fastcall sub_2437E0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // edx
  unsigned __int8 v10; // cl
  const void *v11; // rsi
  int *v12; // rdi
  __int64 v13; // rax

  v9 = *(_DWORD *)(a1 + 16);
  v10 = *(_BYTE *)(a1 + 12);
  v11 = (const void *)*(unsigned int *)(a1 + 24);
  if ( !v9 )
    return sub_243750(nullptr, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
  v12 = (int *)qword_8CC430;
  v13 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v13 )
    return sub_243750(nullptr, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
  while ( v9 != *v12 )
  {
    v12 += 64;
    if ( (int *)v13 == v12 )
      return sub_243750(nullptr, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
  }
  return sub_243750(v12, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
}
