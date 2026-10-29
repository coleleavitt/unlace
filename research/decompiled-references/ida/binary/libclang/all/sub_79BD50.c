char __fastcall sub_79BD50(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 4 )
    return *(_BYTE *)(a1 + 9) >> 5 == 2;
  return ((__int64 (*)(void))((char *)qword_3C92138 + *((int *)qword_3C92138 + (*(_BYTE *)(a1 + 8) & 0x7F))))();
}

