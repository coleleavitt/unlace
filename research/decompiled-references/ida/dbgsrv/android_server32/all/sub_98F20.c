/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98F20
// Address: 0x00098F20

//----- (00098F20) --------------------------------------------------------
int __fastcall sub_98F20(int a1, int a2)
{
  if ( sub_94836(*(unsigned __int8 **)(a1 + 8)) || sub_9484A(*(unsigned __int8 **)(a1 + 8)) )
    sub_93B8C(a2, ")", "");
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
}
