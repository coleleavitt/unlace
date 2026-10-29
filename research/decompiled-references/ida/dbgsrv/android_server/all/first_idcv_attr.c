/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: first_idcv_attr
// Address: 0x00000000000712F8

//----- (00000000000712F8) ----------------------------------------------------
char *__fastcall first_idcv_attr(char *result)
{
  _QWORD *v1; // x9
  _QWORD *v2; // x8

  if ( result )
  {
    if ( *result == 5 )
    {
      v1 = *((_QWORD **)result + 1);
      v2 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 == v1 + 1 )
      {
        return nullptr;
      }
      else if ( v2[5] )
      {
        return (char *)v2[4];
      }
      else
      {
        return &byte_F154B;
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
