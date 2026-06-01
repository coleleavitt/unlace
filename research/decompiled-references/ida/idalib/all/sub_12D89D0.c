__int64 __fastcall sub_12D89D0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  int v12; // esi
  int v13; // eax
  __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = operator new(0x40u);
  v6 = *a3;
  *(__m128i *)(v5 + 40) = _mm_loadu_si128((const __m128i *)(a3 + 1));
  *(_QWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 56) = a3[3];
  v7 = sub_12D8880(a1, a2, (int *)(v5 + 32));
  if ( v8 )
  {
    v9 = a1 + 1;
    v10 = 1;
    if ( !v7 && (_QWORD *)v8 != v9 )
    {
      v12 = *(_DWORD *)(v5 + 32);
      v13 = *(_DWORD *)(v8 + 32);
      if ( v12 >= v13 )
        v10 = (*(_DWORD *)(v5 + 36) < *(_DWORD *)(v8 + 36)) & (unsigned __int8)(v12 == v13);
    }
    std::_Rb_tree_insert_and_rebalance(v10, v5, v8, v9);
    ++a1[5];
    return v5;
  }
  else
  {
    v14 = v7;
    operator delete((void *)v5);
    return v14;
  }
}
