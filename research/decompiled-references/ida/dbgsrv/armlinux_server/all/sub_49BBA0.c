/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BBA0
// Address: 0x000000000049BBA0

//----- (000000000049BBA0) ----------------------------------------------------
_BYTE *__fastcall sub_49BBA0(_BYTE *a1)
{
  _BYTE *v1; // x20
  unsigned __int8 v2; // w19
  const unsigned __int16 *v3; // x1
  unsigned __int8 v4; // t1

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( (*a1 & 0x80) == 0 )
    {
      v3 = *__ctype_b_loc();
      do
      {
        if ( (v3[v2] & 0x2000) == 0 )
          break;
        v4 = *++v1;
        v2 = v4;
      }
      while ( (v4 & 0x80) == 0 );
    }
  }
  return v1;
}
