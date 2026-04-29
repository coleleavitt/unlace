bool __fastcall sub_817D0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v5; // r13d
  __int64 v6; // r14
  __int16 v7; // ax
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax

  if ( !*(_QWORD *)(a1 + 24)
    || (*(_WORD *)(a3 + 24) & 0xFFFD) != 0xC && *(_WORD *)(a3 + 24) != 23
    || *(_BYTE *)(a3 + 81) != 1 )
  {
    return 0;
  }
  v5 = *(unsigned __int16 *)(a3 + 46);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)sub_55C30() )
  {
    if ( (unsigned int)(v5 - 129) > 8 )
      return 0;
  }
  else if ( (unsigned __int16)v5 > 0x84u )
  {
    return 0;
  }
  v7 = *(_WORD *)(a3 + 24);
  if ( v7 != 23 )
  {
    if ( (v7 & 0xFFFD) == 0xC )
    {
      v8 = *(unsigned __int16 *)(a3 + 86);
      if ( (v8 == 13 || v8 == 161 || sub_301E0(v6, *(__int64 **)(a1 + 24), v8)) && *(_BYTE *)(a3 + 121) == 5 )
        goto LABEL_14;
    }
    return 0;
  }
  v11 = *(unsigned __int16 *)(a3 + 86);
  if ( v11 != 161 && v11 != 13 )
    return 0;
LABEL_14:
  v9 = calc_frame_offset();
  v10 = *a2 & 0x7FFFFFF;
  if ( (*a2 & 0x8000000) != 0 )
    v10 = -(__int64)(*a2 & 0x7FFFFFF);
  return v9 == v10;
}
