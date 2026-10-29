/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: first_idcv_attr
// Address: 0x000000010003436C

//----- (000000010003436C) ----------------------------------------------------
char *__fastcall first_idcv_attr(char *result)
{
  _QWORD *v1; // x9
  _QWORD *v2; // x8

  if ( result )
  {
    if ( *result != 5 )
      return nullptr;
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
      return &byte_100075A30;
    }
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
