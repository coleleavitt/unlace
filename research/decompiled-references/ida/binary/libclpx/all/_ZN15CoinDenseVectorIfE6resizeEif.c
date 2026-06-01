void __fastcall CoinDenseVector<float>::resize(__int64 a1, int a2, __m128 a3)
{
  int v5; // ebp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  char *v8; // rdi
  unsigned int v9; // esi
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int128 v13; // xmm2
  __int128 v14; // xmm1
  __int64 v15; // rdx
  char *v16; // rsi
  _DWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // esi
  unsigned int v22; // edi
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  __m128 v25; // xmm1
  int v26; // eax
  int v27; // ebp
  unsigned __int64 v28; // rdx
  char *v29; // rax
  int v30; // xmm1_4

  if ( *(_DWORD *)a1 != a2 )
  {
    if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v5 = a2;
    v6 = operator new[](4LL * a2);
    v7 = v6;
    v8 = *(char **)(a1 + 8);
    if ( *(_DWORD *)a1 <= a2 )
      v5 = *(_DWORD *)a1;
    a3 = (__m128)a3.m128_u32[0];
    if ( v5 && (char *)v6 != v8 )
    {
      v9 = v5 >> 3;
      if ( v5 >> 3 <= 0 )
      {
        v17 = (_DWORD *)v6;
        v16 = *(char **)(a1 + 8);
      }
      else
      {
        if ( (v6 >= (unsigned __int64)(v8 + 32) || (unsigned __int64)v8 >= v6 + 32) && v9 > 1 )
        {
          v10 = *(char **)(a1 + 8);
          v11 = v6;
          v12 = v9 - 1;
          do
          {
            v13 = *(_OWORD *)v10;
            v10 += 32;
            v11 += 32LL;
            v14 = *((_OWORD *)v10 - 1);
            *(_OWORD *)(v11 - 32) = v13;
            *(_OWORD *)(v11 - 16) = v14;
          }
          while ( v10 != &v8[32 * v12 + 32] );
        }
        else
        {
          v28 = v6;
          v29 = *(char **)(a1 + 8);
          v12 = v9 - 1;
          do
          {
            v30 = *(_DWORD *)v29;
            v29 += 32;
            v28 += 32LL;
            *(_DWORD *)(v28 - 32) = v30;
            *(_DWORD *)(v28 - 28) = *((_DWORD *)v29 - 7);
            *(_DWORD *)(v28 - 24) = *((_DWORD *)v29 - 6);
            *(_DWORD *)(v28 - 20) = *((_DWORD *)v29 - 5);
            *(_DWORD *)(v28 - 16) = *((_DWORD *)v29 - 4);
            *(_DWORD *)(v28 - 12) = *((_DWORD *)v29 - 3);
            *(_DWORD *)(v28 - 8) = *((_DWORD *)v29 - 2);
            *(_DWORD *)(v28 - 4) = *((_DWORD *)v29 - 1);
          }
          while ( v29 != &v8[32 * v12 + 32] );
        }
        v15 = 32 * ((int)v12 + 1LL);
        v16 = &v8[v15];
        v17 = (_DWORD *)(v7 + v15);
      }
      switch ( v5 % 8 )
      {
        case 1:
          goto LABEL_20;
        case 2:
          goto LABEL_19;
        case 3:
          goto LABEL_18;
        case 4:
          goto LABEL_17;
        case 5:
          goto LABEL_16;
        case 6:
          goto LABEL_15;
        case 7:
          v17[6] = *((_DWORD *)v16 + 6);
LABEL_15:
          v17[5] = *((_DWORD *)v16 + 5);
LABEL_16:
          v17[4] = *((_DWORD *)v16 + 4);
LABEL_17:
          v17[3] = *((_DWORD *)v16 + 3);
LABEL_18:
          v17[2] = *((_DWORD *)v16 + 2);
LABEL_19:
          v17[1] = *((_DWORD *)v16 + 1);
LABEL_20:
          *v17 = *(_DWORD *)v16;
          break;
        default:
          break;
      }
    }
    if ( v8 )
    {
      operator delete[](v8);
      a3 = (__m128)a3.m128_u32[0];
    }
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)a1 = a2;
    if ( a2 > v5 )
    {
      v18 = v5;
      v19 = -(int)((v7 + 4LL * v5) >> 2) & 3;
      v20 = v19 + 3;
      if ( (unsigned int)(v19 + 3) < 5 )
        v20 = 5;
      if ( a2 - 1 - v5 < v20 )
        goto LABEL_35;
      v21 = v5;
      if ( (_DWORD)v19 )
      {
        v21 = v5 + 1;
        *(_DWORD *)(v7 + 4LL * v5) = a3.m128_i32[0];
        if ( (_DWORD)v19 != 1 )
        {
          *(_DWORD *)(v7 + 4LL * v21) = a3.m128_i32[0];
          v21 = v5 + 2;
          if ( (_DWORD)v19 != 2 )
          {
            *(_DWORD *)(v7 + 4LL * v21) = a3.m128_i32[0];
            v21 = v5 + 3;
          }
        }
      }
      v22 = a2 - v5 - v19;
      v23 = v7 + 4 * (v5 + v19);
      v24 = 0;
      v25 = _mm_shuffle_ps(a3, a3, 0);
      do
      {
        ++v24;
        v23 += 16LL;
        *(__m128 *)(v23 - 16) = v25;
      }
      while ( v24 < v22 >> 2 );
      v5 = (v22 & 0xFFFFFFFC) + v21;
      if ( v22 != (v22 & 0xFFFFFFFC) )
      {
        v18 = v5;
LABEL_35:
        *(_DWORD *)(v7 + 4 * v18) = a3.m128_i32[0];
        if ( a2 > v5 + 1 )
        {
          *(_DWORD *)(v7 + 4LL * (v5 + 1)) = a3.m128_i32[0];
          if ( a2 > v5 + 2 )
          {
            *(_DWORD *)(v7 + 4LL * (v5 + 2)) = a3.m128_i32[0];
            if ( a2 > v5 + 3 )
            {
              *(_DWORD *)(v7 + 4LL * (v5 + 3)) = a3.m128_i32[0];
              v26 = v5 + 4;
              if ( a2 > v5 + 4 )
              {
                v27 = v5 + 5;
                *(_DWORD *)(v7 + 4LL * v26) = a3.m128_i32[0];
                if ( a2 > v27 )
                  *(_DWORD *)(v7 + 4LL * v27) = a3.m128_i32[0];
              }
            }
          }
        }
      }
    }
  }
}

