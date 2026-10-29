__int64 __fastcall sub_25AA70(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r12
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // r13
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // rbp
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  _QWORD *v19; // rax
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r12
  _QWORD *v26; // r13
  __int64 v27; // rbp
  __m128i *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const __m128i *v31; // r13
  const __m128i *v32; // r14
  __int64 *v33; // r15
  __int64 v34; // rbp
  __int64 *v35; // rax
  unsigned __int64 v36; // rbp
  __int8 v37; // al
  void *v38; // rax

  sub_255050(a1);
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(unsigned int *)(a2 + 12);
  *(_DWORD *)(a1 + 12) = v4;
  switch ( v3 )
  {
    case 'G':
      v7 = (__m128i *)qalloc_or_throw(24, a2, v4, v2);
      v10 = *(_QWORD ***)(a2 + 24);
      v7[1].m128i_i64[0] = 0;
      v5 = (__int64)v7;
      v11 = *v10;
      for ( *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
            v10 != v11;
            ++*(_QWORD *)(v5 + 16) )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        v13 = qalloc_or_throw(48, a2, v8, v9);
        *(_QWORD *)(v13 + 16) = -1;
        a2 = (__int64)(v12 + 2);
        *(_DWORD *)(v13 + 24) = 70;
        *(_QWORD *)(v13 + 28) = -1;
        sub_25AA70(v13 + 16, v12 + 2);
        *(_QWORD *)v13 = v5;
        v14 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v13 + 8) = v14;
        *v14 = v13;
        *(_QWORD *)(v5 + 8) = v13;
      }
      goto LABEL_3;
    case 'H':
    case 'P':
    case 'T':
      v5 = j__qalloc_or_throw(64, a2, v4, v2);
      sub_25B480(v5, *(_QWORD *)(a2 + 24));
      goto LABEL_3;
    case 'I':
      v15 = j__qalloc_or_throw(80, a2, v4, v2);
      v16 = *(_QWORD *)(a2 + 24);
      v5 = v15;
      *(_QWORD *)v15 = -1;
      *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      *(_QWORD *)(v15 + 56) = 0;
      *(_OWORD *)(v15 + 64) = 0;
      sub_25B4D0(v15, v16);
      goto LABEL_3;
    case 'J':
      v17 = j__qalloc_or_throw(200, a2, v4, v2);
      v18 = *(_QWORD *)(a2 + 24);
      *(_OWORD *)(v17 + 16) = 0;
      v5 = v17;
      *(_QWORD *)v17 = -1;
      *(_DWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 12) = -1;
      *(_QWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 64) = 0;
      *(_OWORD *)(v17 + 48) = 0;
      *(_OWORD *)(v17 + 24) = 0;
      sub_25B5B0(v17, v18);
      sub_25B480(v5 + 72, v18 + 72);
      sub_25B480(v5 + 136, v18 + 136);
      goto LABEL_3;
    case 'K':
    case 'L':
      v19 = (_QWORD *)j__qalloc_or_throw(72, a2, v4, v2);
      v20 = *(_QWORD *)(a2 + 24);
      v5 = (__int64)v19;
      *v19 = -1;
      v19[1] = 0xFFFFFFFF00000000LL;
      v19[2] = 0xFFFFFFFFLL;
      v19[3] = 0;
      v19[4] = 0;
      v19[5] = 0;
      v19[6] = 0;
      v19[7] = 0;
      v19[8] = 0;
      sub_25B5B0(v19, v20);
      goto LABEL_3;
    case 'M':
      v5 = j__qalloc_or_throw(136, a2, v4, v2);
      sub_25B630(v5, *(_QWORD *)(a2 + 24));
      goto LABEL_3;
    case 'Q':
      v21 = (_DWORD *)j__qalloc_or_throw(4, a2, v4, v2);
      *v21 = **(_DWORD **)(a2 + 24);
      *(_QWORD *)(a1 + 24) = v21;
      return a1;
    case 'R':
      v22 = qalloc_or_throw(24, a2, v4, v2);
      v25 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v22 = 0;
      v26 = (_QWORD *)v22;
      *(_OWORD *)(v22 + 8) = 0;
      v27 = *(_QWORD *)(v25 + 8);
      if ( v27 )
      {
        v38 = (void *)qalloc_or_throw(8 * v27, a2, v23, v24);
        *v26 = v38;
        v26[2] = v27;
        memcpy(v38, *(const void **)v25, 8 * v27);
        v26[1] = v27;
      }
      *(_QWORD *)(a1 + 24) = v26;
      return a1;
    case 'S':
      v28 = (__m128i *)qalloc_or_throw(72, a2, v4, v2);
      v31 = *(const __m128i **)(a2 + 24);
      v28[1].m128i_i64[0] = 0;
      v5 = (__int64)v28;
      v32 = (const __m128i *)v31->m128i_i64[0];
      for ( *v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
            v31 != v32;
            ++*(_QWORD *)(v5 + 16) )
      {
        v33 = (__int64 *)v32;
        v32 = (const __m128i *)v32->m128i_i64[0];
        v34 = qalloc_or_throw(48, a2, v29, v30);
        *(_QWORD *)(v34 + 16) = -1;
        a2 = (__int64)(v33 + 2);
        *(_DWORD *)(v34 + 24) = 70;
        *(_QWORD *)(v34 + 28) = -1;
        sub_25AA70(v34 + 16, v33 + 2);
        *(_QWORD *)v34 = v5;
        v35 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v34 + 8) = v35;
        *v35 = v34;
        *(_QWORD *)(v5 + 8) = v34;
      }
      *(_QWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 32) = 0;
      v36 = v31[2].m128i_u64[0];
      if ( v36 )
      {
        *(_QWORD *)(v5 + 24) = qalloc_or_throw(48 * v36, a2, v29, v30);
        *(_QWORD *)(v5 + 40) = v36;
        sub_25A830((_QWORD *)(v5 + 24), &v31[1].m128i_i64[1], 0, v36);
      }
      v37 = v31[4].m128i_i8[0];
      *(__m128i *)(v5 + 48) = _mm_loadu_si128(v31 + 3);
      *(_BYTE *)(v5 + 64) = v37;
LABEL_3:
      *(_QWORD *)(a1 + 24) = v5;
      break;
    default:
      return a1;
  }
  return a1;
}
