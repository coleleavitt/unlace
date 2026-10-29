__int64 *sub_109E20()
{
  __int64 module_data; // rax

  if ( !dword_2530D8 )
    return &qword_251A80;
  module_data = get_module_data();
  if ( module_data )
    return (__int64 *)(module_data + 16);
  else
    return &qword_251A80;
}

