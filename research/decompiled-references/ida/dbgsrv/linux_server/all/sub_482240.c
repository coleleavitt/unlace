/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482240
// Address: 0x0000000000482240

//----- (0000000000482240) ----------------------------------------------------
_BYTE *__fastcall sub_482240(_BYTE *a1, char *a2, __int64 a3)
{
  _BYTE *v3; // rdx
  char v4; // al

  if ( a3 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1225);
LABEL_13:
    BUG();
  }
  v3 = &a1[a3];
  if ( a1 >= v3 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(520);
    goto LABEL_13;
  }
  if ( a1 == v3 - 1 )
  {
LABEL_8:
    *(v3 - 1) = 0;
    return v3 - 1;
  }
  else
  {
    while ( 1 )
    {
      v4 = *a2++;
      *a1 = v4;
      if ( !v4 )
        return a1;
      if ( ++a1 == v3 - 1 )
        goto LABEL_8;
    }
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
