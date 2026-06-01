char __fastcall get_stkarg_area_info(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  char result; // al
  __int64 custom_callcnv; // rax
  __int64 v6; // rdi
  __int64 (*v7)(); // rdx

  v3 = a2;
  if ( a2 <= 0x10 )
    v3 = (unsigned int)getinf(99);
  if ( (unsigned int)v3 <= 0x1FF && ((unsigned int)v3 > 0xFF || (v3 & 0xFFFFFF0F) == 0) )
    return sub_375980(0x7E4u, a1, (unsigned int)v3) > 0;
  custom_callcnv = get_custom_callcnv(v3);
  v6 = custom_callcnv;
  if ( !custom_callcnv )
    return 0;
  v7 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 48LL);
  result = 0;
  if ( v7 != sub_3D59C0 )
    return ((__int64 (__fastcall *)(__int64, __int64))v7)(v6, a1);
  return result;
}

