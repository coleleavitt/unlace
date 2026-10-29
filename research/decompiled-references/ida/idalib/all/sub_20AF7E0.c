__int64 __fastcall sub_20AF7E0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  if ( *(_BYTE *)a1 == 22 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( !v1 )
      return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( !v3 )
      return 0;
    v1 = *(_QWORD *)(v3 + 72);
    if ( !v1 )
      return 0;
  }
  if ( (*(_BYTE *)(v1 + 7) & 0x20) != 0 )
    return sub_20AF750(v1, 0);
  return 0;
}
