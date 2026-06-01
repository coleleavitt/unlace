/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76A18
// Address: 0x00076A18

//----- (00076A18) --------------------------------------------------------
unsigned int __fastcall sub_76A18(char *a1, unsigned __int8 *a2, int a3)
{
  char *v3; // r4
  int v4; // r3
  int v7; // r8
  char *v8; // r0
  unsigned int v9; // r5

  v3 = a1;
  v4 = (unsigned __int8)*a1;
  v7 = a3 & 1;
  if ( v4 == 47 )
  {
    v4 = (unsigned __int8)a1[1];
    v3 = a1 + 1;
  }
  while ( v4 != 46 || *a2 == 46 || !v7 )
  {
    v9 = sub_76960(v3, a2, a3);
    if ( v9 )
      return v9;
    v8 = strchr(v3, 47);
    if ( !v8 )
      return v9;
    v4 = (unsigned __int8)v8[1];
    v3 = v8 + 1;
  }
  return 0;
}
