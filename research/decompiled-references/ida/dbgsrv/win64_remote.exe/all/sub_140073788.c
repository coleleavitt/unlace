/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140073788
// Address: 0x0000000140073788

//----- (0000000140073788) ----------------------------------------------------
__int64 __fastcall sub_140073788(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = a5;
  v11 = a4;
  v13 = a3;
  v10 = a2;
  v12 = a1;
  if ( a2 && a3 )
  {
    v7 = a2;
    v9[0] = &v10;
    v8 = a2;
    v9[1] = &v11;
    v9[2] = &v12;
    v9[3] = &v13;
    v9[4] = &v6;
    return ((__int64 (__fastcall *)(__int64 *, __int64 *, _QWORD *, __int64 *, __int64))__crt_seh_guarded_call<int>::operator()<_lambda_a81aa23bb2c9577c1e55b9d0b57d9de4_,_lambda_9a20e10065b92b5193c3597a66cba9d4_ &,_lambda_cb3a421ff86d8a5f008440ee6b28fa9c_>)(
             &a5,
             &v8,
             v9,
             &v7,
             v6);
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}
// 140071394: using guessed type __int64 __fastcall __crt_seh_guarded_call<int>::operator()<_lambda_a81aa23bb2c9577c1e55b9d0b57d9de4_,_lambda_9a20e10065b92b5193c3597a66cba9d4_ &,_lambda_cb3a421ff86d8a5f008440ee6b28fa9c_>(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
