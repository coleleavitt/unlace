__int64 sub_121C0()
{
  __int64 module_data; // rax
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rax

  module_data = get_module_data((unsigned int)dword_2D4F4);
  if ( ferror(*(FILE **)(module_data + 33312)) )
    return 0;
  v2 = get_module_data((unsigned int)dword_2D4F4);
  if ( (unsigned int)qfputc(10, *(_QWORD *)(v2 + 33312)) == -1 )
    return 0;
  v3 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164);
  v4 = get_module_data((unsigned int)dword_2D4F4);
  sub_11D90(*(_QWORD *)(v4 + 33312), (__int64)"%*c", v3, 32);
  return 1;
}
