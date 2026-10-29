__int64 __fastcall sub_16FEB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x48 )
    a2 = *(_QWORD *)(a2 + 48);
  return sub_169D3F0(*(_QWORD *)(a1 + 176), a2, nullptr, a4, a5, a6);
}
