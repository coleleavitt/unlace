/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98BEC
// Address: 0x00098BEC

//----- (00098BEC) --------------------------------------------------------
int __fastcall sub_98BEC(int a1, int a2)
{
  char *v4; // r1

  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 12))(*(_DWORD *)(a1 + 12), a2);
  if ( sub_94836(*(unsigned __int8 **)(a1 + 12)) || sub_9484A(*(unsigned __int8 **)(a1 + 12)) )
    v4 = "(";
  else
    v4 = " ";
  sub_93B8C(a2, v4, v4 + 1);
  sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_93B8C(a2, "::*", "");
}
