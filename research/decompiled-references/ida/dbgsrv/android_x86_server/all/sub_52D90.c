/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52D90
// Address: 0x00052D90

//----- (00052D90) --------------------------------------------------------
int __cdecl sub_52D90(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  unsigned int v4; // ecx

  result = a1;
  v3 = *(_DWORD *)(a1 + 68);
  v4 = a2 + *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 60) = v4;
  if ( v4 >= *(_DWORD *)(v3 + 4) )
    sub_1DE10("interr: bad idc move_ip");
  return result;
}
