__int64 sub_3C4110()
{
  __int64 module_data; // rax

  module_data = get_module_data((unsigned int)dword_4DC8D8);
  if ( sub_385AC0(module_data) )
    JUMPOUT(0x3C40B0);
  return -1;
}
