unsigned __int64 sub_13FD10()
{
  unsigned __int64 v1; // [rsp+1028h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited() )
  {
    qmake_full_path();
    *(_BYTE *)qbasename() = 0;
    reg_read_strlist();
  }
  return v1 - __readfsqword(0x28u);
}

