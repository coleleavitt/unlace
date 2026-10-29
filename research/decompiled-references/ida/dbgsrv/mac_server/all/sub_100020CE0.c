/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020CE0
// Address: 0x0000000100020CE0

//----- (0000000100020CE0) ----------------------------------------------------
bool __fastcall sub_100020CE0(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1)
      && (*(_BYTE *)(a1 + 960) != 1 || sub_10001EF70(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), a1 + 96))
      && (*(_BYTE *)(a1 + 961) != 1 || sub_10001F3E0(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), a1 + 288));
}
