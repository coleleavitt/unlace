__int64 __fastcall sub_3FD490(const QT::QObject **a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // ebp
  volatile signed __int32 *v4; // rax
  __m128i ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  if ( !v1 )
    return 0;
  v2 = v1;
  v3 = 0;
  sub_3F7360(&ptr, v1);
  if ( v7 )
  {
    sub_3FD3E0(v2, (__int64)&ptr);
    v4 = (volatile signed __int32 *)ptr.m128i_i64[0];
    v3 = 1;
    if ( !ptr.m128i_i64[0] )
      return v3;
  }
  else
  {
    v4 = (volatile signed __int32 *)ptr.m128i_i64[0];
    if ( !ptr.m128i_i64[0] )
      return v3;
  }
  if ( !_InterlockedSub(v4, 1u) )
    free((void *)ptr.m128i_i64[0]);
  return v3;
}
