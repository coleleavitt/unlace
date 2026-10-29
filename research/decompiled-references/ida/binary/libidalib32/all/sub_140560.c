__int64 __fastcall sub_140560(__int64 a1, __int64 a2)
{
  time_t v2; // r12
  __int64 license_manager; // r14
  unsigned __int8 (__fastcall *v4)(__int64, time_t, int *); // r15
  int v6; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_9;
  v2 = sub_173B10();
  license_manager = get_license_manager();
  v4 = *(unsigned __int8 (__fastcall **)(__int64, time_t, int *))(*(_QWORD *)license_manager + 96LL);
  if ( !v2 )
    v2 = time(nullptr);
  if ( !v4(license_manager, v2, &v6) || (unsigned int)(v6 - 1) <= 4 || (*(_BYTE *)(a2 + 115) & 1) != 0 )
LABEL_9:
    JUMPOUT(0x173D90);
  sub_19A3A0(a2, 6);
  return 6;
}

