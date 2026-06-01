__int64 __fastcall sub_2C0140(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // r13
  bool v4; // al
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (_DWORD *)(v2 + 32);
      v4 = sub_2938E0(a2, (_DWORD *)(v2 + 32));
      v5 = *(_QWORD *)(v2 + 24);
      if ( v4 )
        v5 = *(_QWORD *)(v2 + 16);
      if ( !v5 )
        break;
      v2 = v5;
    }
    if ( !v4 )
      goto LABEL_10;
  }
  else
  {
    v2 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 24) == v2 )
    return 0;
  v2 = std::_Rb_tree_decrement(v2);
  v3 = (_DWORD *)(v2 + 32);
LABEL_10:
  if ( sub_2938E0(v3, a2) )
    return 0;
  return v2;
}
