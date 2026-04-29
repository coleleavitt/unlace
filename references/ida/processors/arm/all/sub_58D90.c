__int64 __fastcall sub_58D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 )
    return 0;
  if ( (*(_BYTE *)(a6 + 4) & 1) == 0 && *(_QWORD *)(a6 + 16) != -1 )
    sel2para();
  if ( sub_23880() < 0 )
    return 0;
  op_offset_ex();
  return 1;
}
