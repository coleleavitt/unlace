_QWORD *__fastcall sub_A5F00(__int64 a1, unsigned int *a2)
{
  _QWORD *result; // rax
  unsigned int v3; // edi
  int *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // edx
  char v11; // cl
  _DWORD *v12; // rax
  _BYTE *v13; // [rsp+40h] [rbp-168h]
  unsigned __int64 v14; // [rsp+168h] [rbp-40h]

  result = qword_2509B0;
  v3 = *a2;
  v14 = __readfsqword(0x28u);
  if ( !qword_2509B0 )
    goto LABEL_8;
  v5 = &dword_2509A8;
  do
  {
    while ( 1 )
    {
      v6 = result[2];
      v7 = result[3];
      if ( *((_DWORD *)result + 8) < v3 )
        break;
      v5 = (int *)result;
      result = (_QWORD *)result[2];
      if ( !v6 )
        goto LABEL_6;
    }
    result = (_QWORD *)result[3];
  }
  while ( v7 );
LABEL_6:
  if ( v5 == &dword_2509A8 || v3 < v5[8] )
  {
LABEL_8:
    get_item_end();
    v13 = (_BYTE *)qvector_reserve();
    *v13 = 0;
    create_qflow_chart();
    v8 = qword_2509B0;
    v9 = *a2;
    if ( !qword_2509B0 )
    {
      if ( (int *)qword_2509B8 == &dword_2509A8 )
        goto LABEL_16;
LABEL_22:
      if ( *(_DWORD *)(std::_Rb_tree_decrement() + 32) >= v9 )
        goto LABEL_17;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v10 = v8[8];
      v11 = 0;
      v12 = *((_DWORD **)v8 + 3);
      if ( v9 < v10 )
      {
        v12 = *((_DWORD **)v8 + 2);
        v11 = 1;
      }
      if ( !v12 )
        break;
      v8 = v12;
    }
    if ( v11 )
    {
      if ( (_DWORD *)qword_2509B8 != v8 )
        goto LABEL_22;
    }
    else if ( v10 >= v9 )
    {
LABEL_17:
      if ( v13 )
        qfree();
      return (_QWORD *)(&dword_0 + 1);
    }
LABEL_16:
    *(_DWORD *)(operator new(0x28u) + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++qword_2509C8;
    goto LABEL_17;
  }
  return result;
}

