__m128 *__fastcall sub_B30E0(__m128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rcx
  __m128 v16; // xmm1
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]

  v5 = a3 - a2;
  v6 = (a3 - a2) >> 5;
  v7 = *(_QWORD *)a4;
  v8 = *(_QWORD *)(a4 + 16);
  v21 = a2;
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      v9 = (v8 - v7) >> 5;
      v10 = v21;
      if ( v9 > v6 )
        v9 = v6;
      v20 = v9;
      v11 = 32 * v9;
      v21 += 32 * v9;
      if ( 32 * v9 > 0 )
      {
        v12 = v7 + v11;
        do
        {
          sub_9EE70(v7);
          v13 = v7;
          v7 += 32;
          sub_9F100(v13, v10);
          v10 += 32;
        }
        while ( v7 != v12 );
        v7 = *(_QWORD *)a4;
      }
      v14 = v20 + ((v7 - *(_QWORD *)(a4 + 8)) >> 5);
      if ( v14 < 0 )
        break;
      if ( v14 > 15 )
      {
        v17 = v14 >> 4;
LABEL_14:
        v18 = (__int64 *)(*(_QWORD *)(a4 + 24) + 8 * v17);
        *(_QWORD *)(a4 + 24) = v18;
        v19 = *v18;
        v8 = v19 + 512;
        v7 = v19 + 32 * (v14 - 16 * v17);
        *(_QWORD *)(a4 + 8) = v19;
        *(_QWORD *)(a4 + 16) = v19 + 512;
        *(_QWORD *)a4 = v7;
        goto LABEL_11;
      }
      v7 += v11;
      v8 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)a4 = v7;
LABEL_11:
      v6 -= v20;
      if ( v6 <= 0 )
        goto LABEL_12;
    }
    v17 = ~((unsigned __int64)~v14 >> 4);
    goto LABEL_14;
  }
LABEL_12:
  v16 = _mm_loadh_ps((const double *)(a4 + 24));
  *a1 = _mm_loadh_ps((const double *)(a4 + 8));
  a1[1] = v16;
  return a1;
}

