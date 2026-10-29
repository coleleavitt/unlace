unsigned __int64 __fastcall sub_4CB740(
        QT::QWidget *a1,
        int a2,
        QT::QWidget *a3,
        QT::QWidget *a4,
        __int64 *a5,
        double a6)
{
  int v9; // ecx
  void *v10; // rbx
  QT::QWidget *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  QT::QWidget *v15; // rbp
  __int64 v16; // rbp
  void *v17[4]; // [rsp+0h] [rbp-78h] BYREF
  int v18[2]; // [rsp+20h] [rbp-58h] BYREF
  int v19[2]; // [rsp+28h] [rbp-50h]
  void *ptr[2]; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_4C6540((__int64)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 5) + 64LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL),
    0);
  *((_BYTE *)a3 + 44) = 0;
  switch ( a2 )
  {
    case 1:
      v10 = sub_4C9FD0(a1, (__int64)a3, (__int64)a4, 1, -1, a6);
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      v9 = dword_6CBC50[a2 - 2];
      ++dword_8D1DC0;
      v10 = sub_4CB350((__int64)a1, a3, a4, v9, a6);
      sub_4D2110(v18);
      break;
    case 6:
      v10 = sub_4CAC80(a1, (__int64)a3, 1, a6);
      break;
    case 7:
      v10 = sub_4CAC80(a1, (__int64)a3, 4, a6);
      break;
    case 8:
      v10 = sub_4CAC80(a1, (__int64)a3, 2, a6);
      break;
    case 9:
      v10 = sub_4CAC80(a1, (__int64)a3, 8, a6);
      break;
    default:
      v13 = QT::QWidget::baseSize(a3);
      v14 = *a5;
      *(_QWORD *)v19 = v13;
      v21 = 0;
      *(_QWORD *)v18 = v14;
      *(_OWORD *)ptr = 0;
      v15 = sub_4C7380(a1, (__int64)v18);
      v10 = sub_4CAC80(v15, (__int64)a3, 4, 0.0);
      (*(void (__fastcall **)(void **, void *))(*(_QWORD *)v10 + 416LL))(v17, v10);
      QT::QWidget::setWindowTitle(v15, (const QT::QString *)v17);
      if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
        free(v17[0]);
      (*(void (__fastcall **)(void **, void *))(*(_QWORD *)v10 + 424LL))(v17, v10);
      QT::QWidget::setWindowIcon(v15, (const QT::QIcon *)v17);
      QT::QIcon::~QIcon((QT::QIcon *)v17);
      QT::QWidget::show(v15);
      v16 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 96LL);
      if ( *(_QWORD *)(v16 + 40) )
      {
        QT::QBasicTimer::stop((QT::QBasicTimer *)(v16 + 48));
        if ( !*(_BYTE *)(v16 + 56) )
          sub_4C4810((QT::QWidget *)v16);
      }
      QT::QBasicTimer::start(v16 + 52, 1300, v16);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      break;
  }
  if ( v10 )
  {
    *(_QWORD *)v18 = DockArea::enforceVisibility;
    sub_4CF2F0(v18);
  }
  if ( byte_8D1DB8 )
    return v22 - __readfsqword(0x28u);
  v11 = qword_8D1DB0;
  if ( !qword_8D1DB0 )
    return v22 - __readfsqword(0x28u);
  QT::QWidget::setFocus(qword_8D1DB0, 7);
  return QT::QWidget::activateWindow(v11);
}
