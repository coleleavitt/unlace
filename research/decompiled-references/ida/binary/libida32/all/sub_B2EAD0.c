bool __fastcall sub_B2EAD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 48) & 1) == 0 )
  {
    sub_B169D0((__int64 *)v2, a2);
    v2 = *(_QWORD *)(a1 + 40);
    if ( !v2 )
      return 0;
    if ( (*(_BYTE *)(v2 + 48) & 1) == 0 )
    {
      sub_B169D0(*(__int64 **)(a1 + 40), a2);
      v2 = *(_QWORD *)(a1 + 40);
    }
  }
  v3 = *(_QWORD *)(v2 + 8);
  if ( !v3 )
  {
    if ( (*(_BYTE *)(v2 + 48) & 1) != 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 58 <= 3 && *(_BYTE *)(v3 + 73) >> 5 == 2 )
    return 1;
  if ( (*(_BYTE *)(v2 + 48) & 1) == 0 )
  {
LABEL_19:
    sub_B169D0((__int64 *)v2, a2);
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
      goto LABEL_12;
LABEL_20:
    if ( (*(_BYTE *)(v2 + 48) & 1) != 0 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_12:
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 58 <= 3 && *(_BYTE *)(v3 + 73) >> 5 != 2 )
    return 1;
  if ( (*(_BYTE *)(v2 + 48) & 1) != 0 )
  {
LABEL_15:
    if ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x14 )
    {
      if ( (*(_BYTE *)(v2 + 48) & 1) != 0 )
        return (*(_BYTE *)(v3 + 28) & 0x7F) == 19;
      goto LABEL_23;
    }
    return 1;
  }
LABEL_21:
  sub_B169D0((__int64 *)v2, a2);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
    goto LABEL_15;
LABEL_22:
  if ( (*(_BYTE *)(v2 + 48) & 1) != 0 )
    return 0;
LABEL_23:
  sub_B169D0((__int64 *)v2, a2);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( v3 )
    return (*(_BYTE *)(v3 + 28) & 0x7F) == 19;
  return 0;
}

