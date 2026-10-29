/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qbasename
// Address: 0x00000000000C0EF0

//----- (00000000000C0EF0) ----------------------------------------------------
_BYTE *__fastcall qbasename(_BYTE *a1)
{
  char v1; // cl
  _BYTE *v2; // rax
  _BYTE *v3; // rdx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v2 = nullptr;
      v3 = a1;
      if ( v1 != 47 )
        goto LABEL_6;
LABEL_9:
      v2 = v3;
      do
      {
        v1 = *++v3;
        if ( v1 == 47 )
          goto LABEL_9;
LABEL_6:
        if ( v1 == 92 )
          goto LABEL_9;
      }
      while ( v1 );
      if ( v2 )
        return v2 + 1;
    }
  }
  return a1;
}
