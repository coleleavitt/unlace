char __fastcall calc_arglocs(__int64 a1)
{
  unsigned int v3; // edi
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 88) & 0xF0) == 0xC0 )
  {
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 > 0x10 )
      goto LABEL_7;
  }
  else if ( (*(_BYTE *)(a1 + 88) & 0xF0u) > 0x10 )
  {
    return sub_3792E0(0x7D9u, a1) > 0;
  }
  v3 = getinf(99);
  if ( !v3 )
    return 0;
LABEL_7:
  if ( v3 <= 0x1FF && (v3 > 0xFF || (v3 & 0xFFFFFF0F) == 0) )
    return sub_3792E0(0x7D9u, a1) > 0;
  get_custom_callcnv(v3);
  if ( !v4 )
    return 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a1);
}
