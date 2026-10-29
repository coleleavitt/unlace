__int64 __fastcall sub_3FAD00(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  int v4; // ebp
  int v5; // edx
  _QWORD *v6; // rax
  __int64 v7; // r12
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v12; // rax
  _BOOL4 v13; // [rsp+Ch] [rbp-3Ch]

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = *a2;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 8);
      v6 = (_QWORD *)v3[3];
      if ( v4 < v5 )
        v6 = (_QWORD *)v3[2];
      if ( !v6 )
        break;
      v3 = v6;
    }
    v7 = (__int64)v3;
    if ( v4 < v5 )
    {
      if ( (_QWORD *)a1[3] == v3 )
        goto LABEL_9;
      v12 = std::_Rb_tree_decrement(v3);
      v5 = *(_DWORD *)(v12 + 32);
      v7 = v12;
    }
    if ( v4 <= v5 )
      return v7;
LABEL_9:
    v13 = 1;
    if ( v2 != v3 )
      v13 = v4 < *((_DWORD *)v3 + 8);
    goto LABEL_11;
  }
  if ( (_QWORD *)a1[3] == v2 || (v7 = std::_Rb_tree_decrement(a1 + 1), v4 > *(_DWORD *)(v7 + 32)) )
  {
    v13 = 1;
    v3 = a1 + 1;
LABEL_11:
    v7 = operator new(0x40u);
    v8 = *a2;
    v9 = _mm_loadu_si128((const __m128i *)(a2 + 2));
    *(_OWORD *)(a2 + 2) = 0;
    *(_DWORD *)(v7 + 32) = v8;
    v10 = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0;
    *(_QWORD *)(v7 + 56) = v10;
    *(__m128i *)(v7 + 40) = v9;
    std::_Rb_tree_insert_and_rebalance(v13, v7, v3, v2);
    ++a1[5];
  }
  return v7;
}
