void __fastcall sub_51B5E0(QT::QCoreApplication *a1, QT::QObject *a2, QT::QEvent *a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rdx
  __m128 v7; // xmm0
  __int64 v8; // r14
  unsigned __int64 v9; // xmm2_8
  _QWORD *v10; // rax
  unsigned __int64 v11; // r12
  _QWORD *v12; // r13

  if ( a1 )
  {
    QT::QCoreApplication::sendEvent(a1, a2, a3);
    v6 = *((_QWORD *)a1 + 1);
    v7 = (__m128)_mm_loadu_si128((const __m128i *)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 40);
    v9 = _mm_movehl_ps(a6, v7).m128_u64[0];
    v10 = (_QWORD *)v9;
    if ( v7.m128_u64[0] )
    {
      _InterlockedAdd((volatile signed __int32 *)v7.m128_u64[0], 1u);
      _InterlockedAdd((volatile signed __int32 *)v7.m128_u64[0], 1u);
    }
    v11 = v9 + 8 * v8;
    if ( v11 != v9 )
    {
      do
      {
        v12 = v10 + 1;
        sub_51B5E0(*v10, a2);
        v10 = v12;
      }
      while ( (_QWORD *)v11 != v12 );
    }
    if ( v7.m128_u64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v7.m128_u64[0], 1u) )
        free((void *)v7.m128_u64[0]);
      if ( !_InterlockedSub((volatile signed __int32 *)v7.m128_u64[0], 1u) )
        free((void *)v7.m128_u64[0]);
    }
  }
}
