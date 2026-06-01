_QWORD *__fastcall sub_30DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  v2 = a2;
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
  {
    v3 = (_QWORD *)(a1 + 8);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v4 = v3[4];
    v5 = (_QWORD *)v3[3];
    if ( v2 < v4 )
      v5 = (_QWORD *)v3[2];
    LOBYTE(a2) = v2 < v4;
    if ( !v5 )
      break;
    v3 = v5;
  }
  if ( v2 < v4 )
  {
LABEL_10:
    if ( v3 != *(_QWORD **)(a1 + 24) )
    {
      v3 = (_QWORD *)std::_Rb_tree_decrement(v3, a2);
      if ( v2 <= v3[4] )
        return v3;
    }
    return nullptr;
  }
  if ( v2 > v4 )
    return nullptr;
  return v3;
}

