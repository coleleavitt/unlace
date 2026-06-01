/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6A7C
// Address: 0x00000000000D6A7C

//----- (00000000000D6A7C) ----------------------------------------------------
__int64 __fastcall sub_D6A7C(void *a1)
{
  __int64 result; // x0

  sub_D7D18(a1);
  result = pthread_setspecific(dword_1690A8, nullptr);
  if ( (_DWORD)result )
    sub_D9A54("cannot zero out thread value for __cxa_get_globals()");
  return result;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 1690A8: using guessed type int dword_1690A8;
