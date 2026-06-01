__int64 __fastcall sub_56CC80(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi

  v3 = *(_QWORD *)(a1 + 40);
  v4 = -1;
  v5 = *(_QWORD *)(v3 + 1664);
  if ( *(_QWORD *)(v5 + 56) )
  {
    v6 = *(_QWORD *)(v5 + 32);
    v7 = v5 + 24;
    if ( v6 )
    {
      v8 = v5 + 24;
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v6 + 16);
          v10 = *(_QWORD *)(v6 + 24);
          if ( *(_DWORD *)(v6 + 32) < (unsigned int)a2 )
            break;
          v8 = v6;
          v6 = *(_QWORD *)(v6 + 16);
          if ( !v9 )
            goto LABEL_7;
        }
        v6 = *(_QWORD *)(v6 + 24);
      }
      while ( v10 );
LABEL_7:
      if ( a3 == 1 )
      {
        if ( v7 == v8 )
          return -1;
        v4 = *(unsigned int *)(v8 + 32);
        if ( a2 != v4 )
          return v4;
        v8 = std::_Rb_tree_increment();
        goto LABEL_10;
      }
      if ( a3 != 2 )
      {
        if ( a3 )
          return *(unsigned int *)(v8 + 32);
LABEL_10:
        if ( v7 != v8 )
          return *(unsigned int *)(v8 + 32);
        return -1;
      }
    }
    else
    {
      if ( a3 == 1 )
        return v4;
      if ( a3 != 2 )
      {
        if ( a3 )
          return *(unsigned int *)(v5 + 56);
        return v4;
      }
      v8 = v5 + 24;
    }
    if ( *(_QWORD *)(v5 + 40) != v8 )
    {
      v8 = std::_Rb_tree_decrement();
      return *(unsigned int *)(v8 + 32);
    }
    return -1;
  }
  return -1;
}

