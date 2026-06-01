/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FDA8
// Address: 0x000000000048FDA8

//----- (000000000048FDA8) ----------------------------------------------------
__int64 __fastcall sub_48FDA8(int a1, char a2, int a3)
{
  int v5; // w21
  int v6; // w19
  int v7; // w1

  if ( a3 == 2 )
    return sub_48FD28(a1, a3);
  if ( (a2 & 3) != 0 )
  {
    v5 = 2;
  }
  else
  {
    if ( a3 == 1 )
      return sub_48FD28(a1, a3);
    v5 = 1;
  }
  v6 = 11;
  while ( (unsigned int)sub_48FD28(a1, v5) )
  {
    if ( !--v6 )
      return 0xFFFFFFFFLL;
    v7 = *__errno_location();
    if ( v7 != 11 && v7 != 4 )
      return 0xFFFFFFFFLL;
    sub_4924D8(10);
  }
  return sub_48FD28(a1, a3);
}
