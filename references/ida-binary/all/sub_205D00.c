__int64 __fastcall sub_205D00(QT::QAccessibleEvent *a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  const __m128i *v6; // r12
  __int64 v8; // rax
  __m128i *v9; // rsi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v12; // rax
  QT::QWidget *v13; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // [rsp+0h] [rbp-98h] BYREF
  __int64 v19; // [rsp+10h] [rbp-88h]
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  __m128i *v22; // [rsp+28h] [rbp-70h]
  __m128i v23; // [rsp+30h] [rbp-68h] BYREF
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+58h] [rbp-40h]
  unsigned __int64 v28; // [rsp+68h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( !*((_QWORD *)a1 + 53) )
    sub_1E69C0(a5, (__int64)a1, (__int64)a2, a3, a4);
  v6 = (const __m128i *)((char *)a1 + 384);
  v8 = *a2;
  v19 = 0;
  v20 = -1;
  v21 = 0;
  v22 = nullptr;
  v18 = 0;
  (*(void (__fastcall **)(__int64 *, __int128 *, char *))(v8 + 160))(a2, &v18, (char *)a1 + 384);
  v9 = v22;
  if ( !sub_1F0940((__int64)a1, (__int64)v22, *((_QWORD *)a1 + 53)) )
  {
    v9 = &v23;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v27 = 0;
    v23 = 0;
    if ( (unsigned __int8)sub_174EF0((__int64)a2, (__int64)&v23) )
    {
      v9 = &v23;
      sub_1F1190(v6, &v23, 3, v15, v16, v17, (__m128i)0LL);
    }
    if ( v27 )
      qfree(v27, v23.m128i_i8);
  }
  if ( v22 )
    qfree(v22, v9->m128i_i8);
  sub_204FC0(a1, (__int64)v6);
  v10 = *(_QWORD *)a1;
  *((_BYTE *)a1 + 880) = 0;
  v11 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(v10 + 760);
  if ( v11 == sub_1E6980 )
  {
    v12 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(a1);
    QT::QWidget::update(v12);
    v13 = *((QT::QWidget **)a1 + 96);
    if ( v13 && *(char *)(*((_QWORD *)v13 + 4) + 9LL) < 0 )
      QT::QWidget::update(v13);
  }
  else
  {
    v11(a1);
  }
  if ( *((_BYTE *)a1 + 968) )
    sub_1E70E0((QT::QWidget **)a1, 1);
  sub_2D96C0(a1);
  return sub_2D9550(a1);
}
