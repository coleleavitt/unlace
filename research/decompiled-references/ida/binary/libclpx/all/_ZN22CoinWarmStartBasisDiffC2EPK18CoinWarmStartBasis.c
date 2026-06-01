void __fastcall CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(
        CoinWarmStartBasisDiff *this,
        const CoinWarmStartBasis *a2,
        __int64 a3)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // ebx
  int v8; // r12d
  int v9; // r13d
  int v10; // ebp
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rax
  unsigned __int64 v13; // rdi
  const __m128i *v14; // r8
  int v15; // ebx
  const __m128i *v16; // rsi
  __m128i *v17; // rcx
  __int64 v18; // rbx
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rbx
  _DWORD *v22; // rcx
  _DWORD *v23; // rsi
  __int64 v24; // rbp
  _DWORD *v25; // rcx
  int v26; // r12d
  unsigned __int64 v27; // rdx
  const __m128i *v28; // rax
  __int64 v29; // r12
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  __int64 v32; // r12
  const __m128i *v33; // rsi
  _DWORD *v34; // rdx
  __int32 v35; // ecx
  unsigned __int64 v36; // rdx
  int *v37; // rax
  int v38; // r8d
  int v39; // [rsp+Ch] [rbp-3Ch]

  v5 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v5 - 40)) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 2) = 0;
  v6 = *(_DWORD *)(a3 + 12);
  LODWORD(v5) = *(_DWORD *)(a3 + 8);
  *((_QWORD *)this + 2) = 0;
  v7 = v5 + 15;
  v8 = v6 + 15;
  *((_DWORD *)this + 2) = -(int)v5;
  v39 = v6;
  v9 = (v6 + 15) >> 4;
  v10 = ((int)v5 + 15) >> 4;
  v11 = v9 + v10 + 1;
  if ( v11 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v12 = (_DWORD *)operator new[](4 * v11);
  v13 = (unsigned __int64)(v12 + 1);
  v14 = *(const __m128i **)(a3 + 24);
  *((_QWORD *)this + 2) = v12 + 1;
  *v12 = v39;
  if ( v10 && (const __m128i *)v13 != v14 )
  {
    v15 = v7 >> 7;
    if ( v15 <= 0 )
    {
      v22 = v12 + 1;
    }
    else
    {
      if ( (v13 >= (unsigned __int64)&v14[2] || v14 >= (const __m128i *)(v12 + 9)) && (unsigned int)v15 > 1 )
      {
        v16 = v14;
        v17 = (__m128i *)(v12 + 1);
        v18 = (unsigned int)(v15 - 1);
        do
        {
          v19 = _mm_loadu_si128(v16);
          v17 += 2;
          v16 += 2;
          v20 = _mm_loadu_si128(v16 - 1);
          v17[-2] = v19;
          v17[-1] = v20;
        }
        while ( v17 != (__m128i *)&v12[8 * v18 + 9] );
      }
      else
      {
        v33 = v14;
        v18 = (unsigned int)(v15 - 1);
        v34 = v12 + 1;
        do
        {
          v35 = v33->m128i_i32[0];
          v34 += 8;
          v33 += 2;
          *(v34 - 8) = v35;
          *(v34 - 7) = v33[-2].m128i_i32[1];
          *(v34 - 6) = v33[-2].m128i_i32[2];
          *(v34 - 5) = v33[-2].m128i_i32[3];
          *(v34 - 4) = v33[-1].m128i_i32[0];
          *(v34 - 3) = v33[-1].m128i_i32[1];
          *(v34 - 2) = v33[-1].m128i_i32[2];
          *(v34 - 1) = v33[-1].m128i_i32[3];
        }
        while ( &v12[8 * v18 + 9] != v34 );
      }
      v21 = 32 * ((int)v18 + 1LL);
      v22 = (_DWORD *)(v13 + v21);
      v14 = (const __m128i *)((char *)v14 + v21);
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_17;
      case 2:
        goto LABEL_16;
      case 3:
        goto LABEL_15;
      case 4:
        goto LABEL_14;
      case 5:
        goto LABEL_13;
      case 6:
        goto LABEL_12;
      case 7:
        v22[6] = v14[1].m128i_i32[2];
LABEL_12:
        v22[5] = v14[1].m128i_i32[1];
LABEL_13:
        v22[4] = v14[1].m128i_i32[0];
LABEL_14:
        v22[3] = v14->m128i_i32[3];
LABEL_15:
        v22[2] = v14->m128i_i32[2];
LABEL_16:
        v22[1] = v14->m128i_i32[1];
LABEL_17:
        *v22 = v14->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v23 = *(_DWORD **)(a3 + 32);
  v24 = v10;
  v25 = (_DWORD *)(v13 + v24 * 4);
  if ( v9 && v25 != v23 )
  {
    v26 = v8 >> 7;
    if ( v26 > 0 )
    {
      v27 = (unsigned __int64)&v12[v24 + 1];
      if ( (v27 >= (unsigned __int64)(v23 + 8) || v23 >= &v12[v24 + 9]) && (unsigned int)v26 > 1 )
      {
        v28 = *(const __m128i **)(a3 + 32);
        v29 = (unsigned int)(v26 - 1);
        do
        {
          v30 = _mm_loadu_si128(v28);
          v28 += 2;
          v27 += 32LL;
          v31 = _mm_loadu_si128(v28 - 1);
          *(__m128i *)(v27 - 32) = v30;
          *(__m128i *)(v27 - 16) = v31;
        }
        while ( &v23[8 * v29 + 8] != (_DWORD *)v28 );
      }
      else
      {
        v36 = v13 + v24 * 4;
        v37 = *(int **)(a3 + 32);
        v29 = (unsigned int)(v26 - 1);
        do
        {
          v38 = *v37;
          v37 += 8;
          v36 += 32LL;
          *(_DWORD *)(v36 - 32) = v38;
          *(_DWORD *)(v36 - 28) = *(v37 - 7);
          *(_DWORD *)(v36 - 24) = *(v37 - 6);
          *(_DWORD *)(v36 - 20) = *(v37 - 5);
          *(_DWORD *)(v36 - 16) = *(v37 - 4);
          *(_DWORD *)(v36 - 12) = *(v37 - 3);
          *(_DWORD *)(v36 - 8) = *(v37 - 2);
          *(_DWORD *)(v36 - 4) = *(v37 - 1);
        }
        while ( &v23[8 * v29 + 8] != v37 );
      }
      v32 = 32 * ((int)v29 + 1LL);
      v23 = (_DWORD *)((char *)v23 + v32);
      v25 = (_DWORD *)((char *)v25 + v32);
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_33;
      case 2:
        goto LABEL_32;
      case 3:
        goto LABEL_31;
      case 4:
        goto LABEL_30;
      case 5:
        goto LABEL_29;
      case 6:
        goto LABEL_28;
      case 7:
        v25[6] = v23[6];
LABEL_28:
        v25[5] = v23[5];
LABEL_29:
        v25[4] = v23[4];
LABEL_30:
        v25[3] = v23[3];
LABEL_31:
        v25[2] = v23[2];
LABEL_32:
        v25[1] = v23[1];
LABEL_33:
        *v25 = *v23;
        break;
      default:
        return;
    }
  }
}

