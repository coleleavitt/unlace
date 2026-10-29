/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EC50
// Address: 0x0003EC50

//----- (0003EC50) --------------------------------------------------------
int __fastcall sub_3EC50(int a1, int a2)
{
  char *v3; // [sp+0h] [bp-10h] BYREF
  unsigned int v4; // [sp+4h] [bp-Ch]
  int v5; // [sp+8h] [bp-8h]

  v4 = 0;
  v3 = nullptr;
  v5 = 0;
  sub_3E2D0((int)sub_3ECD8, (int)&v3, a1, a2);
  if ( v4 >= 2 )
    sub_1BBA0((int)"%s", v3);
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
    v5 = 0;
    v3 = nullptr;
  }
  return 0;
}
