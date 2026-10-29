__int64 __fastcall sub_651600(__int64 a1, unsigned int **a2, __int64 a3, int a4, char a5, unsigned __int8 a6)
{
  __int64 *v10; // rbx
  unsigned int *v11; // rax
  unsigned int *v12; // rax
  unsigned int **v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rax
  unsigned __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned int *i; // r15
  __int64 v25; // rsi
  unsigned int *v26; // rbp
  int v27; // eax
  __int64 v29; // rax
  unsigned int *v30; // rsi
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  __m128i v35; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v10 = *(__int64 **)(a1 + 1480);
  v11 = sub_4EEBF0((__int64)(v10 + 194));
  sub_615AB0(*v10, 19, *v11);
  v12 = sub_4EEB90((__int64)(v10 + 194), 0xFFFFFFFF);
  sub_615AB0(*v10, 20, v12[1]);
  v13 = *(unsigned int ***)a3;
  v14 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
  v15 = (__int64)a2[1];
  if ( v14 != *(_QWORD *)a3 )
  {
    do
    {
      v30 = *a2;
      v17 = v15 + 1;
      v18 = **v13;
      v19 = (*v13)[1] - v18;
      v20 = (unsigned __int64)a2[2];
      v35.m128i_i64[1] = v19;
      v21 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18 - a4), _mm_cvtsi32_si128(v18)).m128i_u64[0];
      v35.m128i_i64[0] = v21;
      if ( &v35 < (__m128i *)v30 || &v35 >= (__m128i *)&v30[4 * v20] )
      {
        if ( v20 < v17 )
        {
          v31 = v14;
          v22 = qvector_reserve(a2, v30, v15 + 1, 16);
          v14 = v31;
          *a2 = (unsigned int *)v22;
          v30 = (unsigned int *)v22;
          v15 = (__int64)a2[1];
        }
        *(__m128i *)&v30[4 * v15] = _mm_load_si128(&v35);
      }
      else
      {
        if ( v20 < v17 )
        {
          v32 = v14;
          v29 = qvector_reserve(a2, v30, v15 + 1, 16);
          v14 = v32;
          *a2 = (unsigned int *)v29;
          v30 = (unsigned int *)v29;
          v15 = (__int64)a2[1];
        }
        v16 = (__int64 *)&v30[4 * v15];
        v16[1] = v19;
        *v16 = v21;
      }
      ++v13;
      v15 = (__int64)a2[1] + 1;
      a2[1] = (unsigned int *)v15;
    }
    while ( (unsigned int **)v14 != v13 );
  }
  if ( v15 )
  {
    v23 = (__int64)&(*a2)[4 * v15];
    for ( i = *a2; (unsigned int *)v23 != i; sub_4400C0(*(_QWORD *)(a1 + 1480), *(i - 4), v26, a6) )
    {
      if ( a5 )
        sub_3B7400(
          (int)"HIDECANCEL\nMoving segment from 0x%0*a to 0x%0*a...",
          (unsigned int)(2 * *(_DWORD *)(a1 + 1328)),
          *i,
          (unsigned int)(2 * *(_DWORD *)(a1 + 1328)),
          i[1]);
      v25 = i[1];
      i += 4;
      v26 = sub_4EE820(*(_QWORD *)(a1 + 1480) + 1552LL, v25);
      sub_396090(0x1Eu, *(i - 4), *(i - 3), *((_QWORD *)i - 1), a6);
      sub_4F70D0(a1, v26, *(i - 4));
    }
    sub_4A60E0(a1, (__int64)a2);
  }
  v27 = getinf(4);
  return setinf(4, (unsigned int)(v27 + 1));
}

