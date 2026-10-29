unsigned __int64 __fastcall sub_BC2EC0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v11; // rdx
  _BOOL8 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 result; // rax
  __m128 v15; // xmm0
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]

  v16 = a5;
  if ( a6 )
    a6 = sub_F1ED40(a1, a6);
  v11 = a1[294];
  v12 = a8 != 0;
  v13 = 8 * v12 + 48;
  result = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a1[304] += v13;
  if ( a1[295] >= v13 + result && v11 )
  {
    a1[294] = v13 + result;
  }
  else
  {
    v17 = a6;
    result = sub_986170((__int64)(a1 + 294), v13, 8 * v12 + 48, 3, a5, a6);
    a6 = v17;
  }
  v16 = a6;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = (4 * v12) | a2 & 0xFFFFFFFFFFFFFFFBLL;
  v15 = _mm_loadh_ps((const double *)&v16);
  *(_QWORD *)(result + 16) = (2LL * (unsigned int)(a4 - 1)) | a3 & 0xFFFFFFFFFFFFFFF9LL;
  *(__m128 *)(result + 24) = v15;
  *(_DWORD *)(result + 40) = a7;
  if ( a8 )
    *(_QWORD *)(result + 48) = a8;
  return result;
}
