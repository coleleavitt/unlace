__int64 __fastcall sub_76F3C0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( (*(_BYTE *)(a2 + 8) & 0x7F) == 0 || (*(_BYTE *)(a2 + 8) & 0x7F) == 0x16 )
    return 0;
  v3 = a2;
  while ( 1 )
  {
    v4 = sub_79CC40(v3);
    if ( v4 == sub_79CC40(a1 + 64) )
      break;
    v5 = *(_QWORD *)(sub_79A2E0(v3) + 16);
    v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) != 0 )
    {
      v3 = *(_QWORD *)v3;
      if ( (*(_BYTE *)(v3 + 8) & 0x7F) == 0 || (*(_BYTE *)(v3 + 8) & 0x7F) == 0x16 )
        return 0;
    }
    else if ( (*(_BYTE *)(v3 + 8) & 0x7F) == 0 || (*(_BYTE *)(v3 + 8) & 0x7F) == 0x16 )
    {
      return 0;
    }
  }
  return 1;
}

