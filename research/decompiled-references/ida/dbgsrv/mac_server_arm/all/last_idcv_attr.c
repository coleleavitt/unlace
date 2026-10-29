/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: last_idcv_attr
// Address: 0x00000001000343B0

//----- (00000001000343B0) ----------------------------------------------------
char *__fastcall last_idcv_attr(char *result)
{
  _QWORD *v1; // x8
  _QWORD *v2; // x8
  _QWORD *v3; // t1
  _QWORD *v4; // x10
  _QWORD *v5; // x9
  bool v6; // zf

  if ( result )
  {
    if ( *result != 5 )
      return nullptr;
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
          v5 = v4;
          v4 = (_QWORD *)v4[1];
        }
        while ( v4 );
      }
      else
      {
        do
        {
          v5 = (_QWORD *)v2[2];
          v6 = *v5 == (_QWORD)v2;
          v2 = v5;
        }
        while ( v6 );
      }
      if ( v5[5] )
        return (char *)v5[4];
      else
        return &byte_100075A30;
    }
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
