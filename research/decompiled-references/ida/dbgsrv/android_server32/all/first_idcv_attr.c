/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: first_idcv_attr
// Address: 0x000460F8

//----- (000460F8) --------------------------------------------------------
char *__fastcall first_idcv_attr(int a1)
{
  char *result; // r0
  _DWORD *v3; // r2
  _DWORD *v4; // r1

  result = nullptr;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v3 = *(_DWORD **)(a1 + 8);
      v4 = (_DWORD *)*v3;
      if ( (_DWORD *)*v3 != v3 + 1 )
      {
        if ( v4[5] )
          return (char *)v4[4];
        else
          return &byte_B3CBE;
      }
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
