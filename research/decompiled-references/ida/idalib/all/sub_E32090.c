__int64 __fastcall sub_E32090(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdi

  v5 = *a1;
  if ( !*a1 )
    return 0;
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) == 0 )
  {
    if ( v6 )
      return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
    return 0;
  }
  if ( !v6 )
    return 0;
  if ( ((*(_WORD *)v6 + 509) & 0x1FFu) <= 0x7E )
    return sub_C00A40(v6, a2, a3, a4, a5);
  else
    return sub_EEB7E0(v6);
}
