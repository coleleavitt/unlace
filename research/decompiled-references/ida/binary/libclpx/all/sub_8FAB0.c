char *__fastcall sub_8FAB0(char *a1, int a2, int a3, __m128d a4)
{
  void *v4; // r12
  int v6; // ebx
  char *result; // rax
  char *v8; // rcx
  char *v9; // rsi
  __int64 v10; // rdx
  __int128 v11; // xmm3
  __int128 v12; // xmm2
  __int128 v13; // xmm1
  __int128 v14; // xmm4
  __int64 v15; // rdx
  char *v16; // rdx
  __int64 v17; // rdi
  int v18; // esi
  unsigned __int64 v19; // rcx
  unsigned int v20; // esi
  __m128d *v21; // rdi
  unsigned int v22; // ecx
  __m128d v23; // xmm1
  int v24; // edx
  int v25; // ebx
  char *v26; // [rsp+0h] [rbp-28h]

  v4 = a1;
  if ( (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v6 = a2;
  result = (char *)operator new[](8LL * a3);
  a4 = (__m128d)*(unsigned __int64 *)&a4.m128d_f64[0];
  if ( a1 )
  {
    if ( a2 && result != a1 )
    {
      if ( a2 >> 3 <= 0 )
      {
        v16 = result;
      }
      else
      {
        v8 = result;
        v9 = a1;
        v10 = (unsigned int)((v6 >> 3) - 1);
        do
        {
          v11 = *((_OWORD *)v9 + 1);
          v8 += 64;
          v9 += 64;
          v12 = *((_OWORD *)v9 - 2);
          v13 = *((_OWORD *)v9 - 1);
          v14 = *((_OWORD *)v9 - 4);
          *((_OWORD *)v8 - 3) = v11;
          *((_OWORD *)v8 - 4) = v14;
          *((_OWORD *)v8 - 2) = v12;
          *((_OWORD *)v8 - 1) = v13;
        }
        while ( v8 != &result[64 * v10 + 64] );
        v15 = ((int)v10 + 1LL) << 6;
        a1 += v15;
        v16 = &result[v15];
      }
      switch ( v6 % 8 )
      {
        case 1:
          goto LABEL_16;
        case 2:
          goto LABEL_15;
        case 3:
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          *((_QWORD *)v16 + 6) = *((_QWORD *)a1 + 6);
LABEL_11:
          *((_QWORD *)v16 + 5) = *((_QWORD *)a1 + 5);
LABEL_12:
          *((_QWORD *)v16 + 4) = *((_QWORD *)a1 + 4);
LABEL_13:
          *((_QWORD *)v16 + 3) = *((_QWORD *)a1 + 3);
LABEL_14:
          *((_QWORD *)v16 + 2) = *((_QWORD *)a1 + 2);
LABEL_15:
          *((_QWORD *)v16 + 1) = *((_QWORD *)a1 + 1);
LABEL_16:
          *(_QWORD *)v16 = *(_QWORD *)a1;
          break;
        default:
          break;
      }
    }
    v26 = result;
    operator delete[](v4);
    result = v26;
    a4 = (__m128d)*(unsigned __int64 *)&a4.m128d_f64[0];
  }
  if ( a3 > v6 )
  {
    v17 = v6;
    v18 = a3 - v6;
    v19 = ((unsigned __int64)&result[8 * v6] >> 3) & 1;
    if ( (unsigned int)(a3 + ~v6) <= 4 )
    {
LABEL_26:
      *(double *)&result[8 * v17] = a4.m128d_f64[0];
      if ( a3 > v6 + 1 )
      {
        *(double *)&result[8 * v6 + 8] = a4.m128d_f64[0];
        if ( a3 > v6 + 2 )
        {
          *(double *)&result[8 * v6 + 16] = a4.m128d_f64[0];
          v24 = v6 + 3;
          if ( a3 > v6 + 3 )
          {
            v25 = v6 + 4;
            *(double *)&result[8 * v24] = a4.m128d_f64[0];
            if ( a3 > v25 )
              *(double *)&result[8 * v25] = a4.m128d_f64[0];
          }
        }
      }
      return result;
    }
    if ( (_DWORD)v19 )
      *(double *)&result[8 * v6++] = a4.m128d_f64[0];
    v20 = v18 - v19;
    v21 = (__m128d *)&result[8 * v17 + 8 * v19];
    v22 = 0;
    v23 = _mm_unpacklo_pd(a4, a4);
    do
    {
      ++v22;
      ++v21;
      v21[-1] = v23;
    }
    while ( v22 < v20 >> 1 );
    v6 += v20 & 0xFFFFFFFE;
    if ( v20 != (v20 & 0xFFFFFFFE) )
    {
      v17 = v6;
      goto LABEL_26;
    }
  }
  return result;
}

