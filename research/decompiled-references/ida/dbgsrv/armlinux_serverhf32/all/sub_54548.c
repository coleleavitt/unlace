/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54548
// Address: 0x00054548

//----- (00054548) --------------------------------------------------------
int __fastcall sub_54548(int a1, int a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 108))(a1, *(_DWORD *)(a2 + 4), 1);
  if ( result > 0 )
    return sub_544F4(a1, a2);
  return result;
}
