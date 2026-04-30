__int64 __fastcall IDAMainWindow__::vfunc_2(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  void **v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  _QWORD *v18; // rdx
  int v19; // [rsp+Ch] [rbp-1Ch]

  result = ui_main_window_t__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 21 )
      {
        v19 = result;
        sub_46BA60(a1, 0, (unsigned int)result, a12, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10);
        LODWORD(result) = v19;
      }
      return (unsigned int)(result - 22);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 21 )
      {
        v18 = *(_QWORD **)a12;
        if ( (_DWORD)result || **(_DWORD **)(a12 + 8) )
          *v18 = 0;
        else
          *v18 = &unk_8C1460;
      }
      return (unsigned int)(result - 22);
    }
  }
  return result;
}
