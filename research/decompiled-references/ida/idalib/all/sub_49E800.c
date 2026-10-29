__int64 __fastcall sub_49E800(_QWORD *a1, const __m128i *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  unsigned __int32 v4; // ebp
  unsigned __int32 v5; // edx
  char v6; // cl
  _QWORD *v7; // rax
  __int64 v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v12; // rax
  _BOOL4 v13; // [rsp+Ch] [rbp-3Ch]

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = a2->m128i_i32[0];
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 8);
      v6 = 0;
      v7 = (_QWORD *)v3[3];
      if ( v4 < v5 )
      {
        v7 = (_QWORD *)v3[2];
        v6 = 1;
      }
      if ( !v7 )
        break;
      v3 = v7;
    }
    v8 = (__int64)v3;
    if ( v6 )
    {
      if ( (_QWORD *)a1[3] == v3 )
        goto LABEL_9;
      v12 = std::_Rb_tree_decrement(v3);
      v5 = *(_DWORD *)(v12 + 32);
      v8 = v12;
    }
    if ( v5 >= v4 )
      return v8;
LABEL_9:
    v13 = 1;
    if ( v2 != v3 )
      v13 = v4 < *((_DWORD *)v3 + 8);
    goto LABEL_11;
  }
  if ( (_QWORD *)a1[3] == v2 || (v8 = std::_Rb_tree_decrement(a1 + 1), *(_DWORD *)(v8 + 32) < v4) )
  {
    v13 = 1;
    v3 = a1 + 1;
LABEL_11:
    v8 = operator new(0x40u);
    v9 = _mm_loadu_si128(a2 + 1);
    *(_DWORD *)(v8 + 32) = a2->m128i_i32[0];
    v10 = a2->m128i_i64[1];
    a2->m128i_i64[1] = 0;
    *(_QWORD *)(v8 + 40) = v10;
    *(__m128i *)(v8 + 48) = v9;
    a2[1] = 0;
    std::_Rb_tree_insert_and_rebalance(v13, v8, v3, v2);
    ++a1[5];
  }
  return v8;
}
