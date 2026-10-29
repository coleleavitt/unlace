__int64 __fastcall sub_3F04D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  LODWORD(v2) = 1;
  if ( (*a2 & 0x100) != 0 )
  {
    if ( get_tinfo_pdata() )
    {
      v2 = sub_CFF70();
      clear_tinfo_t();
      LOBYTE(v2) = v2 <= 0;
    }
    else
    {
      LODWORD(v2) = 1;
    }
  }
  return (unsigned int)v2;
}
