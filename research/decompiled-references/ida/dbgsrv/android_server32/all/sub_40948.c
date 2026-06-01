/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40948
// Address: 0x00040948

//----- (00040948) --------------------------------------------------------
unsigned int __fastcall sub_40948(int a1, int a2)
{
  unsigned int v2; // r1
  unsigned int result; // r0

  v2 = *(_DWORD *)(a1 + 60) + a2;
  *(_DWORD *)(a1 + 60) = v2;
  result = *(_DWORD *)(*(_DWORD *)(a1 + 68) + 4);
  if ( v2 >= result )
    sub_1C9E4("interr: bad idc move_ip");
  return result;
}
