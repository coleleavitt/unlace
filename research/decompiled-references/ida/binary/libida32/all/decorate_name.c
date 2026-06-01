char __fastcall decorate_name(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 custom_callcnv; // rax
  __int64 v12; // rdi
  __int64 (*v13)(); // rax

  if ( a4 <= 0x1FF && (a4 > 0xFF || (a4 & 0xFFFFFF0F) == 0) )
  {
    v9 = sub_375980(0x7E2u, a1, a2, a3, a4, a5);
    if ( v9 )
      return v9 == 1;
    return gen_decorate_name();
  }
  custom_callcnv = get_custom_callcnv(a4);
  v12 = custom_callcnv;
  if ( !custom_callcnv )
    return 0;
  v13 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 64LL);
  if ( v13 == sub_3D5B90 )
    return gen_decorate_name();
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, __int64))v13)(v12, a1, a2, a3, a4, a5);
}

