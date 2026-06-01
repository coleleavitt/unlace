unsigned __int64 __fastcall sub_3A3120(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1344);
  v11 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = v6 + 24;
  v8 = unpack_dd(&v11);
  if ( a3 )
  {
    sub_39B300(v7, v8);
    if ( v10 )
    {
      *(_DWORD *)(operator new(0x28u) + 32) = v8;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v6 + 64);
    }
  }
  else
  {
    sub_3A2F40(v7, v8);
  }
  return v12 - __readfsqword(0x28u);
}

