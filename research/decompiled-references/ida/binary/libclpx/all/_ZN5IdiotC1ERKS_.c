// Alternative name is '_ZN5IdiotC2ERKS_'
void __fastcall Idiot::Idiot(Idiot *this, const Idiot *a2)
{
  __int64 v3; // rax
  bool v5; // zf
  unsigned __int64 v6; // rdi
  int v7; // r12d
  __m128i *v8; // rax
  __m128i *v9; // rsi
  unsigned int v10; // r8d
  const __m128i *v11; // rdx
  __m128i *v12; // rcx
  __int64 v13; // r8
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm5
  __int128 v19; // xmm4
  __int128 v20; // xmm3
  __int128 v21; // xmm2
  __m128i v22; // xmm0
  __m128i *v23; // rcx
  int *v24; // rdx
  int v25; // r9d

  v3 = *(_QWORD *)a2;
  v5 = *(_QWORD *)a2 == 0;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v5 || !*((_QWORD *)a2 + 13) )
  {
    *((_QWORD *)this + 13) = 0;
  }
  else
  {
    v6 = *(int *)(v3 + 108);
    v7 = *(_DWORD *)(v3 + 108);
    if ( v6 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v8 = (__m128i *)operator new[](4 * v6);
    *((_QWORD *)this + 13) = v8;
    v9 = *((__m128i **)a2 + 13);
    if ( v7 && v9 != v8 )
    {
      v10 = v7 >> 3;
      if ( v7 >> 3 > 0 )
      {
        if ( (v8 >= &v9[2] || v9 >= &v8[2]) && v10 > 1 )
        {
          v11 = *((const __m128i **)a2 + 13);
          v12 = v8;
          v13 = v10 - 1;
          do
          {
            v14 = _mm_loadu_si128(v11);
            v11 += 2;
            v12 += 2;
            v15 = _mm_loadu_si128(v11 - 1);
            v12[-2] = v14;
            v12[-1] = v15;
          }
          while ( v11 != &v9[2 * v13 + 2] );
        }
        else
        {
          v23 = v8;
          v24 = *((int **)a2 + 13);
          v13 = v10 - 1;
          do
          {
            v25 = *v24;
            v24 += 8;
            v23 += 2;
            v23[-2].m128i_i32[0] = v25;
            v23[-2].m128i_i32[1] = *(v24 - 7);
            v23[-2].m128i_i32[2] = *(v24 - 6);
            v23[-2].m128i_i32[3] = *(v24 - 5);
            v23[-1].m128i_i32[0] = *(v24 - 4);
            v23[-1].m128i_i32[1] = *(v24 - 3);
            v23[-1].m128i_i32[2] = *(v24 - 2);
            v23[-1].m128i_i32[3] = *(v24 - 1);
          }
          while ( &v9[2 * v13 + 2] != (__m128i *)v24 );
        }
        v16 = 32 * ((int)v13 + 1LL);
        v9 = (__m128i *)((char *)v9 + v16);
        v8 = (__m128i *)((char *)v8 + v16);
      }
      switch ( v7 % 8 )
      {
        case 1:
          goto LABEL_21;
        case 2:
          goto LABEL_20;
        case 3:
          goto LABEL_19;
        case 4:
          goto LABEL_18;
        case 5:
          goto LABEL_17;
        case 6:
          goto LABEL_16;
        case 7:
          v8[1].m128i_i32[2] = v9[1].m128i_i32[2];
LABEL_16:
          v8[1].m128i_i32[1] = v9[1].m128i_i32[1];
LABEL_17:
          v8[1].m128i_i32[0] = v9[1].m128i_i32[0];
LABEL_18:
          v8->m128i_i32[3] = v9->m128i_i32[3];
LABEL_19:
          v8->m128i_i32[2] = v9->m128i_i32[2];
LABEL_20:
          v8->m128i_i32[1] = v9->m128i_i32[1];
LABEL_21:
          v8->m128i_i32[0] = v9->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  v17 = *(_OWORD *)((char *)a2 + 88);
  v18 = *(_OWORD *)((char *)a2 + 8);
  v19 = *(_OWORD *)((char *)a2 + 24);
  v20 = *(_OWORD *)((char *)a2 + 40);
  v21 = *(_OWORD *)((char *)a2 + 56);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)((char *)this + 88) = v17;
  *(_OWORD *)((char *)this + 8) = v18;
  *(_OWORD *)((char *)this + 24) = v19;
  *(_OWORD *)((char *)this + 40) = v20;
  *(_OWORD *)((char *)this + 56) = v21;
  v22 = _mm_loadu_si128((const __m128i *)a2 + 8);
  *((__m128i *)this + 7) = _mm_loadu_si128((const __m128i *)a2 + 7);
  *((__m128i *)this + 8) = v22;
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
}

