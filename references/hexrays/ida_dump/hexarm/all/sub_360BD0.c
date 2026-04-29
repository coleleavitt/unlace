__int64 __fastcall sub_360BD0(__int64 a1, unsigned __int64 *a2)
{
  __int64 module_data; // rax
  int v3; // eax
  __int64 v4; // r10

  module_data = get_module_data((unsigned int)dword_4EB8F8);
  v3 = sub_360B30(*(_QWORD *)(module_data + 800) + 8LL, *a2);
  if ( v3 < 0 )
    sub_35DE50();
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
           a1,
           2,
           *(_QWORD *)(*(_QWORD *)(v4 + 184) + 120LL * v3 + 104));
}
