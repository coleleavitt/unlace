__int64 __fastcall sub_5428C0(__int64 a1, const char *a2, double a3)
{
  unsigned int v3; // r12d
  unsigned int qerrno; // ebp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdi
  QT::QWidget *v12; // rdi

  qerrno = get_qerrno(a3);
  LOBYTE(v3) = (_QWORD)xmmword_8D2598 != 0;
  if ( !(_QWORD)xmmword_8D2598 )
  {
    v6 = *(_QWORD *)(a1 + 8);
LABEL_3:
    if ( (unsigned __int8)QT::QTimer::isActive((QT::QTimer *)(v6 + 656)) )
      QT::QTimer::stop((QT::QTimer *)(*(_QWORD *)(a1 + 8) + 656LL));
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 120LL);
    if ( v7 && *((int *)QT::QCoreApplication::self + 25) <= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 440LL))(v7);
    goto LABEL_8;
  }
  *(_QWORD *)&xmmword_8D2598 = xmmword_8D2598 - 1;
  v9 = (__int64 *)(qword_8D2590 + 56 * xmmword_8D2598);
  v10 = v9[3];
  if ( v10 )
  {
    v9[4] = 0;
    a3 = qfree(v10, a2);
  }
  v11 = *v9;
  if ( *v9 )
  {
    v9[1] = 0;
    qfree(v11, a2, a3);
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( !(_QWORD)xmmword_8D2598 )
    goto LABEL_3;
  v12 = *(QT::QWidget **)(v6 + 120);
  if ( v12 && *(int *)(a1 + 84) <= 0 )
    sub_542320(v12, qword_8D2590 + 56 * xmmword_8D2598 - 56);
LABEL_8:
  sub_541E70();
  set_qerrno(qerrno);
  return v3;
}
