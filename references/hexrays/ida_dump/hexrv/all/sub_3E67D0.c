unsigned __int64 __fastcall sub_3E67D0(__int64 a1, __int64 *a2, double a3)
{
  sub_8B830(a1, a2);
  sub_8B1C0((__int64)a2, 2, "riscv_spec_info.psi");
  if ( sub_CBAB0(0xBBDu, a2, a2[5], a1 + 64, 0) != 1 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE1Au, (__int64)a2, a3);
    BUG();
  }
  sub_8B1C0((__int64)a2, 2, "riscv_spec_info.lroff");
  sub_7B940(a2, *(_QWORD *)(a1 + 120));
  sub_8B1C0((__int64)a2, 2, "riscv_spec_info.iflags");
  return sub_7B4E0(a2, *(_DWORD *)(a1 + 128));
}
