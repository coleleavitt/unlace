__int64 sub_3C3010()
{
  __int64 module_data; // rax

  module_data = get_module_data((unsigned int)dword_4C1BB8);
  if ( sub_3849C0(module_data) )
    JUMPOUT(0x3C2FB0);
  return -1;
}
