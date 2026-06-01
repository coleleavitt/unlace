__int64 __fastcall sub_3E9520(_QWORD *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edx

  result = 0;
  if ( a1[111] )
  {
    result = a1[108];
    v5 = *a2;
    v6 = a1 + 107;
    if ( !result )
      goto LABEL_15;
    v7 = (__int64)(a1 + 107);
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(result + 16);
        v9 = *(_QWORD *)(result + 24);
        if ( *(_DWORD *)(result + 32) < v5 )
          break;
        v7 = result;
        result = *(_QWORD *)(result + 16);
        if ( !v8 )
          goto LABEL_7;
      }
      result = *(_QWORD *)(result + 24);
    }
    while ( v9 );
LABEL_7:
    if ( v6 == (_QWORD *)v7 )
    {
LABEL_15:
      v7 = a1[109];
      if ( v6 == (_QWORD *)v7 )
      {
LABEL_11:
        v10 = *(_DWORD *)(v7 + 32);
        result = 0;
        if ( v5 < v10 )
          return result;
        goto LABEL_12;
      }
    }
    else
    {
      v10 = *(_DWORD *)(v7 + 32);
      if ( v5 >= v10 )
      {
LABEL_12:
        result = 0;
        if ( v10 + *(__int16 *)(v7 + 66) - 1 >= v5 )
        {
          result = v7 + 40;
          *a2 = v5 - v10;
        }
        return result;
      }
      if ( a1[109] == v7 )
        return result;
    }
    v7 = std::_Rb_tree_decrement();
    goto LABEL_11;
  }
  return result;
}

