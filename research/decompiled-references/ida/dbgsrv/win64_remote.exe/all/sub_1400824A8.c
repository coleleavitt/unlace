/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400824A8
// Address: 0x00000001400824A8

//----- (00000001400824A8) ----------------------------------------------------
__int64 __fastcall sub_1400824A8(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = qword_1400CC348;
  if ( *a2 != qword_1400CC348 )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_1400CAC30) == 0 )
    {
      result = _acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}
// 140089494: using guessed type __int64 _acrt_update_thread_locale_data(void);
// 1400CAC30: using guessed type int dword_1400CAC30;
// 1400CC348: using guessed type __int64 qword_1400CC348;
