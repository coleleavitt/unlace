unsigned __int64 __fastcall sub_EF1D60(_QWORD *a1, _WORD *a2)
{
  __m128i v2; // xmm1
  unsigned __int64 result; // rax
  __int64 *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __m128 v8; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+108h] [rbp-40h] BYREF

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, *a2 & 0x1FF);
  sub_EC6110(&v8, (__int64)a2);
  v2 = _mm_loadu_si128(&v9);
  result = v8.m128_u64[1];
  v4 = (__int64 *)v8.m128_u64[0];
LABEL_2:
  if ( (__int64 *)v2.m128i_i64[0] == v4 )
    goto LABEL_8;
  do
  {
    do
    {
      if ( (result & 3) != 0 )
      {
        v5 = *(_QWORD *)sub_ECEDF0((__int64)&v8);
        if ( v5 )
        {
LABEL_5:
          sub_EEF680((__int64)a1, v5);
          goto LABEL_6;
        }
      }
      else
      {
        v5 = *v4;
        if ( *v4 )
          goto LABEL_5;
      }
      v6 = a1[1];
      v7 = *(unsigned int *)(v6 + 8);
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_22134E0(a1[1], v6 + 16, v7 + 1, 4);
        v7 = *(unsigned int *)(v6 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v6 + 4 * v7) = 0;
      ++*(_DWORD *)(v6 + 8);
LABEL_6:
      result = v8.m128_u64[1];
      if ( (v8.m128_i8[8] & 3) != 0 )
      {
        if ( (v8.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20((__int64)&v8);
        else
          sub_ECEA10((unsigned __int64 *)&v8, 1);
        result = v8.m128_u64[1];
        v4 = (__int64 *)v8.m128_u64[0];
        goto LABEL_2;
      }
      v4 = (__int64 *)(v8.m128_u64[0] + 8);
      v8.m128_u64[0] = (unsigned __int64)v4;
    }
    while ( (__int64 *)v2.m128i_i64[0] != v4 );
LABEL_8:
    ;
  }
  while ( v2.m128i_i64[1] != result );
  return result;
}

