__int64 __fastcall sub_14E53D0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  _DWORD *v5; // r12
  _DWORD *v7; // rbx
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 result; // rax
  __m128i v13; // xmm0
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  __m128i v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 + 24;
  v5 = a2;
  v7 = a2;
  sub_13DFA10(v16, a1 + 24);
  v8 = &a2[a3];
  v9 = (4 * a3) >> 4;
  v10 = (4 * a3) >> 2;
  if ( v9 <= 0 )
  {
LABEL_14:
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
          return 0;
        goto LABEL_30;
      }
      if ( v16[0].m128i_i32[0] == *a2 )
        goto LABEL_20;
      ++a2;
    }
    if ( v16[0].m128i_i32[0] == *a2 )
      goto LABEL_20;
    ++a2;
LABEL_30:
    result = 0;
    if ( v16[0].m128i_i32[0] != *a2 )
      return result;
    goto LABEL_20;
  }
  if ( v16[0].m128i_i32[0] == *a2
    || (++a2, v16[0].m128i_i32[0] == v7[1])
    || (a2 = v7 + 2, v16[0].m128i_i32[0] == v7[2])
    || (a2 = v7 + 3, v11 = &v7[4 * v9], v16[0].m128i_i32[0] == v7[3]) )
  {
LABEL_20:
    result = 0;
    if ( v8 != a2 )
    {
LABEL_21:
      sub_13DF9D0(&v14, v3);
      v13 = _mm_loadu_si128(&v14);
      *(_QWORD *)(a1 + 104) = v15;
      *(__m128i *)(a1 + 88) = v13;
      return 1;
    }
    return result;
  }
  while ( 1 )
  {
    a2 = v5 + 4;
    if ( v5 + 4 == v11 )
    {
      v10 = v8 - v11;
      goto LABEL_14;
    }
    if ( v16[0].m128i_i32[0] == v5[4] )
      goto LABEL_20;
    if ( v16[0].m128i_i32[0] == v5[5] )
    {
      a2 = v5 + 5;
      goto LABEL_20;
    }
    if ( v16[0].m128i_i32[0] == v5[6] )
    {
      result = 0;
      if ( v8 != v5 + 6 )
        goto LABEL_21;
      return result;
    }
    if ( v16[0].m128i_i32[0] == v5[7] )
      break;
    v5 += 4;
  }
  result = 0;
  if ( v8 != v5 + 7 )
    goto LABEL_21;
  return result;
}
