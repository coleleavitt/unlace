/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98C48
// Address: 0x00098C48

//----- (00098C48) --------------------------------------------------------
int __fastcall sub_98C48(int a1, int a2)
{
  if ( sub_94836(*(unsigned __int8 **)(a1 + 12)) || sub_9484A(*(unsigned __int8 **)(a1 + 12)) )
    sub_93B8C(a2, ")", "");
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12), a2);
}
