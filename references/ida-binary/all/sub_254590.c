_BOOL8 __fastcall sub_254590(
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
  int *v9; // rax
  bool v10; // bl
  __int64 v11; // rbp
  double v12; // xmm4_8
  double v13; // xmm5_8

  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v9 = sub_227EE0(**(_DWORD **)(a1 + 48));
  v10 = v9 != nullptr;
  if ( !v9 )
    return v10;
  v11 = *((_QWORD *)v9 + 3);
  if ( !(unsigned __int8)is_mapped(v11) )
    return v10;
  sub_24EFB0(v11, (_BYTE *)&dword_0 + 1, a2, a3, a4, a5, v12, v13, a8, a9);
  return v10;
}
