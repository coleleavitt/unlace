__int64 __fastcall sub_53CF90(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  if ( a2 <= 0xFF )
    return 0;
  v2 = sub_5340D0((__int64)a1, a2);
  if ( (~*(_BYTE *)(v2 + 68) & 0x70) == 0 )
  {
    if ( *(_QWORD *)v2 <= 0xFFu )
      return 0;
    v2 = sub_5340D0((__int64)a1, *(_QWORD *)v2);
  }
  if ( !v2 || !sub_53CE30(v2, *a1, a2, 1073741826) || (*(_BYTE *)(v2 + 70) & 0x2F) != 0xD || *(_QWORD *)(v2 + 48) == -1 )
    return 0;
  return v2;
}
