__int64 __fastcall ColorsOptionsDialog__::vfunc_2(
        __int64 a1,
        int a2,
        double a3,
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
  double v14; // xmm4_8
  double v15; // xmm5_8
  _QWORD *v16; // rdx
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 16 )
      {
        v17 = result;
        sub_461A50(a1, 0, (unsigned int)result, a12, a3, a4, a5, a6, v14, v15, a9, a10);
        LODWORD(result) = v17;
      }
      return (unsigned int)(result - 17);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 16 )
      {
        v16 = *(_QWORD **)a12;
        if ( (_DWORD)result != 9 || **(_DWORD **)(a12 + 8) )
          *v16 = 0;
        else
          *v16 = &unk_8BF8E0;
      }
      return (unsigned int)(result - 17);
    }
  }
  return result;
}
