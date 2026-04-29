unsigned __int64 __fastcall sub_3E5C60(__int64 a1, __int64 *a2, double a3)
{
  sub_8B130(a1, a2);
  sub_8AAC0((__int64)a2, 2, "v850_spec_info.psi");
  if ( sub_CB3B0(0xBC5u, a2, a2[5], a1 + 64, 0) != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEDBu, (__int64)a2, a3);
    BUG();
  }
  sub_8AAC0((__int64)a2, 2, "v850_spec_info.lroff");
  sub_7B240(a2, *(_QWORD *)(a1 + 96));
  sub_8AAC0((__int64)a2, 2, "v850_spec_info.ctpcoff");
  sub_7B240(a2, *(_QWORD *)(a1 + 104));
  sub_8AAC0((__int64)a2, 2, "v850_spec_info.iflags");
  return sub_7ADE0(a2, *(_DWORD *)(a1 + 112));
}
