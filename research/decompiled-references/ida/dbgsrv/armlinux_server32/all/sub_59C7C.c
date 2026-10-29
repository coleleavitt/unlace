/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59C7C
// Address: 0x00059C7C

//----- (00059C7C) --------------------------------------------------------
int __fastcall sub_59C7C(int a1, int a2, int a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r7
  unsigned int v8; // r4
  int v9; // r4

  v6 = sub_762E4((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v7 = sub_762E4((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v8 = sub_762E4((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  if ( sub_59ACC(a1, v6) )
    v9 = 1;
  else
    v9 = (*(int (__fastcall **)(_DWORD, unsigned int, unsigned int, unsigned int, int))(**(_DWORD **)(a1 + 244) + 72))(
           *(_DWORD *)(a1 + 244),
           v6,
           v7,
           v8,
           a2);
  if ( *(_BYTE *)(a1 + 96) )
    sub_171B0((int)"attach_process(pid=%d, evid=%d) => %d\n", v6, v7, v9);
  return v9;
}
