__int64 __fastcall sub_21AD8A0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // r13
  unsigned int v8; // r15d
  __int64 v9; // rax
  size_t v11; // r15
  size_t v12; // rbx
  size_t v13; // rdx
  int v14; // eax

  v4 = sub_9F5F30(a1, a2, (const void **)a3);
  v6 = v4;
  if ( v5 )
  {
    v7 = v5;
    v8 = 1;
    if ( v4 || v5 == a1 + 1 )
      goto LABEL_3;
    v11 = *(_QWORD *)(a3 + 8);
    v13 = v5[5];
    v12 = v13;
    if ( v11 <= v13 )
      v13 = *(_QWORD *)(a3 + 8);
    if ( v13 && (v14 = memcmp(*(const void **)a3, (const void *)v7[4], v13)) != 0 )
    {
      if ( v14 < 0 )
      {
LABEL_12:
        v8 = 1;
LABEL_3:
        v6 = operator new(0x30u);
        v9 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(v6 + 32) = *(_QWORD *)a3;
        *(_QWORD *)(v6 + 40) = v9;
        std::_Rb_tree_insert_and_rebalance(v8, v6, v7, a1 + 1);
        ++a1[5];
        return v6;
      }
    }
    else if ( v11 != v12 && v11 < v12 )
    {
      goto LABEL_12;
    }
    v8 = 0;
    goto LABEL_3;
  }
  return v6;
}
