/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467950
// Address: 0x00467950

//----- (00467950) --------------------------------------------------------
int __usercall sub_467950@<eax>(int a1@<ebp>, int a2, unsigned int a3)
{
  int result; // eax
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // esi

  while ( 1 )
  {
    result = a2;
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_DWORD *)(a2 + 12);
    if ( v5 == -1 || a3 != -1 && v5 <= a3 )
      break;
    v6 = 3 * v5;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v4 + 4 * v6);
    if ( !*(_DWORD *)(v4 + 4 * v6 + 4) )
    {
      sub_467A00(*(_DWORD *)(v4 + 4 * v6 + 8), a1, 257);
      sub_467A20(*(int (**)(void))(v4 + 4 * v6 + 8));
    }
  }
  return result;
}
