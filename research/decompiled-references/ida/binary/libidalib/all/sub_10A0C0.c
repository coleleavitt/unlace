__int64 *sub_10A0C0()
{
  __int64 module_data; // rax

  if ( !dword_254298 )
    return &qword_252C20;
  module_data = get_module_data();
  if ( module_data )
    return (__int64 *)(module_data + 16);
  else
    return &qword_252C20;
}

