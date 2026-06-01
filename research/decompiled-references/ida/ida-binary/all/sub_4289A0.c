void __fastcall sub_4289A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  sub_426230(a1, (const char *)a2);
  sub_48FF00(*(QT::QAbstractItemView **)(a2 + 48));
  if ( !under_debugger )
  {
    interr(1, 0, v2, v3, NAN);
    if ( !under_debugger )
    {
      interr(1, 0, v4, v5, NAN);
      if ( !under_debugger )
        interr(1, 0, v6, v7, NAN);
    }
  }
  BUG();
}
