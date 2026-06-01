/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4666C0
// Address: 0x00000000004666C0

//----- (00000000004666C0) ----------------------------------------------------
__int64 __fastcall sub_4666C0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
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
  __int64 result; // rax
  double v18; // xmm0_8
  __int16 v19; // ax
  double v20; // xmm4_8
  double v21; // xmm5_8
  int v22; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+4h] [rbp-54h] BYREF
  const char *v24; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+10h] [rbp-48h] BYREF
  __int16 v26; // [rsp+18h] [rbp-40h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 184) )
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"handle_server_ioctl(fn=%d, bufsize=%zu).\n",
                               a2,
                               a5[1] - *a5,
                               (__int64)a4,
                               (__int64)a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13,
                               a14,
                               v22);
  if ( (_DWORD)a2 == 16777217 )
  {
    v18 = sub_460360(
            a1,
            (__int64 *)&v24,
            &v22,
            &v23,
            a5,
            a7,
            a8,
            a9,
            a10,
            *(double *)a11.m128_u64,
            *(double *)a12.m128_u64,
            a13,
            a14,
            a6,
            v22);
    v25 = &off_4C34D8;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( (_DWORD)a2 != 16777218 )
      return result;
    v18 = sub_460360(
            a1,
            (__int64 *)&v24,
            &v22,
            &v23,
            a5,
            a7,
            a8,
            a9,
            a10,
            *(double *)a11.m128_u64,
            *(double *)a12.m128_u64,
            a13,
            a14,
            a6,
            v22);
    v19 = sub_47FCC0(a5, a5[1]);
    v25 = &off_4C34F0;
    v26 = v19;
  }
  return sub_465920(
           (__int64 (__fastcall ***)(_QWORD, void **, __int64, __int64 *, void **, void **))&v25,
           a1,
           a3,
           a4,
           v24,
           v22,
           v18,
           a8,
           a9,
           a10,
           v20,
           v21,
           a13,
           a14,
           v23 != 0);
}
// 466723: variable 'a11' is possibly undefined
// 466723: variable 'a12' is possibly undefined
// 466723: variable 'a6' is possibly undefined
// 46676E: variable 'v20' is possibly undefined
// 46676E: variable 'v21' is possibly undefined
// 4C34D8: using guessed type __int64 (__fastcall *off_4C34D8)();
// 4C34F0: using guessed type __int64 (__fastcall *off_4C34F0)();
