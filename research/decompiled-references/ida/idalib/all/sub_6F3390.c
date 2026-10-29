__int64 __fastcall sub_6F3390(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rcx

  if ( ((*(_BYTE *)(a1 + 19) >> 1) & 0xFu) - 6 > 2 )
    return 0;
  v1 = (a1 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 19) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
     & 0xFFFFFFFFFFFFFFF8LL;
  v2 = v1 + 8LL * ((*(_BYTE *)(a1 + 19) & 0x40) != 0);
  if ( (*(_BYTE *)(a1 + 19) & 0x40) != 0 && (*(_BYTE *)(v1 + 1) & 4) != 0 )
    v2 += 8LL;
  return *(_QWORD *)v2;
}
