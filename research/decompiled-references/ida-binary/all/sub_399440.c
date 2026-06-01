__int64 __fastcall sub_399440(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __m128i si128; // xmm0
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  bool v9; // r15
  __int64 v10; // rax
  __int64 result; // rax

  v3 = a1 + 8;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_DWORD *)(a1 + 56) = -1;
  *(__m128i *)(a1 + 40) = si128;
  v6 = sub_398580(a1, a2);
  if ( v7 )
  {
    v8 = v7;
    v9 = v3 == v7 || v6 != nullptr;
    if ( !v9 )
      v9 = a2 < *(_QWORD *)(v7 + 32);
    v10 = operator new(0x30u);
    *(_QWORD *)(v10 + 32) = a2;
    *(_DWORD *)(v10 + 40) = -1;
    std::_Rb_tree_insert_and_rebalance(v9, v10, v8, v3);
    ++*(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 56) = -1;
  result = get_func(a2);
  *(_QWORD *)(a1 + 64) = result;
  if ( result )
  {
    result = get_func(a3);
    if ( *(_QWORD *)(a1 + 64) != result )
      *(_QWORD *)(a1 + 64) = 0;
  }
  return result;
}
