void __fastcall sub_21C84F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  const __m128i *v10; // rsi
  __int64 *v11; // r11
  __m128i v12; // xmm1
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i *v15; // rax
  __m128i v16; // xmm3
  unsigned __int64 *v17; // rbp
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rsi
  unsigned __int64 *v21; // r11
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rdi
  __m128 *v26; // rbp
  __m128 *v27; // r12
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  _QWORD *v31; // rdx
  _QWORD *i; // rcx
  __int64 v33; // rdi
  __m128 *v34; // rsi
  __m128 *v35; // r11
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __m128 *v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-50h] BYREF
  __m128i v42; // [rsp+8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+18h] [rbp-38h]

  if ( !*(_BYTE *)(a1 + 384) )
  {
    v7 = *(__int64 **)(a1 + 80);
    v8 = *(_QWORD *)(a1 + 72);
    if ( v7 != (__int64 *)v8 )
    {
      _BitScanReverse64(&v9, 0xAAAAAAAAAAAAAAABLL * (((__int64)v7 - v8) >> 3));
      sub_21C7DE0(*(_QWORD *)(a1 + 72), *(const __m128i **)(a1 + 80), 2LL * (int)(63 - (v9 ^ 0x3F)), a4, a5, a6);
      if ( (__int64)v7 - v8 <= 384 )
      {
        sub_21C5440(v8, v7);
      }
      else
      {
        v10 = (const __m128i *)(v8 + 384);
        sub_21C5440(v8, (__int64 *)(v8 + 384));
        if ( v7 != v11 )
        {
          do
          {
            v12 = _mm_loadu_si128(v10);
            v13 = v10->m128i_i64[0];
            v14 = v10[-2].m128i_u64[1];
            v43 = v10[1].m128i_i64[0];
            v15 = (__m128i *)&v10[-2].m128i_u64[1];
            v42 = v12;
            if ( v13 < v14 )
            {
              while ( 1 )
              {
                v15[1].m128i_i64[1] = v14;
                v14 = v15[-2].m128i_u64[1];
                v15[2] = _mm_loadu_si128((const __m128i *)&v15->m128i_u64[1]);
                if ( v13 >= v14 )
                  break;
                v15 = (__m128i *)((char *)v15 - 24);
              }
            }
            else
            {
              v15 = (__m128i *)v10;
            }
            v16 = _mm_loadu_si128((const __m128i *)&v42.m128i_u64[1]);
            v10 = (const __m128i *)((char *)v10 + 24);
            v15->m128i_i64[0] = v13;
            *(__m128i *)((char *)v15 + 8) = v16;
          }
          while ( v7 != (__int64 *)v10 );
        }
      }
    }
    v17 = *(unsigned __int64 **)(a1 + 104);
    v18 = *(unsigned __int64 **)(a1 + 96);
    if ( v17 != v18 )
    {
      _BitScanReverse64(&v19, ((char *)v17 - (char *)v18) >> 4);
      sub_21C80D0(*(char **)(a1 + 96), *(char **)(a1 + 104), 2LL * (int)(63 - (v19 ^ 0x3F)));
      if ( (char *)v17 - (char *)v18 <= 256 )
      {
        sub_21C56E0(v18, v17);
      }
      else
      {
        v20 = v18 + 32;
        sub_21C56E0(v18, v18 + 32);
        if ( v17 != v21 )
        {
          do
          {
            while ( 1 )
            {
              v22 = *v20;
              v23 = *(v20 - 2);
              v24 = v20 - 2;
              v25 = v20[1];
              if ( *v20 < v23 )
                break;
              v40 = v20;
              v20 += 2;
              *v40 = v22;
              v40[1] = v25;
              if ( v17 == v20 )
                goto LABEL_18;
            }
            while ( 1 )
            {
              v24[2] = v23;
              v24[3] = v24[1];
              v23 = *(v24 - 2);
              if ( v22 >= v23 )
                break;
              v24 -= 2;
            }
            v20 += 2;
            *v24 = v22;
            v24[1] = v25;
          }
          while ( v17 != v20 );
        }
      }
    }
LABEL_18:
    v26 = *(__m128 **)(a1 + 152);
    v27 = *(__m128 **)(a1 + 144);
    if ( v26 != v27 )
    {
      _BitScanReverse64(&v28, v26 - v27);
      sub_21C82E0(*(char **)(a1 + 144), *(char **)(a1 + 152), 2LL * (int)(63 - (v28 ^ 0x3F)));
      if ( (char *)v26 - (char *)v27 > 256 )
      {
        v34 = v27 + 16;
        sub_21C5950(v27, v27 + 16);
        if ( v26 != v35 )
        {
          do
          {
            v36 = v34->m128_u64[0];
            v37 = v34[-1].m128_u64[0];
            v38 = v34 - 1;
            v39 = v34->m128_u64[1];
            if ( v34->m128_u64[0] < v37 )
            {
              while ( 1 )
              {
                v38[1].m128_u64[0] = v37;
                v38[1].m128_u64[1] = v38->m128_u64[1];
                v37 = v38[-1].m128_u64[0];
                if ( v36 >= v37 )
                  break;
                --v38;
              }
            }
            else
            {
              v38 = v34;
            }
            ++v34;
            v41 = v39;
            *v38 = _mm_loadh_ps((const double *)&v41);
          }
          while ( v26 != v34 );
        }
      }
      else
      {
        sub_21C5950(v27, v26);
      }
      v29 = *(_QWORD **)(a1 + 144);
      v30 = *(_QWORD **)(a1 + 152);
      if ( v29 != v30 )
      {
        while ( 1 )
        {
          v31 = v29 + 2;
          if ( v29 + 2 == v30 )
            break;
          if ( *v29 == v29[2] && v29[1] == v29[3] )
          {
            if ( v29 != v30 )
            {
              for ( i = v29 + 4; v30 != i; i += 2 )
              {
                while ( *v29 != *i || v29[1] != i[1] )
                {
                  v29[2] = *i;
                  v33 = i[1];
                  i += 2;
                  v29[3] = v33;
                  v29 = v31;
                  v31 += 2;
                  if ( v30 == i )
                    goto LABEL_34;
                }
              }
LABEL_34:
              if ( v31 != v30 )
                *(_QWORD *)(a1 + 152) = v31;
            }
            break;
          }
          v29 += 2;
        }
      }
    }
    *(_BYTE *)(a1 + 384) = 1;
  }
}
