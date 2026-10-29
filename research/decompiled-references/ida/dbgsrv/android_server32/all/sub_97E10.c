/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97E10
// Address: 0x00097E10

//----- (00097E10) --------------------------------------------------------
int __fastcall sub_97E10(int a1, int a2)
{
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
  sub_93B8C(a2, "[abi:", "");
  sub_93B8C(a2, *(_BYTE **)(a1 + 12), *(_BYTE **)(a1 + 16));
  return sub_93B8C(a2, "]", "");
}
