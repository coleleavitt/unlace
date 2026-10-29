void __fastcall sub_1C4630(int a1, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( a1 )
  {
    if ( a1 == 1 && qword_8CABB8 && *(char *)(*((_QWORD *)qword_8CABB8 + 4) + 9LL) < 0 )
    {
      v2 = QT::QScrollArea::widget(qword_8CABB8);
      v3 = v2;
      if ( !*(_BYTE *)(v2 + 112) )
      {
        QT::QTimer::start((QT::QTimer *)(v2 + 96), 500);
        *(_BYTE *)(v3 + 112) = 1;
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
