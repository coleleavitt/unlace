unsigned __int64 __fastcall sub_522950(__int64 a1, __int64 *a2)
{
  char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r12
  void *v6; // rdi
  size_t v7; // r15
  __int64 v8; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  void *v10; // [rsp+20h] [rbp-58h] BYREF
  char *s; // [rsp+28h] [rbp-50h]
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v10, (const QT::QString *)ptr);
  v2 = s;
  if ( (s || (v2 = (char *)&QT::QByteArray::_empty) != nullptr) && (v3 = strlen(v2), (v4 = v3) != 0) )
  {
    v6 = (void *)*a2;
    v7 = v3 + 1;
    if ( a2[2] < v3 + 1 )
    {
      v8 = qvector_reserve(a2, *a2, v3 + 1, 1);
      *a2 = v8;
      v6 = (void *)v8;
    }
    a2[1] = v7;
    memmove(v6, v2, v4);
    *(_BYTE *)(*a2 + v4) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  if ( v10 && !_InterlockedSub((volatile signed __int32 *)v10, 1u) )
    free(v10);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v12 - __readfsqword(0x28u);
}
