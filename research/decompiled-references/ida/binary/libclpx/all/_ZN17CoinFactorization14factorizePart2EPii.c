__int64 __fastcall CoinFactorization::factorizePart2(CoinFactorization *this, int *a2, int a3)
{
  __int64 v5; // rsi
  const __m128i *v6; // r8
  __int64 v7; // rdi
  __m128i *v8; // r9
  int v9; // edx
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax
  __m128i *v13; // rdi
  int v14; // eax
  const __m128i *v15; // rsi
  int v16; // edx
  unsigned int v17; // r10d
  const __m128i *v18; // rdx
  __m128i *v19; // rcx
  __int64 v20; // r11
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rdx
  int v24; // edx
  unsigned int v25; // esi
  const __m128i *v26; // rdx
  __m128i *v27; // rcx
  __int64 v28; // rdi
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  int v35; // edx
  int v36; // edx
  __m128i *v37; // rdx
  const __m128i *v38; // rcx
  __int32 v39; // esi
  __m128i *v40; // rcx
  const __m128i *v41; // rdx
  __int32 v42; // r10d

  *((_DWORD *)this + 147) = a3;
  CoinFactorization::preProcess(this, 0, -1);
  CoinFactorization::factor(this);
  v5 = 0;
  v6 = *((const __m128i **)this + 16);
  v7 = 0;
  v8 = *((__m128i **)this + 19);
  v9 = *((_DWORD *)this + 11);
  if ( *((int *)this + 34) > -2 )
    v7 = *((_QWORD *)this + 16);
  if ( *((int *)this + 40) > -2 )
    v5 = *((_QWORD *)this + 19);
  if ( v9 > 0 )
  {
    v10 = 1;
    do
    {
      v11 = v10;
      a2[v10 - 1] = *(_DWORD *)(v7 + 4LL * *(int *)(v5 + 4 * v10 - 4));
      v9 = *((_DWORD *)this + 11);
      ++v10;
    }
    while ( v9 > v11 );
  }
  result = *((unsigned int *)this + 44);
  if ( !(_DWORD)result )
  {
    v13 = *((__m128i **)this + 10);
    v14 = *((_DWORD *)this + 8);
    v15 = *((const __m128i **)this + 13);
    v16 = *((_DWORD *)this + 28);
    if ( *((int *)this + 22) < -1 )
    {
      v13 = nullptr;
      if ( v16 < -1 )
        goto LABEL_31;
    }
    else if ( v16 <= -2 )
    {
      v15 = nullptr;
    }
    if ( v14 && v15 != v13 )
    {
      v17 = v14 >> 3;
      if ( v14 >> 3 > 0 )
      {
        if ( (v15 >= &v13[2] || v13 >= &v15[2]) && v17 > 1 )
        {
          v18 = v15;
          v19 = v13;
          v20 = v17 - 1;
          do
          {
            v21 = _mm_loadu_si128(v18);
            v18 += 2;
            v19 += 2;
            v22 = _mm_loadu_si128(v18 - 1);
            v19[-2] = v21;
            v19[-1] = v22;
          }
          while ( &v15[2 * v20 + 2] != v18 );
        }
        else
        {
          v40 = v13;
          v41 = v15;
          v20 = v17 - 1;
          do
          {
            v42 = v41->m128i_i32[0];
            v41 += 2;
            v40 += 2;
            v40[-2].m128i_i32[0] = v42;
            v40[-2].m128i_i32[1] = v41[-2].m128i_i32[1];
            v40[-2].m128i_i32[2] = v41[-2].m128i_i32[2];
            v40[-2].m128i_i32[3] = v41[-2].m128i_i32[3];
            v40[-1].m128i_i32[0] = v41[-1].m128i_i32[0];
            v40[-1].m128i_i32[1] = v41[-1].m128i_i32[1];
            v40[-1].m128i_i32[2] = v41[-1].m128i_i32[2];
            v40[-1].m128i_i32[3] = v41[-1].m128i_i32[3];
          }
          while ( &v15[2 * v20 + 2] != v41 );
        }
        v23 = 32 * ((int)v20 + 1LL);
        v15 = (const __m128i *)((char *)v15 + v23);
        v13 = (__m128i *)((char *)v13 + v23);
      }
      switch ( v14 % 8 )
      {
        case 1:
          goto LABEL_29;
        case 2:
          goto LABEL_28;
        case 3:
          goto LABEL_27;
        case 4:
          goto LABEL_26;
        case 5:
          goto LABEL_25;
        case 6:
          goto LABEL_24;
        case 7:
          v13[1].m128i_i32[2] = v15[1].m128i_i32[2];
LABEL_24:
          v13[1].m128i_i32[1] = v15[1].m128i_i32[1];
LABEL_25:
          v13[1].m128i_i32[0] = v15[1].m128i_i32[0];
LABEL_26:
          v13->m128i_i32[3] = v15->m128i_i32[3];
LABEL_27:
          v13->m128i_i32[2] = v15->m128i_i32[2];
LABEL_28:
          v13->m128i_i32[1] = v15->m128i_i32[1];
LABEL_29:
          v13->m128i_i32[0] = v15->m128i_i32[0];
          break;
        default:
          break;
      }
      v14 = *((_DWORD *)this + 8);
    }
LABEL_31:
    v24 = *((_DWORD *)this + 34);
    if ( *((int *)this + 40) < -1 )
    {
      v8 = nullptr;
      if ( v24 < -1 )
        return *((unsigned int *)this + 44);
    }
    else if ( v24 <= -2 )
    {
      v6 = nullptr;
    }
    if ( v14 && v6 != v8 )
    {
      v25 = v14 >> 3;
      if ( v14 >> 3 > 0 )
      {
        if ( (v8 >= &v6[2] || v6 >= &v8[2]) && v25 > 1 )
        {
          v26 = v6;
          v27 = v8;
          v28 = v25 - 1;
          do
          {
            v29 = _mm_loadu_si128(v26);
            v26 += 2;
            v27 += 2;
            v30 = _mm_loadu_si128(v26 - 1);
            v27[-2] = v29;
            v27[-1] = v30;
          }
          while ( &v6[2 * v28 + 2] != v26 );
        }
        else
        {
          v37 = v8;
          v38 = v6;
          v28 = v25 - 1;
          do
          {
            v39 = v38->m128i_i32[0];
            v37 += 2;
            v38 += 2;
            v37[-2].m128i_i32[0] = v39;
            v37[-2].m128i_i32[1] = v38[-2].m128i_i32[1];
            v37[-2].m128i_i32[2] = v38[-2].m128i_i32[2];
            v37[-2].m128i_i32[3] = v38[-2].m128i_i32[3];
            v37[-1].m128i_i32[0] = v38[-1].m128i_i32[0];
            v37[-1].m128i_i32[1] = v38[-1].m128i_i32[1];
            v37[-1].m128i_i32[2] = v38[-1].m128i_i32[2];
            v37[-1].m128i_i32[3] = v38[-1].m128i_i32[3];
          }
          while ( &v8[2 * v28 + 2] != v37 );
        }
        v31 = 32 * ((int)v28 + 1LL);
        v6 = (const __m128i *)((char *)v6 + v31);
        v8 = (__m128i *)((char *)v8 + v31);
      }
      switch ( v14 % 8 )
      {
        case 1:
          goto LABEL_51;
        case 2:
          goto LABEL_50;
        case 3:
          goto LABEL_49;
        case 4:
          goto LABEL_48;
        case 5:
          goto LABEL_47;
        case 6:
          goto LABEL_46;
        case 7:
          v8[1].m128i_i32[2] = v6[1].m128i_i32[2];
LABEL_46:
          v8[1].m128i_i32[1] = v6[1].m128i_i32[1];
LABEL_47:
          v8[1].m128i_i32[0] = v6[1].m128i_i32[0];
LABEL_48:
          v8->m128i_i32[3] = v6->m128i_i32[3];
LABEL_49:
          v8->m128i_i32[2] = v6->m128i_i32[2];
LABEL_50:
          v8->m128i_i32[1] = v6->m128i_i32[1];
LABEL_51:
          v8->m128i_i32[0] = v6->m128i_i32[0];
          result = *((unsigned int *)this + 44);
          break;
        default:
          return *((unsigned int *)this + 44);
      }
      return result;
    }
    return *((unsigned int *)this + 44);
  }
  if ( (_DWORD)result == -1 )
  {
    v32 = *((_QWORD *)this + 10);
    if ( *((int *)this + 22) <= -2 )
      v32 = 0;
    if ( v9 > 0 )
    {
      v33 = 1;
      while ( 1 )
      {
        v34 = *(_DWORD *)(v32 + 4 * v33 - 4);
        if ( v34 >= 0 )
          break;
LABEL_59:
        a2[v33 - 1] = -1;
        v36 = v33++;
        if ( *((_DWORD *)this + 11) <= v36 )
          return *((unsigned int *)this + 44);
      }
      while ( 1 )
      {
        a2[v33 - 1] = v34;
        v35 = v33++;
        if ( *((_DWORD *)this + 11) <= v35 )
          return *((unsigned int *)this + 44);
        v34 = *(_DWORD *)(v32 + 4 * v33 - 4);
        if ( v34 < 0 )
          goto LABEL_59;
      }
    }
  }
  return result;
}

