__int64 sub_3C8290()
{
  __int64 module_data; // rax

  module_data = get_module_data((unsigned int)dword_4EF998);
  if ( sub_389C40(module_data) )
    JUMPOUT(0x3C8230);
  return -1;
}
