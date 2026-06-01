/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020D40
// Address: 0x0000000100020D40

//----- (0000000100020D40) ----------------------------------------------------
bool __fastcall sub_100020D40(__int64 a1)
{
  return (*(_BYTE *)(a1 + 960) != 1 || sub_10001F270(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), a1 + 96))
      && (*(_BYTE *)(a1 + 961) != 1 || sub_10001F9F0(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), (int *)(a1 + 288)));
}
