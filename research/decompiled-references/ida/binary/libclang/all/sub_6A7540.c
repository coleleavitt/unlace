__int64 __fastcall sub_6A7540(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] || (v4 = nullptr, a3 < *(_QWORD *)(a1[4] + 32LL)) )
    {
      v10 = (_QWORD *)a1[2];
      if ( v10 )
      {
        while ( 1 )
        {
          if ( a3 >= v10[4] )
          {
            v11 = (_QWORD *)v10[3];
            if ( !v11 )
              return 0;
          }
          else
          {
            v11 = (_QWORD *)v10[2];
            if ( !v11 )
              return 0;
          }
          v10 = v11;
        }
      }
      return 0;
    }
    return (__int64)v4;
  }
  v4 = a2;
  if ( a2[4] >= a3 )
  {
    if ( a2 == (_QWORD *)a1[3] )
      return (__int64)v4;
    v5 = std::_Rb_tree_decrement();
    if ( a3 < *(_QWORD *)(v5 + 32) )
    {
      v6 = (_QWORD *)a1[2];
      if ( v6 )
      {
        while ( 1 )
        {
          if ( a3 >= v6[4] )
          {
            v7 = (_QWORD *)v6[3];
            if ( !v7 )
              return 0;
          }
          else
          {
            v7 = (_QWORD *)v6[2];
            if ( !v7 )
              return 0;
          }
          v6 = v7;
        }
      }
      return 0;
    }
    if ( *(_QWORD *)(v5 + 24) )
      return (__int64)v4;
    return 0;
  }
  v4 = nullptr;
  if ( a2 == (_QWORD *)a1[4] )
    return (__int64)v4;
  v9 = std::_Rb_tree_increment();
  if ( *(_QWORD *)(v9 + 32) >= a3 )
  {
    if ( a2[3] )
      return v9;
    return (__int64)v4;
  }
  return 0;
}

