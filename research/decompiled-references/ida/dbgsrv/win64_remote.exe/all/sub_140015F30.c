/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140015F30
// Address: 0x0000000140015F30

//----- (0000000140015F30) ----------------------------------------------------
__int64 __fastcall sub_140015F30(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v1 != 3 && (unsigned int)(v1 - 9) > 1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3297);
  }
  return a1 + 24;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
