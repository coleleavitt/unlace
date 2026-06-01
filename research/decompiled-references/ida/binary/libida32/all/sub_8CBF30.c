__int64 __fastcall sub_8CBF30(__int64 a1, void *a2)
{
  if ( chdir((const char *)a2) )
    return sub_8D9800(-1, a2);
  else
    return 0;
}

