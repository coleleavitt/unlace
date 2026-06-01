/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74E2C
// Address: 0x00074E2C

//----- (00074E2C) --------------------------------------------------------
int __fastcall sub_74E2C(int a1)
{
  unsigned __int8 v2; // [sp+3h] [bp-5h] BYREF

  if ( sub_74A28(a1, &v2, 1) == 1 )
    return v2;
  else
    return -1;
}
