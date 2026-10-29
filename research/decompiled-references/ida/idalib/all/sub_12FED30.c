__int64 __fastcall sub_12FED30(
        __int64 (__fastcall *a1)(__int64, __m128i *),
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v8; // [rsp+20h] [rbp-88h]
  __m128i v9; // [rsp+30h] [rbp-78h] BYREF
  __int16 v10; // [rsp+50h] [rbp-58h]
  __m128i v11[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v12; // [rsp+80h] [rbp-28h]

  if ( *((_QWORD *)a6 + 5) )
  {
    v12 = 260;
    v11[0].m128i_i64[0] = (__int64)(a6 + 2);
    return sub_12FD7D0(a1, a2, a3, v11);
  }
  else
  {
    result = *a6;
    if ( (_DWORD)result == 1 )
    {
      v11[0].m128i_i64[0] = a4;
      v12 = 261;
      v11[0].m128i_i64[1] = a5;
      return sub_12FD7D0(a1, a2, 0xCA3u, v11);
    }
    else if ( (_DWORD)result == 3 )
    {
      v10 = 261;
      v8 = 261;
      v9.m128i_i64[0] = a4;
      v9.m128i_i64[1] = a5;
      v7.m128i_i64[0] = (__int64)"no-";
      v7.m128i_i64[1] = 3;
      sub_A41580(v11, &v7, &v9, a4, a5, (__int64)a6);
      return sub_12FD7D0(a1, a2, 0xCA3u, v11);
    }
  }
  return result;
}
