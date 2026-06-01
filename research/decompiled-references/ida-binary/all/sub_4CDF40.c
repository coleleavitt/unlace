__int64 __fastcall sub_4CDF40(QT::QSplitter **a1)
{
  __int64 result; // rax
  const QT::QObject *v2; // rbp
  __int64 v3; // rbx
  int v4; // ebp
  unsigned __int8 v5; // r13
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // ebx
  unsigned int v8; // r14d
  __int64 (__fastcall *v9)(__int64, int); // rax
  const QT::QObject *v10; // rax
  __int64 v11; // rax

  result = (__int64)a1[1];
  v2 = *(const QT::QObject **)(result + 16);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v2);
      if ( v3 )
        break;
      result = *((_QWORD *)v2 + 1);
      v2 = *(const QT::QObject **)(result + 16);
      if ( !v2 )
        return result;
    }
    v4 = (*((__int64 (__fastcall **)(QT::QSplitter **))*a1 + 64))(a1);
    v5 = (v4 > 1)
       | (QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(*(_QWORD *)(v3 + 8) + 16LL)) == 0);
    v6 = *((__int64 (__fastcall **)(__int64))*a1 + 58);
    if ( v6 == sub_4C46B0 )
      result = QT::QSplitter::count(a1[13]);
    else
      result = v6((__int64)a1);
    v7 = result;
    if ( (int)result > 0 )
    {
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = *((__int64 (__fastcall **)(__int64, int))*a1 + 57);
          if ( v9 == sub_4C46E0 )
          {
            v10 = (const QT::QObject *)QT::QSplitter::widget(a1[13], v8);
            result = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v10);
          }
          else
          {
            result = v9((__int64)a1, v8);
          }
          if ( !*(_DWORD *)(result + 40) )
            break;
          if ( v7 == ++v8 )
            return result;
        }
        ++v8;
        v11 = sub_4CD420((QT::QWidget *)result, 0);
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 104LL))(v11, v5);
      }
      while ( v7 != v8 );
    }
  }
  return result;
}
