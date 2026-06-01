void __fastcall TStructureOffsetsForm__::vfunc_3(QT::QDialog *this, const char *a2)
{
  void *v3; // rdi
  int v4; // edx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 v9; // rdi

  *(_QWORD *)this = &TStructureOffsetsForm___vtable;
  *((_QWORD *)this + 2) = TStructureOffsetsForm___vtable_at__16;
  v3 = *((void **)this + 9);
  if ( v3 )
  {
    a2 = (const char *)&qword_A8;
    operator delete(v3, 0xA8u);
  }
  v4 = *((_DWORD *)this + 318);
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 90) = &HintProvider___vtable;
  if ( v4 )
    QT::QBasicTimer::stop((QT::QDialog *)((char *)this + 1272));
  QT::QObject::~QObject((QT::QDialog *)((char *)this + 720));
  *((_QWORD *)this + 19) = &HintProvider___vtable;
  if ( *((_DWORD *)this + 176) )
    QT::QBasicTimer::stop((QT::QDialog *)((char *)this + 704));
  QT::QObject::~QObject((QT::QDialog *)((char *)this + 152));
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    *((_QWORD *)this + 17) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 14);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = *(_QWORD *)(v6 + 8 * i);
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          v6 = *((_QWORD *)this + 13);
        }
      }
    }
    *((_QWORD *)this + 14) = 0;
    qfree(v6, a2);
  }
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
