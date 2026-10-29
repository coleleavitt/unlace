/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A2C4
// Address: 0x0002A2C4

//----- (0002A2C4) --------------------------------------------------------
int __fastcall sub_2A2C4(int result, bool (__fastcall *a2)(int a1, int a2, int a3, int a4))
{
  if ( !a2 )
    a2 = sub_22E68;
  *(_DWORD *)(result + 384) = a2;
  return result;
}
