/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001AEF0
// Address: 0x000000014001AEF0

//----- (000000014001AEF0) ----------------------------------------------------
__int64 __fastcall sub_14001AEF0(__int64 a1)
{
  sub_140063190(a1, 5);
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 5 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3298);
  }
  return a1 + 24;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
