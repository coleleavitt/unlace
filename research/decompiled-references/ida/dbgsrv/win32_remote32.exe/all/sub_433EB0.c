/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433EB0
// Address: 0x00433EB0

//----- (00433EB0) --------------------------------------------------------
int __usercall sub_433EB0@<eax>(int a1@<ebx>, int a2)
{
  int v2; // esi

  if ( *(_BYTE *)(a2 + 320) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(302);
  }
  v2 = *(_DWORD *)(a2 + 284);
  *(_DWORD *)(a2 + 284) = 0;
  sub_435120(a2, a1, 0, 0);
  return v2;
}
// 4B70F0: using guessed type char byte_4B70F0;
