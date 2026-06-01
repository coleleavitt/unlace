__int64 flush_buffers()
{
  __int64 license_manager; // rbx
  unsigned __int8 (__fastcall *v1)(__int64, time_t, _QWORD *); // r12
  time_t v2; // rax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v1 = *(unsigned __int8 (__fastcall **)(__int64, time_t, _QWORD *))(*(_QWORD *)license_manager + 96LL);
  v2 = time(nullptr);
  if ( v1(license_manager, v2, vars0) && (unsigned int)(LODWORD(vars0[0]) - 1) > 4 && !(unsigned __int8)sub_395DC0() )
    return 0;
  if ( (unsigned __int8)sub_7AF790(qword_2CCB598) )
    sub_368890();
  return 1;
}
