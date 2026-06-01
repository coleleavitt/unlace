/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: last_idcv_attr
// Address: 0x0000000000071344

//----- (0000000000071344) ----------------------------------------------------
char *__fastcall last_idcv_attr(char *result)
{
  _QWORD *v1; // x8
  _QWORD *v2; // x8
  _QWORD *v3; // t1
  _QWORD *v4; // x9
  _QWORD *v5; // x9

  if ( result )
  {
    if ( *result == 5 )
    {
      v1 = *((_QWORD **)result + 1);
      v3 = (_QWORD *)*v1;
      v2 = v1 + 1;
      if ( v2 == v3 )
      {
        return nullptr;
      }
      else
      {
        v4 = (_QWORD *)*v2;
        if ( *v2 )
        {
          do
          {
            v2 = v4;
            v4 = (_QWORD *)v4[1];
          }
          while ( v4 );
        }
        else
        {
          do
          {
            v5 = v2;
            v2 = (_QWORD *)v2[2];
          }
          while ( (_QWORD *)*v2 == v5 );
        }
        if ( v2[5] )
          return (char *)v2[4];
        else
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
