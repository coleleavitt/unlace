__int64 __fastcall sub_33F0D0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v2 == sub_33F0B0 )
    {
      sub_33E720(a2, a2);
      qfree(a2);
    }
    else
    {
      ((void (__fastcall *)(__int64))v2)(a2);
    }
  }
  clr_module_data((unsigned int)dword_4EB8F8);
  return sub_6CAE0((__int64)"Hex-Rays: could not initialize processor subsystem\n");
}
