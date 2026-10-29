_QWORD *__fastcall sub_3FC460(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *result; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx

  result = nullptr;
  if ( a1[112] )
  {
    result = (_QWORD *)a1[109];
    v5 = *a2;
    v6 = a1 + 108;
    if ( !result )
      goto LABEL_15;
    v7 = (__int64)(a1 + 108);
    do
    {
      while ( 1 )
      {
        v8 = result[2];
        v9 = result[3];
        if ( result[4] < v5 )
          break;
        v7 = (__int64)result;
        result = (_QWORD *)result[2];
        if ( !v8 )
          goto LABEL_7;
      }
      result = (_QWORD *)result[3];
    }
    while ( v9 );
LABEL_7:
    if ( v6 == (_QWORD *)v7 )
    {
LABEL_15:
      v7 = a1[110];
      if ( v6 == (_QWORD *)v7 )
      {
LABEL_11:
        v10 = *(_QWORD *)(v7 + 32);
        result = nullptr;
        if ( v5 < v10 )
          return result;
        goto LABEL_12;
      }
      v7 = (__int64)v6;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 32);
      if ( v5 >= v10 )
      {
LABEL_12:
        result = nullptr;
        if ( v10 + *(__int16 *)(v7 + 66) - 1 >= v5 )
        {
          result = (_QWORD *)(v7 + 40);
          *a2 = v5 - v10;
        }
        return result;
      }
      if ( a1[110] == v7 )
        return result;
    }
    v7 = std::_Rb_tree_decrement(v7);
    goto LABEL_11;
  }
  return result;
}
