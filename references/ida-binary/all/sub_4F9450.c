__int64 __fastcall sub_4F9450(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdi
  char v16; // bp
  unsigned __int8 v18; // r13
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  char v26; // [rsp+0h] [rbp-28h]

  if ( a2 )
  {
    v15 = *a4;
    v16 = a3;
    v18 = a5;
    if ( *a4 )
    {
      a4[1] = 0;
      *(double *)a7.m128_u64 = qfree(v15, a2);
      *a4 = 0;
      a4[2] = 0;
    }
    result = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)a1 + 456LL))(
               a1,
               a2,
               (unsigned int)v16,
               a4,
               v18);
    if ( !(_BYTE)result )
    {
      if ( !v18 )
        sub_169630(
          (int)"form: bad input field type %c",
          (unsigned int)v16,
          v20,
          v21,
          v22,
          v23,
          a7,
          a8,
          a9,
          a10,
          v24,
          v25,
          a13,
          a14,
          v26);
      return 0;
    }
  }
  else
  {
    sub_169630(
      (int)"form: nullptr is an invalid input field argument",
      0,
      a3,
      (__int64)a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v26);
    return 0;
  }
  return result;
}
