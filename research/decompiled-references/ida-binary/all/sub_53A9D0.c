__int64 __fastcall sub_53A9D0(__int64 a1)
{
  size_t v1; // r12
  __int64 v2; // rbp
  void *v3; // r8
  size_t v4; // r15
  __int64 v5; // rsi
  __int64 v7; // rax
  void *v8; // [rsp+0h] [rbp-80h]
  void *v9; // [rsp+8h] [rbp-78h] BYREF
  void *src; // [rsp+10h] [rbp-70h]
  size_t n; // [rsp+18h] [rbp-68h]
  void *ptr[11]; // [rsp+28h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v1 = n;
  if ( !v9 || *(int *)v9 > 1 )
    QT::QByteArray::reallocData(&v9, n, 1);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = src;
  v4 = v1;
  if ( v2 )
  {
    --v2;
    v4 = v1 + v2;
  }
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
  {
    v8 = src;
    v7 = qvector_reserve(a1, v5, v4 + 1, 1);
    *(_QWORD *)a1 = v7;
    v3 = v8;
    v5 = v7;
  }
  *(_QWORD *)(a1 + 8) = v4 + 1;
  *(_BYTE *)(v5 + v4) = 0;
  memmove((void *)(v2 + *(_QWORD *)a1), v3, v1);
  if ( v9 && !_InterlockedSub((volatile signed __int32 *)v9, 1u) )
    free(v9);
  return a1;
}
