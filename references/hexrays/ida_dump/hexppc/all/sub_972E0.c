__int64 __fastcall sub_972E0(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v1 + 5) & 8) != 0 )
    *(_DWORD *)(a1 + 40) += sub_95890(*(_QWORD *)(a1 + 16), v1);
  return 0;
}
