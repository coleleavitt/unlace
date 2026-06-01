__int64 __fastcall sub_8EFCD0(__int64 a1, void *a2, char a3)
{
  if ( (unsigned int)qunlink(a2) )
  {
    if ( *__errno_location() == 2 )
    {
      set_error_string(0, a2);
      return 3;
    }
    else
    {
      return sub_8FD540(-1, a2);
    }
  }
  else
  {
    if ( (a3 & 4) != 0 )
      sub_8C98A0(*(_QWORD **)(a1 + 8), (const char *)a2);
    return 0;
  }
}
