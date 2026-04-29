__int64 __fastcall sub_358E10(__int64 a1, unsigned __int64 *a2)
{
  __int64 module_data; // rax
  int v3; // eax
  __int64 v4; // r10

  module_data = get_module_data((unsigned int)dword_4BB8D8);
  v3 = sub_358D70(*(_QWORD *)(module_data + 800) + 8LL, *a2);
  if ( v3 < 0 )
    sub_356090();
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
           a1,
           2,
           *(_QWORD *)(*(_QWORD *)(v4 + 184) + 120LL * v3 + 104));
}
