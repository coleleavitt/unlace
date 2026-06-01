void __fastcall LoadFileDialog__::vfunc_3(QT::QDialog *this, const char *a2)
{
  void *v3; // rdi
  volatile signed __int32 *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *i; // r12
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *(_QWORD *)this = &LoadFileDialog___vtable;
  *((_QWORD *)this + 2) = LoadFileDialog___vtable_at__16;
  v3 = *((void **)this + 8);
  if ( v3 )
  {
    a2 = (const char *)&qword_100;
    operator delete(v3, 0x100u);
  }
  v4 = *((volatile signed __int32 **)this + 11);
  if ( v4 && !_InterlockedSub(v4, 1u) )
  {
    v5 = *((_QWORD **)this + 12);
    for ( i = &v5[12 * *((_QWORD *)this + 13)]; i != v5; v5 += 12 )
    {
      v7 = v5[7];
      if ( v7 )
      {
        v5[8] = 0;
        qfree(v7, a2);
      }
      v8 = v5[4];
      if ( v8 )
      {
        v5[5] = 0;
        qfree(v8, a2);
      }
      v9 = v5[1];
      if ( v9 )
      {
        v5[2] = 0;
        qfree(v9, a2);
      }
    }
    free(*((void **)this + 11));
  }
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
