__int64 __fastcall sub_2F4790(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v4; // r13
  __int64 v5; // r12
  unsigned int *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // esi
  char v10; // cl
  unsigned int v11; // edx
  _BOOL4 v12; // r15d
  __int64 v13; // r8
  __int64 v14; // [rsp+8h] [rbp-40h]

  result = 9 * a3;
  v4 = &a2[18 * a3];
  v5 = a1 + 8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  if ( a2 == v4 )
    return result;
  v6 = a2;
  v7 = 0;
  do
  {
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v8 + 32) < *v6 )
        goto LABEL_13;
    }
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
    {
      v8 = a1 + 8;
LABEL_21:
      if ( v8 != *(_QWORD *)(a1 + 24) )
      {
        result = *(unsigned int *)(std::_Rb_tree_decrement(v8) + 32);
        if ( *v6 <= (unsigned int)result )
          goto LABEL_18;
      }
LABEL_13:
      v12 = 1;
      if ( v5 != v8 )
        v12 = *v6 < *(_DWORD *)(v8 + 32);
      v13 = operator new(0x68u);
      *(_DWORD *)(v13 + 32) = *v6;
      *(_QWORD *)(v13 + 40) = v13 + 56;
      *(_QWORD *)(v13 + 48) = 0xC00000000LL;
      if ( v6[4] )
      {
        v14 = v13;
        sub_2010370(v13 + 40, v6 + 2);
        v13 = v14;
      }
      std::_Rb_tree_insert_and_rebalance(v12, v13, v8, v5);
      result = *(_QWORD *)(a1 + 40);
      v7 = result + 1;
      *(_QWORD *)(a1 + 40) = result + 1;
      goto LABEL_18;
    }
    v9 = *v6;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v8 + 32);
      if ( v9 >= v11 )
        break;
      result = *(_QWORD *)(v8 + 16);
      v10 = 1;
      if ( !result )
        goto LABEL_11;
LABEL_8:
      v8 = result;
    }
    result = *(_QWORD *)(v8 + 24);
    v10 = 0;
    if ( result )
      goto LABEL_8;
LABEL_11:
    if ( v10 )
      goto LABEL_21;
    if ( v9 > v11 )
      goto LABEL_13;
LABEL_18:
    v6 += 18;
  }
  while ( v4 != v6 );
  return result;
}
