__int64 __fastcall sub_56110(__int64 a1, void *a2)
{
  if ( chdir((const char *)a2) )
    return sub_63E40(-1, a2);
  else
    return 0;
}

