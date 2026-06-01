/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001B090
// Address: 0x000000014001B090

//----- (000000014001B090) ----------------------------------------------------
__int64 __fastcall sub_14001B090(__int64 a1, int a2)
{
  int v3; // eax

  sub_140063190(a1, a2);
  v3 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v3 != 1 && v3 != 11 && v3 != 8 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3295);
  }
  return a1 + 24;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
