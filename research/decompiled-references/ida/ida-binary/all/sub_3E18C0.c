__int64 __fastcall expr_node_t__::vfunc_3(
        __int64 a1,
        __int64 a2,
        const QT::QString *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // eax
  char *v17; // rbp
  size_t v18; // rax
  size_t v19; // r12
  const char *v20; // rsi
  __int64 v21; // rax
  const char *v22; // rdx
  void *v23; // rdi
  size_t v24; // r14
  __int64 v25; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  char *s; // [rsp+8h] [rbp-40h]
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v14 = *(_DWORD *)(a2 + 4);
  v28 = __readfsqword(0x28u);
  if ( v14 )
    return srcitem_node_t__::vfunc_3(a1, a2, a3, a4, a7, a8, a9, a10, a11, a12, a13, a14, a5, a6);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a3);
  v17 = s;
  if ( (s || (v17 = (char *)&QT::QByteArray::_empty) != nullptr) && (v18 = strlen(v17), (v19 = v18) != 0) )
  {
    v23 = *(void **)(a1 + 80);
    v24 = v18 + 1;
    if ( *(_QWORD *)(a1 + 96) < v18 + 1 )
    {
      v25 = qvector_reserve(a1 + 80, *(_QWORD *)(a1 + 80), v24, 1);
      *(_QWORD *)(a1 + 80) = v25;
      v23 = (void *)v25;
    }
    *(_QWORD *)(a1 + 88) = v24;
    memmove(v23, v17, v19);
    *(_BYTE *)(*(_QWORD *)(a1 + 80) + v19) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 0;
  }
  *(_DWORD *)(a1 + 376) = -1;
  clear_tinfo_t(a1 + 72);
  v20 = &s1;
  if ( *(_QWORD *)(a1 + 88) )
    v20 = *(const char **)(a1 + 80);
  v21 = sub_3DEE10(a1, (__int64)v20);
  if ( v21 )
  {
    v22 = &s1;
    if ( *(_QWORD *)(a1 + 88) )
      v22 = *(const char **)(a1 + 80);
    *(_DWORD *)(a1 + 376) = v21 - (_DWORD)v22;
  }
  if ( ptr )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return 1;
}
