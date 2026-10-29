__int64 __fastcall sub_1F0BD10(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const __m128i *v8; // rdx
  __m128i *v9; // rax
  __int64 v11; // [rsp+8h] [rbp-60h]
  _BYTE v12[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  if ( a2[3] < (unsigned int)v3 )
  {
    sub_2237220(a2, a2 + 4, (unsigned int)v3, 24);
    if ( !(_DWORD)v3 )
      return *(_QWORD *)a2;
  }
  else if ( !(_DWORD)v3 )
  {
    return *(_QWORD *)a2;
  }
  v4 = 0;
  do
  {
    sub_1F0B900((__int64)v12, a1);
    v5 = a2[2];
    v6 = v5 + 1;
    if ( v5 + 1 > (unsigned __int64)a2[3] )
    {
      if ( *(_QWORD *)a2 > (unsigned __int64)v12 || (unsigned __int64)v12 >= *(_QWORD *)a2 + 24 * v5 )
      {
        sub_2237220(a2, a2 + 4, v6, 24);
        v7 = *(_QWORD *)a2;
        v5 = a2[2];
        v8 = (const __m128i *)v12;
      }
      else
      {
        v11 = *(_QWORD *)a2;
        sub_2237220(a2, a2 + 4, v6, 24);
        v7 = *(_QWORD *)a2;
        v5 = a2[2];
        v8 = (const __m128i *)&v12[*(_QWORD *)a2 - v11];
      }
    }
    else
    {
      v7 = *(_QWORD *)a2;
      v8 = (const __m128i *)v12;
    }
    ++v4;
    v9 = (__m128i *)(v7 + 24 * v5);
    *v9 = _mm_loadu_si128(v8);
    v9[1].m128i_i64[0] = v8[1].m128i_i64[0];
    ++a2[2];
  }
  while ( v4 != (_DWORD)v3 );
  return *(_QWORD *)a2;
}
