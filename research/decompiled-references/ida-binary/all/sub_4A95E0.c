__int64 sub_4A95E0()
{
  __int64 **v0; // rbp
  __int64 result; // rax
  __int64 **v2; // r12
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, unsigned __int64); // rax

  v0 = (__int64 **)qword_8D1C20;
  result = xmmword_8D1C28;
  v2 = (__int64 **)(qword_8D1C20 + 8 * xmmword_8D1C28);
  if ( v2 != (__int64 **)qword_8D1C20 )
  {
    do
    {
      while ( 1 )
      {
        v3 = *v0;
        v4 = **v0;
        *((_BYTE *)*v0 + 2024) = 0;
        v5 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v4 + 600);
        if ( v5 != sub_4A95A0 )
          break;
        ++v0;
        result = vault_files_dirtree_widget_t__::vfunc_24(v3 + 13);
        *((_DWORD *)v3 + 503) &= 0xFFFFFF87;
        if ( v2 == v0 )
          return result;
      }
      ++v0;
      result = v5((__int64)v3, -1uLL);
    }
    while ( v2 != v0 );
  }
  return result;
}
