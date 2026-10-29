__int64 flush_buffers()
{
  __int64 license_manager; // rbx
  unsigned __int8 (__fastcall *v1)(__int64, time_t, int *); // r12
  time_t v2; // rax
  int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v1 = *(unsigned __int8 (__fastcall **)(__int64, time_t, int *))(*(_QWORD *)license_manager + 96LL);
  v2 = time(nullptr);
  if ( v1(license_manager, v2, &v4) && (unsigned int)(v4 - 1) > 4 && !(unsigned __int8)sub_390FF0() )
    return 0;
  if ( (unsigned __int8)sub_78EE90(qword_2CA1698) )
    sub_365330();
  return 1;
}

