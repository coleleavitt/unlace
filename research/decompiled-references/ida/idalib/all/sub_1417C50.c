char *__fastcall sub_1417C50(
        __int64 a1,
        char *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 *a7,
        __int64 *a8)
{
  char *v10; // rbx
  char *v11; // r12
  __int64 *v12; // r10
  __int64 *v13; // r11
  unsigned __int64 v14; // rax
  char *v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  char *v18; // rax
  char *v19; // r13
  __int64 v20; // r14
  char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rdx
  char *v28; // rax
  char *v29; // rdx
  __int64 v30; // rcx
  __m128i v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // rcx
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __m128i v37; // xmm2
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  char *i; // rbp
  void *v43; // r13
  __int64 v44; // rdi
  char *result; // rax
  __m128 v46; // xmm0
  char *v47; // [rsp+8h] [rbp-70h] BYREF
  char *v48; // [rsp+10h] [rbp-68h]
  char *v49; // [rsp+18h] [rbp-60h]
  _QWORD *v50; // [rsp+20h] [rbp-58h]
  _QWORD *v51; // [rsp+28h] [rbp-50h]
  _QWORD *v52; // [rsp+30h] [rbp-48h]
  _QWORD *v53; // [rsp+38h] [rbp-40h]

  v10 = *(char **)(a1 + 8);
  v11 = *(char **)a1;
  v12 = a7;
  v13 = a8;
  v14 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)&v10[-*(_QWORD *)a1] >> 3);
  v15 = &a2[-*(_QWORD *)a1];
  if ( !v14 )
  {
    v16 = 1;
    goto LABEL_25;
  }
  v16 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v17 = -16;
  if ( v14 > 2 * v14 || v16 > 0x492492492492492LL )
    goto LABEL_3;
  if ( v16 )
  {
LABEL_25:
    v17 = 56 * v16;
LABEL_3:
    v53 = a6;
    v52 = a5;
    v51 = a4;
    v50 = a3;
    v49 = v15;
    v18 = (char *)operator new(v17);
    a3 = v50;
    v47 = v18;
    a4 = v51;
    v19 = v18;
    a5 = v52;
    a6 = v53;
    v48 = &v18[v17];
    v20 = (__int64)(v18 + 56);
    v12 = a7;
    v13 = a8;
    goto LABEL_4;
  }
  v47 = nullptr;
  v20 = 56;
  v19 = nullptr;
  v48 = nullptr;
LABEL_4:
  v21 = &v15[(_QWORD)v19];
  v22 = *a6;
  v23 = *a4;
  v24 = *v13;
  *(_QWORD *)v21 = *a3;
  v25 = *a5;
  v26 = v13[1];
  *((_QWORD *)v21 + 1) = v23;
  *((_QWORD *)v21 + 2) = v25;
  v27 = *v12;
  *a5 = 0;
  *((_QWORD *)v21 + 3) = v22;
  *v12 = 0;
  *((_QWORD *)v21 + 4) = v27;
  *((_QWORD *)v21 + 5) = v24;
  *((_QWORD *)v21 + 6) = v26;
  if ( a2 != v11 )
  {
    v28 = v11;
    v29 = v19;
    do
    {
      v30 = *(_QWORD *)v28;
      v31 = _mm_loadu_si128((const __m128i *)(v28 + 40));
      v28 += 56;
      v29 += 56;
      *((_QWORD *)v29 - 7) = v30;
      *((_QWORD *)v29 - 6) = *((_QWORD *)v28 - 6);
      v32 = *((_QWORD *)v28 - 5);
      *((_QWORD *)v28 - 5) = 0;
      *((_QWORD *)v29 - 5) = v32;
      *((_QWORD *)v29 - 4) = *((_QWORD *)v28 - 4);
      v33 = *((_QWORD *)v28 - 3);
      *((_QWORD *)v28 - 3) = 0;
      *((_QWORD *)v29 - 3) = v33;
      *((__m128i *)v29 - 1) = v31;
    }
    while ( a2 != v28 );
    v21 = v47;
    v20 = (__int64)&v47[56 * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(a2 - 56 - v11) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
                      + 112];
  }
  v34 = a2;
  v35 = v20;
  if ( a2 != v10 )
  {
    do
    {
      v36 = *(_QWORD *)v34;
      v37 = _mm_loadu_si128((const __m128i *)(v34 + 40));
      v34 += 56;
      v35 += 56;
      *(_QWORD *)(v35 - 56) = v36;
      v38 = *((_QWORD *)v34 - 6);
      *(__m128i *)(v35 - 16) = v37;
      *(_QWORD *)(v35 - 48) = v38;
      v39 = *((_QWORD *)v34 - 5);
      *((_QWORD *)v34 - 5) = 0;
      *(_QWORD *)(v35 - 40) = v39;
      *(_QWORD *)(v35 - 32) = *((_QWORD *)v34 - 4);
      v40 = *((_QWORD *)v34 - 3);
      *((_QWORD *)v34 - 3) = 0;
      *(_QWORD *)(v35 - 24) = v40;
    }
    while ( v10 != v34 );
    v41 = ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v10 - a2 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1;
    v35 = 7 * v41;
    v20 += 56 * v41;
  }
  for ( i = v11; i != v10; i += 56 )
  {
    while ( 1 )
    {
      v43 = *((void **)i + 4);
      if ( v43 )
      {
        sub_1466570(*((_QWORD *)i + 4), v21, v35);
        v21 = (char *)&qword_48;
        operator delete(v43, 0x48u);
      }
      v44 = *((_QWORD *)i + 2);
      if ( !v44 )
        break;
      i += 56;
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v44 + 16LL))(v44, v21, v35);
      if ( v10 == i )
        goto LABEL_16;
    }
  }
LABEL_16:
  if ( v11 )
    operator delete(v11);
  v47 = (char *)v20;
  result = v48;
  v46 = _mm_loadh_ps((const double *)&v47);
  *(_QWORD *)(a1 + 16) = v48;
  *(__m128 *)a1 = v46;
  return result;
}
