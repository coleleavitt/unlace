char __fastcall sub_8AF050(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 1592) + 232LL * a2;
  if ( (*(_BYTE *)(v2 + 3) & 0x40) != 0 )
    return sub_8AEDF0(a1 + 736, v2 + 8, v2 + 72);
  else
    return 0;
}

