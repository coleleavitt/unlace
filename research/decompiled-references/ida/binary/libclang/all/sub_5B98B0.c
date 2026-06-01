__int64 __fastcall sub_5B98B0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v4; // r13
  unsigned int *v5; // rbp
  __int64 v6; // r14
  unsigned int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // [rsp+8h] [rbp-40h]
  unsigned int v14; // [rsp+8h] [rbp-40h]

  result = 9 * a3;
  v4 = &a2[18 * a3];
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  if ( a2 != v4 )
  {
    v5 = a2;
    v6 = 0;
    while ( 1 )
    {
      v7 = *v5;
      if ( v6 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) < v7 )
        goto LABEL_14;
      v8 = *(_QWORD *)(a1 + 16);
      if ( v8 )
        break;
      if ( a1 + 8 == *(_QWORD *)(a1 + 24) )
        goto LABEL_14;
      v14 = *v5;
      result = std::_Rb_tree_decrement();
      if ( *(_DWORD *)(result + 32) < v14 )
        goto LABEL_14;
LABEL_17:
      v5 += 18;
      if ( v4 == v5 )
        return result;
    }
    while ( 1 )
    {
      result = *(unsigned int *)(v8 + 32);
      if ( v7 < (unsigned int)result )
        break;
LABEL_9:
      if ( !*(_QWORD *)(v8 + 24) )
        goto LABEL_13;
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( !v9 )
        break;
      v8 = *(_QWORD *)(v8 + 16);
      result = *(unsigned int *)(v9 + 32);
      if ( v7 >= (unsigned int)result )
        goto LABEL_9;
    }
    if ( v8 == *(_QWORD *)(a1 + 24) )
      goto LABEL_14;
    v13 = *v5;
    v10 = std::_Rb_tree_decrement();
    v7 = v13;
    result = *(unsigned int *)(v10 + 32);
LABEL_13:
    if ( (unsigned int)result >= v7 )
      goto LABEL_17;
LABEL_14:
    v11 = operator new(0x68u);
    *(_DWORD *)(v11 + 32) = *v5;
    *(_QWORD *)(v11 + 40) = v11 + 56;
    v12 = v5[4];
    *(_QWORD *)(v11 + 48) = 0xC00000000LL;
    if ( v12 )
      sub_3724670(v11 + 40, v5 + 2);
    std::_Rb_tree_insert_and_rebalance();
    result = *(_QWORD *)(a1 + 40);
    v6 = result + 1;
    *(_QWORD *)(a1 + 40) = result + 1;
    goto LABEL_17;
  }
  return result;
}

