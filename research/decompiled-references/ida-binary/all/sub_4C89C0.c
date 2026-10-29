void __fastcall sub_4C89C0(_QWORD *a1, char a2)
{
  _QWORD *v2; // rax
  QT::QWidget *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rbp
  int *v10; // r15
  unsigned __int64 v11; // r12
  QT::QWidget **v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm5
  __m128 si128; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  int v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v2 = (_QWORD *)a1[5];
  v19 = __readfsqword(0x28u);
  if ( *v2 )
  {
    ptr[1] = a1;
    ptr[0] = DockArea::removeAllDocks;
    LOBYTE(v18) = a2;
    sub_4CF2F0(ptr);
    v4 = *(QT::QWidget **)a1[5];
    if ( v4 )
    {
      QT::QWidget::setParent(v4, nullptr);
      if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(a1[1] + 16LL)) )
        sub_4C4A40((QT::QWidget *)a1);
    }
  }
  if ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(a1[1] + 16LL)) )
  {
    sub_4C8370((__int64)ptr, (__int64)a1);
    v7 = ptr[0];
    v8 = v18 - 1;
    if ( v18 - 1 >= 0 )
    {
      v9 = 8LL * (int)v8;
      si128 = _mm_loadh_ps((const double *)&ptr[1]);
      v10 = (int *)si128.m128_u64[0];
      v11 = 8 * ((int)v8 - (unsigned __int64)v8);
      if ( si128.m128_u64[0] )
        goto LABEL_9;
LABEL_10:
      *(__m128i *)ptr = _mm_load_si128((const __m128i *)&si128);
      sub_4BCCA0((__int64)ptr, 0, 0, 0, v5, v6);
      v7 = ptr[0];
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v10 = (int *)si128.m128_u64[0];
      while ( 1 )
      {
        v12 = (QT::QWidget **)(v9 + si128.m128_u64[1]);
        sub_4C89C0(*(_QWORD *)(v9 + si128.m128_u64[1]), 0);
        if ( !v10 || *v10 > 1 )
        {
          *(__m128i *)ptr = _mm_load_si128((const __m128i *)&si128);
          sub_4BCCA0((__int64)ptr, 0, 0, 0, v13, v14);
          v7 = ptr[0];
          si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
          v12 = (QT::QWidget **)(v9 + _mm_movehl_ps(v15, si128).m128_u64[0]);
        }
        QT::QWidget::setParent(*v12, nullptr);
        if ( v9 == v11 )
          break;
        v10 = (int *)si128.m128_u64[0];
        v9 -= 8;
        if ( !si128.m128_u64[0] )
          goto LABEL_10;
LABEL_9:
        if ( *v10 > 1 )
          goto LABEL_10;
      }
    }
    if ( v7 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v7, 1u) )
        free(v7);
    }
  }
}
