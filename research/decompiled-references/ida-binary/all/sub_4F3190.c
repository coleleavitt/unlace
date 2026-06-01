void __fastcall sub_4F3190(QT::QObject *a1, const QT::QString *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  const QT::QObject *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  char *v8; // rbp
  __int64 *v9; // r15
  size_t v10; // rax
  size_t v11; // r12
  void *v12; // rdi
  size_t v13; // rdx
  __int64 v14; // rax
  size_t v15; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  char *s; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = QT::QObject::sender(a1);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( (*(_BYTE *)(v4 + 48) & 1) != 0 )
    {
      v5 = *(const QT::QObject **)(v4 + 16);
      v6 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QComboBox::staticMetaObject, v5);
      if ( v6 )
        v5 = *(const QT::QObject **)(*(_QWORD *)(v6 + 8) + 16LL);
      v7 = sub_4F23C0((__int64)a1, (__int64)v5, 13, 0);
      if ( v7 )
      {
        QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
        v8 = s;
        v9 = *(__int64 **)(v7 + 136);
        if ( (s || (v8 = (char *)&QT::QByteArray::_empty) != nullptr) && (v10 = strlen(v8), (v11 = v10) != 0) )
        {
          v12 = (void *)*v9;
          v13 = v10 + 1;
          if ( v9[2] < v10 + 1 )
          {
            v15 = v10 + 1;
            v14 = qvector_reserve(v9, *v9, v13, 1);
            *v9 = v14;
            v13 = v15;
            v12 = (void *)v14;
          }
          v9[1] = v13;
          memmove(v12, v8, v11);
          *(_BYTE *)(*v9 + v11) = 0;
        }
        else
        {
          v9[1] = 0;
        }
        if ( ptr )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
        }
        sub_4F2BB0((__int64)a1, (__int64)v5);
      }
    }
  }
}
