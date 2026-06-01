__int64 __fastcall handle_debug_event(
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
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5

  v9 = *(_QWORD *)(a1 + 24);
  copy_debug_event(&qword_8CC340, v9);
  return (unsigned __int8)sub_24FE80(*(_DWORD *)(a1 + 32), v9, v10, v11, v12, v13, a2, a3, a4, a5, v14, v15, a8, a9);
}
