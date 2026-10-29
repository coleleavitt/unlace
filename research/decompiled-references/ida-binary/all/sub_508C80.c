__int64 __fastcall sub_508C80(
        void *src,
        const __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QWidget *v10; // r12
  __m128i v11; // xmm0
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned int v16; // ebx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+10h] [rbp-98h]
  __int64 v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-60h]
  __m128i v25; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp-38h]
  unsigned __int64 v27; // [rsp+78h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( !src )
    return 0;
  if ( !batch )
  {
    v10 = (QT::QWidget *)sub_4F9C00();
    (*(void (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
    sub_5102E0((QT::QWidget *)v21, v10, src);
    v11 = _mm_loadu_si128(a2);
    v25 = v11;
    v26 = a2[1].m128i_i64[0];
    if ( !(unsigned __int8)sub_5075F0(
                             (__m128i *)v10,
                             (const char *)src,
                             v25.m128i_i32,
                             *(double *)v11.m128i_i64,
                             a4,
                             a5,
                             a6,
                             v12,
                             v13,
                             a9,
                             a10) )
    {
      v21[0] = &ui_form_dialog_t___vtable;
      v22 = ui_form_dialog_t___vtable_at__16;
      if ( v23 )
      {
        v24 = 0;
        qfree(v23, (const char *)src);
      }
      v16 = 0;
      v21[0] = &ui_dialog_t___vtable;
      v22 = ui_dialog_t___vtable_at__16;
      QT::QDialog::~QDialog((QT::QDialog *)v21);
      return v16;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 72LL))(v14, 1);
    sub_4F9A60((__int64 *)v10, 0xFFFFFFFF);
    sub_53A8F0(v21);
    v16 = sub_53AB40((QT::QWidget *)v21);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    QT::QWidget::hide((QT::QWidget *)v21);
    v17 = *((_QWORD *)v10 + 24);
    v21[0] = &ui_form_dialog_t___vtable;
    v22 = ui_form_dialog_t___vtable_at__16;
    if ( v23 )
    {
      v24 = 0;
      *(double *)v11.m128i_i64 = qfree(v23, (const char *)0xFFFFFFFFLL);
    }
    v21[0] = &ui_dialog_t___vtable;
    v22 = ui_dialog_t___vtable_at__16;
    QT::QDialog::~QDialog((QT::QDialog *)v21);
    if ( !v16 )
      return (unsigned int)-(v17 != 0);
    if ( v16 == 1 )
      return v16;
    if ( v16 != -1 )
    {
      if ( !under_debugger )
        interr(40260, 0xFFFFFFFFLL, v18, v19, *(double *)v11.m128i_i64);
      BUG();
    }
    return 0;
  }
  return sub_507D60((const char *)src, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
