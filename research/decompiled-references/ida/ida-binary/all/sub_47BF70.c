unsigned __int64 __fastcall sub_47BF70(__int64 a1, const QT::QString *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, __int64 *); // r13
  void *v5; // rbp
  size_t v6; // rbx
  void *v8; // rdi
  size_t v9; // rdx
  __int64 v10; // [rsp+10h] [rbp-78h] BYREF
  __int128 v11; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  void *src; // [rsp+38h] [rbp-50h]
  size_t n; // [rsp+40h] [rbp-48h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v15 = __readfsqword(0x28u);
  v3 = a1 + 16;
  v4 = *(void (__fastcall **)(__int64, __int64 *))(v2 + 136);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v5 = src;
  v6 = n;
  if ( !src )
    v5 = &QT::QByteArray::_empty;
  v10 = 0;
  v11 = 0;
  if ( n )
  {
    v8 = nullptr;
    v9 = n + 1;
    if ( n != -1 )
    {
      v10 = qvector_reserve(&v10, 0, v9, 1);
      v9 = v6 + 1;
      v8 = (void *)v10;
    }
    *(_QWORD *)&v11 = v9;
    memmove(v8, v5, v6);
    *(_BYTE *)(v10 + v6) = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v4(v3, &v10);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, (const char *)&v10);
  }
  return v15 - __readfsqword(0x28u);
}
