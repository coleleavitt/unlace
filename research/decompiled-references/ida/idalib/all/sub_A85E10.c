__int64 __fastcall sub_A85E10(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  bool v12; // zf

  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( !a1[5] || *a3 < *(_QWORD *)(a1[4] + 32LL) )
    {
      v9 = (_QWORD *)a1[2];
      if ( v9 )
      {
        v10 = *a3;
        while ( 1 )
        {
          if ( v9[4] > v10 )
          {
            v11 = (_QWORD *)v9[2];
            if ( !v11 )
              return 0;
          }
          else
          {
            v11 = (_QWORD *)v9[3];
            if ( !v11 )
              return 0;
          }
          v9 = v11;
        }
      }
    }
    return 0;
  }
  else
  {
    v3 = *a3;
    if ( *(_QWORD *)(a2 + 32) < *a3 )
    {
      if ( a1[4] == a2 )
      {
        return 0;
      }
      else
      {
        v8 = std::_Rb_tree_increment(a2, (const char *)a2);
        if ( v3 > *(_QWORD *)(v8 + 32) )
        {
          return 0;
        }
        else
        {
          result = 0;
          if ( *(_QWORD *)(a2 + 24) )
            return v8;
        }
      }
    }
    else
    {
      result = a1[3];
      if ( result != a2 )
      {
        v5 = std::_Rb_tree_decrement(a2);
        if ( v3 >= *(_QWORD *)(v5 + 32) )
        {
          v12 = *(_QWORD *)(v5 + 24) == 0;
          result = 0;
          if ( !v12 )
            return a2;
        }
        else
        {
          v6 = (_QWORD *)a1[2];
          if ( v6 )
          {
            while ( 1 )
            {
              if ( v3 < v6[4] )
              {
                v7 = (_QWORD *)v6[2];
                if ( !v7 )
                  return 0;
              }
              else
              {
                v7 = (_QWORD *)v6[3];
                if ( !v7 )
                  return 0;
              }
              v6 = v7;
            }
          }
          return 0;
        }
      }
    }
  }
  return result;
}
