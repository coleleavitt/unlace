void __fastcall ClpQuadraticObjective::resize(ClpQuadraticObjective *this, int a2)
{
  int v2; // eax
  int v5; // r12d
  __int64 v6; // rax
  char *v7; // rdi
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // xmm0_8
  __int64 v14; // rdx
  char *v15; // r8
  _QWORD *v16; // rdx
  int v17; // r14d
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // r13
  int v21; // esi
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // xmm0_8
  __int64 v26; // rdx
  char *v27; // r8
  _QWORD *v28; // rdx
  CoinPackedMatrix *v29; // rdi
  unsigned __int64 v30; // rax
  int v31; // esi
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  unsigned __int64 v36; // rcx
  unsigned int v37; // edx
  __m128i si128; // xmm1
  __m128i v39; // xmm0
  int v40; // edx
  int v41; // eax
  int v42; // edx

  v2 = *((_DWORD *)this + 12);
  if ( v2 != a2 )
  {
    v5 = a2 + *((_DWORD *)this + 13) - v2;
    if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v6 = operator new[](8LL * v5);
    v7 = *((char **)this + 4);
    v8 = v6;
    if ( v7 )
    {
      v9 = v5;
      if ( *((_DWORD *)this + 13) <= v5 )
        v9 = *((_DWORD *)this + 13);
      if ( v9 && v7 != (char *)v6 )
      {
        if ( v9 >> 3 <= 0 )
        {
          v16 = (_QWORD *)v6;
          v15 = *((char **)this + 4);
        }
        else
        {
          v10 = v6;
          v11 = *((__int64 **)this + 4);
          v12 = (unsigned int)((v9 >> 3) - 1);
          do
          {
            v13 = *v11;
            v10 += 64;
            v11 += 8;
            *(_QWORD *)(v10 - 64) = v13;
            *(_QWORD *)(v10 - 56) = *(v11 - 7);
            *(_QWORD *)(v10 - 48) = *(v11 - 6);
            *(_QWORD *)(v10 - 40) = *(v11 - 5);
            *(_QWORD *)(v10 - 32) = *(v11 - 4);
            *(_QWORD *)(v10 - 24) = *(v11 - 3);
            *(_QWORD *)(v10 - 16) = *(v11 - 2);
            *(_QWORD *)(v10 - 8) = *(v11 - 1);
          }
          while ( v10 != v6 + ((v12 + 1) << 6) );
          v14 = ((int)v12 + 1LL) << 6;
          v15 = &v7[v14];
          v16 = (_QWORD *)(v6 + v14);
        }
        switch ( v9 % 8 )
        {
          case 1:
            goto LABEL_19;
          case 2:
            goto LABEL_18;
          case 3:
            goto LABEL_17;
          case 4:
            goto LABEL_16;
          case 5:
            goto LABEL_15;
          case 6:
            goto LABEL_14;
          case 7:
            v16[6] = *((_QWORD *)v15 + 6);
LABEL_14:
            v16[5] = *((_QWORD *)v15 + 5);
LABEL_15:
            v16[4] = *((_QWORD *)v15 + 4);
LABEL_16:
            v16[3] = *((_QWORD *)v15 + 3);
LABEL_17:
            v16[2] = *((_QWORD *)v15 + 2);
LABEL_18:
            v16[1] = *((_QWORD *)v15 + 1);
LABEL_19:
            *v16 = *(_QWORD *)v15;
            break;
          default:
            break;
        }
      }
      operator delete[](v7);
    }
    v17 = *((_DWORD *)this + 12);
    *((_QWORD *)this + 4) = v8;
    if ( a2 > v17 )
      memset((void *)(v8 + 8LL * v17), 0, 8LL * (unsigned int)(a2 - 1 - v17) + 8);
    if ( *((_QWORD *)this + 5) )
    {
      v18 = operator new[](8LL * v5);
      v19 = *((char **)this + 5);
      v20 = v18;
      if ( v19 )
      {
        v21 = v5;
        if ( *((_DWORD *)this + 13) <= v5 )
          v21 = *((_DWORD *)this + 13);
        if ( v21 && v19 != (char *)v18 )
        {
          if ( v21 >> 3 <= 0 )
          {
            v28 = (_QWORD *)v18;
            v27 = *((char **)this + 5);
          }
          else
          {
            v22 = v18;
            v23 = *((__int64 **)this + 5);
            v24 = (unsigned int)((v21 >> 3) - 1);
            do
            {
              v25 = *v23;
              v22 += 64;
              v23 += 8;
              *(_QWORD *)(v22 - 64) = v25;
              *(_QWORD *)(v22 - 56) = *(v23 - 7);
              *(_QWORD *)(v22 - 48) = *(v23 - 6);
              *(_QWORD *)(v22 - 40) = *(v23 - 5);
              *(_QWORD *)(v22 - 32) = *(v23 - 4);
              *(_QWORD *)(v22 - 24) = *(v23 - 3);
              *(_QWORD *)(v22 - 16) = *(v23 - 2);
              *(_QWORD *)(v22 - 8) = *(v23 - 1);
            }
            while ( v22 != v18 + ((v24 + 1) << 6) );
            v26 = ((int)v24 + 1LL) << 6;
            v27 = &v19[v26];
            v28 = (_QWORD *)(v18 + v26);
          }
          switch ( v21 % 8 )
          {
            case 1:
              goto LABEL_40;
            case 2:
              goto LABEL_39;
            case 3:
              goto LABEL_38;
            case 4:
              goto LABEL_37;
            case 5:
              goto LABEL_36;
            case 6:
              goto LABEL_35;
            case 7:
              v28[6] = *((_QWORD *)v27 + 6);
LABEL_35:
              v28[5] = *((_QWORD *)v27 + 5);
LABEL_36:
              v28[4] = *((_QWORD *)v27 + 4);
LABEL_37:
              v28[3] = *((_QWORD *)v27 + 3);
LABEL_38:
              v28[2] = *((_QWORD *)v27 + 2);
LABEL_39:
              v28[1] = *((_QWORD *)v27 + 1);
LABEL_40:
              *v28 = *(_QWORD *)v27;
              break;
            default:
              break;
          }
        }
        operator delete[](v19);
      }
      v17 = *((_DWORD *)this + 12);
      *((_QWORD *)this + 5) = v20;
      if ( a2 > v17 )
        memset((void *)(v20 + 8LL * v17), 0, 8LL * (unsigned int)(a2 - 1 - v17) + 8);
    }
    v29 = *((CoinPackedMatrix **)this + 3);
    if ( !v29 )
      goto LABEL_62;
    if ( a2 >= v17 )
    {
      CoinPackedMatrix::setDimensions(v29, a2, a2);
      goto LABEL_62;
    }
    v30 = operator new[](4LL * (v17 - a2));
    v31 = *((_DWORD *)this + 12);
    v32 = v30;
    if ( v31 > a2 )
    {
      v33 = -(int)(v30 >> 2) & 3;
      if ( (unsigned int)(v31 + ~a2) <= 5 )
      {
        v40 = a2;
      }
      else
      {
        v34 = a2;
        if ( (_DWORD)v33 )
        {
          *(_DWORD *)v32 = a2;
          v34 = a2 + 1;
          if ( (_DWORD)v33 != 1 )
          {
            *(_DWORD *)(v32 + 4) = v34;
            v34 = a2 + 2;
            if ( (_DWORD)v33 != 2 )
            {
              *(_DWORD *)(v32 + 8) = v34;
              v34 = a2 + 3;
            }
          }
        }
        v35 = v31 - a2 - v33;
        v36 = v32 + 4 * v33;
        v37 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        v39 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v34), 0), (__m128i)xmmword_289BB0);
        do
        {
          ++v37;
          v36 += 16LL;
          *(__m128i *)(v36 - 16) = v39;
          v39 = _mm_add_epi32(v39, si128);
        }
        while ( v37 < v35 >> 2 );
        v40 = (v35 & 0xFFFFFFFC) + v34;
        if ( v35 == (v35 & 0xFFFFFFFC) )
          goto LABEL_61;
      }
      *(_DWORD *)(v32 + 4LL * (v40 - a2)) = v40;
      if ( v31 > v40 + 1 )
      {
        *(_DWORD *)(v32 + 4LL * (v40 + 1 - a2)) = v40 + 1;
        if ( v31 > v40 + 2 )
        {
          *(_DWORD *)(v32 + 4LL * (v40 + 2 - a2)) = v40 + 2;
          if ( v31 > v40 + 3 )
          {
            *(_DWORD *)(v32 + 4LL * (v40 + 3 - a2)) = v40 + 3;
            v41 = v40 + 4;
            if ( v31 > v40 + 4 )
            {
              v42 = v40 + 5;
              *(_DWORD *)(v32 + 4LL * (v41 - a2)) = v41;
              if ( v31 > v42 )
                *(_DWORD *)(v32 + 4LL * (v42 - a2)) = v42;
            }
          }
        }
      }
    }
LABEL_61:
    CoinPackedMatrix::deleteRows(*((CoinPackedMatrix **)this + 3), v31 - a2, (const int *)v32);
    CoinPackedMatrix::deleteCols(*((CoinPackedMatrix **)this + 3), *((_DWORD *)this + 12) - a2, (const int *)v32);
    operator delete[]((void *)v32);
LABEL_62:
    *((_DWORD *)this + 12) = a2;
    *((_DWORD *)this + 13) = v5;
  }
}

