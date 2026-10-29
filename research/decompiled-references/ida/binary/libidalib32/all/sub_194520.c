void __fastcall sub_194520(double a1, double a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r9
  size_t v16; // rax
  __m128i *v17; // rsi
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i *v21; // r12
  __int64 v22; // rbx
  char *v23; // rbp
  unsigned __int64 v24; // rdx
  char *m128i_i8; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  char *v28; // rax
  _QWORD *v29; // rsi
  char *v30; // rsi
  __int64 v31; // rax
  __int8 *v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  *(_QWORD *)(a5 + 24) = -1;
  v9 = *(__int64 **)a6;
  v10 = *(_QWORD *)a6 + 32LL * *(_QWORD *)(a6 + 8);
  if ( v10 != *(_QWORD *)a6 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( v9[1] == -2 )
        {
          if ( v11 )
          {
            v12 = 8LL * *(_QWORD *)(v11 + 16);
            v13 = v12 >> 3;
            if ( v12 >> 3 )
              break;
          }
        }
        v9 += 4;
        if ( (__int64 *)v10 == v9 )
          goto LABEL_12;
      }
      v14 = *(_QWORD *)(a5 + 8);
      v15 = *(_QWORD *)(v11 + 8);
      v16 = 0;
      v17 = *(__m128i **)a5;
      v18 = 8 * v14;
      if ( *(_QWORD *)(a5 + 16) < (unsigned __int64)(v13 + v14) )
      {
        v36 = v15;
        v34 = 8 * v14;
        v31 = qvector_reserve();
        v18 = v34;
        v15 = v36;
        *(_QWORD *)a5 = v31;
        v17 = (__m128i *)v31;
        v16 = 8LL * *(_QWORD *)(a5 + 8) - v34;
      }
      v35 = v15;
      v33 = &v17->m128i_i8[v18];
      memmove(&v33[v12], v33, v16);
      v19 = 0;
      if ( v12 )
      {
        do
        {
          *(_QWORD *)&v33[v19] = *(_QWORD *)(v35 + v19);
          v19 += 8;
        }
        while ( v12 != v19 );
      }
      v9 += 4;
      *(_QWORD *)(a5 + 8) += v13;
    }
    while ( (__int64 *)v10 != v9 );
  }
LABEL_12:
  v20 = *(_QWORD *)(a6 + 24);
  if ( v20 && *(_QWORD *)(a6 + 32) == -2 )
  {
    *(_QWORD *)(a5 + 24) = **(_QWORD **)(v20 + 8);
    if ( (a7 & 4) != 0 )
      return;
  }
  else if ( (a7 & 4) != 0 )
  {
    return;
  }
  v21 = *(__m128i **)a5;
  v22 = 8LL * *(_QWORD *)(a5 + 8);
  v23 = (char *)(*(_QWORD *)a5 + v22);
  if ( *(char **)a5 != v23 )
  {
    if ( v22 >> 3 )
    {
      _BitScanReverse64(&v24, v22 >> 3);
      sub_18E8C0(*(__m128i **)a5, (unsigned __int64 *)(*(_QWORD *)a5 + v22), 2LL * (int)v24, a1, a2, a3);
      if ( v22 > 128 )
      {
        m128i_i8 = v21[8].m128i_i8;
        sub_18ED20(v21->m128i_i8, v21[8].m128i_i8);
        v26 = v21[8].m128i_u64[0];
        v27 = v21[7].m128i_u64[1];
        v28 = &v21[7].m128i_i8[8];
        if ( v26 >= v27 )
          goto LABEL_24;
        while ( 1 )
        {
          do
          {
            *((_QWORD *)v28 + 1) = v27;
            v29 = v28;
            v27 = *((_QWORD *)v28 - 1);
            v28 -= 8;
          }
          while ( v26 < v27 );
          m128i_i8 += 8;
          *v29 = v26;
          if ( v23 == m128i_i8 )
            break;
          while ( 1 )
          {
            v26 = *(_QWORD *)m128i_i8;
            v27 = *((_QWORD *)m128i_i8 - 1);
            v28 = m128i_i8 - 8;
            if ( *(_QWORD *)m128i_i8 < v27 )
              break;
LABEL_24:
            v30 = m128i_i8;
            m128i_i8 += 8;
            *(_QWORD *)v30 = v26;
            if ( v23 == m128i_i8 )
              return;
          }
        }
        return;
      }
    }
    else
    {
      sub_18E8C0(*(__m128i **)a5, (unsigned __int64 *)(*(_QWORD *)a5 + v22), -2, a1, a2, a3);
    }
    sub_18ED20(v21->m128i_i8, v23);
  }
}

