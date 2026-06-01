QT::QWidget *sub_1E56A0()
{
  unsigned int v0; // ebx
  __int64 v1; // rbp
  QT::QWidget *result; // rax
  __int64 v3; // rdi

  v0 = xmmword_8CB458 - 1;
  if ( (int)xmmword_8CB458 - 1 >= 0 )
  {
    v1 = 8LL * v0;
    do
    {
      while ( 1 )
      {
        result = (QT::QWidget *)qword_8CB450;
        v3 = *(_QWORD *)(qword_8CB450 + v1);
        if ( *(_BYTE *)(v3 + 256) )
          break;
        --v0;
        v1 -= 8;
        if ( v0 == -1 )
          return result;
      }
      result = sub_1E5630(v3);
      --v0;
      v1 -= 8;
    }
    while ( v0 != -1 );
  }
  return result;
}
