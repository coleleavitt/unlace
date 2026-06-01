/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_546CC
// Address: 0x000546CC

//----- (000546CC) --------------------------------------------------------
int __fastcall sub_546CC(int a1, int a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 108))(a1, *(_DWORD *)(a2 + 4), 1);
  if ( result > 0 )
    return sub_54678(a1, a2);
  return result;
}
