/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C558
// Address: 0x000000010003C558

//----- (000000010003C558) ----------------------------------------------------
unsigned __int8 *__fastcall sub_10003C558(unsigned __int8 *result)
{
  int v1; // w8
  void *v2; // x8
  unsigned __int8 *v3; // x19
  unsigned __int8 *v4; // x19

  if ( !result )
  {
    if ( under_debugger != 1 )
      goto LABEL_10;
    while ( 1 )
    {
      __break(1u);
LABEL_10:
      interr(2656);
    }
  }
  v1 = *result;
  if ( v1 == 5 )
  {
    v4 = result;
    sub_100031978(*((_QWORD *)result + 1), result);
    result = v4;
  }
  else if ( v1 == 7 )
  {
    v2 = *((void **)result + 1);
    if ( v2 )
    {
      v3 = result;
      *((_QWORD *)result + 2) = 0;
      qfree(v2);
      result = v3;
      *((_QWORD *)v3 + 3) = 0;
    }
  }
  *result = 2;
  *((_QWORD *)result + 1) = 0;
  return result;
}
// 10009D90D: using guessed type char under_debugger;
