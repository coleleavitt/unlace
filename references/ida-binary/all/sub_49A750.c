__m128i *__fastcall sub_49A750(__m128i *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i ptr; // [rsp+0h] [rbp-8h] BYREF
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]
  __int64 *vars20; // [rsp+28h] [rbp+20h]

  vars20 = &ptr.m128i_i64[1];
  vars10 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  QT::QString::fromUtf8(&ptr, 19, "treewidget/x-inodes");
  sub_1D5280(a1, a1[1].m128i_i64[0], &ptr, v1, v2, v3);
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
    sub_1B21C0(a1, 0, 0, 0, v4, v5);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  return a1;
}
