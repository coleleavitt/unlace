__int64 __fastcall sub_22133F0(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v12; // edx
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int32 v20; // [rsp+Ch] [rbp-CCh] BYREF
  __m128i v21[3]; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v22[2]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v23; // [rsp+60h] [rbp-78h]
  __m128i v24; // [rsp+70h] [rbp-68h] BYREF
  __int64 v25; // [rsp+80h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp-50h]
  __int16 v27; // [rsp+90h] [rbp-48h]

  v20 = 0;
  if ( (unsigned __int8)sub_2247A50(a5, a6, 0, &v24) || (v12 = v24.m128i_i32[0], v24.m128i_i64[0] != v24.m128i_i32[0]) )
  {
    v15 = sub_227D6D0(a5, a6);
    v26 = a6;
    v16 = v15;
    v27 = 1283;
    v22[0].m128i_i64[0] = (__int64)"' value invalid for integer argument!";
    v23 = 259;
    v24.m128i_i64[0] = (__int64)"'";
    v25 = a5;
    sub_A41580(v21, &v24, v22, v17, v18, v19);
    result = sub_2212D60(a1, (__int64)v21, 0, 0, v16);
    if ( (_BYTE)result )
      return result;
    v12 = v20;
  }
  else
  {
    v20 = v24.m128i_i32[0];
  }
  v13 = *(_QWORD *)(a1 + 168) == 0;
  *(_DWORD *)(a1 + 120) = v12;
  *(_WORD *)(a1 + 12) = a2;
  if ( v13 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int32 *))(a1 + 176))(a1 + 152, &v20);
  return 0;
}
