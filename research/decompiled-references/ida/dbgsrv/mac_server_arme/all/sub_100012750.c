/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012750
// Address: 0x0000000100012750

//----- (0000000100012750) ----------------------------------------------------
char *__fastcall sub_100012750(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // x8
  bool v3; // cf
  unsigned __int64 v4; // x8

  v2 = a1[2];
  v3 = v2 != 0;
  v4 = v2 - 1;
  if ( !v3 )
    v4 = 0;
  if ( v4 > a2 && a1[4] )
    return (char *)(a1[1] + a2);
  else
    return &byte_10007ABE8;
}
// 10007ABE8: using guessed type char byte_10007ABE8;
