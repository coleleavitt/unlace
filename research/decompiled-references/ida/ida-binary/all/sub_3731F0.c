unsigned __int64 __fastcall proxim_graph_t__::vfunc_39(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // ebx
  __int64 (__fastcall *v4)(__int64, int); // rdx
  __int64 v5; // r14
  const __m128i *func; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v2 = 0;
  if ( a1[29] )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 296LL);
        if ( v4 == proxim_graph_t__::vfunc_37 )
        {
          v5 = -1;
          if ( v2 < a1[35] )
            v5 = *(_QWORD *)(a1[34] + 40 * v2);
        }
        else
        {
          v5 = v4((__int64)a1, v3);
        }
        func = (const __m128i *)get_func(v5);
        if ( !func )
          break;
        ++v3;
        v12 = _mm_loadu_si128(func);
        rangeset_t_add(a2, &v12, v7, v8, v9, v10);
        v2 = v3;
        if ( (unsigned __int64)v3 >= a1[29] )
          return v13 - __readfsqword(0x28u);
      }
      v12.m128i_i64[0] = v5;
      ++v3;
      v12.m128i_i64[1] = v5 + 1;
      rangeset_t_add(a2, &v12, v7, v8, v9, v10);
      v2 = v3;
    }
    while ( (unsigned __int64)v3 < a1[29] );
  }
  return v13 - __readfsqword(0x28u);
}
