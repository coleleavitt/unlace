__int64 sub_BD50()
{
  __int64 result; // rax

  result = netnode_inited();
  if ( (_BYTE)result )
  {
    netnode_supset();
    return netnode_supset();
  }
  return result;
}
