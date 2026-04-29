__int64 sub_145E0()
{
  __int64 result; // rax

  if ( netnode_altval() == -1 || (result = is_loaded(), !(_BYTE)result) )
  {
    netnode_supdel();
    return netnode_supdel();
  }
  return result;
}
