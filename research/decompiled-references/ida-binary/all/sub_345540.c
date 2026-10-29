int *__fastcall sub_345540(_QWORD *a1, _QWORD *a2)
{
  int *result; // rax
  int *v3; // rdx
  int *v4; // r14
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r13
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  char v17; // cl
  _BOOL4 v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-40h]
  unsigned __int64 v22; // [rsp+0h] [rbp-40h]

  result = (int *)qword_8CEFF0;
  if ( qword_8CEFF0 )
  {
    v3 = (int *)qword_8CEFF0;
    v4 = &dword_8CEFE8;
    do
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)v3 + 2);
        v7 = *((_QWORD *)v3 + 3);
        if ( *((_QWORD *)v3 + 4) >= *a2 )
          break;
        v3 = *((int **)v3 + 3);
        if ( !v7 )
          goto LABEL_6;
      }
      v4 = v3;
      v3 = *((int **)v3 + 2);
    }
    while ( v6 );
LABEL_6:
    v8 = a2[1];
    v9 = &dword_8CEFE8;
    do
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)result + 2);
        v11 = *((_QWORD *)result + 3);
        if ( *((_QWORD *)result + 4) >= v8 )
          break;
        result = *((int **)result + 3);
        if ( !v11 )
          goto LABEL_10;
      }
      v9 = result;
      result = *((int **)result + 2);
    }
    while ( v10 );
LABEL_10:
    if ( v9 != v4 )
    {
      v12 = a1 + 1;
      while ( 1 )
      {
        v13 = (_QWORD *)a1[2];
        v14 = *((_QWORD *)v4 + 4);
        if ( !v13 )
          break;
        while ( 1 )
        {
          v15 = v13[4];
          v16 = (_QWORD *)v13[2];
          v17 = 1;
          if ( v14 >= v15 )
          {
            v16 = (_QWORD *)v13[3];
            v17 = 0;
          }
          if ( !v16 )
            break;
          v13 = v16;
        }
        if ( v17 )
        {
          if ( (_QWORD *)a1[3] == v13 )
          {
LABEL_20:
            v18 = 1;
            if ( v12 != v13 )
              v18 = v14 < v13[4];
LABEL_22:
            v19 = operator new(0x28u);
            *(_QWORD *)(v19 + 32) = *((_QWORD *)v4 + 4);
            std::_Rb_tree_insert_and_rebalance(v18, v19, v13, a1 + 1);
            ++a1[5];
            goto LABEL_23;
          }
          v21 = *((_QWORD *)v4 + 4);
          v20 = std::_Rb_tree_decrement(v13);
          v14 = v21;
          v15 = *(_QWORD *)(v20 + 32);
        }
        if ( v15 < v14 )
          goto LABEL_20;
LABEL_23:
        result = (int *)std::_Rb_tree_increment(v4);
        v4 = result;
        if ( result == v9 )
          return result;
      }
      if ( v12 != (_QWORD *)a1[3] )
      {
        v22 = *((_QWORD *)v4 + 4);
        if ( *(_QWORD *)(std::_Rb_tree_decrement(a1 + 1) + 32) >= v22 )
          goto LABEL_23;
      }
      v13 = a1 + 1;
      v18 = 1;
      goto LABEL_22;
    }
  }
  return result;
}
