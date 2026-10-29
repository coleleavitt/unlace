__int64 __fastcall CoinPackedMatrix::copyReuseArrays(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  unsigned int v2; // eax
  int v3; // edx
  __int64 result; // rax
  int v6; // ecx
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // r10
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  bool v18; // r15
  int *v19; // rcx
  int *v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 *v28; // rdx
  __int64 *v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // r9
  __int64 v32; // xmm0_8
  __int64 v33; // r9
  int *v34; // rdx
  int *v35; // r8
  int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-48h]
  int v39; // [rsp+14h] [rbp-3Ch]

  v2 = *((_DWORD *)a2 + 16);
  if ( *((_DWORD *)this + 19) < (signed int)v2 )
    return CoinPackedMatrix::copyOf(this, a2);
  v3 = *((_DWORD *)a2 + 18);
  if ( *((_DWORD *)this + 20) < v3 )
    return CoinPackedMatrix::copyOf(this, a2);
  v6 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 16) = v2;
  v7 = *((_OWORD *)a2 + 1);
  *((_DWORD *)this + 18) = v3;
  v8 = *((_QWORD *)this + 7);
  *((_DWORD *)this + 17) = v6;
  *((_OWORD *)this + 1) = v7;
  CoinMemcpyN<int>(*((_QWORD *)a2 + 7), v2, v8);
  CoinMemcpyN<int>(*((_QWORD *)a2 + 6), (unsigned int)(*((_DWORD *)this + 16) + 1), *((_QWORD *)this + 6));
  v9 = *((_QWORD *)this + 6);
  v10 = *((unsigned int *)this + 18);
  if ( (_DWORD)v10 == *(_DWORD *)(v9 + 4LL * *((int *)this + 16)) )
  {
    CoinMemcpyN<int>(*((_QWORD *)a2 + 5), v10, *((_QWORD *)this + 5));
    return CoinMemcpyN<double>(*((_QWORD *)a2 + 4), *((unsigned int *)this + 18), *((_QWORD *)this + 4));
  }
  else
  {
    result = (unsigned int)(*((_DWORD *)this + 16) - 1);
    if ( (int)result >= 0 )
    {
      v11 = (int)result;
      v12 = *((_QWORD *)a2 + 5);
      v13 = (int)result - 1LL;
      v14 = *((_QWORD *)this + 5);
      v15 = *((_QWORD *)this + 7);
      v16 = *((_QWORD *)this + 4);
      v37 = *((_QWORD *)a2 + 4);
      v38 = v13 - (unsigned int)result;
      while ( 1 )
      {
        v17 = *(int *)(v9 + 4 * v11);
        result = *(unsigned int *)(v15 + 4 * v11);
        v18 = (_DWORD)result == 0;
        v19 = (int *)(v14 + 4 * v17);
        v20 = (int *)(v12 + 4 * v17);
        if ( v19 != v20 && (_DWORD)result )
        {
          v21 = (int)result >> 3;
          if ( (int)result >> 3 > 0 )
          {
            if ( ((unsigned __int64)v20 >= v14 + 4 * v17 + 32 || (unsigned __int64)v19 >= v12 + 4 * v17 + 32) && v21 > 1 )
            {
              v22 = 0;
              v23 = v21 - 1;
              do
              {
                v24 = _mm_loadu_si128((const __m128i *)&v20[v22 + 4]);
                *(__m128i *)&v19[v22] = _mm_loadu_si128((const __m128i *)&v20[v22]);
                *(__m128i *)&v19[v22 + 4] = v24;
                v22 += 8;
              }
              while ( 8 * (v23 + 1) != v22 );
            }
            else
            {
              v34 = (int *)(v14 + 4 * v17);
              v35 = v20;
              v39 = *(_DWORD *)(v15 + 4 * v11);
              v23 = v21 - 1;
              do
              {
                v36 = *v35;
                v34 += 8;
                v35 += 8;
                *(v34 - 8) = v36;
                *(v34 - 7) = *(v35 - 7);
                *(v34 - 6) = *(v35 - 6);
                *(v34 - 5) = *(v35 - 5);
                *(v34 - 4) = *(v35 - 4);
                *(v34 - 3) = *(v35 - 3);
                *(v34 - 2) = *(v35 - 2);
                *(v34 - 1) = *(v35 - 1);
              }
              while ( &v19[8 * v23 + 8] != v34 );
              LODWORD(result) = v39;
            }
            v25 = 32 * ((int)v23 + 1LL);
            v20 = (int *)((char *)v20 + v25);
            v19 = (int *)((char *)v19 + v25);
          }
          switch ( (int)result % 8 )
          {
            case 1:
              goto LABEL_22;
            case 2:
              goto LABEL_21;
            case 3:
              goto LABEL_20;
            case 4:
              goto LABEL_19;
            case 5:
              goto LABEL_18;
            case 6:
              goto LABEL_17;
            case 7:
              v19[6] = v20[6];
LABEL_17:
              v19[5] = v20[5];
LABEL_18:
              v19[4] = v20[4];
LABEL_19:
              v19[3] = v20[3];
LABEL_20:
              v19[2] = v20[2];
LABEL_21:
              v19[1] = v20[1];
LABEL_22:
              *v19 = *v20;
              break;
            default:
              break;
          }
          result = *(unsigned int *)(v15 + 4 * v11);
          v17 = *(int *)(v9 + 4 * v11);
          v18 = (_DWORD)result == 0;
        }
        v26 = 8 * v17;
        v27 = (__int64 *)(v16 + v26);
        v28 = (__int64 *)(v37 + v26);
        if ( v27 != v28 && !v18 )
        {
          if ( (int)result >> 3 > 0 )
          {
            v29 = v27;
            v30 = v28;
            v31 = (unsigned int)(((int)result >> 3) - 1);
            do
            {
              v32 = *v30;
              v29 += 8;
              v30 += 8;
              *(v29 - 8) = v32;
              *(v29 - 7) = *(v30 - 7);
              *(v29 - 6) = *(v30 - 6);
              *(v29 - 5) = *(v30 - 5);
              *(v29 - 4) = *(v30 - 4);
              *(v29 - 3) = *(v30 - 3);
              *(v29 - 2) = *(v30 - 2);
              *(v29 - 1) = *(v30 - 1);
            }
            while ( v29 != &v27[8 * v31 + 8] );
            v33 = ((int)v31 + 1LL) << 6;
            v28 = (__int64 *)((char *)v28 + v33);
            v27 = (__int64 *)((char *)v27 + v33);
          }
          result = (unsigned int)((int)result % 8);
          switch ( (int)result )
          {
            case 1:
              goto LABEL_37;
            case 2:
              goto LABEL_36;
            case 3:
              goto LABEL_35;
            case 4:
              goto LABEL_34;
            case 5:
              goto LABEL_33;
            case 6:
              goto LABEL_32;
            case 7:
              v27[6] = v28[6];
LABEL_32:
              v27[5] = v28[5];
LABEL_33:
              v27[4] = v28[4];
LABEL_34:
              v27[3] = v28[3];
LABEL_35:
              v27[2] = v28[2];
LABEL_36:
              v27[1] = v28[1];
LABEL_37:
              *v27 = *v28;
              break;
            default:
              break;
          }
        }
        v11 = v13;
        if ( v13 == v38 )
          break;
        --v13;
      }
    }
  }
  return result;
}

