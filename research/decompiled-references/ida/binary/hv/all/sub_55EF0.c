__int64 __fastcall sub_55EF0(__int64 a1, __int64 a2, void *a3, char a4)
{
  if ( (unsigned int)sub_95A50(a2, a3) )
  {
    if ( *__errno_location() == 2 )
    {
      sub_8F890(0, a2);
      return 3;
    }
    else
    {
      return sub_63E40(-1, a3);
    }
  }
  else
  {
    if ( (a4 & 4) != 0 )
      sub_681B0(*(_QWORD *)(a1 + 8), a2);
    return 0;
  }
}

