__int64 __fastcall sub_8CBD10(__int64 a1, const char *a2, void *a3, char a4)
{
  if ( (unsigned int)qrename(a2, a3) )
  {
    if ( *__errno_location() == 2 )
    {
      set_error_string();
      return 3;
    }
    else
    {
      return sub_8D9800(-1, a3);
    }
  }
  else
  {
    if ( (a4 & 4) != 0 )
      sub_8A5B60(*(_QWORD **)(a1 + 8), a2);
    return 0;
  }
}

