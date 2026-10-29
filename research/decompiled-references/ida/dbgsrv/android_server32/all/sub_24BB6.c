/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24BB6
// Address: 0x00024BB6

//----- (00024BB6) --------------------------------------------------------
int __fastcall sub_24BB6(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r1

  result = sub_1F360(a1, (int)a2, 0);
  if ( result == 1 )
  {
    v5 = sub_64970(a1, a2);
    result = -6;
    if ( !v5 )
    {
      sub_649C0(a1, (int)a2);
      return 1;
    }
  }
  return result;
}
