__int64 __fastcall sub_339D50(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  if ( a2 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v2 == sub_339D30 )
    {
      sub_3393A0(a2, a2);
      qfree(a2);
    }
    else
    {
      ((void (__fastcall *)(__int64))v2)(a2);
    }
  }
  clr_module_data((unsigned int)dword_4CF8F8);
  return sub_68EA0((__int64)"Hex-Rays: could not initialize processor subsystem\n");
}
