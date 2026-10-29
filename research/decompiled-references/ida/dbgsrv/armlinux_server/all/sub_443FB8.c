/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443FB8
// Address: 0x0000000000443FB8

//----- (0000000000443FB8) ----------------------------------------------------
__int64 __fastcall sub_443FB8(char *a1)
{
  __int64 v2; // [xsp+78h] [xbp-C8h]

  callui(24, 9, a1);
  return v2 ^ _stack_chk_guard;
}
// 444060: variable 'v2' is possibly undefined
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
