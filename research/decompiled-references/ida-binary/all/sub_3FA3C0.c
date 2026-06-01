void __fastcall sub_3FA3C0(QT::QApplication *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _DWORD *v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  int *v10; // rax
  int v11; // ebx

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 && (*(_QWORD *)(a2 + 24) != QT::QApplication::focusWidget(a1) || *(_BYTE *)(a2 + 32)) )
    {
      v5 = *(_QWORD **)(a2 + 16);
      v6 = v5[20];
      if ( v6 )
      {
        v8 = *(int *)(a2 + 36);
        v9 = v6 - 1;
        if ( v9 <= v8 )
          LODWORD(v8) = v9;
        v10 = (int *)v5[18];
        v11 = v8;
        if ( !v10 || *v10 > 1 )
          sub_3F9FE0((__int64)(v5 + 18), 0, 0, 0, v2, v3);
        v7 = *(_QWORD *)(*(_QWORD *)(v5[19] + 8LL * v11) + 40LL);
      }
      else
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 272LL);
        if ( !v7 )
          return;
      }
      QT::QWidget::setFocus(v7, 7);
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
