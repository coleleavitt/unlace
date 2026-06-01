__int64 __fastcall IDAProxiRenderer__::vfunc_3(
        QT::QObject *this,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rax
  __int64 v16; // rdi

  *(_QWORD *)this = &IDAProxiRenderer___vtable;
  v15 = *((_QWORD *)this + 55);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 )
      sub_3723E0(v16 + 272, (__int64)a2, a7, a8, a9, a10, a11, a12, a13, a14, a3, a4, a5, a6);
  }
  return IDAGraphRenderer__::vfunc_3(this, a2);
}
