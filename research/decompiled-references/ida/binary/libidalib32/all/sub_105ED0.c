void __fastcall sub_105ED0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    if ( a2[66] )
    {
      a2[67] = 0;
      qfree();
    }
    if ( a2[63] )
    {
      a2[64] = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( a2[46] )
    {
      a2[47] = 0;
      qfree();
    }
    if ( a2[43] )
    {
      a2[44] = 0;
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
    operator delete(a2, 0x238u);
  }
}

