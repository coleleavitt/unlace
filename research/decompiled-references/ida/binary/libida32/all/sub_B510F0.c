__int64 __fastcall sub_B510F0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rdi

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 35 <= 3 )
    return sub_B73CB0(a1);
  if ( *(_BYTE *)((*(__int64 (**)(void))(*(_QWORD *)a1 + 32LL))() + 81) >> 5 != 2 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 4) != 0 )
      v3 = *(_QWORD *)v3;
LABEL_6:
    if ( (*(_BYTE *)(v3 + 8) & 0x7F) != 0x18 )
      return 1;
    while ( v3 == 48 || *(_QWORD *)(v3 - 8) )
    {
      v4 = *(_QWORD *)(sub_B68470(v3) + 16);
      if ( (v4 & 4) != 0 )
      {
        v3 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_6;
      }
      v3 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v3 + 8) & 0x7F) != 0x18 )
        return 1;
    }
  }
  return 0;
}

