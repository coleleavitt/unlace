__int64 __fastcall sub_8EFC70(__int64 a1, void *a2)
{
  if ( chdir((const char *)a2) )
    return sub_8FD540(-1, a2);
  else
    return 0;
}
