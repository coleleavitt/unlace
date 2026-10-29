char *__fastcall sub_224C2B0(__int64 a1, char *a2, const __m128i *a3)
{
  char *v6; // rbx
  char *v7; // r12
  char *v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __m128i *v12; // r13
  _BYTE *v13; // rsi
  const __m128i *v14; // rsi
  __int64 v15; // rsi
  const __m128i *v16; // rsi
  __int32 v17; // edx
  __int64 v18; // rsi
  __int32 v19; // edx
  _QWORD *v20; // r14
  char *v21; // r13
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  _QWORD *v24; // rdi
  char *v25; // r14
  _QWORD *v26; // r13
  __int64 v27; // rdx
  _BYTE *v28; // rsi
  _BYTE *v29; // rsi
  _BYTE *v30; // rsi
  _QWORD *v31; // rdi
  char *i; // rbp
  char *v33; // rdi
  char *v34; // rdi
  char *v35; // rdi
  char *result; // rax
  __m128 v37; // xmm0
  unsigned __int64 v38; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v39; // [rsp+10h] [rbp-48h]
  char *v40; // [rsp+18h] [rbp-40h]

  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  v9 = (__int64)&v6[-*(_QWORD *)a1] >> 7;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_31;
  }
  v10 = 2 * v9;
  v11 = -128;
  if ( v9 > 2 * v9 || v10 > 0x1FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_31:
    v11 = v10 << 7;
LABEL_3:
    v38 = v11;
    v39 = (_QWORD *)operator new(v11);
    v40 = (char *)v39 + v38;
    v38 = (unsigned __int64)(v39 + 16);
    goto LABEL_4;
  }
  v38 = 128;
  v40 = nullptr;
  v39 = nullptr;
LABEL_4:
  v12 = (__m128i *)&v8[(_QWORD)v39];
  v13 = (_BYTE *)a3[1].m128i_i64[0];
  v12->m128i_i64[0] = a3->m128i_i64[0];
  v12->m128i_i64[1] = a3->m128i_i64[1];
  v12[1].m128i_i64[0] = (__int64)v12[2].m128i_i64;
  sub_224A7C0((__m128i *)v12[1].m128i_i64, v13, (__int64)&v13[a3[1].m128i_i64[1]]);
  v14 = (const __m128i *)a3[3].m128i_i64[0];
  v12[3].m128i_i64[0] = (__int64)v12[4].m128i_i64;
  if ( v14 == &a3[4] )
  {
    v12[4] = _mm_loadu_si128(a3 + 4);
  }
  else
  {
    v12[3].m128i_i64[0] = (__int64)v14;
    v12[4].m128i_i64[0] = a3[4].m128i_i64[0];
  }
  v15 = a3[3].m128i_i64[1];
  a3[3].m128i_i64[0] = (__int64)a3[4].m128i_i64;
  v12[5].m128i_i64[0] = (__int64)v12[6].m128i_i64;
  v12[3].m128i_i64[1] = v15;
  v16 = (const __m128i *)a3[5].m128i_i64[0];
  a3[3].m128i_i64[1] = 0;
  a3[4].m128i_i8[0] = 0;
  if ( v16 == &a3[6] )
  {
    v12[6] = _mm_loadu_si128(a3 + 6);
  }
  else
  {
    v12[5].m128i_i64[0] = (__int64)v16;
    v12[6].m128i_i64[0] = a3[6].m128i_i64[0];
  }
  a3[5].m128i_i64[0] = (__int64)a3[6].m128i_i64;
  v17 = a3[7].m128i_i32[0];
  v18 = a3[5].m128i_i64[1];
  a3[6].m128i_i8[0] = 0;
  v12[7].m128i_i32[0] = v17;
  v19 = a3[7].m128i_i32[2];
  v12[5].m128i_i64[1] = v18;
  a3[5].m128i_i64[1] = 0;
  v12[7].m128i_i32[2] = v19;
  if ( a2 != v7 )
  {
    v20 = v39;
    v21 = v7;
    do
    {
      v22 = *(_QWORD *)v21;
      v21 += 128;
      *v20 = v22;
      v20[1] = *((_QWORD *)v21 - 15);
      v20[2] = v20 + 4;
      sub_224A7C0(v20 + 2, *((_BYTE **)v21 - 14), *((_QWORD *)v21 - 14) + *((_QWORD *)v21 - 13));
      v20[6] = v20 + 8;
      sub_224A7C0(v20 + 6, *((_BYTE **)v21 - 10), *((_QWORD *)v21 - 10) + *((_QWORD *)v21 - 9));
      v23 = v20 + 12;
      v24 = v20 + 10;
      v20 += 16;
      *(v20 - 6) = v23;
      sub_224A7C0(v24, *((_BYTE **)v21 - 6), *((_QWORD *)v21 - 6) + *((_QWORD *)v21 - 5));
      *((_DWORD *)v20 - 4) = *((_DWORD *)v21 - 4);
      *((_DWORD *)v20 - 2) = *((_DWORD *)v21 - 2);
    }
    while ( a2 != v21 );
    v38 = (unsigned __int64)v39 + ((a2 - 128 - v7) & 0xFFFFFFFFFFFFFF80LL) + 256;
  }
  v25 = a2;
  v26 = (_QWORD *)v38;
  if ( a2 != v6 )
  {
    do
    {
      v27 = *(_QWORD *)v25;
      v28 = *((_BYTE **)v25 + 2);
      v25 += 128;
      *v26 = v27;
      v26[1] = *((_QWORD *)v25 - 15);
      v26[2] = v26 + 4;
      sub_224A7C0(v26 + 2, v28, (__int64)&v28[*((_QWORD *)v25 - 13)]);
      v29 = *((_BYTE **)v25 - 10);
      v26[6] = v26 + 8;
      sub_224A7C0(v26 + 6, v29, (__int64)&v29[*((_QWORD *)v25 - 9)]);
      v30 = *((_BYTE **)v25 - 6);
      v31 = v26 + 10;
      v26[10] = v26 + 12;
      v26 += 16;
      sub_224A7C0(v31, v30, (__int64)&v30[*((_QWORD *)v25 - 5)]);
      *((_DWORD *)v26 - 4) = *((_DWORD *)v25 - 4);
      *((_DWORD *)v26 - 2) = *((_DWORD *)v25 - 2);
    }
    while ( v25 != v6 );
    v38 += ((v6 - a2 - 128) & 0xFFFFFFFFFFFFFF80LL) + 128;
  }
  for ( i = v7; i != v6; i += 128 )
  {
    while ( 1 )
    {
      v33 = *((char **)i + 10);
      if ( v33 != i + 96 )
        operator delete(v33);
      v34 = *((char **)i + 6);
      if ( v34 != i + 64 )
        operator delete(v34);
      v35 = *((char **)i + 2);
      if ( v35 == i + 32 )
        break;
      operator delete(v35);
      i += 128;
      if ( v6 == i )
        goto LABEL_22;
    }
  }
LABEL_22:
  if ( v7 )
    operator delete(v7);
  result = v40;
  v37 = _mm_loadh_ps((const double *)&v38);
  *(_QWORD *)(a1 + 16) = v40;
  *(__m128 *)a1 = v37;
  return result;
}
