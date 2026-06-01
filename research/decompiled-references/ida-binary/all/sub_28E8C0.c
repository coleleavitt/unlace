void __fastcall sub_28E8C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r15
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(_QWORD *); // rax

  v1 = xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = (_QWORD *)QT::QMetaObject::cast(
                       (QT::QMetaObject *)&off_884740,
                       *(const QT::QObject **)(qword_8CB520 + 8 * v3));
      v5 = v4;
      if ( !v4 || a1 != -1 && a1 != v4[127] )
        goto LABEL_4;
      v6 = *(__int64 (__fastcall **)(_QWORD *))(*v4 + 664LL);
      if ( v6 == sub_28E6B0 )
      {
        sub_1EC030(v5);
        if ( v1 == ++v3 )
          return;
      }
      else
      {
        v6(v5);
LABEL_4:
        if ( v1 == ++v3 )
          return;
      }
    }
  }
}
