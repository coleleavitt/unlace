__int64 __fastcall sub_2870(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  v2 = qftell();
  if ( a2 < v2 )
  {
    if ( under_debugger )
      BUG();
    interr(20041);
    return sub_2900();
  }
  else
  {
    v3 = v2;
    if ( v2 < a2 )
    {
      while ( (unsigned int)qfputc(0, a1) != -1 )
      {
        if ( a2 == ++v3 )
          return 1;
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
}

