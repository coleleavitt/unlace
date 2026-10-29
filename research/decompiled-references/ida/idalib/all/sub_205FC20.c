__int64 __fastcall sub_205FC20(__int64 a1)
{
  char v1; // al
  char v2; // al

  v1 = *(_BYTE *)(a1 + 40);
  if ( (v1 & 1) != 0 )
  {
    v2 = (v1 & 2) != 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = v1 | 1;
    v2 = sub_20520C0(a1);
    *(_BYTE *)(a1 + 40) = (2 * (v2 & 1)) | *(_BYTE *)(a1 + 40) & 0xFD;
  }
  if ( v2 )
    return sub_205FBA0(a1, 0);
  else
    return 0;
}
