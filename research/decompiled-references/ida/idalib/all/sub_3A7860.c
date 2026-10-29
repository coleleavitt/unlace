unsigned __int64 __fastcall sub_3A7860(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _BOOL4 v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-68h]
  __m128i v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v17 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 1536);
  v6 = v3 + v4;
  v16 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  if ( v3 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v5 + 32;
        v13 = unpack_dq(&v16);
        if ( !a3 )
          break;
        sub_3A7790(v12, v13);
        if ( v16.m128i_i64[0] >= (unsigned __int64)v16.m128i_i64[1] )
          return v17 - __readfsqword(0x28u);
      }
      v8 = sub_3A0080(v12, v13);
      if ( v9 )
      {
        v10 = 1;
        if ( !v8 && v9 != v5 + 40 )
          v10 = v13 < *(_QWORD *)(v9 + 32);
        v15 = v9;
        v11 = operator new(0x28u);
        *(_QWORD *)(v11 + 32) = v13;
        std::_Rb_tree_insert_and_rebalance(v10, v11, v15, v5 + 40);
        ++*(_QWORD *)(v5 + 72);
      }
    }
    while ( v16.m128i_i64[0] < (unsigned __int64)v16.m128i_i64[1] );
  }
  return v17 - __readfsqword(0x28u);
}
