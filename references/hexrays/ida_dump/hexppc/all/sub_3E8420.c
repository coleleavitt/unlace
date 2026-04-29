unsigned __int64 __fastcall sub_3E8420(__int64 a1, __int64 *a2, double a3)
{
  sub_8C2B0(a1, a2);
  sub_8BC40((__int64)a2, 2, "ppc_spec_info.psi");
  if ( sub_CC530(0xBC6u, a2, a2[5], a1 + 64, 0) != 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCBC0u, (__int64)a2, a3);
    BUG();
  }
  return sub_7BEA0(a2, *(_DWORD *)(a1 + 120));
}
