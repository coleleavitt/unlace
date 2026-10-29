/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4521C
// Address: 0x0004521C

//----- (0004521C) --------------------------------------------------------
int __fastcall sub_4521C(_DWORD *a1, unsigned __int8 *a2, char *a3, int a4)
{
  unsigned int v8; // r5
  char v9; // r10
  int v10; // r8
  int v11; // r10
  int v12; // r3
  int v13; // r0

  v8 = a1[7];
  v9 = sub_70E74(1);
  v10 = sub_439C8((int)a1, a2, a3, a4);
  sub_70E74(v9);
  v11 = sub_70A10();
  while ( v8 < a1[7] )
  {
    if ( !sub_47498((int)a1) )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(508);
    }
  }
  v12 = a1[14];
  if ( v12 )
    v12 += 16;
  a1[17] = v12;
  if ( v10 )
    v13 = 0;
  else
    v13 = v11;
  sub_70A2C(v13);
  return v10;
}
// 45290: conditional instruction was optimized away because %ptr.4==0
// D5C00: using guessed type char under_debugger;
