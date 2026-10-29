__int64 __fastcall sub_B7D7F0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi

LABEL_1:
  if ( (*(_BYTE *)(a1 + 84) & 3) != 2 )
  {
    while ( !sub_B749D0(a1) || (*(_BYTE *)(a1 + 84) & 4) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x26 || (*(_BYTE *)(a1 + 87) & 0x20) == 0 )
      {
        v5 = sub_B7D580(a1, 1, v2, v3);
        if ( v5 && (unsigned __int8)sub_B7D7F0(v5) )
          return 1;
        if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 35 > 3 || !(unsigned __int8)sub_B98950(a1) )
          return 0;
        v6 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
        if ( (v6 & 4) != 0 )
          v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v7 )
          v7 -= 64LL;
        a1 = sub_B96F60(v7);
        goto LABEL_1;
      }
      a1 = *(_QWORD *)(a1 + 184);
      if ( (*(_BYTE *)(a1 + 84) & 3) == 2 )
        return 1;
    }
  }
  return 1;
}
