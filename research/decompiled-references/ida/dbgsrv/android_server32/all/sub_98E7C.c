/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98E7C
// Address: 0x00098E7C

//----- (00098E7C) --------------------------------------------------------
int __fastcall sub_98E7C(int a1, int a2)
{
  if ( sub_94836(*(unsigned __int8 **)(a1 + 8)) || sub_9484A(*(unsigned __int8 **)(a1 + 8)) )
    sub_93B8C(a2, ")", "");
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
}
