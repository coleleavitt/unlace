__int64 __fastcall sub_2E09C0(const char *a1)
{
  size_t v1; // rax
  double v2; // xmm0_8
  double v3; // xmm0_8
  const char *v4; // rsi
  __int64 v5; // rbx
  __int64 *v7; // [rsp+0h] [rbp-78h] BYREF
  __int128 v8; // [rsp+8h] [rbp-70h]
  void *ptr[4]; // [rsp+20h] [rbp-58h] BYREF
  void *v10; // [rsp+40h] [rbp-38h] BYREF
  const char *v11; // [rsp+48h] [rbp-30h]
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = 0;
  v7 = nullptr;
  v8 = 0;
  if ( a1 )
    v1 = strlen(a1);
  v2 = QT::QString::fromUtf8(&v10, v1, a1);
  v3 = QT::QString::fromUtf8(ptr, 9, "IDA View-", v2);
  QT::QString::append((QT::QString *)ptr, (const QT::QString *)&v10);
  if ( v10 && !_InterlockedSub((volatile signed __int32 *)v10, 1u) )
    free(v10);
  QT::QString::toUtf8_helper((QT::QString *)&v10, (const QT::QString *)ptr);
  v4 = v11;
  if ( !v11 )
    v4 = (const char *)&QT::QByteArray::_empty;
  sub_27F6D0((__int64 *)&v7, v4, "IDAView");
  if ( v10 && !_InterlockedSub((volatile signed __int32 *)v10, 1u) )
    free(v10);
  v5 = 0;
  if ( (_QWORD)v8 )
    v5 = *v7;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, v4, v3);
  }
  return v5;
}
