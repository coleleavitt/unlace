char __fastcall decorate_name(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, unsigned __int8, __int64, __int64); // rax
  __int64 v15; // r8
  __int64 v16; // rcx

  if ( a4 <= 0x1FF && (a4 > 0xFF || (a4 & 0xFFFFFF0F) == 0) )
  {
    v9 = sub_3792E0(0x7E2u, a1, a2, a3, a4, a5);
    if ( v9 )
      return v9 == 1;
    v15 = a5;
    v16 = a4;
    v13 = a3;
    return gen_decorate_name(a1, a2, v13, v16, v15);
  }
  get_custom_callcnv(a4);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = a3;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int8, __int64, __int64))(*(_QWORD *)v11 + 64LL);
  if ( v14 == sub_3DBA60 )
  {
    v15 = a5;
    v16 = 112;
    return gen_decorate_name(a1, a2, v13, v16, v15);
  }
  return v14(v12, a1, a2, a3, a4, a5);
}
