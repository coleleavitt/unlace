/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AE00
// Address: 0x0008AE00

//----- (0008AE00) --------------------------------------------------------
bool __cdecl sub_8AE00(_BYTE *a1, char a2)
{
  a1[92] = a2;
  return (*(int (__cdecl **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 84))(a1, a1 + 80) == 1;
}
