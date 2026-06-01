/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qbasename
// Address: 0x000AE4C0

//----- (000AE4C0) --------------------------------------------------------
_BYTE *__cdecl qbasename(_BYTE *a1)
{
  _BYTE *result; // eax
  char v2; // bl
  _BYTE *v3; // ecx
  _BYTE *v4; // edx

  result = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = nullptr;
      v4 = a1;
      if ( v2 != 47 )
        goto LABEL_6;
LABEL_9:
      v3 = v4;
      do
      {
        v2 = *++v4;
        if ( v2 == 47 )
          goto LABEL_9;
LABEL_6:
        if ( v2 == 92 )
          goto LABEL_9;
      }
      while ( v2 );
      if ( v3 )
        return v3 + 1;
    }
  }
  return result;
}
