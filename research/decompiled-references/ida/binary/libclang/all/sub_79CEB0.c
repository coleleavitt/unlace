unsigned __int64 __fastcall sub_79CEB0(unsigned __int64 a1)
{
  __int64 v2; // rax

  if ( (*(_BYTE *)(a1 + 8) & 0x7F) != 0x16 && (*(_BYTE *)(a1 + 8) & 0x7F) != 0 )
  {
    do
    {
      v2 = *(_QWORD *)(sub_79A2E0(a1) + 16);
      a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 4) != 0 )
        a1 = *(_QWORD *)a1;
    }
    while ( (*(_BYTE *)(a1 + 8) & 0x7F) != 0 && (*(_BYTE *)(a1 + 8) & 0x7F) != 0x16 );
  }
  return sub_79CC40(a1);
}

