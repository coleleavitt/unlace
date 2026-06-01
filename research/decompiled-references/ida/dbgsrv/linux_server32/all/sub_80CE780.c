/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE780
// Address: 0x080CE780

//----- (080CE780) --------------------------------------------------------
_BYTE *__cdecl sub_80CE780(_BYTE *a1)
{
  _BYTE *v1; // ecx
  char v2; // al
  _BYTE *v3; // edx
  _BYTE *v4; // ebx

  v1 = a1;
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
  return v1;
}
