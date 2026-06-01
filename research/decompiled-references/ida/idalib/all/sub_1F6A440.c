bool __fastcall sub_1F6A440(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = sub_B8DFE0(a1);
      if ( (*(_BYTE *)(v2 + 8) & 0x7Fu) - 18 > 0x3F )
        break;
      v3 = sub_B8C1B0(v2);
      if ( !v3 )
        break;
      v4 = *(_BYTE *)(sub_B8DFE0(a1) + 8) & 0x7F;
      if ( v4 == 24 || !v4 )
        break;
      a1 = v3;
    }
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x47 )
      break;
    v5 = *(_QWORD *)(a1 + 48);
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x27 )
      break;
    a1 = 0;
    if ( (*(_DWORD *)(v5 + 40) & 7) == 7 )
    {
      v6 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_DWORD *)v6 )
        a1 = *(_QWORD *)(v6 + 16);
    }
  }
  return (unsigned __int8)sub_B844D0((_BYTE *)a1) == 5;
}
