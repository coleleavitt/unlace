/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D468
// Address: 0x0003D468

//----- (0003D468) --------------------------------------------------------
int __fastcall sub_3D468(int a1, int a2)
{
  char *v2; // r0
  char *v4; // [sp+0h] [bp-10h] BYREF
  unsigned int v5; // [sp+4h] [bp-Ch]
  int v6; // [sp+8h] [bp-8h]

  v4 = nullptr;
  v5 = 0;
  v6 = 0;
  sub_3CAA0((int)sub_3CA08, (int)&v4, a1, a2);
  v2 = v4;
  if ( v5 > 1 )
  {
    sub_171B0((int)"%s", v4);
    v2 = v4;
  }
  if ( v2 )
  {
    v5 = 0;
    sub_77F70(v2);
  }
  return 0;
}
