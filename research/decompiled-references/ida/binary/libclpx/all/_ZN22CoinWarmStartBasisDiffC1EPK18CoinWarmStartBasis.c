void __fastcall CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(
        CoinWarmStartBasisDiff *this,
        const CoinWarmStartBasis *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // r12d
  int v6; // ebx
  int v7; // r13d
  int v8; // ebp
  unsigned __int64 v9; // rdi
  _DWORD *v11; // rax
  unsigned __int64 v12; // rdi
  const __m128i *v13; // r8
  int v14; // ebx
  const __m128i *v15; // rcx
  __int64 v16; // rbx
  __m128i *v17; // rdx
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rbx
  _DWORD *v21; // rdx
  _DWORD *v22; // rsi
  __int64 v23; // rbp
  _DWORD *v24; // rcx
  int v25; // r12d
  unsigned __int64 v26; // rdx
  const __m128i *v27; // rax
  __int64 v28; // r12
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __int64 v31; // r12
  const __m128i *v32; // rsi
  _DWORD *v33; // rdx
  __int32 v34; // ecx
  unsigned __int64 v35; // rdx
  int *v36; // rax
  int v37; // r8d
  int v38; // [rsp+Ch] [rbp-3Ch]

  *((_DWORD *)this + 2) = 0;
  v3 = *((_DWORD *)a2 + 3);
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_4D24C0;
  v4 = *((_DWORD *)a2 + 2);
  v5 = v3 + 15;
  v38 = v3;
  v6 = v4 + 15;
  v7 = (v3 + 15) >> 4;
  *((_DWORD *)this + 2) = -v4;
  v8 = (v4 + 15) >> 4;
  v9 = v7 + v8 + 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v11 = (_DWORD *)operator new[](4 * v9);
  v12 = (unsigned __int64)(v11 + 1);
  v13 = *((const __m128i **)a2 + 3);
  *((_QWORD *)this + 2) = v11 + 1;
  *v11 = v38;
  if ( v8 && (const __m128i *)v12 != v13 )
  {
    v14 = v6 >> 7;
    if ( v14 <= 0 )
    {
      v21 = v11 + 1;
    }
    else
    {
      if ( (v12 >= (unsigned __int64)&v13[2] || v13 >= (const __m128i *)(v11 + 9)) && (unsigned int)v14 > 1 )
      {
        v15 = v13;
        v16 = (unsigned int)(v14 - 1);
        v17 = (__m128i *)(v11 + 1);
        do
        {
          v18 = _mm_loadu_si128(v15);
          v17 += 2;
          v15 += 2;
          v19 = _mm_loadu_si128(v15 - 1);
          v17[-2] = v18;
          v17[-1] = v19;
        }
        while ( v17 != (__m128i *)&v11[8 * v16 + 9] );
      }
      else
      {
        v32 = v13;
        v16 = (unsigned int)(v14 - 1);
        v33 = v11 + 1;
        do
        {
          v34 = v32->m128i_i32[0];
          v33 += 8;
          v32 += 2;
          *(v33 - 8) = v34;
          *(v33 - 7) = v32[-2].m128i_i32[1];
          *(v33 - 6) = v32[-2].m128i_i32[2];
          *(v33 - 5) = v32[-2].m128i_i32[3];
          *(v33 - 4) = v32[-1].m128i_i32[0];
          *(v33 - 3) = v32[-1].m128i_i32[1];
          *(v33 - 2) = v32[-1].m128i_i32[2];
          *(v33 - 1) = v32[-1].m128i_i32[3];
        }
        while ( &v11[8 * v16 + 9] != v33 );
      }
      v20 = 32 * ((int)v16 + 1LL);
      v21 = (_DWORD *)(v12 + v20);
      v13 = (const __m128i *)((char *)v13 + v20);
    }
    switch ( v8 % 8 )
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
        v21[6] = v13[1].m128i_i32[2];
LABEL_12:
        v21[5] = v13[1].m128i_i32[1];
LABEL_13:
        v21[4] = v13[1].m128i_i32[0];
LABEL_14:
        v21[3] = v13->m128i_i32[3];
LABEL_15:
        v21[2] = v13->m128i_i32[2];
LABEL_16:
        v21[1] = v13->m128i_i32[1];
LABEL_17:
        *v21 = v13->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v22 = *((_DWORD **)a2 + 4);
  v23 = v8;
  v24 = (_DWORD *)(v12 + v23 * 4);
  if ( v7 && v24 != v22 )
  {
    v25 = v5 >> 7;
    if ( v25 > 0 )
    {
      v26 = (unsigned __int64)&v11[v23 + 1];
      if ( (v26 >= (unsigned __int64)(v22 + 8) || v22 >= &v11[v23 + 9]) && (unsigned int)v25 > 1 )
      {
        v27 = *((const __m128i **)a2 + 4);
        v28 = (unsigned int)(v25 - 1);
        do
        {
          v29 = _mm_loadu_si128(v27);
          v27 += 2;
          v26 += 32LL;
          v30 = _mm_loadu_si128(v27 - 1);
          *(__m128i *)(v26 - 32) = v29;
          *(__m128i *)(v26 - 16) = v30;
        }
        while ( &v22[8 * v28 + 8] != (_DWORD *)v27 );
      }
      else
      {
        v35 = v12 + v23 * 4;
        v36 = *((int **)a2 + 4);
        v28 = (unsigned int)(v25 - 1);
        do
        {
          v37 = *v36;
          v36 += 8;
          v35 += 32LL;
          *(_DWORD *)(v35 - 32) = v37;
          *(_DWORD *)(v35 - 28) = *(v36 - 7);
          *(_DWORD *)(v35 - 24) = *(v36 - 6);
          *(_DWORD *)(v35 - 20) = *(v36 - 5);
          *(_DWORD *)(v35 - 16) = *(v36 - 4);
          *(_DWORD *)(v35 - 12) = *(v36 - 3);
          *(_DWORD *)(v35 - 8) = *(v36 - 2);
          *(_DWORD *)(v35 - 4) = *(v36 - 1);
        }
        while ( &v22[8 * v28 + 8] != v36 );
      }
      v31 = 32 * ((int)v28 + 1LL);
      v22 = (_DWORD *)((char *)v22 + v31);
      v24 = (_DWORD *)((char *)v24 + v31);
    }
    switch ( v7 % 8 )
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
        v24[6] = v22[6];
LABEL_28:
        v24[5] = v22[5];
LABEL_29:
        v24[4] = v22[4];
LABEL_30:
        v24[3] = v22[3];
LABEL_31:
        v24[2] = v22[2];
LABEL_32:
        v24[1] = v22[1];
LABEL_33:
        *v24 = *v22;
        break;
      default:
        return;
    }
  }
}

