void __fastcall sub_3FA780(QT::QApplication *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _DWORD *v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  int *v7; // rax

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 && (*(_QWORD *)(a2 + 24) != QT::QApplication::focusWidget(a1) || *(_BYTE *)(a2 + 32)) )
    {
      v5 = *(_QWORD **)(a2 + 16);
      if ( v5[20] )
      {
        v7 = (int *)v5[18];
        if ( !v7 || *v7 > 1 )
          sub_3F9FE0((__int64)(v5 + 18), 0, 0, 0, v2, v3);
        v6 = *(_QWORD *)(*(_QWORD *)(v5[19] + 8LL * v5[20] - 8) + 40LL);
      }
      else
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 272LL);
        if ( !v6 )
          return;
      }
      QT::QWidget::setFocus(v6, 7);
    }
  }
  else if ( a2 )
  {
    v4 = *(_DWORD **)(a2 + 48);
    if ( v4 )
      --*v4;
    operator delete((void *)a2, 0x38u);
  }
}
