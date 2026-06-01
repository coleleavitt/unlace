/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140023C60
// Address: 0x0000000140023C60

//----- (0000000140023C60) ----------------------------------------------------
__int64 __fastcall sub_140023C60(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = a2 + *(_DWORD *)(a1 + 96);
  if ( v2 < 0 || (unsigned __int64)v2 >= *(_QWORD *)(a1 + 32) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(287);
  }
  return *(_QWORD *)(a1 + 24) + 32LL * v2;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
