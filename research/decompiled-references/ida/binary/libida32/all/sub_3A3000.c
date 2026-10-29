unsigned __int64 __fastcall sub_3A3000(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v13 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 1344);
  v6 = v3 + v4;
  v12 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  if ( v3 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v5 + 24;
        v10 = unpack_dd(&v12);
        if ( !a3 )
          break;
        sub_3A2F40(v9, v10);
        if ( v12.m128i_i64[0] >= (unsigned __int64)v12.m128i_i64[1] )
          return v13 - __readfsqword(0x28u);
      }
      sub_39B300(v9, v10);
      if ( v8 )
      {
        *(_DWORD *)(operator new(0x28u) + 32) = v10;
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v5 + 64);
      }
    }
    while ( v12.m128i_i64[0] < (unsigned __int64)v12.m128i_i64[1] );
  }
  return v13 - __readfsqword(0x28u);
}

