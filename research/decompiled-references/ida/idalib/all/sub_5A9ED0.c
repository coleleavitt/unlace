__int64 __fastcall sub_5A9ED0(__int64 a1, unsigned int a2)
{
  if ( a2 == 4 )
    return *(_QWORD *)(a1 + 1592) + 336LL;
  if ( a2 > 4 )
  {
    if ( a2 != 8 )
      goto LABEL_10;
    return *(_QWORD *)(a1 + 1592) + 240LL;
  }
  else
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
        return *(_QWORD *)(a1 + 1592) + 144LL;
LABEL_10:
      if ( !under_debugger )
        interr(1471);
      BUG();
    }
    return *(_QWORD *)(a1 + 1592) + 48LL;
  }
}
