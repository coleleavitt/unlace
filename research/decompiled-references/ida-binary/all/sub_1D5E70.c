__m128i *__fastcall database_persistent_t__::vfunc_6(__m128i *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r13
  const __m128i *v8; // r15
  __int64 v9; // rcx
  void **v10; // rbx
  __int64 v11; // rbp
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v2 = *a2;
  v15 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__m128i *))(v2 + 56))(&ptr);
  v5 = v14;
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = 8 * (3LL * (unsigned int)(v5 - 1) + 3);
    do
    {
      while ( 1 )
      {
        if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
          sub_1B21C0(&ptr, 0, 0, 0, v3, v4);
        v8 = (const __m128i *)(v6 + ptr.m128i_i64[1]);
        if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(*a2 + 64))(a2, v6 + ptr.m128i_i64[1]) )
        {
          sub_1D5510(a1, a1[1].m128i_i64[0], v8, v9, v3, v4);
          if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
            break;
        }
        v6 += 24;
        if ( v7 == v6 )
          goto LABEL_11;
      }
      sub_1B21C0(a1, 0, 0, 0, v3, v4);
      v6 += 24;
    }
    while ( v7 != v6 );
  }
LABEL_11:
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    v10 = (void **)ptr.m128i_i64[1];
    v11 = ptr.m128i_i64[1] + 24 * v14;
    if ( ptr.m128i_i64[1] != v11 )
    {
      do
      {
        if ( *v10 && !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
          free(*v10);
        v10 += 3;
      }
      while ( (void **)v11 != v10 );
    }
    free((void *)ptr.m128i_i64[0]);
  }
  return a1;
}
