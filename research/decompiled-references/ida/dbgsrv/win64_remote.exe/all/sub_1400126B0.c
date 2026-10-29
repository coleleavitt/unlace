/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400126B0
// Address: 0x00000001400126B0

//----- (00000001400126B0) ----------------------------------------------------
__int64 __fastcall sub_1400126B0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v1 != 2 && v1 != 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3296);
  }
  return a1 + 24;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
