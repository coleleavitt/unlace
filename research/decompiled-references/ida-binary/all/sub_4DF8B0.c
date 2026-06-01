unsigned __int64 __fastcall sub_4DF8B0(__int64 *a1, const char *a2)
{
  void (*v2)(void); // rax
  __int64 v3; // rax
  void (__fastcall *v4)(__int64, unsigned __int64); // rax

  v2 = *(void (**)(void))(*a1 + 88);
  if ( (char *)v2 == (char *)sub_4DEC50 )
  {
    sub_4DC6F0((__int64)(a1 + 141), a2);
    v3 = *a1;
    *((_DWORD *)a1 + 420) &= ~2u;
    v4 = *(void (__fastcall **)(__int64, unsigned __int64))(v3 + 192);
    if ( v4 == vault_files_dirtree_widget_t__::vfunc_24 )
      sub_4DEB40(a1 + 204, 0xFFFFFFFFFFFFFFFFLL);
    else
      v4((__int64)a1, -1uLL);
    return sub_4DF7B0(a1);
  }
  else
  {
    v2();
    return sub_4DF7B0(a1);
  }
}
