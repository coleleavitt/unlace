unsigned __int64 __fastcall sub_2F99F0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  __int64 i; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  const __m128i *v9; // r15
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // [rsp+8h] [rbp-150h]
  const __m128i *v17; // [rsp+8h] [rbp-150h]
  __m128i v20[12]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-78h]
  _BYTE v22[16]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+100h] [rbp-58h]
  int (__fastcall *v24)(_BYTE *, __int64, __m128i *); // [rsp+108h] [rbp-50h]
  unsigned __int64 v25; // [rsp+118h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v16 = (a3 - 1) / 2;
  if ( a2 >= v16 )
  {
    v7 = a2;
  }
  else
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = 400 * (i + 1);
      v9 = (const __m128i *)(a1 + v8);
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v8, a1 + v8 - 200) < 0 )
      {
        --v7;
        v9 = (const __m128i *)(a1 + 200 * v7);
      }
      v10 = a1 + 200 * i;
      sub_2AE360(v10, v9);
      *(_QWORD *)(v10 + 192) = v9[12].m128i_i64[0];
      if ( v7 >= v16 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
  {
    v14 = 50 * (v7 + 1);
    v13 = a1 + 200 * v7;
    v7 = 2 * (v7 + 1) - 1;
    v17 = (const __m128i *)(a1 + 8 * v14 - 200);
    sub_2AE360(v13, v17);
    *(_QWORD *)(v13 + 192) = v17[12].m128i_i64[0];
  }
  sub_2CB7A0((__int64)v22, (const __m128i *)a5);
  sub_2C9710(v20, a4);
  v20[0].m128i_i64[0] = (__int64)off_4B5768;
  v21 = a4[12].m128i_i64[0];
  v11 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      if ( !v23 )
        std::__throw_bad_function_call();
      v15 = a1 + 200 * v7;
      if ( v24(v22, a1 + 200 * v11, v20) >= 0 )
        break;
      sub_2AE360(v15, (const __m128i *)(a1 + 200 * v11));
      *(_QWORD *)(v15 + 192) = *(_QWORD *)(a1 + 200 * v11 + 192);
      v7 = v11;
      if ( a2 >= v11 )
      {
        v15 = a1 + 200 * v11;
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
  else
  {
    v15 = a1 + 200 * v7;
  }
  sub_2AE360(v15, v20);
  v20[0].m128i_i64[0] = (__int64)&off_4B3F90;
  *(_QWORD *)(v15 + 192) = v21;
  sub_2B5B30((__int64)v20);
  sub_628D0((__int64)v22);
  return v25 - __readfsqword(0x28u);
}
