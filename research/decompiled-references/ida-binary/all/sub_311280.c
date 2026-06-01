__int64 __fastcall sub_311280(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  QT::QWidget *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  double v14; // xmm4_8
  double v15; // xmm5_8

  if ( (unsigned __int8)sub_507ED0() )
  {
    if ( (unsigned __int8)netnode_inited(a1) )
    {
      if ( *(char *)(*(_QWORD *)(sub_53DC50(qword_8CD748, "DebuggerSelected") + 32) + 9LL) >= 0 )
      {
        v9 = qword_8CD748;
        if ( *(char *)(*(_QWORD *)(sub_53DC50(qword_8CD748, "DebuggerUnselected") + 32) + 9LL) >= 0 )
        {
          sub_24C2D0(a1, (__int64)v9, (__int64)"DebuggerUnselected", v10, v11, v12, v13);
          sub_25D080(a1, a2, a3, a4, v14, v15, a7, a8);
          sub_531B30(4, 0, 0);
        }
      }
    }
  }
  return 1;
}
