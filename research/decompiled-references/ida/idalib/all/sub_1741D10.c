__int64 __fastcall sub_1741D10(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 1) != 41 )
  {
    if ( v1 == 4 )
      return *(_QWORD *)(a1 + 16);
LABEL_6:
    abort();
  }
  if ( v1 != 7 )
    goto LABEL_6;
  return *(_QWORD *)(a1 + 24);
}
