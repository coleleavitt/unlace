/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetc
// Address: 0x0007B940

//----- (0007B940) --------------------------------------------------------
int __fastcall qlgetc(int a1)
{
  int v1; // r4
  size_t v2; // r0
  _BYTE v4[4]; // [sp+0h] [bp-8h] BYREF

  v1 = -1;
  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
      v2 = qfread(*(FILE **)(a1 + 8), v4, 1);
    else
      v2 = sub_7B4E0(a1, v4, 1);
    if ( v2 == 1 )
      return v4[0];
  }
  return v1;
}
