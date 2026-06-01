void __fastcall sub_106160(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    if ( a2[69] )
    {
      a2[70] = 0;
      qfree();
    }
    if ( a2[66] )
    {
      a2[67] = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( a2[47] )
    {
      a2[48] = 0;
      qfree();
    }
    if ( a2[44] )
    {
      a2[45] = 0;
      qfree();
    }
    clear_tinfo_t();
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
    operator delete(a2, 0x250u);
  }
}

