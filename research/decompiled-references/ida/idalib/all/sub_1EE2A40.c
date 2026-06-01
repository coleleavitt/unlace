void __fastcall sub_1EE2A40(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r13d
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __m128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const __m128i *v13; // rdx
  __m128i *v14; // rax
  __int64 v15; // r12
  __int64 v16; // [rsp+8h] [rbp-70h] BYREF
  const __m128i *v17; // [rsp+10h] [rbp-68h]
  __int64 *v18; // [rsp+18h] [rbp-60h]
  __m128 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+30h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 7200);
  if ( v2 )
  {
    v3 = 0;
    v17 = (const __m128i *)&v19;
    v4 = 0;
    v18 = a2 + 2;
    do
    {
      v5 = v4 + 2;
      sub_1EE2910((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 7192) + v3));
      v6 = v4 + 1;
      v4 += 3;
      v7 = sub_1EE2910((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 7192) + 8 * v6));
      v8 = *((unsigned int *)a2 + 3);
      v16 = v7;
      v9 = _mm_loadh_ps((const double *)&v16);
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 7192) + 8 * v5);
      v10 = *((unsigned int *)a2 + 2);
      v19 = v9;
      v11 = v10 + 1;
      if ( v10 + 1 > v8 )
      {
        v15 = *a2;
        if ( *a2 > (unsigned __int64)v17 || (unsigned __int64)v17 >= v15 + 24 * v10 )
        {
          sub_2237220(a2, v18, v11, 24);
          v12 = *a2;
          v10 = *((unsigned int *)a2 + 2);
          v13 = v17;
        }
        else
        {
          sub_2237220(a2, v18, v11, 24);
          v12 = *a2;
          v10 = *((unsigned int *)a2 + 2);
          v13 = (const __m128i *)((char *)v17 + *a2 - v15);
        }
      }
      else
      {
        v12 = *a2;
        v13 = v17;
      }
      v3 += 24;
      v14 = (__m128i *)(v12 + 24 * v10);
      *v14 = _mm_loadu_si128(v13);
      v14[1].m128i_i64[0] = v13[1].m128i_i64[0];
      ++*((_DWORD *)a2 + 2);
    }
    while ( v4 < v2 );
    *(_DWORD *)(a1 + 7200) = 0;
  }
}
