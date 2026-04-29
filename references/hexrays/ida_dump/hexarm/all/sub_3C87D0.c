__int64 sub_3C87D0()
{
  __int64 module_data; // rax

  module_data = get_module_data((unsigned int)dword_4EB8F8);
  if ( sub_38A180(module_data) )
    JUMPOUT(0x3C8770);
  return -1;
}
