__int64 __fastcall sub_407990(const QT::QObject **a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r12
  void *v5; // r13
  void **v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdi
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(v1 + 136);
  v3 = v1;
  if ( !v2 )
    return 0;
  sub_404D90(&ptr, v2);
  v4 = v11;
  v5 = (void *)ptr.m128i_i64[0];
  if ( !v11 )
  {
    if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
      free(v5);
    return 0;
  }
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    v6 = (void **)ptr.m128i_i64[1];
    v7 = ptr.m128i_i64[1] + 32 * v4;
    if ( ptr.m128i_i64[1] != v7 )
    {
      do
      {
        if ( *v6 && !_InterlockedSub((volatile signed __int32 *)*v6, 1u) )
          free(*v6);
        v6 += 4;
      }
      while ( v6 != (void **)v7 );
    }
    free(v5);
  }
  v8 = *(_QWORD *)(v3 + 136);
  if ( v8 )
    sub_3FA850(v8);
  return 1;
}
