/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14007C864
// Address: 0x000000014007C864

//----- (000000014007C864) ----------------------------------------------------
__int64 __fastcall sub_14007C864(int a1)
{
  int *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  if ( a1 == -2 )
  {
    *_doserrno() = 0;
    *errno() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < (unsigned int)dword_1400CC900
      && (*(_BYTE *)(qword_1400CC500[(__int64)a1 >> 6] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
    {
      v5 = a1;
      v6 = a1;
      v2 = &v3;
      return ((__int64 (__fastcall *)(char *, int *, int **, int *))__crt_seh_guarded_call<int>::operator()<_lambda_751a882b2c74d4b022dec766aa51a29a_,_lambda_628dfdc04ba53c8bfc02c9951375f3f5_ &,_lambda_f6c7be5f7998530c34de24c7437d6b54_>)(
               &v4,
               &v6,
               &v2,
               &v5);
    }
    *_doserrno() = 0;
    *errno() = 9;
    invalid_parameter_noinfo();
  }
  return 0xFFFFFFFFLL;
}
// 14007C7F0: using guessed type __int64 __fastcall __crt_seh_guarded_call<int>::operator()<_lambda_751a882b2c74d4b022dec766aa51a29a_,_lambda_628dfdc04ba53c8bfc02c9951375f3f5_ &,_lambda_f6c7be5f7998530c34de24c7437d6b54_>(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1400CC500: using guessed type __int64 qword_1400CC500[];
// 1400CC900: using guessed type int dword_1400CC900;
