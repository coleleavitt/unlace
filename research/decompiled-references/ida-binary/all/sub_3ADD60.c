__int64 __fastcall sub_3ADD60(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // edx

  if ( (*(_BYTE *)(a2 + 31) & 0xEF) == 0xD )
  {
    *a1 = *(_QWORD *)(a2 + 232);
  }
  else
  {
    v2 = 0;
    if ( *(_BYTE *)(a2 + 31) != 45 )
      return v2;
    *a1 = *(_QWORD *)(a2 + 288);
  }
  return 1;
}
