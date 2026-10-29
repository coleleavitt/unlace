__int64 __fastcall sub_605FC0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8

  v3 = a1[10];
  if ( v3 )
  {
    v4 = (_QWORD *)a1[7];
    v5 = a1 + 6;
    if ( v4 )
    {
      v6 = (__int64)(a1 + 6);
      do
      {
        while ( 1 )
        {
          v7 = v4[2];
          v8 = v4[3];
          if ( v4[4] < a2 )
            break;
          v6 = (__int64)v4;
          v4 = (_QWORD *)v4[2];
          if ( !v7 )
            goto LABEL_7;
        }
        v4 = (_QWORD *)v4[3];
      }
      while ( v8 );
LABEL_7:
      if ( a3 == 1 )
      {
        if ( v5 == (_QWORD *)v6 )
          return -1;
        v3 = *(_QWORD *)(v6 + 32);
        if ( a2 != v3 )
          return v3;
        v6 = std::_Rb_tree_increment();
        goto LABEL_10;
      }
      if ( a3 != 2 )
      {
        if ( a3 )
          return *(_QWORD *)(v6 + 32);
LABEL_10:
        if ( v5 != (_QWORD *)v6 )
          return *(_QWORD *)(v6 + 32);
        return -1;
      }
    }
    else
    {
      if ( a3 == 1 )
        return -1;
      if ( a3 != 2 )
      {
        if ( !a3 )
          return -1;
        return v3;
      }
      v6 = (__int64)(a1 + 6);
    }
    if ( v6 != a1[8] )
    {
      v6 = std::_Rb_tree_decrement();
      return *(_QWORD *)(v6 + 32);
    }
    return -1;
  }
  return -1;
}

