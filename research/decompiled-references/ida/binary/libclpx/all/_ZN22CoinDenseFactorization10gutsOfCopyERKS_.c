__int64 __fastcall CoinDenseFactorization::gutsOfCopy(CoinDenseFactorization *this, const CoinDenseFactorization *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  bool v5; // zf
  __int64 v6; // xmm0_8
  int v7; // eax
  __int64 result; // rax
  int v9; // ecx
  int v11; // edi
  __m128i *v13; // rax
  int v14; // ecx
  int v15; // edx
  __m128i *v16; // rdi
  int v17; // r8d
  unsigned int v18; // r9d
  const __m128i *v19; // rdx
  __m128i *v20; // rcx
  __int64 v21; // r9
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rax
  int v27; // edi
  int v28; // esi
  _QWORD *v29; // r9
  int v30; // esi
  __int64 *v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  int v36; // edx
  int v37; // edi
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  __m128i *v40; // rsi
  int *v41; // rcx
  int v42; // r10d

  v2 = *((_DWORD *)a2 + 9);
  v3 = *((_DWORD *)a2 + 15);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  v4 = *((_DWORD *)a2 + 13);
  v5 = *((_QWORD *)a2 + 9) == 0;
  v6 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 9) = v2;
  v7 = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 15) = v3;
  *((_QWORD *)this + 3) = v6;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  result = *((unsigned int *)a2 + 12);
  *((_DWORD *)this + 13) = v4;
  v9 = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 12) = result;
  *((_DWORD *)this + 8) = v9;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0;
    *((_QWORD *)this + 9) = 0;
    *((_QWORD *)this + 11) = 0;
  }
  else
  {
    v11 = result + 2 * v3;
    if ( (unsigned __int64)v11 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_52;
    v13 = (__m128i *)operator new[](4LL * v11);
    v14 = *((_DWORD *)this + 15);
    v15 = *((_DWORD *)this + 13);
    *((_QWORD *)this + 9) = v13;
    v16 = *((__m128i **)a2 + 9);
    v17 = v15 + 2 * v14;
    if ( v17 && v16 != v13 )
    {
      v18 = v17 >> 3;
      if ( v17 >> 3 > 0 )
      {
        if ( (v13 >= &v16[2] || v16 >= &v13[2]) && v18 > 1 )
        {
          v19 = *((const __m128i **)a2 + 9);
          v20 = v13;
          v21 = v18 - 1;
          do
          {
            v22 = _mm_loadu_si128(v19);
            v19 += 2;
            v20 += 2;
            v23 = _mm_loadu_si128(v19 - 1);
            v20[-2] = v22;
            v20[-1] = v23;
          }
          while ( v19 != &v16[2 * v21 + 2] );
        }
        else
        {
          v40 = v13;
          v41 = *((int **)a2 + 9);
          v21 = v18 - 1;
          do
          {
            v42 = *v41;
            v41 += 8;
            v40 += 2;
            v40[-2].m128i_i32[0] = v42;
            v40[-2].m128i_i32[1] = *(v41 - 7);
            v40[-2].m128i_i32[2] = *(v41 - 6);
            v40[-2].m128i_i32[3] = *(v41 - 5);
            v40[-1].m128i_i32[0] = *(v41 - 4);
            v40[-1].m128i_i32[1] = *(v41 - 3);
            v40[-1].m128i_i32[2] = *(v41 - 2);
            v40[-1].m128i_i32[3] = *(v41 - 1);
          }
          while ( &v16[2 * v21 + 2] != (__m128i *)v41 );
        }
        v24 = 32 * ((int)v21 + 1LL);
        v16 = (__m128i *)((char *)v16 + v24);
        v13 = (__m128i *)((char *)v13 + v24);
      }
      switch ( v17 % 8 )
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
          v13[1].m128i_i32[2] = v16[1].m128i_i32[2];
LABEL_13:
          v13[1].m128i_i32[1] = v16[1].m128i_i32[1];
LABEL_14:
          v13[1].m128i_i32[0] = v16[1].m128i_i32[0];
LABEL_15:
          v13->m128i_i32[3] = v16->m128i_i32[3];
LABEL_16:
          v13->m128i_i32[2] = v16->m128i_i32[2];
LABEL_17:
          v13->m128i_i32[1] = v16->m128i_i32[1];
LABEL_18:
          v13->m128i_i32[0] = v16->m128i_i32[0];
          break;
        default:
          break;
      }
    }
    v25 = *((int *)this + 16);
    if ( v25 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_52;
    v26 = (_QWORD *)operator new[](8 * v25);
    v27 = *((_DWORD *)this + 15);
    v28 = *((_DWORD *)this + 13);
    *((_QWORD *)this + 10) = v26;
    v29 = *((_QWORD **)a2 + 10);
    v30 = v27 * (v27 + v28);
    if ( v30 && v29 != v26 )
    {
      if ( v30 >> 3 > 0 )
      {
        v31 = *((__int64 **)a2 + 10);
        v32 = v26;
        do
        {
          v33 = *v31;
          v32 += 8;
          v31 += 8;
          *(v32 - 8) = v33;
          *(v32 - 7) = *(v31 - 7);
          *(v32 - 6) = *(v31 - 6);
          *(v32 - 5) = *(v31 - 5);
          *(v32 - 4) = *(v31 - 4);
          *(v32 - 3) = *(v31 - 3);
          *(v32 - 2) = *(v31 - 2);
          *(v32 - 1) = *(v31 - 1);
        }
        while ( v32 != &v26[8 * (unsigned int)((v30 >> 3) - 1) + 8] );
        v34 = ((v30 >> 3) - 1 + 1LL) << 6;
        v29 = (_QWORD *)((char *)v29 + v34);
        v26 = (_QWORD *)((char *)v26 + v34);
      }
      switch ( v30 % 8 )
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
          v26[6] = v29[6];
LABEL_28:
          v26[5] = v29[5];
LABEL_29:
          v26[4] = v29[4];
LABEL_30:
          v26[3] = v29[3];
LABEL_31:
          v26[2] = v29[2];
LABEL_32:
          v26[1] = v29[1];
LABEL_33:
          *v26 = *v29;
          break;
        default:
          break;
      }
    }
    v35 = 2 * v27;
    if ( v35 > 0xFFFFFFFFFFFFFFFLL )
LABEL_52:
      __cxa_throw_bad_array_new_length();
    result = operator new[](8 * v35);
    v36 = *((_DWORD *)this + 15);
    *((_QWORD *)this + 11) = result;
    v37 = 2 * v36;
    if ( 2 * v36 )
    {
      if ( v37 / 8 > 0 )
      {
        v38 = (_QWORD *)result;
        v39 = (unsigned int)(v37 / 8 - 1);
        do
        {
          *v38 = 0;
          v38[1] = 0;
          v38 += 8;
          *(v38 - 6) = 0;
          *(v38 - 5) = 0;
          *(v38 - 4) = 0;
          *(v38 - 3) = 0;
          *(v38 - 2) = 0;
          *(v38 - 1) = 0;
        }
        while ( (_QWORD *)(result + ((v39 + 1) << 6)) != v38 );
        result += ((int)v39 + 1LL) << 6;
      }
      switch ( v37 % 8 )
      {
        case 1:
          goto LABEL_47;
        case 2:
          goto LABEL_46;
        case 3:
          goto LABEL_45;
        case 4:
          goto LABEL_44;
        case 5:
          goto LABEL_43;
        case 6:
          goto LABEL_42;
        case 7:
          *(_QWORD *)(result + 48) = 0;
LABEL_42:
          *(_QWORD *)(result + 40) = 0;
LABEL_43:
          *(_QWORD *)(result + 32) = 0;
LABEL_44:
          *(_QWORD *)(result + 24) = 0;
LABEL_45:
          *(_QWORD *)(result + 16) = 0;
LABEL_46:
          *(_QWORD *)(result + 8) = 0;
LABEL_47:
          *(_QWORD *)result = 0;
          break;
        default:
          return result;
      }
    }
  }
  return result;
}

