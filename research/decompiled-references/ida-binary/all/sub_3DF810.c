QT::QVariant *__fastcall sub_3DF810(QT::QVariant *this, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r8
  const char *v7; // rbp
  size_t v8; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a5 & 0xFFFFFFFD;
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( (_DWORD)v5 || (_DWORD)a4 != 1 || (unsigned __int64)a3 > 3 )
  {
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 2;
    *(_OWORD *)this = 0;
  }
  else
  {
    v7 = (const char *)*(&off_86A1E0 + a3);
    v8 = 0;
    if ( v7 && *v7 )
      v8 = strlen(v7 + 1) + 1;
    QT::QString::fromUtf8(ptr, v8, v7, a4, v5);
    QT::QVariant::QVariant(this, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return this;
}
