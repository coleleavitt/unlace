__int64 __fastcall sub_30C340(__int64 a1, __int64 a2, __int64 a3)
{
  time_t v4; // r12
  __int64 license_manager; // r14
  unsigned __int8 (__fastcall *v6)(__int64, time_t, int *); // r15
  int v8; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_478240(a1 + 16, a2, a3);
  v4 = sub_55C580();
  license_manager = get_license_manager();
  v6 = *(unsigned __int8 (__fastcall **)(__int64, time_t, int *))(*(_QWORD *)license_manager + 96LL);
  if ( !v4 )
    v4 = time(nullptr);
  if ( !v6(license_manager, v4, &v8) || (unsigned int)(v8 - 1) <= 4 || (*(_BYTE *)(a2 + 115) & 1) != 0 )
    return sub_478240(a1 + 16, a2, a3);
  sub_530AF0(a2, 6);
  return 6;
}
