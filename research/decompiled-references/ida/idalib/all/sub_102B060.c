__int64 __fastcall sub_102B060(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rax
  size_t v8; // r15
  size_t v9; // rbx
  size_t v10; // rdx
  int v11; // eax

  result = sub_9F5E30(a1, a2);
  if ( v3 )
  {
    v4 = v3;
    v5 = 1;
    if ( result || v3 == a1 + 8 )
      goto LABEL_3;
    v8 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(v3 + 40);
    v9 = v10;
    if ( v8 <= v10 )
      v10 = *(_QWORD *)(a2 + 8);
    if ( v10 && (v11 = memcmp(*(const void **)a2, *(const void **)(v4 + 32), v10)) != 0 )
    {
      if ( v11 < 0 )
      {
LABEL_12:
        v5 = 1;
LABEL_3:
        v6 = operator new(0x30u);
        v7 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(v6 + 32) = *(_QWORD *)a2;
        *(_QWORD *)(v6 + 40) = v7;
        std::_Rb_tree_insert_and_rebalance(v5, v6, v4, a1 + 8);
        ++*(_QWORD *)(a1 + 40);
        return v6;
      }
    }
    else if ( v8 != v9 && v8 < v9 )
    {
      goto LABEL_12;
    }
    v5 = 0;
    goto LABEL_3;
  }
  return result;
}
