/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020860
// Address: 0x0000000140020860

//----- (0000000140020860) ----------------------------------------------------
void __fastcall __noreturn sub_140020860(signed __int64 a1, va_list a2, __int64 a3, __int64 a4)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( a1 )
    sub_1400207C0(a1, a2, a3, a4, v4);
  v4 = 0;
  v5 = 0;
  std::bad_function_call::bad_function_call((std::bad_function_call *)&v4);
  sub_14006C754(&v4, &_TI2_AVloader_failure_t__);
  JUMPOUT(0x140020898LL);
}
// 140020893: control flows out of bounds to 140020898
// 1400C4A60: using guessed type __TI_flags _TI2_AVloader_failure_t__;
