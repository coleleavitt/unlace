__int64 __fastcall sub_94660(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v1 + 5) & 8) != 0 )
    *(_DWORD *)(a1 + 40) += sub_92C10(*(_QWORD *)(a1 + 16), v1);
  return 0;
}
