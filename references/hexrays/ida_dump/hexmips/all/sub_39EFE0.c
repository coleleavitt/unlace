char __fastcall sub_39EFE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  bool (__fastcall *v4)(__int64); // rax
  __int64 that; // rax
  unsigned __int64 *func; // rbp

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 52) = 1;
  *(_QWORD *)(a1 + 40) = v2;
  v4 = *(bool (__fastcall **)(__int64))(v3 + 16);
  if ( v4 != sub_39E3E0 )
    return v4(a1);
  if ( *(_DWORD *)(a1 + 48) != 2 )
  {
    if ( v2 != -1 )
    {
LABEL_4:
      that = next_that(v2, *(_QWORD *)(a1 + 32), sub_39DD60, 0);
      *(_QWORD *)(a1 + 40) = that;
      return that != -1;
    }
    *(_QWORD *)(a1 + 40) = 0;
    if ( (get_flags_ex(0, 4) & 0x600) != 0x400 )
    {
      v2 = *(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    return 1;
  }
  func = (unsigned __int64 *)get_func(v2);
  if ( (func || (func = (unsigned __int64 *)get_next_func(*(_QWORD *)(a1 + 40))) != nullptr)
    && *func < *(_QWORD *)(a1 + 32)
    && sub_139AA0(*(_QWORD *)(a1 + 16), *func) )
  {
    *(_BYTE *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 40) = *func;
    return 1;
  }
  return 0;
}
