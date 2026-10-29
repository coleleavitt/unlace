/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F128
// Address: 0x0008F128

//----- (0008F128) --------------------------------------------------------
int __fastcall sub_8F128(int a1, int a2, int a3, int a4, int a5)
{
  int (__fastcall *v5)(_DWORD, int, int, int, int); // r5
  int v7; // r5

  v5 = *(int (__fastcall **)(_DWORD, int, int, int, int))(a1 + 16);
  if ( v5 )
    return v5(*(_DWORD *)(a1 + 28), a2, a3, a4, a5);
  v7 = -1;
  if ( !a4 )
    return (*(int (__fastcall **)(_DWORD, int, int, int))(a1 + 40))(*(_DWORD *)(a1 + 28), a2, a3, a5);
  return v7;
}
