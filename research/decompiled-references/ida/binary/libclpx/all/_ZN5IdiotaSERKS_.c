__int64 __fastcall Idiot::operator=(__int64 a1, __int64 *a2)
{
  void *v3; // rdi
  __int64 v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // rdi
  int v8; // r12d
  __m128i *v9; // rax
  __m128i *v10; // rsi
  unsigned int v11; // r8d
  const __m128i *v12; // rdx
  __m128i *v13; // rcx
  __int64 v14; // r8
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm5
  __int128 v20; // xmm4
  __int128 v21; // xmm3
  __int128 v22; // xmm2
  __m128i v23; // xmm0
  __m128i *v25; // rcx
  int *v26; // rdx
  int v27; // r9d

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *(void **)(a1 + 104);
    if ( v3 )
      operator delete[](v3);
    v5 = *a2;
    v6 = *a2 == 0;
    *(_QWORD *)a1 = *a2;
    if ( v6 || !a2[13] )
    {
      *(_QWORD *)(a1 + 104) = 0;
    }
    else
    {
      v7 = *(int *)(v5 + 108);
      v8 = *(_DWORD *)(v5 + 108);
      if ( v7 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v9 = (__m128i *)operator new[](4 * v7);
      *(_QWORD *)(a1 + 104) = v9;
      v10 = (__m128i *)a2[13];
      if ( v8 && v10 != v9 )
      {
        v11 = v8 >> 3;
        if ( v8 >> 3 > 0 )
        {
          if ( (v9 >= &v10[2] || v10 >= &v9[2]) && v11 > 1 )
          {
            v12 = (const __m128i *)a2[13];
            v13 = v9;
            v14 = v11 - 1;
            do
            {
              v15 = _mm_loadu_si128(v12);
              v12 += 2;
              v13 += 2;
              v16 = _mm_loadu_si128(v12 - 1);
              v13[-2] = v15;
              v13[-1] = v16;
            }
            while ( v12 != &v10[2 * v14 + 2] );
          }
          else
          {
            v25 = v9;
            v26 = (int *)a2[13];
            v14 = v11 - 1;
            do
            {
              v27 = *v26;
              v26 += 8;
              v25 += 2;
              v25[-2].m128i_i32[0] = v27;
              v25[-2].m128i_i32[1] = *(v26 - 7);
              v25[-2].m128i_i32[2] = *(v26 - 6);
              v25[-2].m128i_i32[3] = *(v26 - 5);
              v25[-1].m128i_i32[0] = *(v26 - 4);
              v25[-1].m128i_i32[1] = *(v26 - 3);
              v25[-1].m128i_i32[2] = *(v26 - 2);
              v25[-1].m128i_i32[3] = *(v26 - 1);
            }
            while ( &v10[2 * v14 + 2] != (__m128i *)v26 );
          }
          v17 = 32 * ((int)v14 + 1LL);
          v10 = (__m128i *)((char *)v10 + v17);
          v9 = (__m128i *)((char *)v9 + v17);
        }
        switch ( v8 % 8 )
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
            v9[1].m128i_i32[2] = v10[1].m128i_i32[2];
LABEL_20:
            v9[1].m128i_i32[1] = v10[1].m128i_i32[1];
LABEL_21:
            v9[1].m128i_i32[0] = v10[1].m128i_i32[0];
LABEL_22:
            v9->m128i_i32[3] = v10->m128i_i32[3];
LABEL_23:
            v9->m128i_i32[2] = v10->m128i_i32[2];
LABEL_24:
            v9->m128i_i32[1] = v10->m128i_i32[1];
LABEL_25:
            v9->m128i_i32[0] = v10->m128i_i32[0];
            break;
          default:
            break;
        }
      }
    }
    v18 = *(_OWORD *)(a2 + 11);
    v19 = *(_OWORD *)(a2 + 1);
    v20 = *(_OWORD *)(a2 + 3);
    v21 = *(_OWORD *)(a2 + 5);
    v22 = *(_OWORD *)(a2 + 7);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
    *(_OWORD *)(a1 + 88) = v18;
    *(_OWORD *)(a1 + 8) = v19;
    *(_OWORD *)(a1 + 24) = v20;
    *(_OWORD *)(a1 + 40) = v21;
    *(_OWORD *)(a1 + 56) = v22;
    v23 = _mm_loadu_si128((const __m128i *)a2 + 8);
    *(__m128i *)(a1 + 112) = _mm_loadu_si128((const __m128i *)a2 + 7);
    *(__m128i *)(a1 + 128) = v23;
    *(_DWORD *)(a1 + 144) = *((_DWORD *)a2 + 36);
    *(_DWORD *)(a1 + 148) = *((_DWORD *)a2 + 37);
  }
  return a1;
}

