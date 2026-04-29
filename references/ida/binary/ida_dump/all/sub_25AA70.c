__int64 __fastcall sub_25AA70(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r12
  __m128i *v5; // rax
  _QWORD **v6; // r13
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // r13
  __int64 v21; // rbp
  __m128i *v22; // rax
  const __m128i *v23; // r13
  const __m128i *v24; // r14
  __int64 *v25; // r15
  __int64 v26; // rbp
  __int64 *v27; // rax
  unsigned __int64 v28; // rbp
  __int8 v29; // al
  void *v30; // rax

  sub_255050(a1);
  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  switch ( v2 )
  {
    case 'G':
      v5 = (__m128i *)qalloc_or_throw();
      v6 = *(_QWORD ***)(a2 + 24);
      v5[1].m128i_i64[0] = 0;
      v3 = (__int64)v5;
      v7 = *v6;
      for ( *v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
            v6 != v7;
            ++*(_QWORD *)(v3 + 16) )
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        v9 = qalloc_or_throw();
        *(_QWORD *)(v9 + 16) = -1;
        *(_DWORD *)(v9 + 24) = 70;
        *(_QWORD *)(v9 + 28) = -1;
        sub_25AA70(v9 + 16, v8 + 2);
        *(_QWORD *)v9 = v3;
        v10 = *(__int64 **)(v3 + 8);
        *(_QWORD *)(v9 + 8) = v10;
        *v10 = v9;
        *(_QWORD *)(v3 + 8) = v9;
      }
      goto LABEL_3;
    case 'H':
    case 'P':
    case 'T':
      v3 = j__qalloc_or_throw();
      sub_25B480(v3, *(_QWORD *)(a2 + 24));
      goto LABEL_3;
    case 'I':
      v11 = j__qalloc_or_throw();
      v12 = *(_QWORD *)(a2 + 24);
      v3 = v11;
      *(_QWORD *)v11 = -1;
      *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 48) = 0;
      *(_QWORD *)(v11 + 56) = 0;
      *(_OWORD *)(v11 + 64) = 0;
      sub_25B4D0(v11, v12);
      goto LABEL_3;
    case 'J':
      v13 = j__qalloc_or_throw();
      v14 = *(_QWORD *)(a2 + 24);
      *(_OWORD *)(v13 + 16) = 0;
      v3 = v13;
      *(_QWORD *)v13 = -1;
      *(_DWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 12) = -1;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 64) = 0;
      *(_OWORD *)(v13 + 48) = 0;
      *(_OWORD *)(v13 + 24) = 0;
      sub_25B5B0(v13, v14);
      sub_25B480(v3 + 72, v14 + 72);
      sub_25B480(v3 + 136, v14 + 136);
      goto LABEL_3;
    case 'K':
    case 'L':
      v15 = (_QWORD *)j__qalloc_or_throw();
      v16 = *(_QWORD *)(a2 + 24);
      v3 = (__int64)v15;
      *v15 = -1;
      v15[1] = 0xFFFFFFFF00000000LL;
      v15[2] = 0xFFFFFFFFLL;
      v15[3] = 0;
      v15[4] = 0;
      v15[5] = 0;
      v15[6] = 0;
      v15[7] = 0;
      v15[8] = 0;
      sub_25B5B0(v15, v16);
      goto LABEL_3;
    case 'M':
      v3 = j__qalloc_or_throw();
      sub_25B630(v3, *(_QWORD *)(a2 + 24));
      goto LABEL_3;
    case 'Q':
      v17 = (_DWORD *)j__qalloc_or_throw();
      *v17 = **(_DWORD **)(a2 + 24);
      *(_QWORD *)(a1 + 24) = v17;
      return a1;
    case 'R':
      v18 = qalloc_or_throw();
      v19 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v18 = 0;
      v20 = (_QWORD *)v18;
      *(_OWORD *)(v18 + 8) = 0;
      v21 = *(_QWORD *)(v19 + 8);
      if ( v21 )
      {
        v30 = (void *)qalloc_or_throw();
        *v20 = v30;
        v20[2] = v21;
        memcpy(v30, *(const void **)v19, 8 * v21);
        v20[1] = v21;
      }
      *(_QWORD *)(a1 + 24) = v20;
      return a1;
    case 'S':
      v22 = (__m128i *)qalloc_or_throw();
      v23 = *(const __m128i **)(a2 + 24);
      v22[1].m128i_i64[0] = 0;
      v3 = (__int64)v22;
      v24 = (const __m128i *)v23->m128i_i64[0];
      for ( *v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
            v23 != v24;
            ++*(_QWORD *)(v3 + 16) )
      {
        v25 = (__int64 *)v24;
        v24 = (const __m128i *)v24->m128i_i64[0];
        v26 = qalloc_or_throw();
        *(_QWORD *)(v26 + 16) = -1;
        *(_DWORD *)(v26 + 24) = 70;
        *(_QWORD *)(v26 + 28) = -1;
        sub_25AA70(v26 + 16, v25 + 2);
        *(_QWORD *)v26 = v3;
        v27 = *(__int64 **)(v3 + 8);
        *(_QWORD *)(v26 + 8) = v27;
        *v27 = v26;
        *(_QWORD *)(v3 + 8) = v26;
      }
      *(_QWORD *)(v3 + 24) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      v28 = v23[2].m128i_u64[0];
      if ( v28 )
      {
        *(_QWORD *)(v3 + 24) = qalloc_or_throw();
        *(_QWORD *)(v3 + 40) = v28;
        sub_25A830((_QWORD *)(v3 + 24), &v23[1].m128i_i64[1], 0, v28);
      }
      v29 = v23[4].m128i_i8[0];
      *(__m128i *)(v3 + 48) = _mm_loadu_si128(v23 + 3);
      *(_BYTE *)(v3 + 64) = v29;
LABEL_3:
      *(_QWORD *)(a1 + 24) = v3;
      break;
    default:
      return a1;
  }
  return a1;
}
