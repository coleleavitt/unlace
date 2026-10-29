unsigned __int64 __fastcall sub_3F7180(__int64 a1, __int64 a2)
{
  QT::QAbstractScrollArea *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(QT::QVariant *); // rax
  __int64 v11; // [rsp+8h] [rbp-E0h] BYREF
  _DWORD v12[4]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-C8h]
  _BYTE v14[32]; // [rsp+30h] [rbp-B8h] BYREF
  void *v15[4]; // [rsp+50h] [rbp-98h] BYREF
  __m128 ptr[2]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v17[40]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp-30h]

  v3 = *(QT::QAbstractScrollArea **)(a1 + 104);
  v18 = __readfsqword(0x28u);
  v5 = QT::QAbstractScrollArea::viewport(v3);
  v6 = QT::QWidget::mapFromGlobal(v5, a2 + 16);
  v7 = *(_QWORD *)(a1 + 104);
  v11 = v6;
  (*(void (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v7 + 496LL))(v12, v7, &v11);
  if ( (v12[0] | v12[1]) >= 0 && v13 )
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 400LL))(
      v14,
      *(_QWORD *)(a1 + 120),
      v12);
    v8 = *(_QWORD *)(a1 + 112);
    v9 = *(__int64 (__fastcall **)(QT::QVariant *))(*(_QWORD *)v8 + 144LL);
    if ( v9 == sub_408230 )
    {
      sub_3F6FF0(ptr, v8, (__int64)v14, 0);
      QT::QVariant::QVariant((QT::QVariant *)v17, (const QT::QString *)ptr);
      if ( ptr[0].m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128_u64[0], 1u) )
        free((void *)ptr[0].m128_u64[0]);
    }
    else
    {
      ((void (__fastcall *)(_BYTE *, __int64, _BYTE *, __int64))v9)(v17, v8, v14, 18790);
    }
    QT::QVariant::toString((QT::QVariant *)ptr);
    QT::QString::trimmed_helper((QT::QString *)v15, (QT::QString *)ptr);
    if ( ptr[0].m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128_u64[0], 1u) )
      free((void *)ptr[0].m128_u64[0]);
    QT::QVariant::~QVariant((QT::QVariant *)v17);
    if ( v15[2] )
    {
      sub_534680(&qword_8D1380, &off_86A4D0, 1, 0);
      sub_539A10(a2, &qword_8D1380);
    }
    if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
      free(v15[0]);
  }
  return v18 - __readfsqword(0x28u);
}
