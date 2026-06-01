__m128i *__fastcall CoinPackedMatrix::gutsOfCopyOfNoGaps(
        CoinPackedMatrix *this,
        char a2,
        int a3,
        int a4,
        double *a5,
        const __m128i *a6,
        const int *a7)
{
  int v10; // eax
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  __m128i *result; // rax
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // edi
  int v22; // r8d
  int v23; // esi
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  int v27; // esi
  __int64 v28; // rdx
  const __m128i *v29; // rcx
  __int64 v30; // rdi
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rdx
  double *v34; // rdi
  __int64 v35; // rdx
  double *v36; // rax
  double v37; // xmm0_8
  __int64 v38; // rax

  *((_DWORD *)this + 16) = a4;
  *((_DWORD *)this + 17) = a3;
  *((_BYTE *)this + 8) = a2;
  v10 = a7[a4];
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 19) = a4;
  *((_DWORD *)this + 18) = v10;
  v11 = *((void **)this + 7);
  if ( v11 )
    operator delete[](v11);
  v12 = *((void **)this + 6);
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)this + 4);
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)this + 5);
  if ( v14 )
    operator delete[](v14);
  v15 = *((int *)this + 19);
  if ( (int)v15 <= 0 )
  {
    *((_QWORD *)this + 7) = 0;
    result = (__m128i *)operator new[](4u);
    v18 = *((int *)this + 16);
    *((_QWORD *)this + 6) = result;
    result->m128i_i32[0] = 0;
  }
  else
  {
    *((_QWORD *)this + 7) = operator new[](4 * v15);
    v16 = *((_DWORD *)this + 19) + 1;
    if ( v16 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_47;
    result = (__m128i *)operator new[](4 * v16);
    v18 = *((int *)this + 16);
    *((_QWORD *)this + 6) = result;
    result->m128i_i32[0] = 0;
    if ( (int)v18 > 0 )
    {
      v19 = *((_QWORD *)this + 7);
      v20 = 1;
      v21 = 0;
      do
      {
        v22 = v20;
        v23 = a7[v20] - v21;
        v21 = a7[v20];
        *(_DWORD *)(v19 + 4 * v20 - 4) = v23;
        v18 = *((int *)this + 16);
        result->m128i_i32[v20++] = v21;
      }
      while ( (int)v18 > v22 );
    }
  }
  v24 = result->m128i_i32[v18];
  *((_DWORD *)this + 20) = v24;
  if ( (int)v24 <= 0 )
  {
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 5) = 0;
    return result;
  }
  v25 = operator new[](8 * v24);
  v26 = *((int *)this + 20);
  *((_QWORD *)this + 4) = v25;
  if ( v26 > 0x1FFFFFFFFFFFFFFELL )
LABEL_47:
    __cxa_throw_bad_array_new_length();
  result = (__m128i *)operator new[](4 * v26);
  v27 = *((_DWORD *)this + 20);
  *((_QWORD *)this + 5) = result;
  if ( result != a6 && v27 )
  {
    if ( v27 >> 3 > 0 )
    {
      v28 = (__int64)result;
      v29 = a6;
      v30 = (unsigned int)((v27 >> 3) - 1);
      do
      {
        v31 = _mm_loadu_si128(v29 + 1);
        v28 += 32;
        v29 += 2;
        v32 = _mm_loadu_si128(v29 - 2);
        *(__m128i *)(v28 - 16) = v31;
        *(__m128i *)(v28 - 32) = v32;
      }
      while ( (__m128i *)v28 != &result[2 * v30 + 2] );
      v33 = 32 * ((int)v30 + 1LL);
      a6 = (const __m128i *)((char *)a6 + v33);
      result = (__m128i *)((char *)result + v33);
    }
    switch ( v27 % 8 )
    {
      case 1:
        goto LABEL_31;
      case 2:
        goto LABEL_30;
      case 3:
        goto LABEL_29;
      case 4:
        goto LABEL_28;
      case 5:
        goto LABEL_27;
      case 6:
        goto LABEL_26;
      case 7:
        result[1].m128i_i32[2] = a6[1].m128i_i32[2];
LABEL_26:
        result[1].m128i_i32[1] = a6[1].m128i_i32[1];
LABEL_27:
        result[1].m128i_i32[0] = a6[1].m128i_i32[0];
LABEL_28:
        result->m128i_i32[3] = a6->m128i_i32[3];
LABEL_29:
        result->m128i_i32[2] = a6->m128i_i32[2];
LABEL_30:
        result->m128i_i32[1] = a6->m128i_i32[1];
LABEL_31:
        result->m128i_i32[0] = a6->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v34 = *((double **)this + 4);
  if ( v34 != a5 && v27 )
  {
    if ( v27 >> 3 > 0 )
    {
      v35 = *((_QWORD *)this + 4);
      v36 = a5;
      do
      {
        v37 = *v36;
        v36 += 8;
        v35 += 64;
        *(double *)(v35 - 64) = v37;
        *(double *)(v35 - 56) = *(v36 - 7);
        *(double *)(v35 - 48) = *(v36 - 6);
        *(double *)(v35 - 40) = *(v36 - 5);
        *(double *)(v35 - 32) = *(v36 - 4);
        *(double *)(v35 - 24) = *(v36 - 3);
        *(double *)(v35 - 16) = *(v36 - 2);
        *(double *)(v35 - 8) = *(v36 - 1);
      }
      while ( v36 != &a5[8 * (unsigned int)((v27 >> 3) - 1) + 8] );
      v38 = ((v27 >> 3) - 1 + 1LL) << 6;
      a5 = (double *)((char *)a5 + v38);
      v34 = (double *)((char *)v34 + v38);
    }
    result = (__m128i *)((unsigned int)(v27 >> 31) >> 29);
    switch ( v27 % 8 )
    {
      case 1:
        goto LABEL_45;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_43;
      case 4:
        goto LABEL_42;
      case 5:
        goto LABEL_41;
      case 6:
        goto LABEL_40;
      case 7:
        v34[6] = a5[6];
LABEL_40:
        v34[5] = a5[5];
LABEL_41:
        v34[4] = a5[4];
LABEL_42:
        v34[3] = a5[3];
LABEL_43:
        v34[2] = a5[2];
LABEL_44:
        v34[1] = a5[1];
LABEL_45:
        *v34 = *a5;
        break;
      default:
        return result;
    }
  }
  return result;
}

