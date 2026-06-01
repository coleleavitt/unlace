__int64 __fastcall sub_21E6610(__int64 **a1, char *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __m128 *v8; // rax
  unsigned __int64 v9; // rdx
  __m128 v10; // xmm0
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r13
  size_t v16; // rax
  size_t v17; // rax
  char *v18; // r14
  size_t v19; // r15
  char *v20; // [rsp+8h] [rbp-40h] BYREF

  v7 = *a1;
  v20 = a2;
  v8 = (__m128 *)*v7;
  v20 = &a2[a3];
  v8[49].m128_u64[0] = -1;
  v9 = v8[1].m128_u64[0];
  v8[49].m128_u64[1] = 0;
  v10 = _mm_loadh_ps((const double *)&v20);
  v8[1].m128_u64[1] = v9;
  v11 = v8[18].m128_u64[1];
  *v8 = v10;
  v8[19].m128_u64[0] = v11;
  v12 = v8[41].m128_u64[1];
  v8[50].m128_i32[0] = 0;
  v8[42].m128_u64[0] = v12;
  v8[48].m128_i16[4] = 1;
  v8[57].m128_u64[1] = 0;
  v13 = *(unsigned int *)a1[1];
  if ( (_DWORD)v13 == 1 )
  {
    result = (__int64)sub_21DFD40(**a1);
  }
  else if ( (_DWORD)v13 == 2 )
  {
    result = (__int64)sub_21E4F70((__int64 *)**a1, 1, v13, a4, a5, a6);
  }
  else
  {
    result = 0;
    if ( !(_DWORD)v13 )
    {
      v15 = **a1;
      if ( a3 == 2
        && (v17 = j__strlen("St"),
            v18 = *(char **)v15,
            v19 = v17,
            sub_20D1BF0(*(_QWORD *)(v15 + 8) - *(_QWORD *)v15, *(const void **)v15, v17, "St")) )
      {
        *(_QWORD *)v15 = &v18[v19];
        result = sub_21D4FC0(v15 + 808, "std");
      }
      else
      {
        v16 = j__strlen("S");
        if ( a3 < v16 || v16 && memcmp(a2, "S", v16) )
          result = (__int64)sub_21D8010(v15, 0);
        else
          result = (__int64)sub_21DFD40(v15);
      }
    }
  }
  if ( *(_QWORD *)**a1 != *(_QWORD *)(**a1 + 8) )
    return 0;
  return result;
}
