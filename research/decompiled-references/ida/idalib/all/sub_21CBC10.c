__m128 *__fastcall sub_21CBC10(__m128 *a1, char *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  void **v7; // rbp
  char *v8; // rdi
  unsigned __int64 v9; // rax
  signed __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r10
  __m128 *v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r8
  __m128 v23; // xmm0
  char *v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rcx
  void **v36; // rax
  __int64 v37; // rdx
  void *v38; // rcx
  __m128i v39; // xmm3
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  void **v47; // rbx
  char *v48; // r15
  char *v49; // r13
  void **v50; // rdi
  void **v51; // r14
  void **v52; // r12
  void *v53; // rdi
  __m128 *result; // rax
  unsigned __int64 v55; // rbx
  char *v56; // [rsp+0h] [rbp-88h]
  __int64 v57; // [rsp+8h] [rbp-80h] BYREF
  __int64 v58; // [rsp+10h] [rbp-78h]
  __m128 *v59; // [rsp+18h] [rbp-70h]
  signed __int64 v60; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+28h] [rbp-60h]
  _QWORD *v62; // [rsp+30h] [rbp-58h]
  _QWORD *v63; // [rsp+38h] [rbp-50h]
  _QWORD *v64; // [rsp+40h] [rbp-48h]
  _QWORD *v65; // [rsp+48h] [rbp-40h]

  v7 = (void **)a1->m128_u64[1];
  v59 = a1;
  v8 = (char *)a1->m128_u64[0];
  v56 = v8;
  v9 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v7 - v8) >> 4);
  v10 = a2 - v8;
  if ( !v9 )
  {
    v11 = 1;
    goto LABEL_38;
  }
  v11 = 0x999999999999999ALL * (((char *)v7 - v8) >> 4);
  v12 = -16;
  if ( v9 > 2 * v9 || v11 > 0x333333333333333LL )
    goto LABEL_3;
  if ( v11 )
  {
LABEL_38:
    v12 = 80 * v11;
LABEL_3:
    v65 = a6;
    v64 = a5;
    v63 = a4;
    v62 = a3;
    v60 = v10;
    v13 = operator new(v12);
    a3 = v62;
    v58 = v13;
    a4 = v63;
    a5 = v64;
    a6 = v65;
    v61 = v13 + v12;
    v57 = v13 + 80;
    goto LABEL_4;
  }
  v57 = 80;
  v61 = 0;
  v58 = 0;
