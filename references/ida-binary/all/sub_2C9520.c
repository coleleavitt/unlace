void __fastcall sub_2C9520(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  QT::QAbstractScrollArea *v4; // rdi

  if ( (_QWORD)xmmword_8CCBC8 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(QT::QAbstractScrollArea **)(qword_8CCBC0 + 8 * v2);
      if ( v4 )
        sub_27D430(v4, a2);
      v2 = ++v3;
    }
    while ( v3 < (unsigned __int64)xmmword_8CCBC8 );
  }
}
