__int64 __fastcall sub_2213890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+18h] [rbp-A0h]
  __int16 v20; // [rsp+20h] [rbp-98h]
  __m128i v21[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v22; // [rsp+50h] [rbp-68h]
  __m128i v23[5]; // [rsp+60h] [rbp-58h] BYREF

  result = sub_2247970(a5, a6, 0, v23);
  if ( (_BYTE)result )
  {
    v13 = sub_227D6D0(a5, a6);
    v20 = 1283;
    v21[0].m128i_i64[0] = (__int64)"' value invalid for ulong argument!";
    v22 = 259;
    v17.m128i_i64[0] = (__int64)"'";
    v18 = a5;
    v19 = a6;
    sub_A41580(v23, &v17, v21, v14, v15, v16);
    return sub_2212D60(a2, (__int64)v23, 0, 0, v13);
  }
  else
  {
    *a7 = v23[0].m128i_i64[0];
  }
  return result;
}
