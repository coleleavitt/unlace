__m128i *__fastcall sub_3F7360(__m128i *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(QT::QVariant *); // rax
  __int64 v4; // rax
  _DWORD v6[4]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+10h] [rbp-C8h]
  _BYTE v8[32]; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v9; // [rsp+40h] [rbp-98h] BYREF
  __int64 v10; // [rsp+50h] [rbp-88h]
  __m128 ptr[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v12[40]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 104)
    && (QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v6), (v6[1] | v6[0]) >= 0)
    && v7 )
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD, _DWORD *))(**(_QWORD **)(a2 + 120) + 400LL))(v8, *(_QWORD *)(a2 + 120), v6);
    v2 = *(_QWORD *)(a2 + 112);
    v3 = *(__int64 (__fastcall **)(QT::QVariant *))(*(_QWORD *)v2 + 144LL);
    if ( v3 == sub_408230 )
    {
      sub_3F6FF0(ptr, v2, (__int64)v8, 0);
      QT::QVariant::QVariant((QT::QVariant *)v12, (const QT::QString *)ptr);
      if ( ptr[0].m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128_u64[0], 1u) )
        free((void *)ptr[0].m128_u64[0]);
    }
    else
    {
      ((void (__fastcall *)(_BYTE *, __int64, _BYTE *, __int64))v3)(v12, v2, v8, 18790);
    }
    QT::QVariant::toString((QT::QVariant *)ptr);
    QT::QString::trimmed_helper((QT::QString *)&v9, (QT::QString *)ptr);
    if ( ptr[0].m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128_u64[0], 1u) )
      free((void *)ptr[0].m128_u64[0]);
    QT::QVariant::~QVariant((QT::QVariant *)v12);
    v4 = v10;
    *a1 = _mm_load_si128(&v9);
    a1[1].m128i_i64[0] = v4;
  }
  else
  {
    a1[1].m128i_i64[0] = 0;
    *a1 = 0;
  }
  return a1;
}
