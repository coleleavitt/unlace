__m128i *__fastcall CoinModel::setPriorities(CoinModel *this, int a2, const __m128i *a3)
{
  void *v4; // rdi
  unsigned __int64 v7; // rdi
  __m128i *result; // rax
  int v9; // esi
  __int64 v10; // rcx
  const __m128i *v11; // rdi
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __m128i *v16; // rcx
  __int64 v17; // rdx
  __m128i *v18; // rdx

  v4 = *((void **)this + 85);
  if ( v4 )
    operator delete[](v4);
  v7 = *((int *)this + 26);
  if ( v7 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  result = (__m128i *)operator new[](4 * v7);
  v9 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 85) = result;
  if ( v9 )
  {
    if ( v9 / 8 <= 0 )
    {
      v18 = result;
    }
    else
    {
      v16 = result;
      v17 = (unsigned int)(v9 / 8 - 1);
      do
      {
        *v16 = 0;
        v16 += 2;
        v16[-1] = 0;
      }
      while ( v16 != &result[2 * v17 + 2] );
      v18 = &result[2 * (int)v17 + 2];
    }
    switch ( v9 % 8 )
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
        v18[1].m128i_i32[2] = 0;
LABEL_26:
        v18[1].m128i_i32[1] = 0;
LABEL_27:
        v18[1].m128i_i32[0] = 0;
LABEL_28:
        v18->m128i_i32[3] = 0;
LABEL_29:
        v18->m128i_i32[2] = 0;
LABEL_30:
        v18->m128i_i32[1] = 0;
LABEL_31:
        v18->m128i_i32[0] = 0;
        break;
      default:
        break;
    }
  }
  if ( a2 && result != a3 )
  {
    if ( a2 >> 3 > 0 )
    {
      v10 = (__int64)result;
      v11 = a3;
      v12 = (unsigned int)((a2 >> 3) - 1);
      do
      {
        v13 = _mm_loadu_si128(v11 + 1);
        v10 += 32;
        v11 += 2;
        v14 = _mm_loadu_si128(v11 - 2);
        *(__m128i *)(v10 - 16) = v13;
        *(__m128i *)(v10 - 32) = v14;
      }
      while ( &result[2 * v12 + 2] != (__m128i *)v10 );
      v15 = 32 * ((int)v12 + 1LL);
      a3 = (const __m128i *)((char *)a3 + v15);
      result = (__m128i *)((char *)result + v15);
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_18;
      case 2:
        goto LABEL_17;
      case 3:
        goto LABEL_16;
      case 4:
        goto LABEL_15;
      case 5:
        goto LABEL_14;
      case 6:
        goto LABEL_13;
      case 7:
        result[1].m128i_i32[2] = a3[1].m128i_i32[2];
LABEL_13:
        result[1].m128i_i32[1] = a3[1].m128i_i32[1];
LABEL_14:
        result[1].m128i_i32[0] = a3[1].m128i_i32[0];
LABEL_15:
        result->m128i_i32[3] = a3->m128i_i32[3];
LABEL_16:
        result->m128i_i32[2] = a3->m128i_i32[2];
LABEL_17:
        result->m128i_i32[1] = a3->m128i_i32[1];
LABEL_18:
        result->m128i_i32[0] = a3->m128i_i32[0];
        break;
      default:
        return result;
    }
  }
  return result;
}

