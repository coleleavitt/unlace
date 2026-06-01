unsigned __int64 __fastcall sub_5102E0(QT::QWidget *a1, QT::QWidget *this, const char *src, __int64 a4)
{
  QT::QWidget *v5; // rbp
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // rbp
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = this;
  v14 = __readfsqword(0x28u);
  sub_53A8A0(a1, a4, 0);
  *((_QWORD *)a1 + 7) = this;
  *((_QWORD *)a1 + 8) = 0;
  *(_OWORD *)((char *)a1 + 72) = 0;
  *(_QWORD *)a1 = &ui_form_dialog_t___vtable;
  *((_QWORD *)a1 + 2) = ui_form_dialog_t___vtable_at__16;
  if ( src )
  {
    v7 = strlen(src);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve((char *)a1 + 64, 0, v7 + 1, 1);
    *((_QWORD *)a1 + 8) = v10;
    *((_QWORD *)a1 + 9) = v8;
    memmove(v10, src, v9);
    *(_BYTE *)(*((_QWORD *)a1 + 8) + v9) = 0;
    v5 = *((QT::QWidget **)a1 + 7);
  }
  QT::QWidget::setParent(v5, a1);
  v11 = *((_QWORD *)a1 + 7);
  v13 = 0;
  QT::QWidget::move(v11, &v13);
  *(_QWORD *)(*((_QWORD *)a1 + 7) + 368LL) = a1;
  QT::QWidget::setWindowFlags(a1, *(_DWORD *)(*((_QWORD *)a1 + 4) + 12LL) & 0xFFFEFFFF);
  return v14 - __readfsqword(0x28u);
}
