/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4676C0
// Address: 0x004676C0

//----- (004676C0) --------------------------------------------------------
int __usercall sub_4676C0@<eax>(int a1@<ebp>, _DWORD *a2, int a3, unsigned int a4)
{
  int result; // eax
  unsigned int v5; // esi
  int v6; // esi
  int v7; // ebx

  while ( 1 )
  {
    result = a3;
    v5 = *(_DWORD *)(a3 + 12);
    if ( v5 == -2 || a4 != -2 && v5 <= a4 )
      break;
    v6 = 3 * v5;
    v7 = (*a2 ^ *(_DWORD *)(a3 + 8)) + 4 * v6 + 16;
    *(_DWORD *)(a3 + 12) = *(_DWORD *)((*a2 ^ *(_DWORD *)(a3 + 8)) + 4 * v6 + 0x10);
    if ( !*(_DWORD *)(v7 + 4) )
    {
      sub_467A00(*(_DWORD *)(v7 + 8), a1, 257);
      sub_467A20(*(int (**)(void))(v7 + 8));
    }
  }
  return result;
}
