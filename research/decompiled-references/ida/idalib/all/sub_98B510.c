char **__fastcall sub_98B510(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a2 > 0x14 )
  {
    v2 = a1 + a2 - 21;
    if ( !(*(_QWORD *)v2 ^ 0x706D6F4368746957LL | *(_QWORD *)(v2 + 8) ^ 0x61486E6F6974656CLL)
      && *(_DWORD *)(v2 + 16) == 1701602414
      && *(_BYTE *)(v2 + 20) == 114 )
    {
      return &off_2B402C0;
    }
    v3 = a1 + a2 - 14;
    if ( *(_QWORD *)v3 == 0x706D6F4368746957LL && *(_DWORD *)(v3 + 8) == 1769235820 && *(_WORD *)(v3 + 12) == 28271 )
      return &off_2B402D0;
LABEL_13:
    v6 = a1 + a2 - 19;
    if ( !(*(_QWORD *)v6 ^ 0x706D6F4368746957LL | *(_QWORD *)(v6 + 8) ^ 0x6C426E6F6974656CLL)
      && *(_WORD *)(v6 + 16) == 25455
      && *(_BYTE *)(v6 + 18) == 107 )
    {
      return &off_2B402E0;
    }
    goto LABEL_15;
  }
  if ( a2 <= 0xD )
  {
    if ( a2 <= 0xA )
    {
      if ( a2 <= 8 )
        return (char **)&unk_2B40310;
      goto LABEL_16;
    }
LABEL_15:
    v7 = a1 + a2 - 11;
    if ( *(_QWORD *)v7 == 0x6C70655268746957LL && *(_WORD *)(v7 + 8) == 21625 && *(_BYTE *)(v7 + 10) == 111 )
      return &off_2B402F0;
LABEL_16:
    v8 = a1 + a2 - 9;
    if ( *(_QWORD *)v8 == 0x6C70655268746957LL && *(_BYTE *)(v8 + 8) == 121 )
      return &off_2B40300;
    return (char **)&unk_2B40310;
  }
  v5 = a1 + a2 - 14;
  if ( *(_QWORD *)v5 != 0x706D6F4368746957LL || *(_DWORD *)(v5 + 8) != 1769235820 || *(_WORD *)(v5 + 12) != 28271 )
  {
    if ( a2 <= 0x12 )
      goto LABEL_15;
    goto LABEL_13;
  }
  return &off_2B402D0;
}
