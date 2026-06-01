_QWORD *__fastcall sub_3AA140(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *result; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rbx
  __int64 *i; // r12
  unsigned __int64 v14; // rbp
  _QWORD *j; // rax
  _QWORD *v16; // r15
  _QWORD *v17; // rax
  char v18; // di
  unsigned __int64 v19; // rax
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  _BOOL4 v21; // [rsp+14h] [rbp-54h]
  _QWORD *v22; // [rsp+18h] [rbp-50h]
  _QWORD *v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  result = *(_QWORD **)(a1 + 16);
  v24 = a3 + a4;
  v23 = (_QWORD *)(a1 + 8);
  v22 = (_QWORD *)(a1 + 8);
  if ( result )
  {
    v8 = a3;
    do
    {
      while ( 1 )
      {
        v9 = result[2];
        v10 = result[3];
        if ( result[4] >= v8 )
          break;
        result = (_QWORD *)result[3];
        if ( !v10 )
          goto LABEL_6;
      }
      v22 = result;
      result = (_QWORD *)result[2];
    }
    while ( v9 );
LABEL_6:
    if ( v22 != v23 )
    {
      v20 = a2 + 1;
      do
      {
        result = v22;
        v11 = v24;
        if ( v22[4] >= v24 )
          break;
        v12 = (unsigned __int64 *)v22[5];
        for ( i = (__int64 *)&v12[v22[6]]; i != (__int64 *)v12; ++v12 )
        {
          v14 = *v12;
          if ( a5 )
          {
            v8 = *(_QWORD *)(v14 + 56);
            v9 = *a5 + 8LL * a5[1];
            for ( j = (_QWORD *)*a5; *a5 != v9; v8 = *(_QWORD *)(*v12 + 56) )
            {
              while ( v8 != *j )
              {
                if ( (_QWORD *)v9 == ++j )
                  goto LABEL_18;
              }
              if ( (_QWORD *)v9 == j )
                break;
              if ( i == (__int64 *)++v12 )
                goto LABEL_30;
              v14 = *v12;
              j = (_QWORD *)*a5;
            }
          }
LABEL_18:
          v16 = (_QWORD *)a2[2];
          if ( v16 )
          {
            while ( 1 )
            {
              v8 = v16[4];
              v17 = (_QWORD *)v16[2];
              v18 = 1;
              if ( v14 >= v8 )
              {
                v17 = (_QWORD *)v16[3];
                v18 = 0;
              }
              if ( !v17 )
                break;
              v16 = v17;
            }
            if ( !v18 )
              goto LABEL_25;
          }
          else
          {
            v16 = a2 + 1;
          }
          if ( v16 == (_QWORD *)a2[3] )
          {
LABEL_26:
            v21 = 1;
            if ( v16 != v20 )
              v21 = v14 < v16[4];
            v19 = operator new(0x28u);
            *(_QWORD *)(v19 + 32) = v14;
            v8 = v19;
            std::_Rb_tree_insert_and_rebalance(v21, v19, v16, v20);
            ++a2[5];
            continue;
          }
          v8 = *(_QWORD *)(std::_Rb_tree_decrement(v16) + 32);
LABEL_25:
          if ( v8 < v14 )
            goto LABEL_26;
        }
LABEL_30:
        result = (_QWORD *)std::_Rb_tree_increment(v22, v8, v9, v11);
        v22 = result;
      }
      while ( v23 != result );
    }
  }
  return result;
}
