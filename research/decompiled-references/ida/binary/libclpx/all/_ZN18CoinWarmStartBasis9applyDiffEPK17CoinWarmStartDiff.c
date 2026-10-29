unsigned __int64 __fastcall CoinWarmStartBasis::applyDiff(__int64 a1, const void *a2)
{
  void *v2; // rax
  int v3; // edx
  __m128i *v4; // r8
  __m128i *v5; // r9
  unsigned __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // r11d
  int v14; // r10d
  unsigned int v15; // edi
  const __m128i *v16; // rdx
  __m128i *v17; // rsi
  __int64 v18; // rdi
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int32 *v22; // rdi
  unsigned int *v23; // rsi
  int v24; // ecx
  const __m128i *v25; // rax
  __m128i *v26; // rdx
  __int64 v27; // rcx
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i *v31; // rax
  unsigned int *v32; // rdx
  unsigned int v33; // edi
  __m128i *v34; // rsi
  int *v35; // rdx
  int v36; // ebx

  if ( !a2 )
    BUG();
  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDiff,
         (const struct __class_type_info *)&`typeinfo for'CoinWarmStartBasisDiff,
         -1);
  v3 = *((_DWORD *)v2 + 2);
  v4 = *(__m128i **)(a1 + 24);
  v5 = *(__m128i **)(a1 + 32);
  result = *((_QWORD *)v2 + 2);
  if ( v3 < 0 )
  {
    v11 = 15 - v3;
    v12 = *(_DWORD *)(result - 4) + 15;
    v13 = (15 - v3) >> 4;
    v14 = v12 >> 4;
    if ( v13 && v4 != (__m128i *)result )
    {
      v15 = v11 >> 7;
      if ( v11 >> 7 <= 0 )
      {
        v22 = (__int32 *)result;
      }
      else
      {
        if ( ((unsigned __int64)v4 >= result + 32 || result >= (unsigned __int64)&v4[2]) && v15 > 1 )
        {
          v16 = (const __m128i *)result;
          v17 = v4;
          v18 = v15 - 1;
          do
          {
            v19 = _mm_loadu_si128(v16);
            v16 += 2;
            v17 += 2;
            v20 = _mm_loadu_si128(v16 - 1);
            v17[-2] = v19;
            v17[-1] = v20;
          }
          while ( v16 != (const __m128i *)(result + 32 + 32 * v18) );
        }
        else
        {
          v34 = v4;
          v35 = (int *)result;
          v18 = v15 - 1;
          do
          {
            v36 = *v35;
            v35 += 8;
            v34 += 2;
            v34[-2].m128i_i32[0] = v36;
            v34[-2].m128i_i32[1] = *(v35 - 7);
            v34[-2].m128i_i32[2] = *(v35 - 6);
            v34[-2].m128i_i32[3] = *(v35 - 5);
            v34[-1].m128i_i32[0] = *(v35 - 4);
            v34[-1].m128i_i32[1] = *(v35 - 3);
            v34[-1].m128i_i32[2] = *(v35 - 2);
            v34[-1].m128i_i32[3] = *(v35 - 1);
          }
          while ( (int *)(result + 32 * (v18 + 1)) != v35 );
        }
        v21 = 32 * ((int)v18 + 1LL);
        v22 = (__int32 *)(result + v21);
        v4 = (__m128i *)((char *)v4 + v21);
      }
      switch ( v13 % 8 )
      {
        case 1:
          goto LABEL_25;
        case 2:
          goto LABEL_24;
        case 3:
          goto LABEL_23;
        case 4:
          goto LABEL_22;
        case 5:
          goto LABEL_21;
        case 6:
          goto LABEL_20;
        case 7:
          v4[1].m128i_i32[2] = v22[6];
LABEL_20:
          v4[1].m128i_i32[1] = v22[5];
LABEL_21:
          v4[1].m128i_i32[0] = v22[4];
LABEL_22:
          v4->m128i_i32[3] = v22[3];
LABEL_23:
          v4->m128i_i32[2] = v22[2];
LABEL_24:
          v4->m128i_i32[1] = v22[1];
LABEL_25:
          v4->m128i_i32[0] = *v22;
          break;
        default:
          break;
      }
    }
    v23 = (unsigned int *)(result + 4LL * v13);
    if ( v14 && v23 != (unsigned int *)v5 )
    {
      v24 = v12 >> 7;
      if ( v24 > 0 )
      {
        if ( (v23 >= (unsigned int *)&v5[2] || (unsigned __int64)v5 >= result + 4LL * v13 + 4 + 28)
          && (unsigned int)v24 > 1 )
        {
          v25 = (const __m128i *)(result + 4LL * v13);
          v26 = v5;
          v27 = (unsigned int)(v24 - 1);
          do
          {
            v28 = _mm_loadu_si128(v25);
            v25 += 2;
            v26 += 2;
            v29 = _mm_loadu_si128(v25 - 1);
            v26[-2] = v28;
            v26[-1] = v29;
          }
          while ( v25 != (const __m128i *)&v23[8 * v27 + 8] );
        }
        else
        {
          v31 = v5;
          v32 = v23;
          v27 = (unsigned int)(v24 - 1);
          do
          {
            v33 = *v32;
            v32 += 8;
            v31 += 2;
            v31[-2].m128i_i32[0] = v33;
            v31[-2].m128i_i32[1] = *(v32 - 7);
            v31[-2].m128i_i32[2] = *(v32 - 6);
            v31[-2].m128i_i32[3] = *(v32 - 5);
            v31[-1].m128i_i32[0] = *(v32 - 4);
            v31[-1].m128i_i32[1] = *(v32 - 3);
            v31[-1].m128i_i32[2] = *(v32 - 2);
            v31[-1].m128i_i32[3] = *(v32 - 1);
          }
          while ( &v23[8 * v27 + 8] != v32 );
        }
        v30 = 32 * ((int)v27 + 1LL);
        v23 = (unsigned int *)((char *)v23 + v30);
        v5 = (__m128i *)((char *)v5 + v30);
      }
      result = (unsigned int)(v14 % 8);
      switch ( v14 % 8 )
      {
        case 1:
          goto LABEL_41;
        case 2:
          goto LABEL_40;
        case 3:
          goto LABEL_39;
        case 4:
          goto LABEL_38;
        case 5:
          goto LABEL_37;
        case 6:
          goto LABEL_36;
        case 7:
          v5[1].m128i_i32[2] = v23[6];
LABEL_36:
          v5[1].m128i_i32[1] = v23[5];
LABEL_37:
          v5[1].m128i_i32[0] = v23[4];
LABEL_38:
          v5->m128i_i32[3] = v23[3];
LABEL_39:
          v5->m128i_i32[2] = v23[2];
LABEL_40:
          v5->m128i_i32[1] = v23[1];
LABEL_41:
          result = *v23;
          v5->m128i_i32[0] = result;
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    v7 = 4LL * v3;
    if ( v3 )
    {
      v8 = result + 4LL * (unsigned int)(v3 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v9 = *(unsigned int *)result;
          v10 = *(_DWORD *)(result + v7);
          if ( (int)v9 < 0 )
            break;
          result += 4LL;
          v4->m128i_i32[v9] = v10;
          if ( v8 == result )
            return result;
        }
        result += 4LL;
        v5->m128i_i32[v9 & 0x7FFFFFFF] = v10;
      }
      while ( v8 != result );
    }
  }
  return result;
}

