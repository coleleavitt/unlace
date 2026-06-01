__int64 __fastcall sub_19FACD0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rcx
  __int8 v7; // r12
  unsigned int v9; // eax
  int v10; // r13d
  unsigned int v11; // edi
  unsigned __int64 v12; // rsi
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  int v17; // eax
  __m128i *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v22; // rdx
  const __m128i *v23; // r12
  int v24; // r11d
  unsigned __int64 v25; // rbp
  int v26; // edi
  int v27; // edi
  __int64 v28; // r9
  bool v29; // zf
  __int64 v30; // rsi
  __int64 *v31; // [rsp+0h] [rbp-58h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h] BYREF
  __m128 v33; // [rsp+10h] [rbp-48h] BYREF
  __int64 v34; // [rsp+20h] [rbp-38h]
  char v35; // [rsp+28h] [rbp-30h]

  v6 = (__int64 *)(a1 + 48);
  v7 = a3;
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(_DWORD *)(a1 + 8);
  v32 = a2;
  if ( !v9 )
  {
    v33.m128_u64[0] = 0;
LABEL_16:
    v31 = v6;
    sub_AB37A0(v6, 2 * v9, a3, (__int64)v6, a5, a6);
LABEL_17:
    sub_A6F430(v31, (__int64 *)&v32, &v33);
    a3 = v32;
    a5 = *(_QWORD *)(a1 + 48);
    v12 = v33.m128_u64[0];
    v27 = *(_DWORD *)(a1 + 56) + 1;
    v6 = v31;
    goto LABEL_12;
  }
  a5 = *(_QWORD *)(a1 + 48);
  a3 = a2;
  v11 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = a5 + 16LL * v11;
  v13 = *(_QWORD *)v12;
  if ( a3 == *(_QWORD *)v12 )
  {
LABEL_3:
    sub_A8BEF0(&v33, (_QWORD *)v12, (_QWORD *)(a5 + 16LL * v9), (__int64)v6, 1);
    goto LABEL_4;
  }
  v24 = 1;
  v25 = 0;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( v13 == -8192 && !v25 )
        v25 = v12;
      v11 = (v9 - 1) & (v24 + v11);
      v12 = a5 + 16LL * v11;
      v13 = *(_QWORD *)v12;
      if ( a3 == *(_QWORD *)v12 )
        goto LABEL_3;
      if ( v13 == -4096 )
      {
        if ( v25 )
          v12 = v25;
        break;
      }
      ++v24;
    }
  }
  v26 = *(_DWORD *)(a1 + 56);
  a6 = 3 * v9;
  v33.m128_u64[0] = v12;
  v27 = v26 + 1;
  if ( 4 * v27 >= (unsigned int)a6 )
    goto LABEL_16;
  v28 = v9 - *(_DWORD *)(a1 + 60) - v27;
  if ( (unsigned int)v28 <= v9 >> 3 )
  {
    v31 = v6;
    sub_AB37A0(v6, v9, a3, (__int64)v6, a5, v28);
    goto LABEL_17;
  }
LABEL_12:
  v29 = *(_QWORD *)v12 == -4096;
  *(_DWORD *)(a1 + 56) = v27;
  if ( !v29 )
    --*(_DWORD *)(a1 + 60);
  *(_QWORD *)v12 = a3;
  *(_DWORD *)(v12 + 8) = v10;
  sub_A8BEF0(&v33, (_QWORD *)v12, (_QWORD *)(a5 + 16LL * *(unsigned int *)(a1 + 64)), (__int64)v6, 1);
LABEL_4:
  v14 = *(unsigned int *)(a1 + 8);
  v15 = *(_QWORD *)a1;
  v16 = *(unsigned int *)(a1 + 12);
  v17 = *(_DWORD *)(a1 + 8);
  v18 = (__m128i *)(*(_QWORD *)a1 + 32 * v14);
  if ( v14 >= v16 )
  {
    v22 = v14 + 1;
    v33.m128_i8[8] = v7;
    v23 = (const __m128i *)&v33;
    v33.m128_u64[0] = v32;
    v34 = 0;
    v35 = 0;
    if ( v16 < v22 )
    {
      v30 = a1 + 16;
      if ( v15 > (unsigned __int64)&v33 || v18 <= (__m128i *)&v33 )
      {
        v23 = (const __m128i *)&v33;
        sub_2237220(a1, v30, v22, 32);
        v18 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
      }
      else
      {
        sub_2237220(a1, v30, v22, 32);
        v23 = (const __m128i *)((char *)&v33 + *(_QWORD *)a1 - v15);
        v18 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
      }
    }
    *v18 = _mm_loadu_si128(v23);
    v18[1] = _mm_loadu_si128(v23 + 1);
    v17 = *(_DWORD *)(a1 + 8);
  }
  else
  {
    v18->m128i_i64[0] = v32;
    v18->m128i_i8[8] = v7;
    v18[1].m128i_i64[0] = 0;
    v18[1].m128i_i8[8] = 0;
  }
  v19 = *(_QWORD *)a1;
  v20 = (unsigned int)(v17 + 1);
  *(_DWORD *)(a1 + 8) = v20;
  return v19 + 32 * v20 - 32;
}
