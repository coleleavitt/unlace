unsigned __int64 sub_B8270()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() )
  {
    netnode_check();
    netnode_set();
  }
  return v1 - __readfsqword(0x28u);
}

