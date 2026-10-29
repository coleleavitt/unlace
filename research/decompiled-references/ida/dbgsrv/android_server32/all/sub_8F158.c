/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F158
// Address: 0x0008F158

//----- (0008F158) --------------------------------------------------------
int __fastcall sub_8F158(int a1)
{
  if ( *(_DWORD *)(a1 + 16) )
    return (*(int (__fastcall **)(_DWORD))(a1 + 12))(*(_DWORD *)(a1 + 28));
  else
    return (*(int (__fastcall **)(_DWORD))(a1 + 36))(*(_DWORD *)(a1 + 28));
}
