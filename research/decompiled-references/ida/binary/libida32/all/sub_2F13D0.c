__int64 __fastcall sub_2F13D0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v4; // r13
  unsigned int *v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // esi
  char v9; // cl
  unsigned int v10; // edx
  __int64 v11; // r8

  result = 9 * a3;
  v4 = &a2[18 * a3];
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  if ( a2 == v4 )
    return result;
  v5 = a2;
  v6 = 0;
  do
  {
    if ( v6 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) < *v5 )
      goto LABEL_13;
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
    {
      v7 = a1 + 8;
LABEL_19:
      if ( v7 == *(_QWORD *)(a1 + 24) )
        goto LABEL_13;
      result = *(unsigned int *)(std::_Rb_tree_decrement() + 32);
      if ( *v5 > (unsigned int)result )
        goto LABEL_13;
      goto LABEL_16;
    }
    v8 = *v5;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v7 + 32);
      if ( v8 >= v10 )
        break;
      result = *(_QWORD *)(v7 + 16);
      v9 = 1;
      if ( !result )
        goto LABEL_11;
LABEL_8:
      v7 = result;
    }
    result = *(_QWORD *)(v7 + 24);
    v9 = 0;
    if ( result )
      goto LABEL_8;
LABEL_11:
    if ( v9 )
      goto LABEL_19;
    if ( v8 > v10 )
    {
LABEL_13:
      v11 = operator new(0x68u);
      *(_DWORD *)(v11 + 32) = *v5;
      *(_QWORD *)(v11 + 40) = v11 + 56;
      *(_QWORD *)(v11 + 48) = 0xC00000000LL;
      if ( v5[4] )
        sub_1FEC630(v11 + 40, v5 + 2);
      std::_Rb_tree_insert_and_rebalance();
      result = *(_QWORD *)(a1 + 40);
      v6 = result + 1;
      *(_QWORD *)(a1 + 40) = result + 1;
    }
LABEL_16:
    v5 += 18;
  }
  while ( v4 != v5 );
  return result;
}

