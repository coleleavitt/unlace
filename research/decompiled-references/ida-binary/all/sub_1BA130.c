__int64 __fastcall sub_1BA130(__int64 a1, const char *a2, const QT::QObject *a3)
{
  __int64 v4; // r12
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  QT::QWidget *v7; // rbx
  int v8; // edx
  __int64 v10; // r14
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  int v13; // edx
  __int64 v14; // r12
  int v15; // edx
  int v16; // edx
  __m128i v17; // [rsp+0h] [rbp-108h] BYREF
  __m128i v18; // [rsp+10h] [rbp-F8h] BYREF
  int v19; // [rsp+20h] [rbp-E8h]
  __int64 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-D0h]
  __int128 v22; // [rsp+48h] [rbp-C0h]
  __int128 v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __m128i v25; // [rsp+70h] [rbp-98h]
  __m128i v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int128 v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  char v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v33; // [rsp+C8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, a3);
  if ( v4 )
  {
    v20 = 0;
    v24 = 0;
    v26.m128i_i64[0] = 0;
    v26.m128i_i64[1] = -1;
    v27 = 0;
    v29 = 0;
    v30 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v25 = 0;
    v28 = 0;
    sub_1E8870(&v17, 1);
    v5 = _mm_load_si128(&v17);
    v31 = 0;
    v32 = 0;
    v25 = v5;
    v6 = _mm_load_si128(&v18);
    LODWORD(v27) = v19;
    v26 = v6;
    sub_1E2AF0(&v20);
    v7 = (QT::QWidget *)operator new(0x428u);
    sub_1E39B0(v7, "Sample CPU Registers - diff");
    QT::QWidget::setStyleSheet(v7, (const QT::QString *)(a1 + 24));
    QT::QWidget::ensurePolished(v7);
    QT::QCoreApplication::sendPostedEvents(v7, (QT::QObject *)((char *)&qword_48 + 2), v8);
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*((_QWORD *)v7 + 5) + 24LL))(
      (_QWORD *)v7 + 5,
      a2,
      v4 + 40);
    qfree(*((_QWORD *)&v28 + 1), a2);
    *((_QWORD *)&v28 + 1) = 0;
    qfree(v29, a2);
    v29 = 0;
    if ( (_QWORD)v28 )
      qfree(v28, a2);
  }
  else
  {
    v10 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a3);
    if ( !v10 )
    {
      v14 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88C6E0, a3);
      if ( v14 )
      {
        v7 = (QT::QWidget *)operator new(0x1C8u);
        sub_33F2E0(v7);
      }
      else
      {
        v14 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EE60, a3);
        if ( v14 )
        {
          v7 = (QT::QWidget *)operator new(0x758u);
          sub_39C1C0(v7);
        }
        else
        {
          if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_88B5C0, a3) )
          {
            v7 = (QT::QWidget *)operator new(0xA0u);
            sub_512270(v7, (void *)v17.m128i_i64[0]);
            *(_QWORD *)v7 = &MainMsgList___vtable;
            *((_QWORD *)v7 + 2) = MainMsgList___vtable_at__16;
            QT::QWidget::setStyleSheet(v7, (const QT::QString *)(a1 + 24));
            QT::QWidget::ensurePolished(v7);
            QT::QCoreApplication::sendPostedEvents(v7, (QT::QObject *)((char *)&qword_48 + 2), v16);
            sub_515F70(v7);
            goto LABEL_4;
          }
          v14 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89E260, a3);
          if ( v14 )
          {
            v7 = (QT::QWidget *)operator new(0xB8u);
            sub_529BA0(v7);
          }
          else
          {
            v14 = QT::QMetaObject::cast((QT::QMetaObject *)&off_885220, a3);
            if ( !v14 )
              return v33 - __readfsqword(0x28u);
            v7 = (QT::QWidget *)operator new(0xB8u);
            sub_2A6C10(v7);
          }
        }
      }
      QT::QWidget::setStyleSheet(v7, (const QT::QString *)(a1 + 24));
      QT::QWidget::ensurePolished(v7);
      QT::QCoreApplication::sendPostedEvents(v7, (QT::QObject *)((char *)&qword_48 + 2), v15);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*((_QWORD *)v7 + 5) + 24LL))(
        (_QWORD *)v7 + 5,
        a2,
        v14 + 40);
      goto LABEL_4;
    }
    v20 = 0;
    v24 = 0;
    v26.m128i_i64[0] = 0;
    v26.m128i_i64[1] = -1;
    v27 = 0;
    v29 = 0;
    v30 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v25 = 0;
    v28 = 0;
    sub_1E8870(&v17, 1);
    v11 = _mm_load_si128(&v17);
    v31 = 0;
    v32 = 0;
    v25 = v11;
    v12 = _mm_load_si128(&v18);
    LODWORD(v27) = v19;
    v26 = v12;
    sub_1B3990((__m128i *)&v20, *(unsigned int *)(v10 + 564));
    v7 = (QT::QWidget *)operator new(0x400u);
    sub_1B9D60(v7, "differ", (__int64)&v20, 0);
    QT::QWidget::setStyleSheet(v7, (const QT::QString *)(a1 + 24));
    QT::QWidget::ensurePolished(v7);
    QT::QCoreApplication::sendPostedEvents(v7, (QT::QObject *)((char *)&qword_48 + 2), v13);
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*((_QWORD *)v7 + 5) + 24LL))(
      (_QWORD *)v7 + 5,
      a2,
      v10 + 40);
    qfree(*((_QWORD *)&v28 + 1), a2);
    *((_QWORD *)&v28 + 1) = 0;
    qfree(v29, a2);
    v29 = 0;
    if ( (_QWORD)v28 )
    {
      qfree(v28, a2);
      if ( v7 )
        return (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v7 + 32LL))(v7);
      return v33 - __readfsqword(0x28u);
    }
  }
LABEL_4:
  if ( v7 )
    return (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v7 + 32LL))(v7);
  return v33 - __readfsqword(0x28u);
}
