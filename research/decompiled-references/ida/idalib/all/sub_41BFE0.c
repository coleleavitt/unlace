unsigned __int64 __fastcall sub_41BFE0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 result; // rax

  v9 = switch_dbctx(*(int *)(a1 + 8));
  v10 = *(_QWORD *)(v9 + 1672);
  if ( a3 == 1 )
    return sub_41BA40(v10, a2);
  if ( a3 == 2 )
  {
    v3 = *(_QWORD *)(v9 + 1672);
    v4 = v10 + 2480;
    v5 = *(_QWORD *)(v3 + 2488);
    if ( v5 )
    {
      do
      {
        v6 = *(_QWORD *)(v5 + 24);
        if ( *(_QWORD *)(v5 + 32) >= a2 )
          JUMPOUT(0x41BF78);
        v5 = *(_QWORD *)(v5 + 24);
      }
      while ( v6 );
    }
    if ( *(_QWORD *)(v3 + 2496) == v4 )
      JUMPOUT(0x41BF80);
    result = *(_QWORD *)(std::_Rb_tree_decrement(v4) + 32);
    if ( result >= a2 )
      JUMPOUT(0x41BF89);
  }
  else
  {
    if ( !a3 )
    {
      v11 = *(_QWORD **)(v10 + 2488);
      if ( !v11 )
        return sub_41BA40(v10, a2);
      v12 = (_QWORD *)(v10 + 2480);
      do
      {
        while ( 1 )
        {
          v13 = v11[2];
          v14 = v11[3];
          if ( v11[4] < a2 )
            break;
          v12 = v11;
          v11 = (_QWORD *)v11[2];
          if ( !v13 )
            goto LABEL_9;
        }
        v11 = (_QWORD *)v11[3];
      }
      while ( v14 );
LABEL_9:
      if ( (_QWORD *)(v10 + 2480) == v12 || a2 < v12[4] )
        return sub_41BA40(v10, a2);
    }
    return a2;
  }
  return result;
}
