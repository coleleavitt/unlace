/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E600
// Address: 0x0003E600

//----- (0003E600) --------------------------------------------------------
int __fastcall sub_3E600(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 0 )
    sub_147F8();
  return *(unsigned __int8 *)(*a1 + a2);
}
