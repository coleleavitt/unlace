/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AB00
// Address: 0x000000000006AB00

//----- (000000000006AB00) ----------------------------------------------------
char *__fastcall sub_6AB00(_QWORD *a1, int a2)
{
  _QWORD *v2; // x8
  unsigned __int64 v4; // x8

  if ( a2 < 0 )
  {
    if ( a2 == -1 )
    {
      return "";
    }
    else
    {
      v4 = -a2;
      if ( qword_164A28 <= v4 )
        return "";
      else
        return (char *)off_164A30[5 * v4];
    }
  }
  else if ( a1[1] <= (unsigned __int64)a2 )
  {
    return "";
  }
  else
  {
    v2 = *(_QWORD **)(*a1 + 8LL * a2);
    if ( v2[1] )
      return (char *)*v2;
    else
      return &byte_F154B;
  }
}
// F154B: using guessed type char byte_F154B;
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
