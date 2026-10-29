void __fastcall sub_157D690(__int64 a1)
{
  bool v1; // zf

  v1 = *(_BYTE *)(a1 + 132) == 0;
  *(_QWORD *)a1 = off_2C44B38;
  if ( !v1 )
  {
    if ( *(_BYTE *)(a1 + 36) )
      return;
LABEL_5:
    free(*(void **)(a1 + 16));
    return;
  }
  free(*(void **)(a1 + 112));
  if ( !*(_BYTE *)(a1 + 36) )
    goto LABEL_5;
}
