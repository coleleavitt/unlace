/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080650
// Address: 0x08080650

//----- (08080650) --------------------------------------------------------
unsigned int __cdecl sub_8080650(int a1, int a2)
{
  unsigned int result; // eax

  result = a2 + *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 60) = result;
  if ( result >= *(_DWORD *)(*(_DWORD *)(a1 + 68) + 4) )
    sub_8058270("interr: bad idc move_ip");
  return result;
}
