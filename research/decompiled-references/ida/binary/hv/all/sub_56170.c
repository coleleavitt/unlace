__int64 __fastcall sub_56170(__int64 a1, void *a2, char a3)
{
  if ( (unsigned int)sub_95A30(a2) )
  {
    if ( *__errno_location() == 2 )
    {
      sub_8F890(0, a2);
      return 3;
    }
    else
    {
      return sub_63E40(-1, a2);
    }
  }
  else
  {
    if ( (a3 & 4) != 0 )
      sub_681B0(*(_QWORD *)(a1 + 8), a2);
    return 0;
  }
}

