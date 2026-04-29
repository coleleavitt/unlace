__int64 sub_3C3390()
{
  __int64 module_data; // rax

  module_data = get_module_data((unsigned int)dword_4CF8F8);
  if ( sub_384D40(module_data) )
    JUMPOUT(0x3C3330);
  return -1;
}
