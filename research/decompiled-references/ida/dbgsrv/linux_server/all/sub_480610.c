/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480610
// Address: 0x0000000000480610

//----- (0000000000480610) ----------------------------------------------------
_BYTE *__fastcall sub_480610(_BYTE *a1)
{
  _BYTE *result; // rax
  char v2; // dl
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi

  result = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = a1;
      v4 = nullptr;
      do
      {
        while ( v2 != 92 && v2 != 47 )
        {
          v2 = *++v3;
          if ( !v2 )
            goto LABEL_8;
        }
        v4 = v3;
        v2 = *++v3;
      }
      while ( v2 );
LABEL_8:
      if ( v4 )
        return v4 + 1;
    }
  }
  return result;
}
