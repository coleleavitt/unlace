__int64 __fastcall sub_535E60(
        QT::QWidget **a1,
        const __m128i *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v7; // r14
  __m128i v8; // xmm0
  __int64 (__fastcall *v9)(_QWORD *); // r13
  unsigned int v10; // ebp
  _QWORD *v12; // rax
  void *v13; // rdx
  void *v14; // rdx
  void *v15; // rdx
  void **v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  QT::QWidget *v19; // r12
  void **v20; // rbx
  void **v21; // r12
  void *ptr[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v23; // [rsp+20h] [rbp-88h]
  void *v24[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v25[11]; // [rsp+50h] [rbp-58h] BYREF

  v25[3] = (void *)__readfsqword(0x28u);
  if ( !a2[1].m128i_i64[0] )
    return 0;
  v7 = QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self )
    return 0;
  v8 = _mm_loadu_si128(a2);
  v23 = a2[1].m128i_i64[0];
  *(__m128i *)ptr = v8;
  if ( !v8.m128i_i64[0] )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 128LL);
    goto LABEL_9;
  }
  _InterlockedAdd((volatile signed __int32 *)v8.m128i_i64[0], 1u);
  v7 = QT::QCoreApplication::self;
  v9 = *(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 128LL);
  if ( *(int *)ptr[0] > 1 )
LABEL_9:
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, a5, a6);
  v12 = ptr[1];
  v13 = *(void **)ptr[1];
  *(_QWORD *)ptr[1] = 0;
  v24[0] = v13;
  v14 = (void *)v12[1];
  v12[1] = 0;
  v24[1] = v14;
  v15 = (void *)v12[2];
  v12[2] = 0;
  v24[2] = v15;
  v16 = (void **)ptr[1];
  if ( *(_QWORD *)ptr[1] && !_InterlockedSub(*(volatile signed __int32 **)ptr[1], 1u) )
    free(*v16);
  ptr[1] = (char *)ptr[1] + 24;
  --v23;
  QT::QString::toUtf8_helper((QT::QString *)v25, (const QT::QString *)v24);
  v19 = (QT::QWidget *)v9(v7);
  if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
    free(v25[0]);
  if ( v24[0] && !_InterlockedSub((volatile signed __int32 *)v24[0], 1u) )
    free(v24[0]);
  v10 = sub_535B80(a1, (__m128i *)ptr, v19, a3, v17, v18);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v20 = (void **)ptr[1];
    v21 = (void **)((char *)ptr[1] + 24 * v23);
    if ( ptr[1] != v21 )
    {
      do
      {
        if ( *v20 && !_InterlockedSub((volatile signed __int32 *)*v20, 1u) )
          free(*v20);
        v20 += 3;
      }
      while ( v21 != v20 );
    }
    free(ptr[0]);
  }
  return v10;
}
