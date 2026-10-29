/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E890
// Address: 0x000000000043E890

//----- (000000000043E890) ----------------------------------------------------
char *__fastcall sub_43E890(_QWORD *a1, int a2)
{
  _QWORD *v2; // x0
  int v4; // w1

  if ( a2 < 0 )
  {
    if ( a2 != -1 )
    {
      v4 = -a2;
      if ( qword_520148 > (unsigned __int64)v4 )
        return (char *)off_520150[5 * v4];
    }
    return &byte_4B31F0;
  }
  if ( (unsigned __int64)a2 >= a1[1] )
    return &byte_4B31F0;
  v2 = *(_QWORD **)(*a1 + 8LL * a2);
  if ( v2[1] )
    return (char *)*v2;
  else
    return (char *)&qword_4B2D48;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
