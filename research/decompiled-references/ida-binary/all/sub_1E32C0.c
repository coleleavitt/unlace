void __fastcall sub_1E32C0(unsigned __int8 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  _BYTE *v3; // rax

  v1 = xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
    v2 = 0;
    do
    {
      v3 = (_BYTE *)QT::QMetaObject::cast(
                      (QT::QMetaObject *)&off_882B40,
                      *(const QT::QObject **)(qword_8CB520 + 8 * v2));
      if ( v3 )
      {
        if ( (a1 & v3[1024]) != 0 )
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 664LL))(v3);
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
}
