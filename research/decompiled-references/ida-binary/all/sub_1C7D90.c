__int64 __fastcall sub_1C7D90(QT::QString *a1)
{
  unsigned int v1; // r12d
  char *v3; // rbp
  size_t v4; // r12
  __int64 v5; // r14
  char v6[8]; // [rsp+8h] [rbp-70h] BYREF
  void *v7; // [rsp+10h] [rbp-68h] BYREF
  __int128 v8; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  char *s; // [rsp+38h] [rbp-40h]
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  QT::QIcon::QIcon((QT::QIcon *)v6, a1);
  v1 = 0;
  if ( (unsigned __int8)QT::QIcon::isNull((QT::QIcon *)v6) )
    goto LABEL_2;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a1);
  v3 = s;
  v7 = nullptr;
  v8 = 0;
  if ( s )
  {
    v4 = strlen(s);
    v5 = v4 + 1;
LABEL_5:
    v7 = (void *)qvector_reserve(&v7, 0, v5, 1);
    *(_QWORD *)&v8 = v5;
    memmove(v7, v3, v4);
    *((_BYTE *)v7 + v4) = 0;
    goto LABEL_6;
  }
  v3 = (char *)&QT::QByteArray::_empty;
  if ( &QT::QByteArray::_empty )
  {
    v5 = 1;
    v4 = 0;
    goto LABEL_5;
  }
LABEL_6:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v1 = sub_481B70(QT::QCoreApplication::self, v6, &v7);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, v6);
  }
LABEL_2:
  QT::QIcon::~QIcon((QT::QIcon *)v6);
  return v1;
}
