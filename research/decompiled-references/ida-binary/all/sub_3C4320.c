__int64 sub_3C4320()
{
  __int64 module_data; // rax
  __int64 v1; // rdx

  module_data = get_module_data((unsigned int)dword_8CD7F0);
  v1 = 0;
  if ( !*(_BYTE *)(module_data + 176) )
    return *(_QWORD *)(module_data + 168);
  return v1;
}
