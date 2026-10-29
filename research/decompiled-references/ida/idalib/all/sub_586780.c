__int64 __fastcall sub_586780(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // r9
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 1856LL);
  v4 = v3[7];
  if ( v4 )
  {
    v5 = (_QWORD *)v3[4];
    v6 = v3 + 3;
    if ( v5 )
    {
      v7 = (__int64)(v3 + 3);
      do
      {
        while ( 1 )
        {
          v8 = v5[2];
          v9 = v5[3];
          if ( v5[4] < a2 )
            break;
          v7 = (__int64)v5;
          v5 = (_QWORD *)v5[2];
          if ( !v8 )
            goto LABEL_7;
        }
        v5 = (_QWORD *)v5[3];
      }
      while ( v9 );
LABEL_7:
      if ( a3 == 1 )
      {
        if ( v6 == (_QWORD *)v7 )
          return -1;
        v4 = *(_QWORD *)(v7 + 32);
        if ( a2 != v4 )
          return v4;
        v7 = std::_Rb_tree_increment(v7);
        goto LABEL_10;
      }
      if ( a3 != 2 )
      {
        if ( a3 )
          return *(_QWORD *)(v7 + 32);
LABEL_10:
        if ( v6 != (_QWORD *)v7 )
          return *(_QWORD *)(v7 + 32);
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
        return v4;
      }
      v7 = (__int64)(v3 + 3);
    }
    if ( v7 != v3[5] )
    {
      v7 = std::_Rb_tree_decrement(v7);
      return *(_QWORD *)(v7 + 32);
    }
    return -1;
  }
  return -1;
}
