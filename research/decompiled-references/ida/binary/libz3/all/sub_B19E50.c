__int64 __fastcall sub_B19E50(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __m128i v3; // xmm0
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  unsigned int *v9; // r9
  __int64 v10; // rcx
  __int64 i; // rax
  unsigned int *v12; // rdi
  int v13; // r10d
  int v14; // r8d
  unsigned int *v15; // r15
  unsigned int *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  const double *v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  unsigned int v25; // esi
  __m128i si128; // xmm0
  __m128i v27; // kr00_16
  __int64 v28; // rax
  unsigned int *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  __m128i v33; // [rsp+0h] [rbp-98h] BYREF
  unsigned int *v34; // [rsp+18h] [rbp-80h]
  __int64 *v35; // [rsp+20h] [rbp-78h]
  __int64 *v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+48h] [rbp-50h] BYREF
  __m128i v40[4]; // [rsp+50h] [rbp-48h] BYREF

  v2 = dword_1C7ED24;
  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(*a2 - 8));
    v33.m128i_i64[0] = v3.m128i_i64[0];
    v5 = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v3, 229));
    v6 = (_QWORD *)sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v3) + 8);
    v7 = *a2;
    v8 = v6;
    v9 = (unsigned int *)(v6 + 1);
    *v6 = v3.m128i_i64[0];
    if ( v7 )
    {
      v10 = 4LL * *(unsigned int *)(v7 - 4);
      if ( v10 )
      {
        for ( i = 0; i != v10; i += 4 )
          *(_DWORD *)((char *)v8 + i + 8) = *(_DWORD *)(v7 + i);
        v5 = *((unsigned int *)v8 + 1);
      }
    }
    v12 = &v9[v5];
    v13 = dword_1C7ED24;
    if ( v12 == v9 )
    {
      *((_DWORD *)v8 + 1) = 0;
LABEL_31:
      v2 = v13;
    }
    else
    {
      v14 = dword_1C7ED20;
      v15 = v9;
      v16 = v9;
      v17 = 0;
      while ( 1 )
      {
        v2 = *v16;
        if ( v14 == *v16 )
          break;
        if ( v2 != v13 )
        {
          v18 = (unsigned int)v17;
          v17 = (unsigned int)(v17 + 1);
          v9[v18] = v2;
        }
        if ( v12 == ++v16 )
        {
          *((_DWORD *)v8 + 1) = v17;
          switch ( (_DWORD)v17 )
          {
            case 1:
              v2 = *((_DWORD *)v8 + 2);
              break;
            case 2:
              v2 = sub_B19BA0(a1, *((_DWORD *)v8 + 2), *((_DWORD *)v8 + 3));
              break;
            case 0:
              goto LABEL_31;
            default:
              v20 = *(const double **)(a1 + 8);
              v21 = 0;
              v34 = &v9[v17];
              v22 = *((_QWORD *)v20 + 1);
              v35 = (__int64 *)v40;
              v23 = (__m128i)_mm_loadh_ps(v20 + 1);
              v36 = &v37;
              v38 = v22;
              do
              {
                v24 = *(_QWORD *)v20;
                v25 = *v15;
                v40[0] = v23;
                sub_894B80(v24, v25, v35);
                si128 = _mm_load_si128(v40);
                v27 = v40[0];
                v37 = si128.m128i_i64[0];
                if ( si128.m128i_i64[0] )
                  ++*(_DWORD *)(si128.m128i_i64[0] + 8);
                v39 = v21;
                v33 = si128;
                sub_B08910(&v39, v36);
                v23 = _mm_load_si128(&v33);
                v21 = v39;
                ++v15;
              }
              while ( v34 != v15 );
              v28 = sub_15E1AF0(*((_QWORD *)v20 + 1));
              v29 = (unsigned int *)v28;
              if ( v28 )
                ++*(_DWORD *)(v28 + 8);
              sub_B035B0(v27.m128i_i64[0], v27.m128i_i64[1]);
              v30 = *(_QWORD *)(*(_QWORD *)v20 + 8832LL);
              if ( !v30
                || (v31 = *v29, (unsigned int)v31 >= *(_DWORD *)(v30 - 4))
                || (v32 = *(_DWORD *)(v30 + 4 * v31), v32 == 0x7FFFFFFF) )
              {
                v32 = sub_B67520(*(_QWORD *)v20, v29);
              }
              v2 = 2 * v32;
              sub_B035B0((__int64)v29, v27.m128i_i64[1]);
              sub_2334C0(&v38);
              break;
          }
          break;
        }
      }
    }
    sub_186B220(v8);
  }
  return v2;
}

