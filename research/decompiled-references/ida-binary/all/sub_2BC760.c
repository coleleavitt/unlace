__int64 __fastcall sub_2BC760(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double *a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        __m128i *a15,
        unsigned __int8 a16)
{
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  int v23; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+14h] [rbp-54h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 12) = -1;
  LOBYTE(v23) = 0;
  v24 = -1;
  if ( (unsigned __int8)sub_2B5E00(
                          a1,
                          (__int64)&v23,
                          a3,
                          a4,
                          a5,
                          a15,
                          (__m128)-1LL,
                          a8,
                          a9,
                          a10,
                          a11,
                          a12,
                          a13,
                          a14,
                          a16) )
  {
    if ( (_BYTE)v23 )
    {
      v20 = v24;
      *(_DWORD *)a2 = 2;
      *(_DWORD *)(a2 + 12) = v20;
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, double *, __int64, __m128i *, int *))(*a1 + 792LL))(
               a1,
               a5,
               a6,
               a2,
               a15,
               &v23);
    }
    v22 = *(_QWORD *)((char *)&v24 + 4);
    *(_DWORD *)a2 = 5;
    *(_QWORD *)(a2 + 28) = v22;
    *(_DWORD *)(a2 + 36) = HIDWORD(v24);
    return 1;
  }
  result = sub_2B6860(
             (__int64)a1,
             a5,
             NAN,
             *(double *)a8.m128_u64,
             a9,
             *(double *)a10.m128_u64,
             v18,
             v19,
             a13,
             a14,
             (__int64)a6,
             (int)a15,
             (_DWORD *)(a2 + 4));
  if ( (_BYTE)result )
  {
    *(_DWORD *)a2 = 1;
    *(_DWORD *)(a2 + 12) = sub_2B7C10((__int64)a1, a5, a6, a15, (unsigned int *)(a2 + 4));
    return 1;
  }
  return result;
}
