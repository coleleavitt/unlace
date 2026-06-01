/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FF90
// Address: 0x000000000041FF90

//----- (000000000041FF90) ----------------------------------------------------
__m128 *__fastcall sub_41FF90(__m128 *a1, __int64 a2, __int64 a3, double *a4)
{
  __int64 v4; // rdx
  signed __int64 v5; // r14
  double v7; // r15
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __m128 v17; // xmm1
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]

  v4 = a3 - a2;
  v5 = 0x8E38E38E38E38E39LL * (v4 >> 3);
  v7 = *a4;
  v8 = *((_QWORD *)a4 + 2);
  v21 = a2;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v9 = 0x8E38E38E38E38E39LL * ((v8 - *(_QWORD *)&v7) >> 3);
      if ( v9 > v5 )
        v9 = v5;
      v10 = v9;
      v11 = v21;
      v22 = 72 * v9;
      v21 += 72 * v9;
      v12 = 0x8E38E38E38E38E39LL * ((72 * v9) >> 3);
      if ( 72 * v9 > 0 )
      {
        do
        {
          v13 = v11;
          v14 = *(_QWORD *)&v7;
          v11 += 72;
          *(_QWORD *)&v7 += 72LL;
          sub_4788F0(v14, v13);
          --v12;
        }
        while ( v12 );
        v7 = *a4;
      }
      v15 = v10 - 0x71C71C71C71C71C7LL * ((__int64)(*(_QWORD *)&v7 - *((_QWORD *)a4 + 1)) >> 3);
      if ( v15 < 0 )
        break;
      if ( v15 > 6 )
      {
        v18 = v15 / 7;
LABEL_13:
        v19 = (__int64 *)(8 * v18 + *((_QWORD *)a4 + 3));
        *((_QWORD *)a4 + 3) = v19;
        v20 = *v19;
        v8 = *v19 + 504;
        *(_QWORD *)&v7 = v20 + 72 * (v15 - 7 * v18);
        *((_QWORD *)a4 + 1) = v20;
        *((_QWORD *)a4 + 2) = v8;
        *a4 = v7;
        goto LABEL_10;
      }
      *(_QWORD *)&v7 += v22;
      v8 = *((_QWORD *)a4 + 2);
      *a4 = v7;
LABEL_10:
      v5 -= v10;
      if ( v5 <= 0 )
        goto LABEL_11;
    }
    v18 = ~(~v15 / 7);
    goto LABEL_13;
  }
LABEL_11:
  v17 = _mm_loadh_ps(a4 + 3);
  *a1 = _mm_loadh_ps(a4 + 1);
  a1[1] = v17;
  return a1;
}
