__int64 __fastcall sub_821340(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v3 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 88);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( a2 >= v4[4] )
      {
        v4 = (_QWORD *)v4[3];
        if ( !v4 )
          goto LABEL_4;
      }
      if ( !v4[2] )
        break;
      v3 = v4;
      v4 = (_QWORD *)v4[2];
    }
  }
  else
  {
LABEL_4:
    v4 = v3;
  }
  if ( *(_QWORD **)(a1 + 96) != v4 && (v5 = std::_Rb_tree_decrement(), *(_QWORD *)(v5 + 32) == a2) )
    return v5 + 48;
  else
    return 0;
}

