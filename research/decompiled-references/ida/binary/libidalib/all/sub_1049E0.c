__int64 __fastcall sub_1049E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx

  v2 = a2 - *(_QWORD *)(a1 + 208);
  if ( v2 <= 0 )
  {
    v5 = *(_QWORD *)(a1 + 208) - a2;
    if ( v5 > 0 )
    {
      v6 = 0;
      if ( (v5 & 1) == 0 || (perform_undo(), v6 = 1, v5 != 1) )
      {
        do
        {
          perform_undo();
          v6 += 2;
          perform_undo();
        }
        while ( v6 != v5 );
      }
    }
  }
  else
  {
    v3 = 0;
    if ( (v2 & 1) == 0 || (perform_redo(), v3 = 1, v2 != 1) )
    {
      do
      {
        perform_redo();
        v3 += 2;
        perform_redo();
      }
      while ( v2 != v3 );
    }
  }
  *(_QWORD *)(a1 + 208) = a2;
  mark_builtin_widgets();
  return a2;
}

