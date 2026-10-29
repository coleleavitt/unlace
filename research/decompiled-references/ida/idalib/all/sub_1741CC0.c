__int64 __fastcall sub_1741CC0(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 1) != 29 )
  {
    if ( v1 == 3 )
      return *(_QWORD *)(a1 + 16);
LABEL_9:
    abort();
  }
  if ( v1 == -1 )
    goto LABEL_9;
  if ( !v1 )
    return 0;
  if ( v1 != 9 )
    goto LABEL_9;
  return *(_QWORD *)(a1 + 80);
}
