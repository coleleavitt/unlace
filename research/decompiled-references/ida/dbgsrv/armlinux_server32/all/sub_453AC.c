/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453AC
// Address: 0x000453AC

//----- (000453AC) --------------------------------------------------------
int __fastcall sub_453AC(_DWORD *a1, unsigned __int8 *a2, char *a3, int a4)
{
  unsigned int v8; // r5
  char v9; // r10
  int v10; // r8
  int v11; // r10
  int v12; // r3
  int v13; // r0

  v8 = a1[7];
  v9 = sub_70FE0(1);
  v10 = sub_43B58((int)a1, a2, a3, a4);
  sub_70FE0(v9);
  v11 = sub_70B7C();
  while ( v8 < a1[7] )
  {
    if ( !sub_47628((int)a1) )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(508);
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
  sub_70B98(v13);
  return v10;
}
// 45420: conditional instruction was optimized away because %ptr.4==0
// D6C20: using guessed type char under_debugger;
