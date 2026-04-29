__int64 __fastcall sub_96B20(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v1 + 5) & 8) != 0 )
    *(_DWORD *)(a1 + 40) += sub_950D0(*(_QWORD *)(a1 + 16), v1);
  return 0;
}
