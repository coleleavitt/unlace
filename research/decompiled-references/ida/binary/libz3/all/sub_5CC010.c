void *__fastcall sub_5CC010(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  void *v9; // rbx
  __int64 v10; // rdx
  double v11; // xmm4_8
  double v12; // xmm5_8

  v9 = *(void **)(a2 + 24);
  if ( !v9 )
    return v9;
  if ( *((_DWORD *)v9 - 1) )
  {
    v9 = (void *)sub_186B270(0xF8u);
    sub_63D370(v9, a1[4]);
    if ( (unsigned __int8)sub_5CBF00(a1, a2, (__int64)v9, a3) )
    {
      sub_63DFA0(v9, a2, v10, a3, a4, a5, a6, v11, v12, a9);
      return v9;
    }
    sub_63D960(v9);
    sub_186B220(v9);
  }
  return nullptr;
}

