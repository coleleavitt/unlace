__int64 __fastcall sub_2B2080(_QWORD *a1, _QWORD *a2, int a3)
{
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *a1 = a2;
    }
    else if ( a3 == 2 )
    {
      *a1 = *a2;
    }
    return 0;
  }
  else
  {
    *a1 = &off_1C63C60;
    return 0;
  }
}

