char __fastcall calc_arglocs(__int64 a1)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 custom_callcnv; // rax

  if ( (*(_BYTE *)(a1 + 88) & 0xF0) == 0xC0 )
  {
    v3 = *(unsigned int *)(a1 + 28);
    if ( (unsigned int)v3 > 0x10 )
      goto LABEL_7;
  }
  else if ( (*(_BYTE *)(a1 + 88) & 0xF0u) > 0x10 )
  {
    return sub_375980(0x7D9u, a1) > 0;
  }
  v4 = getinf(99);
  v3 = v4;
  if ( !v4 )
    return 0;
LABEL_7:
  if ( (unsigned int)v3 <= 0x1FF && ((unsigned int)v3 > 0xFF || (v3 & 0xFFFFFF0F) == 0) )
    return sub_375980(0x7D9u, a1) > 0;
  custom_callcnv = get_custom_callcnv(v3);
  if ( !custom_callcnv )
    return 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)custom_callcnv + 16LL))(custom_callcnv, a1);
}

