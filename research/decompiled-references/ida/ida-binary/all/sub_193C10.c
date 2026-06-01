bool sub_193C10()
{
  __int64 module_data; // rax
  __int64 v1; // rax

  if ( !dword_8CD7F0 )
    return 0;
  module_data = get_module_data();
  return module_data && (v1 = *(_QWORD *)(module_data + 912)) != 0 && *(_QWORD *)(v1 + 8) != 0;
}
