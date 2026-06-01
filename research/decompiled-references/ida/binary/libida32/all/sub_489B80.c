__int64 __fastcall sub_489B80(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rbx
  unsigned __int32 v3; // ebp
  unsigned __int32 v4; // edx
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // r12
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v11; // rax

  v2 = a1[2];
  v3 = a2->m128i_i32[0];
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 32);
      v5 = 0;
      v6 = *(_QWORD *)(v2 + 24);
      if ( v3 < v4 )
      {
        v6 = *(_QWORD *)(v2 + 16);
        v5 = 1;
      }
      if ( !v6 )
        break;
      v2 = v6;
    }
    v7 = v2;
    if ( v5 )
    {
      if ( a1[3] == v2 )
        goto LABEL_9;
      v11 = std::_Rb_tree_decrement();
      v4 = *(_DWORD *)(v11 + 32);
      v7 = v11;
    }
    if ( v4 >= v3 )
      return v7;
LABEL_9:
    v7 = operator new(0x40u);
    v8 = _mm_loadu_si128(a2 + 1);
    *(_DWORD *)(v7 + 32) = a2->m128i_i32[0];
    v9 = a2->m128i_i64[1];
    a2->m128i_i64[1] = 0;
    *(_QWORD *)(v7 + 40) = v9;
    *(__m128i *)(v7 + 48) = v8;
    a2[1] = 0;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v7;
  }
  if ( (_QWORD *)a1[3] == a1 + 1 )
    goto LABEL_9;
  v7 = std::_Rb_tree_decrement();
  if ( *(_DWORD *)(v7 + 32) < v3 )
    goto LABEL_9;
  return v7;
}

