QT::QVariant *__fastcall sub_409030(QT::QVariant *this, __int64 a2, unsigned int a3, int a4, int a5)
{
  unsigned __int64 v5; // rbp
  void **v6; // rax
  const char *v8; // rbp
  size_t v9; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (int)a3;
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a4 != 1 || a5 )
  {
    QT::QStandardItemModel::headerData(this, a2, a3);
  }
  else
  {
    v6 = sub_3EEA60();
    if ( v5 < ((_BYTE *)v6[1] - (_BYTE *)*v6) >> 3 )
    {
      v8 = *((const char **)*v6 + v5);
      v9 = 0;
      if ( v8 && *v8 )
        v9 = strlen(v8 + 1) + 1;
      QT::QString::fromUtf8(ptr, v9, v8);
      QT::QVariant::QVariant(this, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    else
    {
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 2;
      *(_OWORD *)this = 0;
    }
  }
  return this;
}
