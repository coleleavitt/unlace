__int64 __fastcall toggle_path_visible_ah_t__::vfunc_0(
        _QWORD *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5

  v9 = *(_QWORD **)(a1[2] + 440LL);
  if ( v9 )
    v9 = (_QWORD *)v9[1];
  v10 = a1[3];
  if ( v10 >= v9[40] )
    return 1;
  v11 = v9[39] + 40 * v10;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v11) )
    return 1;
  sub_3723E0((__int64)(v9 + 34), v11, a2, a3, a4, a5, v16, v17, a8, a9, v12, v13, v14, v15);
  return 1;
}
