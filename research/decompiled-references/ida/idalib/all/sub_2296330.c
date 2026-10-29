__int64 __fastcall sub_2296330(
        __int128 *a1,
        struct rlimit *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        void **a12,
        _BYTE *a13,
        __m128 *a14)
{
  __int64 v14; // r13
  __int64 result; // rax
  __int64 v16; // rsi
  unsigned int v17; // edx
  __pid_t v18[16]; // [rsp+10h] [rbp-40h] BYREF

  v18[0] = 0;
  v18[2] = 0;
  if ( (unsigned __int8)sub_2293EA0(v18, a1, a2, a3, a4, a11, a7, a8, a9, a5, a6, (__int64)a12, 0) )
  {
    if ( a13 )
      *a13 = 0;
    v16 = 0;
    if ( a10 )
    {
      v14 = a10;
      v16 = 1;
    }
    sub_22929C0(v18, v14 & 0xFFFFFF00FFFFFFFFLL | (v16 << 32), a12, a14, 0);
    return v17;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( a13 )
      *a13 = 1;
  }
  return result;
}
