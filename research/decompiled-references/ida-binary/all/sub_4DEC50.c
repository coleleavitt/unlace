void __fastcall sub_4DEC50(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(__int64, unsigned __int64); // rax

  sub_4DC6F0(a1 + 1128, a2);
  v2 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 1680) &= ~2u;
  v3 = *(void (__fastcall **)(__int64, unsigned __int64))(v2 + 192);
  if ( v3 == vault_files_dirtree_widget_t__::vfunc_24 )
    sub_4DEB40((_QWORD *)(a1 + 1632), 0xFFFFFFFFFFFFFFFFLL);
  else
    v3(a1, -1uLL);
}
