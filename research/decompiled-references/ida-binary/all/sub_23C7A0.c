__int64 __fastcall setup_process_dialog_t__::vfunc_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 *v12; // rbx
  int v13; // eax
  unsigned int v14; // edx
  __int16 v16; // ax
  double v17; // xmm4_8
  double v18; // xmm5_8
  struct _Unwind_Exception *v19; // rbp
  __int64 v20[5]; // [rsp+0h] [rbp-28h] BYREF

  v20[1] = __readfsqword(0x28u);
  v13 = *(_DWORD *)(a2 + 12);
  if ( v13 == 6 )
  {
    if ( !dbg )
    {
      if ( !under_debugger )
      {
        v19 = (struct _Unwind_Exception *)interr(40045, a2, a3, a4, *(double *)a5.m128_u64);
        sub_17D800(v12);
        _Unwind_Resume(v19);
      }
      BUG();
    }
    sub_17D780(v20, a2);
    v16 = sub_2297A0(dbg);
    sub_230170(v16, *(double *)a5.m128_u64, a6, a7, a8, v17, v18, a11, a12);
    sub_17D800(v20);
    return 1;
  }
  v14 = 0;
  if ( v13 == 7 )
  {
    sub_23C610(a5, a6, a7, a8, a9, a10, a11, a12, a1, a2, 0, a4);
    return 1;
  }
  return v14;
}
