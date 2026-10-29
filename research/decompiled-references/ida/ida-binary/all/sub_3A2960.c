unsigned __int64 __fastcall sub_3A2960(__int64 a1)
{
  _QWORD *v1; // r12
  void (__fastcall *v2)(_QWORD *, __int64 *); // r13
  void *v3; // r14
  size_t v4; // rbx
  void *v6; // rdi
  size_t v7; // rdx
  void *ptr[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h] BYREF
  __int128 v10; // [rsp+38h] [rbp-70h]
  void *v11; // [rsp+50h] [rbp-58h] BYREF
  void *src; // [rsp+58h] [rbp-50h]
  size_t n; // [rsp+60h] [rbp-48h]
  unsigned __int64 v14; // [rsp+68h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v1 = QT::QCoreApplication::self + 2;
  v2 = *(void (__fastcall **)(_QWORD *, __int64 *))(QT::QCoreApplication::self[2] + 136LL);
  sub_49EB90(ptr, a1);
  QT::QString::toUtf8_helper((QT::QString *)&v11, (const QT::QString *)ptr);
  v3 = src;
  v4 = n;
  if ( !src )
    v3 = &QT::QByteArray::_empty;
  v9 = 0;
  v10 = 0;
  if ( n )
  {
    v6 = nullptr;
    v7 = n + 1;
    if ( n != -1 )
    {
      v9 = qvector_reserve(&v9, 0, v7, 1);
      v7 = v4 + 1;
      v6 = (void *)v9;
    }
    *(_QWORD *)&v10 = v7;
    memmove(v6, v3, v4);
    *(_BYTE *)(v9 + v4) = 0;
  }
  if ( v11 && !_InterlockedSub((volatile signed __int32 *)v11, 1u) )
    free(v11);
  v2(v1, &v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, (const char *)&v9);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v14 - __readfsqword(0x28u);
}
