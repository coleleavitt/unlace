/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001AFF0
// Address: 0x000000014001AFF0

//----- (000000014001AFF0) ----------------------------------------------------
__int64 __fastcall sub_14001AFF0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  sub_140063190(a1, a2);
  result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (_DWORD)result != 2 && (_DWORD)result != 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3296);
  }
  *(_DWORD *)(a1 + 24) = a3;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
