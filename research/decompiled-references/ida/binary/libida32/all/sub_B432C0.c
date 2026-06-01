__int64 __fastcall sub_B432C0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rbx

  while ( 1 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x7F) == 0 || (*(_BYTE *)(a2 + 8) & 0x7F) == 0x18 )
      return 0;
    v4 = sub_B6D830(a2);
    if ( v4 == sub_B6D830(a1 + 64) )
      break;
    v5 = *(_QWORD *)(sub_B68470(a2) + 16);
    if ( (v5 & 4) != 0 )
      a2 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
    else
      a2 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return 1;
}

