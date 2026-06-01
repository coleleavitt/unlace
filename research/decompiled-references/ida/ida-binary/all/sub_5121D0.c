void __fastcall sub_5121D0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 i; // r12
  QT::QTextLayout *v4; // rbp

  v2 = *(_QWORD *)(a1 + 16);
  for ( i = v2 + 48LL * *(_QWORD *)(a1 + 24); v2 != i; v2 += 48 )
  {
    v4 = *(QT::QTextLayout **)(v2 + 24);
    if ( v4 )
    {
      if ( a2 <= *(_DWORD *)(v2 + 32) )
        goto LABEL_3;
      if ( (int)QT::QTextLayout::lineCount(*(QT::QTextLayout **)(v2 + 24)) <= 1 )
        continue;
      v4 = *(QT::QTextLayout **)(v2 + 24);
      if ( v4 )
      {
LABEL_3:
        QT::QTextLayout::~QTextLayout(v4);
        operator delete(v4, 8u);
        *(_QWORD *)(v2 + 24) = 0;
      }
      *(_QWORD *)(v2 + 32) = -1;
    }
  }
}
