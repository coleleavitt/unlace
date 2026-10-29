/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457D00
// Address: 0x0000000000457D00

//----- (0000000000457D00) ----------------------------------------------------
__int64 __fastcall sub_457D00(
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
  _QWORD *v9; // r12
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rbx
  void *v19; // rdi
  char v21; // [rsp+0h] [rbp-28h]

  v9 = a1 + 65;
  v11 = a1[67];
  if ( (_QWORD *)v11 != a1 + 65 )
  {
    do
    {
      while ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, double, double, double, double, double, double, double, double))(*a1 + 296LL))(
                a1,
                *(_QWORD *)(v11 + 40),
                v11 + 48,
                *(unsigned __int8 *)(v11 + 56),
                0,
                *(double *)a2.m128_u64,
                *(double *)a3.m128_u64,
                *(double *)a4.m128_u64,
                *(double *)a5.m128_u64,
                a6,
                a7,
                *(double *)a8.m128_u64,
                *(double *)a9.m128_u64) )
      {
        v11 = std::_Rb_tree_increment(v11);
        if ( (_QWORD *)v11 == v9 )
          goto LABEL_6;
      }
      *(double *)a2.m128_u64 = sub_410EA0(
                                 (int)"Failed to restore broken breakpoint at 0x%a\n",
                                 *(_QWORD *)(v11 + 40),
                                 v12,
                                 v13,
                                 v14,
                                 v15,
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 v16,
                                 v17,
                                 a8,
                                 a9,
                                 v21);
      v11 = std::_Rb_tree_increment(v11);
    }
    while ( (_QWORD *)v11 != v9 );
  }
LABEL_6:
  v18 = a1[66];
  while ( v18 )
  {
    sub_4551C0(*(_QWORD **)(v18 + 24));
    v19 = (void *)v18;
    v18 = *(_QWORD *)(v18 + 16);
    operator delete(v19, 0x40u);
  }
  a1[66] = 0;
  a1[67] = v9;
  a1[68] = v9;
  a1[69] = 0;
  return 1;
}
// 457D56: variable 'a6' is possibly undefined
// 457D56: variable 'a7' is possibly undefined
// 457D68: variable 'v12' is possibly undefined
// 457D68: variable 'v13' is possibly undefined
// 457D68: variable 'v14' is possibly undefined
// 457D68: variable 'v15' is possibly undefined
// 457D68: variable 'v16' is possibly undefined
// 457D68: variable 'v17' is possibly undefined
// 457D68: variable 'v21' is possibly undefined
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
