unsigned __int64 __fastcall sub_F5B8B0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x24 && (a2 & 7) == 1 )
    return 0;
  else
    return sub_F5B760(a1, a2);
}

