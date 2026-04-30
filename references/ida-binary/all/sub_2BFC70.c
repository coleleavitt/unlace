__int64 __fastcall sub_2BFC70(__int64 a1, __int64 a2)
{
  const char *v3; // rdx
  void *v4; // r12
  size_t v5; // rbp
  __int64 v6; // rdx
  const char *v7; // rsi
  char *v8; // rax
  void *v9; // rdi
  size_t v10; // rax
  int v11; // edx
  bool v12; // zf
  int v13; // eax
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+0h] [rbp-80h] BYREF
  void *src; // [rsp+8h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+10h] [rbp-70h]
  void *v19[4]; // [rsp+28h] [rbp-58h] BYREF
  void *ptr; // [rsp+48h] [rbp-38h] BYREF
  const char *v21; // [rsp+50h] [rbp-30h]
  unsigned __int64 v22; // [rsp+60h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  QT::QAction::shortcut((QT::QAction *)v16);
  QT::QKeySequence::toString(v19, v16, 1);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v19);
  v3 = v21;
  if ( !v21 )
    v3 = (const char *)&QT::QByteArray::_empty;
  sub_169A50(
    (__int64 *)&src,
    (__int64)"Graph views are not accessible. Please press <%s> to switch to disassembly\n",
    v3);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  v4 = nullptr;
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v16);
  v5 = n[0];
  if ( n[0] )
  {
    v4 = (void *)qalloc_or_throw(n[0]);
    memcpy(v4, src, v5);
  }
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(const char **)a2;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v15 = qvector_reserve(a2, v7, v6 + 1, 24);
    *(_QWORD *)a2 = v15;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = (const char *)v15;
  }
  v8 = (char *)&v7[24 * v6];
  *(_QWORD *)v8 = v4;
  v9 = src;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  v10 = n[0];
  ++*(_QWORD *)(a2 + 8);
  v11 = v10 - 1;
  v12 = v10 == 0;
  v13 = 0;
  if ( !v12 )
    v13 = v11;
  *(_DWORD *)(a2 + 24) = v13;
  if ( v9 )
  {
    n[0] = 0;
    qfree(v9, v7);
  }
  return 1;
}
