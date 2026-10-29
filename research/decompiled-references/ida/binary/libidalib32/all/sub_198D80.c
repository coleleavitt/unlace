void __fastcall sub_198D80(__int64 a1, _QWORD *a2)
{
  if ( under_debugger )
    BUG();
  interr();
  if ( a2 )
  {
    if ( a2[6] )
    {
      a2[7] = 0;
      qfree();
    }
    if ( a2[2] )
    {
      a2[3] = 0;
      qfree();
    }
    operator delete(a2, 0x118u);
  }
}

