__int64 __fastcall sub_B6D960(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi

  for ( ;
        (*(_BYTE *)(a1 + 8) & 0x7F) != 0 && (*(_BYTE *)(a1 + 8) & 0x7F) != 0x18;
        a1 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(sub_B68470(a1) + 16);
      if ( (v7 & 4) != 0 )
        break;
      a1 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 || (*(_BYTE *)(a1 + 8) & 0x7F) == 0x18 )
        return sub_B6D830(a1, a2, a3, a4, a5, a6);
    }
  }
  return sub_B6D830(a1, a2, a3, a4, a5, a6);
}

