__int64 __fastcall sub_8CBF90(__int64 a1, void *a2, char a3)
{
  if ( (unsigned int)qunlink(a2) )
  {
    if ( *__errno_location() == 2 )
    {
      set_error_string();
      return 3;
    }
    else
    {
      return sub_8D9800(-1, a2);
    }
  }
  else
  {
    if ( (a3 & 4) != 0 )
      sub_8A5B60(*(_QWORD **)(a1 + 8), (const char *)a2);
    return 0;
  }
}

