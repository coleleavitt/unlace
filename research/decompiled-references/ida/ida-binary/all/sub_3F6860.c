__m128i *__fastcall sub_3F6860(__m128i *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rax
  char v6; // dl
  __int64 v8; // rax
  __int64 v9; // rbp
  void **v10; // rsi
  __m128i si128; // xmm0
  double v12; // xmm0_8
  void *ptr[2]; // [rsp+10h] [rbp-248h] BYREF
  __int64 v14; // [rsp+20h] [rbp-238h]
  void *v15[4]; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v16[472]; // [rsp+50h] [rbp-208h] BYREF
  unsigned __int64 v17; // [rsp+228h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v5 = sub_3F2920(a3);
  if ( v6 )
  {
    sub_40E9B0(v16, v5);
    v8 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *(const QT::QObject **)(*(_QWORD *)(a2 + 8) + 16LL));
    v9 = v8;
    if ( v8 && (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v8 + 200)) )
    {
      v10 = (void **)v16;
      sub_4128F0(ptr, v16, a4, v9);
    }
    else
    {
      v10 = (void **)v16;
      sub_4128B0(ptr, v16, a4, v9);
    }
    if ( (a4 & 1) != 0 )
    {
      v12 = QT::QString::fromUtf8(v15, 9, "<b>%1</b>");
      v10 = v15;
      QT::QString::arg(a1, v15, ptr, 0, 32, v12);
      if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
        free(v15[0]);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)ptr);
      a1[1].m128i_i64[0] = v14;
      *a1 = si128;
    }
    sub_3EFED0((__int64)v16, (const char *)v10);
  }
  else
  {
    a1[1].m128i_i64[0] = 0;
    *a1 = 0;
  }
  return a1;
}
