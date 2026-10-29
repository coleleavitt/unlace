__int64 __fastcall sub_5397C0(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm0
  void *v9; // r12
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax

  v5 = a2;
  v6 = (_QWORD *)operator new(0x28u);
  v8 = _mm_loadl_epi64(a3);
  v9 = v6;
  v10 = _mm_cvtsi128_si32(v8);
  v6[4] = v8.m128i_i64[0];
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v12 = a1[4];
      v5 = 0;
      if ( *(_DWORD *)(v12 + 32) < v10 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_5326C0((__int64)a1, v10);
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(a2 + 32);
  if ( v10 < v11 )
  {
    v12 = a1[3];
    if ( a2 == v12 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2);
    v12 = v13;
    if ( *(_DWORD *)(v13 + 32) >= v10 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
    {
      v12 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v11 >= v10 )
    goto LABEL_17;
  v12 = a1[4];
  if ( a2 == v12 )
  {
LABEL_27:
    v5 = 0;
    goto LABEL_6;
  }
  v15 = std::_Rb_tree_increment(a2, a2, v12, v7);
  v12 = v15;
  if ( v10 >= *(_DWORD *)(v15 + 32) )
    goto LABEL_5;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v12 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v5 = v15;
LABEL_6:
  if ( v12 )
  {
    if ( a1 + 1 == (_QWORD *)v12 || v5 )
    {
      v14 = 1;
LABEL_10:
      v5 = (__int64)v9;
      std::_Rb_tree_insert_and_rebalance(v14, v9, v12, a1 + 1);
      ++a1[5];
      return v5;
    }
    v11 = *(_DWORD *)(v12 + 32);
LABEL_26:
    v14 = v10 < v11;
    goto LABEL_10;
  }
LABEL_17:
  if ( v9 )
    operator delete(v9, 0x28u);
  return v5;
}
