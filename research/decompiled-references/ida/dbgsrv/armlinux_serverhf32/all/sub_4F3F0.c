/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F3F0
// Address: 0x0004F3F0

//----- (0004F3F0) --------------------------------------------------------
int __fastcall sub_4F3F0(int *a1, int a2, int a3)
{
  unsigned __int8 v6; // [sp+3h] [bp-5h] BYREF

  if ( !a2 )
    sub_4B808((int)a1, a3);
  if ( sub_4D3F0((int)a1, a3) )
    return 2;
  if ( sub_4F298(a1, a3, &v6) )
    return -1;
  return v6;
}
