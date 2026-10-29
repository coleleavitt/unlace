/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C4B4
// Address: 0x0005C4B4

//----- (0005C4B4) --------------------------------------------------------
int __fastcall sub_5C4B4(int a1, int a2, unsigned int *a3)
{
  int v5; // r4
  int v6; // r6
  int v7; // r7
  int v10; // [sp+8h] [bp-4h]

  v5 = unpack_dd(a3, a3[1]);
  v10 = unpack_dd(a3, a3[1]);
  v6 = unpack_dd(a3, a3[1]);
  v7 = 1;
  if ( !sub_5BC30(a1, v5) )
    v7 = (*(int (__fastcall **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 + 244) + 72))(
           *(_DWORD *)(a1 + 244),
           v5,
           v10,
           v6,
           a2);
  if ( *(_BYTE *)(a1 + 96) )
    sub_1BBA0((int)"attach_process(pid=%d, evid=%d) => %d\n", v5, v10, v7);
  return v7;
}
