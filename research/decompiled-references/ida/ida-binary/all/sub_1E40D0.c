void sub_1E40D0()
{
  __int64 v0; // rbp
  __int64 v1; // r14
  QT::QAbstractScrollArea *v2; // rbx
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edx

  v0 = xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
    v1 = 0;
    do
    {
      v2 = (QT::QAbstractScrollArea *)QT::QMetaObject::cast(
                                        (QT::QMetaObject *)&off_882B40,
                                        *(const QT::QObject **)(qword_8CB520 + 8 * v1));
      if ( v2 )
      {
        v3 = reg_int_op("CpuregsShowAnnotations", 0, 1, "Debugger");
        v4 = *((_DWORD *)v2 + 264);
        v5 = v4 & 0xFFFFFFFE;
        v6 = v4 | 1;
        if ( v3 )
          v5 = v6;
        *((_DWORD *)v2 + 264) = v5;
        sub_209330((char *)v2 + 1040);
        sub_1E34D0(v2, 0);
      }
      ++v1;
    }
    while ( v0 != v1 );
  }
}
