/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DEA4
// Address: 0x0007DEA4

//----- (0007DEA4) --------------------------------------------------------
int __fastcall sub_7DEA4(int *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r10
  _BOOL4 v9; // r3
  __int64 v11; // [sp+4h] [bp-18h] BYREF
  unsigned int v12[2]; // [sp+Ch] [bp-10h] BYREF

  v8 = sub_7DDFC(a1, a2, a3, a4);
  v9 = a2 != a3;
  if ( v8 )
    v9 = 0;
  if ( v9 )
  {
    LODWORD(v11) = a2;
    HIDWORD(v11) = a2 + a4;
    if ( !sub_7B5D4(a1, &v11) )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(42);
    }
    sub_7C1B4((void **)a1, (unsigned int *)&v11);
    v12[0] = a3;
    v12[1] = a3 + a4;
    sub_7C01C((int)a1, v12);
  }
  return v8;
}
// D5C00: using guessed type char under_debugger;
