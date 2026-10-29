_QWORD *__fastcall sub_60BDC0(_QWORD *a1, _QWORD *a2, unsigned int *a3, const __m128i *a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // r12
  void *v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rax

  v6 = a2;
  v7 = operator new(0x50u);
  v8 = *a3;
  v9 = _mm_loadu_si128(a4 + 1);
  v10 = v7;
  v11 = (void *)a4->m128i_i64[1];
  a4->m128i_i64[1] = 0;
  *(_QWORD *)(v7 + 32) = v8;
  LODWORD(v7) = a4->m128i_i32[0];
  *(__m128i *)(v10 + 56) = v9;
  *(_DWORD *)(v10 + 40) = v7;
  LODWORD(v7) = a4[2].m128i_i32[0];
  a4[1] = 0;
  *(_QWORD *)(v10 + 48) = v11;
  *(_DWORD *)(v10 + 72) = v7;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v13 = a1[4];
      v6 = nullptr;
      if ( *(_QWORD *)(v13 + 32) < v8 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_606180((__int64)a1, v8);
    goto LABEL_6;
  }
  v12 = a2[4];
  if ( v8 >= v12 )
  {
    if ( v12 >= v8 )
      goto LABEL_9;
    if ( (_QWORD *)a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
    v16 = std::_Rb_tree_increment();
    v13 = v16;
    if ( v8 < *(_QWORD *)(v16 + 32) )
    {
      if ( !a2[3] )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_9;
      }
      v6 = (_QWORD *)v16;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v13 = (__int64)a2;
  if ( (_QWORD *)a1[3] == a2 )
    goto LABEL_6;
  v14 = std::_Rb_tree_decrement();
  v13 = v14;
  if ( *(_QWORD *)(v14 + 32) >= v8 )
    goto LABEL_5;
  if ( *(_QWORD *)(v14 + 24) )
    v13 = (__int64)a2;
  else
    v6 = nullptr;
LABEL_6:
  if ( v13 )
  {
LABEL_7:
    v6 = (_QWORD *)v10;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
LABEL_9:
  if ( v10 )
  {
    if ( v11 )
    {
      *(_QWORD *)(v10 + 56) = 0;
      qfree(v11);
    }
    operator delete((void *)v10, 0x50u);
  }
  return v6;
}

