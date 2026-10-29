/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96C18
// Address: 0x00096C18

//----- (00096C18) --------------------------------------------------------
int __fastcall sub_96C18(int a1, int a2)
{
  sub_93B8C(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
  sub_93B8C(a2, "<", "");
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 16) + 12))(*(_DWORD *)(a1 + 16), a2);
  sub_93B8C(a2, ">(", "");
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 20) + 12))(*(_DWORD *)(a1 + 20), a2);
  return sub_93B8C(a2, ")", "");
}
