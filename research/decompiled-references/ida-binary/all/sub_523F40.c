QT::QVariant *__fastcall sub_523F40(QT::QVariant *this, __int64 a2, int a3, int a4, int a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // rdx
  size_t v9; // rax
  const char *v10; // rbp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a5 == 3 )
  {
    v6 = *(_QWORD *)(a2 + 48) + 24LL * a3;
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      v9 = v7 - 1;
      v10 = *(const char **)v6;
      v8 = v9 >> 63;
    }
    else
    {
      LOBYTE(v8) = 0;
      v9 = 0;
      v10 = &s1;
    }
    if ( !v10 || (_BYTE)v8 )
    {
      v9 = 0;
      if ( v10 )
        v9 = strlen(v10);
    }
    QT::QString::fromUtf8(ptr, v9, v10);
    QT::QVariant::QVariant(this, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else
  {
    sub_48AF60(this, a2, a3, a4, a5);
  }
  return this;
}
