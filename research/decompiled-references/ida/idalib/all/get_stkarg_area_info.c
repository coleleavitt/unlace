char __fastcall get_stkarg_area_info(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  char result; // al
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 (*v7)(); // rdx

  v3 = a2;
  if ( a2 <= 0x10 )
    v3 = getinf(99);
  if ( v3 <= 0x1FF && (v3 > 0xFF || (v3 & 0xFFFFFF0F) == 0) )
    return sub_3792E0(0x7E4u, a1, v3) > 0;
  get_custom_callcnv(v3);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(__int64 (**)())(*(_QWORD *)v5 + 48LL);
  result = 0;
  if ( v7 != sub_3DB890 )
    return ((__int64 (__fastcall *)(__int64, __int64))v7)(v6, a1);
  return result;
}
