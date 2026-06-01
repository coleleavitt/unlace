__int64 __fastcall sub_2276310(_QWORD *a1, _QWORD *a2, const __m128i **a3)
{
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  size_t v13; // r14
  size_t v14; // r13
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-30h]

  v5 = operator new(0x40u);
  v6 = _mm_loadu_si128(*a3);
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(__m128i *)(v5 + 32) = v6;
  v7 = sub_2276130(a1, a2, (const void **)(v5 + 32));
  if ( v8 )
  {
    v9 = v8;
    v10 = a1 + 1;
    v11 = 1;
    if ( v7 || v8 == v10 )
      goto LABEL_3;
    v13 = *(_QWORD *)(v5 + 40);
    v15 = v8[5];
    v14 = v15;
    if ( v13 <= v15 )
      v15 = *(_QWORD *)(v5 + 40);
    if ( v15 && (v16 = memcmp(*(const void **)(v5 + 32), (const void *)v9[4], v15), v10 = a1 + 1, v16) )
    {
      if ( v16 < 0 )
      {
LABEL_11:
        v11 = 1;
LABEL_3:
        std::_Rb_tree_insert_and_rebalance(v11, v5, v9, v10);
        ++a1[5];
        return v5;
      }
    }
    else if ( v13 != v14 && v13 < v14 )
    {
      goto LABEL_11;
    }
    v11 = 0;
    goto LABEL_3;
  }
  v17 = v7;
  operator delete((void *)v5);
  return v17;
}
