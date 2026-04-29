_QWORD *__fastcall sub_3CC450(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  _QWORD *v5; // rbp
  __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rcx

  v5 = a1;
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(_DWORD *)(a3 + 20);
  v8 = *(int *)(a3 + 24);
  if ( !v6 )
  {
    if ( v7 < 0 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    v10 = v7;
    if ( (unsigned __int64)v7 < 0x500000001LL && (v8 & 0x80000000) == 0LL )
    {
      a1 = (_QWORD *)(stru_FF0 + 16);
      if ( v8 < *(_QWORD *)&stru_1008[v7].st_name )
      {
        v11 = *(_QWORD *)(stru_FF0[v7].st_size + 8 * v8);
        goto LABEL_9;
      }
    }
LABEL_22:
    v12 = *(_QWORD *)(v6 + 64);
    v11 = 0;
    v13 = *(unsigned int *)(v12 + 64);
    if ( (int)v13 > v7 )
      goto LABEL_10;
LABEL_23:
    v6 = 0;
    goto LABEL_12;
  }
  v9 = *(_DWORD *)(v6 + 60);
  if ( (unsigned int)(v9 - 1) > 1 )
  {
    if ( v7 >= 0 )
    {
      v10 = v7;
      if ( (unsigned __int64)v7 >= 0x500000001LL || (v8 & 0x80000000) != 0LL )
      {
        v11 = 0;
        v6 = 0;
        goto LABEL_9;
      }
      a1 = (_QWORD *)(24LL * v7 + 4096);
      if ( v8 < *(_QWORD *)&stru_1008[v7].st_name )
        goto LABEL_7;
      goto LABEL_17;
    }
LABEL_20:
    v11 = 0;
    v6 = 0;
    goto LABEL_12;
  }
  if ( v7 < 0 )
    goto LABEL_20;
  v10 = v7;
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 120) || (v8 & 0x80000000) != 0LL )
    goto LABEL_22;
  a1 = (_QWORD *)(*(_QWORD *)(v6 + 112) + 24LL * v7);
  if ( v8 < a1[1] )
  {
LABEL_7:
    a1 = (_QWORD *)*a1;
    v11 = a1[v8];
    if ( (unsigned int)(v9 - 1) >= 2 )
      v6 = 0;
    goto LABEL_9;
  }
LABEL_17:
  v11 = 0;
  if ( (unsigned int)(v9 - 1) >= 2 )
    v6 = 0;
LABEL_9:
  v12 = *(_QWORD *)(v6 + 64);
  v13 = *(unsigned int *)(v12 + 64);
  if ( (int)v13 <= v7 )
    goto LABEL_23;
LABEL_10:
  if ( v7 >= (unsigned int)v13 )
    sub_3CA100(a4, (__int64)a1, v13);
  v6 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v10);
LABEL_12:
  v14 = sub_133510(*(_QWORD *)(v6 + 64), v11, *(unsigned int *)(v6 + 72));
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 72));
  v16 = *(_QWORD *)(a3 + 48);
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a3 + 32);
  *v5 = v16;
  *(_QWORD *)((char *)v5 + 12) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v15).m128i_u64[0];
  return v5;
}
