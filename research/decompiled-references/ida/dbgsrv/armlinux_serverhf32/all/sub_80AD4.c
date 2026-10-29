/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AD4
// Address: 0x00080AD4

//----- (00080AD4) --------------------------------------------------------
int __fastcall sub_80AD4(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = sub_8099C(a1, a2, a3, a4);
  if ( !result )
    return (*(int (__fastcall **)(_DWORD, int, int, _DWORD *))(**(_DWORD **)(a1 + 8) + 24))(
             *(_DWORD *)(a1 + 8),
             a2,
             a3,
             a4);
  return result;
}
