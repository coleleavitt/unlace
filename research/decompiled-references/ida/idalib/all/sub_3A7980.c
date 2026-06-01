unsigned __int64 __fastcall sub_3A7980(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  _BOOL4 v13; // r13d
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v16 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1536);
  v15 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = v6 + 32;
  v8 = unpack_dq(&v15);
  if ( a3 )
  {
    v10 = sub_3A0080(v7, v8);
    v12 = v11;
    if ( v11 )
    {
      v13 = 1;
      if ( !v10 && v11 != v6 + 40 )
        v13 = v8 < *(_QWORD *)(v11 + 32);
      v14 = operator new(0x28u);
      *(_QWORD *)(v14 + 32) = v8;
      std::_Rb_tree_insert_and_rebalance(v13, v14, v12, v6 + 40);
      ++*(_QWORD *)(v6 + 72);
    }
  }
  else
  {
    sub_3A7790(v7, v8);
  }
  return v16 - __readfsqword(0x28u);
}
