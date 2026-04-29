__int64 __fastcall sub_135D0(__int64 a1)
{
  if ( netnode_altval() )
    return 0;
  if ( get_name_ea() == -1 )
  {
    netnode_supset();
    return 0;
  }
  return sub_13500(a1);
}
