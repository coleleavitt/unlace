__int64 __fastcall dthr_executor_t__::vfunc_0(
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
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5

  if ( *(_BYTE *)(a1 + 24) && !byte_8CC55A && *((_DWORD *)qword_8CC600 + 22) != 8 )
  {
    v10 = a1 + 32;
    copy_debug_event(&qword_8CC340, a1 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 224LL))(QT::QCoreApplication::self + 2) )
    {
      if ( under_debugger )
        goto LABEL_14;
      interr(40200, v10, v11, v12, *(double *)a2.m128_u64);
    }
    else if ( *((_DWORD *)qword_8CC600 + 22) == 2 )
    {
      dword_8CC5F8 = (unsigned __int8)sub_24FE80(
                                        *(_DWORD *)(a1 + 28),
                                        v10,
                                        v11,
                                        v12,
                                        v13,
                                        v14,
                                        a2,
                                        a3,
                                        a4,
                                        a5,
                                        v15,
                                        v16,
                                        a8,
                                        a9);
      return 0;
    }
    if ( !under_debugger )
    {
      interr(40201, v10, v11, v12, *(double *)a2.m128_u64);
      return sub_252810();
    }
LABEL_14:
    BUG();
  }
  if ( dword_8CC5F0 )
    sub_24FC00(a2, a3, a4, a5, a6, a7, a8, a9);
  dword_8CC5F8 = -1;
  return 0;
}
