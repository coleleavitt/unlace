__int64 __fastcall sub_513840(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  void *v6; // rbp
  __int64 v7; // rdi
  char v8; // bp
  QT::QObject *v9; // rbx
  int v10; // ecx

  if ( !a2 || (v4 = *(_QWORD *)(a1 + 16), v5 = v4 + 48LL * *(_QWORD *)(a1 + 24), v4 == v5) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (result & 1) == 0 )
    {
LABEL_9:
      v7 = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 56) = result | 1;
      v8 = sub_5137F0(v7);
      v9 = (QT::QObject *)operator new(0x18u);
      QT::QEvent::QEvent(v9, 2008);
      *((_BYTE *)v9 + 16) = v8;
      *(_QWORD *)v9 = &LogWidgetUpdateLayout___vtable;
      return QT::QCoreApplication::postEvent(*(QT::QCoreApplication **)(a1 + 40), v9, nullptr, v10);
    }
  }
  else
  {
    do
    {
      v6 = *(void **)(v4 + 24);
      if ( v6 )
      {
        QT::QTextLayout::~QTextLayout(*(QT::QTextLayout **)(v4 + 24));
        operator delete(v6, 8u);
        *(_QWORD *)(v4 + 24) = 0;
      }
      *(_QWORD *)(v4 + 32) = -1;
      v4 += 48;
    }
    while ( v5 != v4 );
    result = *(unsigned int *)(a1 + 56);
    if ( (result & 1) == 0 )
      goto LABEL_9;
  }
  return result;
}
