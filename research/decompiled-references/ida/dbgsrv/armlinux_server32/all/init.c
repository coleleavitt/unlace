/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: init
// Address: 0x0008DB2C

//----- (0008DB2C) --------------------------------------------------------
int __fastcall init(int a1, int a2, int a3)
{
  int result; // r0
  int (__fastcall **v7)(int, int, int); // r5
  int v8; // r6
  int i; // r4
  int (__fastcall *v10)(int, int, int); // t1

  result = init_proc();
  v7 = (int (__fastcall **)(int, int, int))&off_D045C;
  v8 = &off_D0490 - &off_D045C;
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v10 = *v7++;
      result = v10(a1, a2, a3);
    }
  }
  return result;
}
// D045C: using guessed type _UNKNOWN *off_D045C;
// D0490: using guessed type _UNKNOWN *off_D0490;
