__int64 sub_B8210()
{
  __int64 module_data; // rax

  if ( unk_254298 )
  {
    module_data = get_module_data();
    if ( module_data )
      return *(_QWORD *)(module_data + 944);
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
  return sub_B8270(41190);
}

