__int64 __fastcall sub_FF30(__int64 a1, const __m128i *a2, __int64 a3, _QWORD *a4)
{
  const char *v5; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  _OWORD v10[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a2[3].m128i_i64[0] <= 3uLL )
  {
    if ( *(_QWORD *)(a3 + 8) )
    {
      v5 = *(const char **)a3;
      if ( !strcmp(*(const char **)a3, ".init") || !strcmp(v5, ".fini") )
      {
        v8 = *(_QWORD *)(a1 + 16);
        v9 = *(_QWORD *)(a1 + 8);
        v10[0] = _mm_loadu_si128(a2);
        v10[1] = _mm_loadu_si128(a2 + 1);
        v10[2] = _mm_loadu_si128(a2 + 2);
        v12 = _mm_loadu_si128(a2 + 3).m128i_i64[1];
        v11 = 4;
        *a4 = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *))sub_41B70)(v9, v8, v10);
      }
    }
  }
  return 1;
}

