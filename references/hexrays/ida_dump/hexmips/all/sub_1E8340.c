__int64 __fastcall sub_1E8340(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
    *(_DWORD *)(**(_QWORD **)(a1 + 16) + 104LL * *(int *)(a3 + 44) + 24) |= 0x400u;
  return 0;
}
