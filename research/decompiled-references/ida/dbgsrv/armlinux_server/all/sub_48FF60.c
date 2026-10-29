/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FF60
// Address: 0x000000000048FF60

//----- (000000000048FF60) ----------------------------------------------------
__int64 __fastcall sub_48FF60(int a1, __off64_t a2)
{
  __int64 result; // x0

  result = ftruncate64(a1, a2);
  if ( (_DWORD)result )
  {
    sub_4869C8(1);
    return 0xFFFFFFFFLL;
  }
  return result;
}
