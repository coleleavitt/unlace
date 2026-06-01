void __fastcall sub_2A7270(QT::QObject *a1, double a2)
{
  void *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  const QT::QObject *v10; // rsi
  struct _Unwind_Exception *v11; // rbx

  if ( a1 )
  {
    if ( !byte_8CC998 )
    {
      if ( qword_8CC990 )
      {
        v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a1);
        v6 = v3;
        if ( v3 )
        {
          if ( *(_QWORD *)(v3 + 896) || *(_QWORD *)(v3 + 904) )
          {
            if ( byte_8CC998 )
            {
              v11 = (struct _Unwind_Exception *)sub_2A6AB0(a2, (__int64)&off_87B020, (__int64)a1, v4, v5);
              operator delete(v2, 0x38u);
              _Unwind_Resume(v11);
            }
            v7 = qword_8CC990;
            v8 = *(_QWORD *)(qword_8CC990 + 168);
            if ( v8 )
            {
              if ( *(_BYTE *)(v8 + 48) )
                goto LABEL_9;
              v10 = *(const QT::QObject **)(v8 + 40);
              if ( !v10 )
                goto LABEL_9;
              if ( v3 == QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v10) )
                return;
              v8 = *(_QWORD *)(v7 + 168);
              if ( v8 )
              {
LABEL_9:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
                *(_QWORD *)(v7 + 168) = 0;
              }
            }
            v9 = operator new(0x38u);
            sub_2A7010(v9, v7, v6, a2);
          }
        }
      }
    }
  }
}
