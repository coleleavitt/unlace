/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140018110
// Address: 0x0000000140018110

//----- (0000000140018110) ----------------------------------------------------
bool __fastcall sub_140018110(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1)
      && sub_140015280(
           *(_QWORD *)(a1 + 112),
           a1 + 120,
           (_QWORD *)(a1 + 152),
           (_QWORD *)(a1 + 344),
           *(_DWORD *)(a1 + 108),
           *(_DWORD *)(a1 + 104));
}
