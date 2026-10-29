__int64 __fastcall sub_3E0080(QT::QWidget *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 *v4; // rbx
  int v5; // eax
  __int64 *v6; // rbp
  __int64 v7; // rax

  v2 = QT::QAbstractItemView::model(this);
  v3 = *(_QWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 24) = a2;
  v4 = *(__int64 **)(v3 + 16);
  if ( 8LL * *(_QWORD *)(v3 + 24) )
  {
    do
    {
      if ( a2 == 10 )
      {
        v5 = 3;
      }
      else if ( a2 <= 10 )
      {
        v5 = 1;
        if ( a2 != 2 )
          v5 = 2 * (a2 == 8);
      }
      else
      {
        v5 = 4 * (a2 == 16);
      }
      *(_DWORD *)(*v4 + 368) = v5;
      v6 = (__int64 *)*v4;
      if ( (unsigned int)(*(_DWORD *)(*v4 + 56) - 1) <= 1 && v6 )
      {
        v7 = *v6;
        *((_BYTE *)v6 + 372) = 1;
        (*(void (__fastcall **)(__int64 *))(v7 + 40))(v6);
        *((_BYTE *)v6 + 372) = 0;
      }
      ++v4;
    }
    while ( v4 != (__int64 *)(*(_QWORD *)(v3 + 16) + 8LL * *(_QWORD *)(v3 + 24)) );
  }
  return QT::QWidget::update(this);
}