LABEL_4:
  v14 = v58;
  v15 = *a5;
  v16 = (__m128 *)(v58 + v10);
  v17 = *a3;
  v18 = a5[1];
  v60 = *a4;
  *(_OWORD *)a5 = 0;
  v19 = a6[1];
  v20 = a6[2];
  v16[3].m128_u64[1] = v17;
  v21 = a5[2];
  a5[2] = 0;
  v22 = *a6;
  v23 = _mm_loadh_ps((const double *)&v60);
  v16->m128_u64[0] = v15;
  v16->m128_u64[1] = v18;
  v16[1].m128_u64[0] = v21;
  v16[1].m128_u64[1] = v22;
  v16[2].m128_u64[0] = v19;
  v16[2].m128_u64[1] = v20;
  v16[3].m128_u64[0] = 0;
  v16[4] = v23;
  *(_OWORD *)a6 = 0;
  a6[2] = 0;
  if ( a2 != v56 )
  {
    v24 = v56;
    v25 = v14;
    do
    {
      *(_QWORD *)(v25 + 8) = 0;
      v26 = _mm_loadu_si128((const __m128i *)(v24 + 56));
      v24 += 80;
      v25 += 80;
      *(_QWORD *)(v25 - 64) = 0;
      *(_QWORD *)(v25 - 80) = 0;
      *(_QWORD *)(v25 - 80) = *((_QWORD *)v24 - 10);
      v27 = *((_QWORD *)v24 - 9);
      *((_QWORD *)v24 - 10) = 0;
      v28 = *(_QWORD *)(v25 - 72);
      *(_QWORD *)(v25 - 72) = v27;
      v29 = *((_QWORD *)v24 - 8);
      *((_QWORD *)v24 - 9) = v28;
      v30 = *(_QWORD *)(v25 - 64);
      *(_QWORD *)(v25 - 64) = v29;
      *((_QWORD *)v24 - 8) = v30;
      *(_QWORD *)(v25 - 48) = 0;
      *(_QWORD *)(v25 - 40) = 0;
      *(_QWORD *)(v25 - 56) = 0;
      *(_QWORD *)(v25 - 56) = *((_QWORD *)v24 - 7);
      v31 = *((_QWORD *)v24 - 6);
      *((_QWORD *)v24 - 7) = 0;
      v32 = *(_QWORD *)(v25 - 48);
      *(_QWORD *)(v25 - 48) = v31;
      v33 = *((_QWORD *)v24 - 5);
      *((_QWORD *)v24 - 6) = v32;
      v34 = *(_QWORD *)(v25 - 40);
      *(_QWORD *)(v25 - 40) = v33;
      *((_QWORD *)v24 - 5) = v34;
      v35 = *((_QWORD *)v24 - 4);
      *((_QWORD *)v24 - 4) = 0;
      *(_QWORD *)(v25 - 32) = v35;
      *(__m128i *)(v25 - 24) = v26;
      *(_QWORD *)(v25 - 8) = *((_QWORD *)v24 - 1);
    }
    while ( a2 != v24 );
    v57 = v58 + 16 * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(a2 - 80 - v56) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 10);
  }
  v36 = (void **)a2;
  v37 = v57;
  if ( a2 != (char *)v7 )
  {
    do
    {
      v38 = *v36;
      v39 = _mm_loadu_si128((const __m128i *)(v36 + 7));
      v36 += 10;
      v37 += 80;
      *(v36 - 10) = nullptr;
      *(_QWORD *)(v37 - 80) = v38;
      v40 = (__int64)*(v36 - 9);
      *(v36 - 9) = nullptr;
      *(_QWORD *)(v37 - 72) = v40;
      v41 = (__int64)*(v36 - 8);
      *(v36 - 8) = nullptr;
      *(_QWORD *)(v37 - 64) = v41;
      v42 = (__int64)*(v36 - 7);
      *(v36 - 7) = nullptr;
      *(_QWORD *)(v37 - 56) = v42;
      v43 = (__int64)*(v36 - 6);
      *(v36 - 6) = nullptr;
      *(_QWORD *)(v37 - 48) = v43;
      v44 = (__int64)*(v36 - 5);
      *(v36 - 5) = nullptr;
      *(_QWORD *)(v37 - 40) = v44;
      v45 = (__int64)*(v36 - 4);
      *(v36 - 4) = nullptr;
      *(_QWORD *)(v37 - 32) = v45;
      v46 = (__int64)*(v36 - 1);
      *(__m128i *)(v37 - 24) = v39;
      *(_QWORD *)(v37 - 8) = v46;
    }
    while ( v7 != v36 );
    v57 += 16
         * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)v7 - a2 - 80) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 5);
  }
  v47 = (void **)v56;
  if ( v56 != (char *)v7 )
  {
    do
    {
      while ( 1 )
      {
        v48 = (char *)v47[6];
        if ( v48 )
        {
          v49 = v48 + 72;
          do
          {
            while ( 1 )
            {
              v49 -= 24;
              v50 = *(void ***)v49;
              v51 = *((void ***)v49 + 1);
              v52 = *(void ***)v49;
              if ( v51 != *(void ***)v49 )
              {
                do
                {
                  while ( *v52 )
                  {
                    operator delete(*v52);
                    v52 += 3;
                    if ( v52 == v51 )
                      goto LABEL_17;
                  }
                  v52 += 3;
                }
                while ( v51 != v52 );
LABEL_17:
                v50 = *(void ***)v49;
              }
              if ( !v50 )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_20;
            }
          }
          while ( v48 != v49 );
LABEL_20:
          operator delete(v48, 0x48u);
        }
        v53 = v47[3];
        if ( v53 )
          operator delete(v53);
        if ( !*v47 )
          break;
        operator delete(*v47);
        v47 += 10;
        if ( v7 == v47 )
          goto LABEL_25;
      }
      v47 += 10;
    }
    while ( v47 != v7 );
  }
LABEL_25:
  if ( v56 )
    operator delete(v56);
  result = v59;
  v55 = v61;
  *v59 = _mm_loadh_ps((const double *)&v57);
  result[1].m128_u64[0] = v55;
  return result;
}
