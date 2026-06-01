/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F110
// Address: 0x0008F110

//----- (0008F110) --------------------------------------------------------
int __fastcall sub_8F110(int a1)
{
  if ( *(_DWORD *)a1 )
    return (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 28));
  else
    return (*(int (__fastcall **)(_DWORD))(a1 + 32))(*(_DWORD *)(a1 + 28));
}
