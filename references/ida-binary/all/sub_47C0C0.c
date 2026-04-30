__int64 __fastcall sub_47C0C0(__int64 a1, __int64 *a2, __int64 a3)
{
  char *v5; // rbx
  size_t v6; // rax
  size_t v7; // r12
  void *v8; // rdi
  size_t v9; // r15
  __int64 v10; // rax
  void *v11[4]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  char *s; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  a2[1] = 0;
  if ( !a3 )
    return 0;
  if ( (unsigned __int8)sub_4A3510(a3) )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 536LL))(a3, a2);
  }
  else
  {
    QT::QWidget::windowTitle((QT::QWidget *)v11);
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v11);
    v5 = s;
    if ( (s || (v5 = (char *)&QT::QByteArray::_empty) != nullptr) && (v6 = strlen(v5), (v7 = v6) != 0) )
    {
      v8 = (void *)*a2;
      v9 = v6 + 1;
      if ( a2[2] < v6 + 1 )
      {
        v10 = qvector_reserve(a2, *a2, v6 + 1, 1);
        *a2 = v10;
        v8 = (void *)v10;
      }
      a2[1] = v9;
      memmove(v8, v5, v7);
      *(_BYTE *)(*a2 + v7) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v11[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v11[0], 1u) )
        free(v11[0]);
    }
  }
  return 1;
}
