/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B94
// Address: 0x00080B94

//----- (00080B94) --------------------------------------------------------
int __fastcall sub_80B94(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = sub_809A4(a1, a2, a3, a4);
  if ( !result )
    return (*(int (__fastcall **)(_DWORD, int, int, _DWORD *))(**(_DWORD **)(a1 + 8) + 24))(
             *(_DWORD *)(a1 + 8),
             a2,
             a3,
             a4);
  return result;
}
