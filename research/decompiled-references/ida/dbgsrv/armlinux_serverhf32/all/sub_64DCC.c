/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64DCC
// Address: 0x00064DCC

//----- (00064DCC) --------------------------------------------------------
int __fastcall sub_64DCC(_DWORD *a1)
{
  int (*v3)(); // r2
  int v4; // r0
  int v5; // r3

  if ( (int)a1[115] >= 0 )
    return a1[115];
  v3 = *(int (**)())(*a1 + 312);
  if ( v3 == sub_14F28 || (v4 = v3(), v5 = v4, v4 < 0) )
  {
    a1[115] = 0;
    return 0;
  }
  else
  {
    if ( v4 >= 16 )
      v5 = 16;
    a1[115] = v5;
    return v5;
  }
}
