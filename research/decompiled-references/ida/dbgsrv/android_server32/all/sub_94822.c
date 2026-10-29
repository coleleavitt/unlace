/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94822
// Address: 0x00094822

//----- (00094822) --------------------------------------------------------
int __fastcall sub_94822(int a1)
{
  int v1; // r2

  v1 = *(unsigned __int8 *)(a1 + 5);
  if ( v1 == 2 )
    return (**(int (__fastcall ***)(int))a1)(a1);
  else
    return v1 == 0;
}
