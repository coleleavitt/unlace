/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A868
// Address: 0x000000000041A868

//----- (000000000041A868) ----------------------------------------------------
__int64 __fastcall sub_41A868(char *a1)
{
  __int64 v2; // [xsp+58h] [xbp-C8h]

  callui(24, 5, a1);
  return v2 ^ _stack_chk_guard;
}
// 41A908: variable 'v2' is possibly undefined
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
