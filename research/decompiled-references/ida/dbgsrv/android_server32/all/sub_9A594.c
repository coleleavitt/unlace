/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A594
// Address: 0x0009A594

//----- (0009A594) --------------------------------------------------------
int __fastcall sub_9A594(int a1)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(a1 + 60))(
           *(_DWORD *)a1,
           *(_DWORD *)(a1 + 4),
           *(_DWORD *)(a1 + 8),
           *(_DWORD *)(a1 + 12));
}
