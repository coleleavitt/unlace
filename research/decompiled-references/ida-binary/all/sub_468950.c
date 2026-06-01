__int64 __fastcall idp_dirtree_widget_t__::vfunc_2(
        QT::QMetaObject *this,
        int a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  void **v14; // r8
  int v15; // edx
  int v16; // [rsp+1Ch] [rbp-3Ch] BYREF
  int v17[2]; // [rsp+20h] [rbp-38h] BYREF
  int *v18; // [rsp+28h] [rbp-30h]
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  result = ida_dirtree_widget_t__::vfunc_2(this, a2, a5, a6, a7, a8, a9, a10, a11, a12, a3, (_QWORD **)a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        v15 = **(_DWORD **)(a4 + 8);
        *(_QWORD *)v17 = 0;
        v16 = v15;
        v18 = &v16;
        QT::QMetaObject::activate(this, (QT::QObject *)&off_888DC0, nullptr, (int)v17, v14);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
