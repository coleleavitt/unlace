_BYTE *__fastcall sub_1378BC0(_BYTE *a1, __int64 a2, unsigned __int8 a3, unsigned __int8 *a4, __int64 *a5)
{
  _BYTE *result; // rax
  const char *v9; // r8
  int v10; // r15d
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // [rsp+18h] [rbp-130h]
  __m128i v16[2]; // [rsp+20h] [rbp-128h] BYREF
  __int16 v17; // [rsp+40h] [rbp-108h]
  __m128i v18[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v19; // [rsp+70h] [rbp-D8h]
  __m128i v20; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+90h] [rbp-B8h]
  __int16 v22; // [rsp+A0h] [rbp-A8h]
  __m128i v23[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v24; // [rsp+D0h] [rbp-78h]
  __m128i v25; // [rsp+E0h] [rbp-68h] BYREF
  char *v26; // [rsp+F0h] [rbp-58h]
  __int64 v27; // [rsp+F8h] [rbp-50h]
  __int16 v28; // [rsp+100h] [rbp-48h]

  result = (_BYTE *)(*(__int64 (__fastcall **)(unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, a2, a3);
  if ( (_DWORD)result )
  {
    v18[0].m128i_i32[0] = a2;
    v9 = "__INT_LEAST";
    v10 = (int)result;
    if ( !a3 )
      v9 = "__UINT_LEAST";
    v28 = 770;
    v23[0].m128i_i64[0] = (__int64)"_TYPE__";
    v26 = "_TYPE__";
    v21 = v18[0].m128i_i64[0];
    v27 = v23[0].m128i_i64[1];
    v20.m128i_i64[0] = (__int64)v9;
    v15 = (__int64)v9;
    v25.m128i_i64[0] = (__int64)&v20;
    v22 = 2307;
    v25.m128i_i64[1] = 0;
    sub_1377870((__int64)&v25, (int)result, a5);
    if ( a3 )
    {
      v23[0].m128i_i64[0] = v15;
      v22 = 265;
      v24 = 259;
      v20.m128i_i32[0] = a2;
      sub_A41580(&v25, v23, &v20, (__int64)&v20, v15, 265);
      sub_13788A0((__int64)&v25, v10, a4, a5, v14);
    }
    else
    {
      v16[0].m128i_i32[0] = a2;
      v24 = 259;
      v17 = 265;
      v19 = 259;
      v18[0].m128i_i64[0] = v15;
      v23[0].m128i_i64[0] = (__int64)"_MAX__";
      sub_A41580(&v20, v18, v16, (__int64)&v20, v15, v11);
      sub_A41580(&v25, &v20, v23, (__int64)&v20, v12, v13);
      sub_1378820((__int64)&v25, v10, a4, a5);
    }
    v23[0].m128i_i32[0] = a2;
    v25.m128i_i64[0] = v15;
    v26 = (char *)v23[0].m128i_i64[0];
    v28 = 2307;
    return sub_13778E0(a1, (__int64)&v25, v10, a5);
  }
  return result;
}
