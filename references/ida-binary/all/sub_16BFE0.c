__int64 sub_16BFE0()
{
  __int64 license_manager; // rax

  license_manager = get_license_manager();
  return (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)license_manager + 48LL))(
           license_manager,
           &qword_8C9580,
           0);
}
