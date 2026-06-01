/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65100
// Address: 0x00065100

//----- (00065100) --------------------------------------------------------
bool __fastcall sub_65100(_BYTE *a1, char a2)
{
  a1[92] = a2;
  return (*(int (__fastcall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 84))(a1, a1 + 80) == 1;
}
