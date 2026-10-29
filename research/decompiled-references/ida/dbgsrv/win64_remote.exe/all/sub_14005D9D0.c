/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D9D0
// Address: 0x000000014005D9D0

//----- (000000014005D9D0) ----------------------------------------------------
_BYTE *__fastcall sub_14005D9D0(_BYTE *a1)
{
  char v1; // al
  _BYTE *v2; // r8
  _BYTE *v3; // rdx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v2 = nullptr;
      v3 = a1;
      do
      {
        if ( v1 == 47 || v1 == 92 )
          v2 = v3;
        v1 = *++v3;
      }
      while ( v1 );
      if ( v2 )
        return v2 + 1;
      if ( a1[1] == 58 )
        a1 += 2;
    }
  }
  return a1;
}
