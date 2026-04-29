__int64 __fastcall sub_28480(__int64 a1, __int64 a2, const char *a3)
{
  if ( a2 == -1 || !strstr(a3, *(const char **)(a1 + 8)) )
    return 0;
  sub_EC40();
  sub_283D0(a1, a2);
  netnode_supset();
  if ( (unsigned __int8)is_loaded() )
  {
    if ( (unsigned __int8)segtype() != 8 )
    {
      getseg();
      get_segm_name();
    }
  }
  return 1;
}
