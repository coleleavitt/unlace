/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59AF8
// Address: 0x00059AF8

//----- (00059AF8) --------------------------------------------------------
int __fastcall sub_59AF8(int a1, int a2, int a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r7
  unsigned int v8; // r4
  int v9; // r4

  v6 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v7 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v8 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  if ( sub_59948(a1, v6) )
    v9 = 1;
  else
    v9 = (*(int (__fastcall **)(_DWORD, unsigned int, unsigned int, unsigned int, int))(**(_DWORD **)(a1 + 244) + 72))(
           *(_DWORD *)(a1 + 244),
           v6,
           v7,
           v8,
           a2);
  if ( *(_BYTE *)(a1 + 96) )
    sub_1700C((int)"attach_process(pid=%d, evid=%d) => %d\n", v6, v7, v9);
  return v9;
}
