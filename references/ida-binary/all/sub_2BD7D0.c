__int64 __fastcall sub_2BD7D0(_QWORD *a1, __m128i *a2, __int64 a3, __int64 *a4, double a5)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  const __m128i *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  __int32 v16; // [rsp+Ch] [rbp-3Ch]

  v5 = a1[55];
  if ( v5
    && (v9 = (*(__int64 (__fastcall **)(_QWORD *, __m128i *, __int64, _QWORD))(*a1 + 808LL))(a1, a2, a3, a1[55]),
        (_BYTE)v9) )
  {
    v11 = (const __m128i *)sub_1EA6A0(a1[2] + 384LL, (__int64)a2, v7, v8, a5);
    v16 = v11[2].m128i_i32[0];
    if ( v16 == (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
    {
      *a2 = _mm_loadu_si128(v11);
      a2[1].m128i_i64[0] = v11[1].m128i_i64[0];
    }
    if ( a4 )
    {
      v12 = a2[1].m128i_i32[2];
      v13 = 0;
      if ( (v12 & 0x80000000) == 0LL && v12 < *(_QWORD *)(v5 + 24) )
      {
        v14 = a2[1].m128i_i16[7];
        if ( (v14 & 0x8000u) == 0LL )
        {
          v15 = (_QWORD *)(*(_QWORD *)(v5 + 16) + 24 * v12);
          if ( v14 < v15[1] )
            v13 = *v15 + 272 * v14;
        }
      }
      *a4 = v13;
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
