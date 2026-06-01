__m128i *__fastcall sub_404D90(__m128i *a1, __int64 a2)
{
  QT::QAbstractButton ***v2; // rbx
  QT::QAbstractButton ***i; // r14
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // r12
  __m128i ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  v2 = *(QT::QAbstractButton ****)(a2 + 152);
  for ( i = &v2[*(_QWORD *)(a2 + 160)]; i != v2; ++v2 )
  {
    sub_3F5A40(ptr, *v2);
    sub_404840(a1, a1[1].m128i_i64[0], ptr, v4, v5, v6);
    v9 = (void *)ptr[0].m128i_i64[0];
    if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      sub_3FAE80(a1, 0, 0, 0, v7, v8);
    if ( v9 && !_InterlockedSub((volatile signed __int32 *)v9, 1u) )
      free(v9);
  }
  return a1;
}
