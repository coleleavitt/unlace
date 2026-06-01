/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qbasename
// Address: 0x000000010007BD10

//----- (000000010007BD10) ----------------------------------------------------
_BYTE *__fastcall qbasename(_BYTE *a1)
{
  _BYTE *result; // rax
  char v2; // si
  _BYTE *v3; // rcx
  _BYTE *i; // rdx

  result = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = nullptr;
      for ( i = a1; ; ++i )
      {
        if ( v2 == 47 || v2 == 92 )
        {
          v3 = i;
        }
        else if ( !v2 )
        {
          if ( v3 )
            return v3 + 1;
          return result;
        }
        v2 = i[1];
      }
    }
  }
  return result;
}
