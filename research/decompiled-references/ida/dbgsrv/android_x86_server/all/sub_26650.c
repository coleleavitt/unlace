/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26650
// Address: 0x00026650

//----- (00026650) --------------------------------------------------------
bool __cdecl sub_26650(int a1, int a2)
{
  bool result; // al

  if ( *(_DWORD *)a2 )
    result = (*(int (__cdecl **)(int, int, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 160))(
               a1,
               4,
               *(_DWORD *)a2,
               a2 + 4,
               *(unsigned __int8 *)(a2 + 5)) != 0;
  else
    result = 1;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 5) = 0;
  return result;
}
