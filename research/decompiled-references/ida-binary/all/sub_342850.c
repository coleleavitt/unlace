unsigned __int64 __fastcall navigation_history_chooser_t__::vfunc_13(
        __int64 a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v12; // rbp
  unsigned int v13; // r12d
  unsigned int v14; // eax
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned int v17; // ecx
  int v18; // edx

  v10 = sub_1F4200();
  if ( v10 )
  {
    if ( a2 < *(_QWORD *)(a1 + 208) )
    {
      v12 = v10;
      v13 = navstack_t_stack_index(*(_QWORD *)(v10 + 512));
      v14 = navstack_t_stack_size(*(_QWORD *)(v12 + 512));
      v17 = v14 - a2 - 1;
      if ( v14 > (unsigned int)a2 && v17 != v13 )
      {
        v18 = v13 - v17;
        if ( v13 < v17 )
          v18 = v17 - v13;
        sub_1FB570(v12 + 384, v13 < v17, v18, a3, a4, a5, a6, v15, v16, a9, a10);
      }
    }
  }
  return a2;
}
