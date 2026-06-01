char *__fastcall sub_A11D40(char **a1, char *a2, __int64 a3)
{
  char *v5; // rbx
  char *v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  char *v13; // rsi
  char *v14; // r9
  char *v15; // rdi
  __int64 v16; // rax
  char *v17; // r8
  char v18; // dl
  char v19; // dl
  char v20; // dl
  char *v21; // rdx
  char v22; // dl
  char *v23; // rdx
  __int64 v24; // rdx
  char *v25; // rdx
  char *v26; // rdx
  char *v27; // r9
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // r8
  __int64 v31; // rdi
  char *v32; // rdi
  __int64 v33; // rdi
  char *v34; // rdi
  __int64 v35; // rdi
  char *v36; // rdi
  char *i; // r15
  char *v38; // rdi
  char *v39; // rdi
  char *result; // rax
  __int64 v41; // [rsp+8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+10h] [rbp-48h]
  char *v43; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v41 = a3;
  v7 = a2 - v6;
  if ( !(0xEEEEEEEEEEEEEEEFLL * ((v5 - v6) >> 3)) )
  {
    v8 = 1;
    goto LABEL_46;
  }
  v8 = 0xDDDDDDDDDDDDDDDELL * ((v5 - v6) >> 3);
  v9 = -16;
  if ( 0xEEEEEEEEEEEEEEEFLL * ((v5 - v6) >> 3) > v8 || v8 > 0x222222222222222LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_46:
    v9 = 120 * v8;
LABEL_3:
    v42 = v7;
    v10 = operator new(v9);
    v7 = v42;
    v11 = v10;
    v43 = (char *)(v10 + v9);
    v12 = v10 + 120;
    goto LABEL_4;
  }
  v12 = 120;
  v11 = 0;
  v43 = nullptr;
LABEL_4:
  v42 = v11 + v7;
  sub_A11C70(v11 + v7, v41);
  *(_BYTE *)(v42 + 112) = *(_BYTE *)(v41 + 112) & 0x7F | *(_BYTE *)(v42 + 112) & 0x80;
  if ( a2 != v6 )
  {
    v13 = v6 + 16;
    v14 = v6 + 96;
    v15 = v6;
    v16 = v11;
    v17 = v6 + 56;
    do
    {
      *(_QWORD *)v16 = v16 + 16;
      v25 = *((char **)v13 - 2);
      if ( v13 == v25 )
      {
        *(__m128i *)(v16 + 16) = _mm_loadu_si128((const __m128i *)v13);
      }
      else
      {
        *(_QWORD *)v16 = v25;
        *(_QWORD *)(v16 + 16) = *(_QWORD *)v13;
      }
      *(_QWORD *)(v16 + 8) = *((_QWORD *)v13 - 1);
      *((_QWORD *)v13 - 2) = v13;
      *((_QWORD *)v13 - 1) = 0;
      *v13 = 0;
      v18 = v15[32] & 1 | *(_BYTE *)(v16 + 32) & 0xFE;
      *(_BYTE *)(v16 + 32) = v18;
      v19 = v15[32] & 2 | v18 & 0xFD;
      *(_BYTE *)(v16 + 32) = v19;
      v20 = v15[32] & 4 | v19 & 0xFB;
      *(_BYTE *)(v16 + 32) = v20;
      *(_BYTE *)(v16 + 32) = v15[32] & 8 | v20 & 0xF7;
      *(_QWORD *)(v16 + 40) = v16 + 56;
      v21 = *((char **)v13 + 3);
      if ( v21 == v17 )
      {
        *(__m128i *)(v16 + 56) = _mm_loadu_si128((const __m128i *)(v13 + 40));
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v21;
        *(_QWORD *)(v16 + 56) = *((_QWORD *)v13 + 5);
      }
      *(_QWORD *)(v16 + 48) = *((_QWORD *)v13 + 4);
      *((_QWORD *)v13 + 3) = v17;
      *((_QWORD *)v13 + 4) = 0;
      v13[40] = 0;
      v22 = v15[72] & 1 | *(_BYTE *)(v16 + 72) & 0xFE;
      *(_BYTE *)(v16 + 72) = v22;
      *(_BYTE *)(v16 + 72) = v15[72] & 6 | v22 & 0xF9;
      *(_QWORD *)(v16 + 80) = v16 + 96;
      v23 = *((char **)v13 + 8);
      if ( v23 == v14 )
      {
        *(__m128i *)(v16 + 96) = _mm_loadu_si128((const __m128i *)v13 + 5);
      }
      else
      {
        *(_QWORD *)(v16 + 80) = v23;
        *(_QWORD *)(v16 + 96) = *((_QWORD *)v13 + 10);
      }
      v24 = *((_QWORD *)v13 + 9);
      v15 += 120;
      v16 += 120;
      v13 += 120;
      v17 += 120;
      *(_QWORD *)(v16 - 32) = v24;
      *((_QWORD *)v13 - 7) = v14;
      v14 += 120;
      *((_QWORD *)v13 - 6) = 0;
      *(v13 - 40) = 0;
      LOBYTE(v24) = *(v15 - 8) & 1 | *(_BYTE *)(v16 - 8) & 0xFE;
      *(_BYTE *)(v16 - 8) = v24;
      LOBYTE(v24) = *(v15 - 8) & 2 | v24 & 0xFD;
      *(_BYTE *)(v16 - 8) = v24;
      LOBYTE(v24) = *(v15 - 8) & 4 | v24 & 0xFB;
      *(_BYTE *)(v16 - 8) = v24;
      LOBYTE(v24) = *(v15 - 8) & 8 | v24 & 0xF7;
      *(_BYTE *)(v16 - 8) = v24;
      *(_BYTE *)(v16 - 8) = *(v15 - 8) & 0x70 | v24 & 0x8F;
    }
    while ( a2 != v15 );
    v12 = v11 + 120 * (((0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)(a2 - 120 - v6) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 2);
  }
  if ( a2 != v5 )
  {
    v26 = a2 + 16;
    v27 = a2 + 96;
    v28 = a2;
    v29 = v12;
    v30 = a2 + 56;
    do
    {
      *(_QWORD *)v29 = v29 + 16;
      v36 = *((char **)v26 - 2);
      if ( v36 == v26 )
      {
        *(__m128i *)(v29 + 16) = _mm_loadu_si128((const __m128i *)v26);
      }
      else
      {
        *(_QWORD *)v29 = v36;
        *(_QWORD *)(v29 + 16) = *(_QWORD *)v26;
      }
      v31 = *((_QWORD *)v26 - 1);
      *((_QWORD *)v26 - 2) = v26;
      *((_QWORD *)v26 - 1) = 0;
      *(_QWORD *)(v29 + 8) = v31;
      LOBYTE(v31) = *(_BYTE *)(v29 + 32);
      *v26 = 0;
      *(_BYTE *)(v29 + 32) = v28[32] & 0xF | v31 & 0xF0;
      *(_QWORD *)(v29 + 40) = v29 + 56;
      v32 = *((char **)v26 + 3);
      if ( v32 == v30 )
      {
        *(__m128i *)(v29 + 56) = _mm_loadu_si128((const __m128i *)(v26 + 40));
      }
      else
      {
        *(_QWORD *)(v29 + 40) = v32;
        *(_QWORD *)(v29 + 56) = *((_QWORD *)v26 + 5);
      }
      v33 = *((_QWORD *)v26 + 4);
      *((_QWORD *)v26 + 3) = v30;
      *((_QWORD *)v26 + 4) = 0;
      *(_QWORD *)(v29 + 48) = v33;
      LOBYTE(v33) = *(_BYTE *)(v29 + 72);
      v26[40] = 0;
      *(_BYTE *)(v29 + 72) = v28[72] & 7 | v33 & 0xF8;
      *(_QWORD *)(v29 + 80) = v29 + 96;
      v34 = *((char **)v26 + 8);
      if ( v34 == v27 )
      {
        *(__m128i *)(v29 + 96) = _mm_loadu_si128((const __m128i *)v26 + 5);
      }
      else
      {
        *(_QWORD *)(v29 + 80) = v34;
        *(_QWORD *)(v29 + 96) = *((_QWORD *)v26 + 10);
      }
      v35 = *((_QWORD *)v26 + 9);
      *((_QWORD *)v26 + 8) = v27;
      v28 += 120;
      v29 += 120;
      v26[80] = 0;
      v27 += 120;
      v26 += 120;
      v30 += 120;
      *(_QWORD *)(v29 - 32) = v35;
      LOBYTE(v35) = *(_BYTE *)(v29 - 8);
      *((_QWORD *)v26 - 6) = 0;
      *(_BYTE *)(v29 - 8) = *(v28 - 8) & 0x7F | v35 & 0x80;
    }
    while ( v5 != v28 );
    v12 += 120 * (((0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)(v5 - a2 - 120) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
  }
  for ( i = v6; i != v5; i += 120 )
  {
    while ( 1 )
    {
      v38 = *((char **)i + 10);
      if ( v38 != i + 96 )
        operator delete(v38);
      v39 = *((char **)i + 5);
      if ( v39 != i + 56 )
        operator delete(v39);
      if ( *(char **)i == i + 16 )
        break;
      operator delete(*(void **)i);
      i += 120;
      if ( v5 == i )
        goto LABEL_37;
    }
  }
LABEL_37:
  if ( v6 )
    operator delete(v6);
  v41 = v12;
  result = v43;
  a1[2] = v43;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v41);
  return result;
}
