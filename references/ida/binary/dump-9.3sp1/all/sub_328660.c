__int64 __fastcall sub_328660(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( (*a3 & 0xE) == 0 && (*a3 & 0x30) != 0 )
    ++*(_DWORD *)(a1 + 16);
  return 0;
}
