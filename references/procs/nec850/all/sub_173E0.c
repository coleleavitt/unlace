unsigned __int64 __fastcall sub_173E0(__int64 *a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  __m128i *v7; // r15
  __int64 v9; // r13
  unsigned __int64 *v10; // r14
  unsigned __int64 v13; // rdx
  __m128i *v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 *v17; // rax
  _QWORD *v18; // rsi
  __m128i *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  int v35; // eax
  __m128 v36; // xmm0
  __m128 *v37; // rdi
  __int64 *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+10h] [rbp-48h]
  unsigned __int64 v46; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(__m128i **)a2;
  v46 = __readfsqword(0x28u);
  v9 = 8 * v6;
  v10 = (unsigned __int64 *)v7 + v6;
  if ( v7 != (__m128i *)v10 )
  {
    if ( v9 >> 3 )
    {
      _BitScanReverse64(&v13, v9 >> 3);
      sub_16690(v7, v10, 2LL * (int)v13, a4, a5, a6);
      if ( v9 > 128 )
      {
        v14 = v7 + 8;
        sub_165C0(v7->m128i_i8, v7[8].m128i_i8);
        do
        {
          while ( 1 )
          {
            v15 = v14->m128i_i64[0];
            v16 = v14[-1].m128i_u64[1];
            v17 = &v14[-1].m128i_i64[1];
            if ( v14->m128i_i64[0] < v16 )
              break;
            v39 = (__int64 *)v14;
            v14 = (__m128i *)((char *)v14 + 8);
            *v39 = v15;
            if ( v10 == (unsigned __int64 *)v14 )
              goto LABEL_8;
          }
          do
          {
            v17[1] = v16;
            v18 = v17;
            v16 = *--v17;
          }
          while ( v15 < v16 );
          v14 = (__m128i *)((char *)v14 + 8);
          *v18 = v15;
        }
        while ( v10 != (unsigned __int64 *)v14 );
LABEL_8:
        v19 = *(__m128i **)a2;
        v20 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 == v20 )
        {
          if ( !a1[1] )
            return v46 - __readfsqword(0x28u);
          v26 = 0;
        }
        else
        {
          v21 = *(_QWORD *)a2;
          while ( 1 )
          {
            v22 = (_QWORD *)v21;
            v21 += 8;
            if ( v20 == v21 )
              break;
            if ( *(_QWORD *)(v21 - 8) == v22[1] )
            {
              if ( (_QWORD *)v20 == v22 )
              {
                v21 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
              }
              else
              {
                v32 = v22 + 2;
                if ( (_QWORD *)v20 != v22 + 2 )
                {
                  do
                  {
                    if ( *v22 != *v32 )
                    {
                      v22[1] = *v32;
                      ++v22;
                    }
                    ++v32;
                  }
                  while ( (_QWORD *)v20 != v32 );
                  v19 = *(__m128i **)a2;
                }
                v21 = (__int64)(v22 + 1);
              }
              break;
            }
          }
          v23 = a1[1];
          v24 = (v21 - (__int64)v19) >> 3;
          v25 = v24;
          v26 = v24;
          if ( v24 == v23 )
          {
LABEL_33:
            if ( !v26 )
              return v46 - __readfsqword(0x28u);
            goto LABEL_34;
          }
          LODWORD(v45) = 0;
          v44 = (__m128i)-1LL;
          if ( v24 >= v23 )
          {
            v27 = *a1;
            v28 = a1[2];
            if ( (unsigned __int64)&v44 >= *a1 && (unsigned __int64)&v44 < v27 + 24 * v28 )
            {
              if ( v28 < v25 )
              {
                v43 = qvector_reserve(a1, v27, v25, 24);
                *a1 = v43;
                v27 = v43;
                v23 = a1[1];
                if ( v23 >= v25 )
                {
                  a1[1] = v25;
LABEL_34:
                  v33 = 0;
                  v34 = 0;
                  do
                  {
                    v35 = 0;
                    v36 = _mm_loadh_ps((const double *)(a3 + 16));
                    if ( *(_BYTE *)(a3 + 81) == 5 )
                      v35 = *(_BYTE *)(a3 + 121) == 0;
                    ++v34;
                    v37 = (__m128 *)(v33 + *a1);
                    v33 += 24;
                    v37[1].m128_i32[0] = *(unsigned __int16 *)(a3 + 24) | (v35 << 16);
                    *v37 = v36;
                  }
                  while ( v34 != v26 );
                  return v46 - __readfsqword(0x28u);
                }
                goto LABEL_46;
              }
              if ( v23 < v25 )
              {
LABEL_46:
                v40 = 24 * v23;
                while ( 1 )
                {
                  v41 = v40 + v27;
                  ++v23;
                  v40 += 24;
                  *(_DWORD *)(v41 + 16) = 0;
                  *(_OWORD *)v41 = -1;
                  if ( v25 == v23 )
                    break;
                  v27 = *a1;
                }
                goto LABEL_20;
              }
              goto LABEL_32;
            }
            if ( v28 < v25 )
            {
              v42 = qvector_reserve(a1, v27, v25, 24);
              *a1 = v42;
              v27 = v42;
              v23 = a1[1];
              if ( v23 >= v25 )
              {
LABEL_20:
                a1[1] = v25;
                goto LABEL_34;
              }
LABEL_17:
              v29 = _mm_load_si128(&v44);
              v30 = v45;
              v31 = 24 * v23;
              while ( 1 )
              {
                ++v23;
                *(_QWORD *)(v27 + v31 + 16) = v30;
                *(__m128i *)(v27 + v31) = v29;
                v31 += 24;
                if ( v25 == v23 )
                  break;
                v27 = *a1;
              }
              goto LABEL_20;
            }
            if ( v23 < v25 )
              goto LABEL_17;
          }
        }
LABEL_32:
        a1[1] = v26;
        goto LABEL_33;
      }
    }
    else
    {
      sub_16690(v7, v10, -2, a4, a5, a6);
    }
    sub_165C0(v7->m128i_i8, (char *)v10);
    goto LABEL_8;
  }
  if ( a1[1] )
    a1[1] = 0;
  return v46 - __readfsqword(0x28u);
}
