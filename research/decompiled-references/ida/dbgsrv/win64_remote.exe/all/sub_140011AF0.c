/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140011AF0
// Address: 0x0000000140011AF0

//----- (0000000140011AF0) ----------------------------------------------------
SIZE_T __fastcall sub_140011AF0(__int64 a1, void *a2, void *a3, unsigned int a4)
{
  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  return sub_14000D150(a1, a2, a3, a4, 1u, 1);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
