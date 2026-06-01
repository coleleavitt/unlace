bool __fastcall sub_3BCC70(__int64 a1, int a2)
{
  __int64 v2; // r12
  unsigned __int16 v3; // r13
  __int64 v5; // rdx
  unsigned __int64 v6; // rax

  if ( !*(_QWORD *)(a1 + 232) )
    return 0;
  v2 = *(_QWORD *)(a1 + 208);
  if ( (*(_BYTE *)(v2 + 31) & 0xEF) != 0xD )
    return 0;
  if ( *(_QWORD *)(v2 + 32) == -1 )
    return 0;
  v3 = *(_WORD *)(v2 + 128);
  if ( !(unsigned __int8)is_attached_custom_data_format() )
    return 0;
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF0LL | 0xC;
  *(_DWORD *)(v2 + 128) = v3 | (a2 << 16);
  *(_QWORD *)(v2 + 120) = v6;
  return (unsigned int)set_tinfo_property4(*(_QWORD *)(a1 + 208) + 8LL, 14, v5, v2 + 120, 0, 0) == 0;
}
