__int64 __fastcall IDAMainWindow__::vfunc_5(
        QT::QMainWindow *a1,
        QT::QEvent *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *isEnabled; // rsi
  void *v12; // rdi

  if ( *((_WORD *)a2 + 4) != 3001 )
    return QT::QMainWindow::event(a1, a2);
  isEnabled = nullptr;
  if ( unk_8BDE41 )
    isEnabled = (const char *)(unsigned __int8)QT::QAction::isEnabled(qword_8C9928);
  sub_30A6D0((QT::QString *)&ptr, isEnabled, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( *((_QWORD *)&ptr + 1) )
  {
    v12 = (void *)ptr;
    qword_8CD8B0 = 0;
    ptr = 0;
    if ( v12 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
        free(v12);
    }
  }
  return 1;
}
