__int64 __fastcall sub_33EC70(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v2 == sub_33EC50 )
    {
      sub_33E2C0(a2, a2);
      qfree();
    }
    else
    {
      ((void (__fastcall *)(__int64))v2)(a2);
    }
  }
  clr_module_data();
  return sub_6D0A0((__int64)"Hex-Rays: could not initialize processor subsystem\n");
}
