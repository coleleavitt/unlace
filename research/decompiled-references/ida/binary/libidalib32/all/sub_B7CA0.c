__int64 sub_B7CA0()
{
  __int64 module_data; // rax

  if ( unk_2530D8 )
  {
    module_data = get_module_data();
    if ( module_data )
      return *(_QWORD *)(module_data + 920);
  }
  else
  {
    if ( under_debugger )
      goto LABEL_8;
    interr();
  }
  if ( under_debugger )
LABEL_8:
    BUG();
  interr();
  return sub_B7D00(41190);
}

