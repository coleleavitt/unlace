void __fastcall sub_2C9580(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  QT::QAbstractScrollArea *v7; // rdi

  if ( (_QWORD)xmmword_8CCBC8 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(qword_8CCBC0 + 8 * v2);
      if ( v4 )
        sub_209330(*(_QWORD *)(v4 + 728) + 56LL);
      v2 = ++v3;
    }
    while ( v3 < (unsigned __int64)xmmword_8CCBC8 );
    if ( (_QWORD)xmmword_8CCBC8 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = *(QT::QAbstractScrollArea **)(qword_8CCBC0 + 8 * v6);
        if ( v7 )
          sub_27D430(v7, a2);
        v6 = ++v5;
      }
      while ( v5 < (unsigned __int64)xmmword_8CCBC8 );
    }
  }
}
