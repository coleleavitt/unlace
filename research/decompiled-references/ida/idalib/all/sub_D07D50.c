__int64 __fastcall sub_D07D50(__int64 a1, _QWORD *a2)
{
  bool v2; // zf

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v2 = *(_BYTE *)(a1 + 821) == 0;
    *(_QWORD *)(a1 + 1240) = *a2;
    if ( !v2 )
      *(_BYTE *)(a1 + 821) = 0;
  }
  return 1;
}
