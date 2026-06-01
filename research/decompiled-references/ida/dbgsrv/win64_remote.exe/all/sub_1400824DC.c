/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400824DC
// Address: 0x00000001400824DC

//----- (00000001400824DC) ----------------------------------------------------
__int64 __fastcall sub_1400824DC(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = (__int64)qword_1400CCC60;
  if ( (struct __crt_multibyte_data *)*a2 != qword_1400CCC60 )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_1400CAC30) == 0 )
    {
      result = _acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}
// 140088544: using guessed type __int64 _acrt_update_thread_multibyte_data(void);
// 1400CAC30: using guessed type int dword_1400CAC30;
