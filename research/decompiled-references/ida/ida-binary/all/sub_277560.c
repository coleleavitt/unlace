double __fastcall merge_progress_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  QT::QObject *v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v3 = (QT::QObject *)(a1 + 23);
  v4 = a1 + 19;
  *((_QWORD *)v3 - 23) = merge_progress_chooser_t___vtable;
  *(_QWORD *)v3 = &merge_progress_chooser_slotpoline_t___vtable;
  QT::QObject::~QObject(v3);
  *a1 = &stru_86F6A0;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      qfree(v5, a2);
    }
    v4 -= 3;
  }
  while ( v4 != a1 + 7 );
  return qfree(a1, a2);
}
