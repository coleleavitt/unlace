__int64 __fastcall sub_53E780(
        QT::QMainWindow *this,
        unsigned int a2,
        QT::QMenu *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  QT::QMenuBar *v22; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+8h] [rbp-30h]
  __int64 v25; // [rsp+10h] [rbp-28h]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  QT::QMainWindow::menuBar(this);
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v12 = QT::QMenu::menuAction(a3);
  if ( v25 > 0 )
  {
    v13 = v24;
    while ( 1 )
    {
      v14 = v13;
      if ( v24 + 8 * v25 == v13 )
        break;
      v13 += 8;
      if ( v12 == *(_QWORD *)(v13 - 8) )
      {
        if ( v14 - v24 == -8 )
          break;
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        return 0;
      }
    }
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( !sub_53E5A0(this, a2, 0, *(double *)a4.m128_u64) )
  {
    sub_169700(
      (int)"Menu entry '%d' doesn't exist; can't replace.\n",
      a2,
      v15,
      v16,
      v17,
      v18,
      a4,
      a5,
      a6,
      a7,
      v19,
      v20,
      a10,
      a11,
      (char)ptr);
    return 0;
  }
  if ( a2 == -1 )
  {
    v22 = (QT::QMenuBar *)QT::QMainWindow::menuBar(this);
    QT::QMenuBar::insertMenu(v22, nullptr, a3);
  }
  return 1;
}
