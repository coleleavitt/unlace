__int64 __fastcall sub_1FA630(__int64 a1)
{
  const char *v1; // rbp
  size_t v2; // r12
  __int64 v3; // r15
  void *v4; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  void *v7[11]; // [rsp+20h] [rbp-58h] BYREF

  v7[3] = (void *)__readfsqword(0x28u);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)v7, (const QT::QString *)ptr);
  v1 = (const char *)v7[1];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v1 )
  {
    v2 = strlen(v1);
    v3 = v2 + 1;
  }
  else
  {
    v1 = (const char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_4;
    v3 = 1;
    v2 = 0;
  }
  v4 = (void *)qvector_reserve(a1, 0, v3, 1);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v3;
  memmove(v4, v1, v2);
  *(_BYTE *)(*(_QWORD *)a1 + v2) = 0;
LABEL_4:
  if ( v7[0] && !_InterlockedSub((volatile signed __int32 *)v7[0], 1u) )
    free(v7[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
