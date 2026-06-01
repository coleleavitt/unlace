unsigned __int64 __fastcall sub_936140(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, int a4)
{
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __m128i *v18; // rax
  __m128i v19; // xmm0
  __int64 *i; // rax
  __int64 j; // rax
  int v22; // edx
  __m128i v23; // xmm2
  __m128i v24; // xmm1
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __m128i v27; // xmm6
  __m128i v28; // xmm7
  __m128i v29; // xmm3
  __m128i *v30; // rax
  __m128i *k; // rax
  __int64 m; // rbp
  int v34; // eax
  int v35; // edx
  int v36; // eax
  __int16 v37; // ax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdi
  int v42; // ecx
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int16 v47; // ax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rdi
  int v51; // ecx
  unsigned int v52; // eax
  int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // rcx
  __int16 v56; // ax
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rdi
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned int *v64; // rdi
  int v65; // eax
  unsigned int *v66; // rdi
  unsigned int *v67; // rdi
  unsigned int *v68; // rax
  int v69; // esi
  __int64 v70; // rdi
  _BOOL4 v71; // ecx
  unsigned int v72; // edx
  unsigned int v73; // edx
  int v74; // [rsp+Ch] [rbp-CCh] BYREF
  __m128i v75; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v76; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v77; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v78; // [rsp+40h] [rbp-98h] BYREF
  __m128i v79; // [rsp+50h] [rbp-88h] BYREF
  __m128i v80; // [rsp+60h] [rbp-78h] BYREF
  __m128i v81; // [rsp+70h] [rbp-68h] BYREF
  __m128i v82; // [rsp+80h] [rbp-58h] BYREF
  __m128i v83; // [rsp+90h] [rbp-48h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v85; // [rsp+A8h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 52);
  v85 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 80) = 0;
  if ( v6 )
  {
    if ( v7 != 2 )
      *(_DWORD *)(a1 + 48) = sub_935E60(*(unsigned int **)a1, 255, 12);
    v63 = sub_935E60(*(unsigned int **)(a1 + 8), 35, 11);
    v64 = *(unsigned int **)(a1 + 16);
    *(_DWORD *)(a1 + 52) = v63;
    v65 = sub_935E60(v64, 52, 11);
    v66 = *(unsigned int **)(a1 + 24);
    *(_DWORD *)(a1 + 56) = v65;
    *(_DWORD *)(a1 + 60) = sub_935E60(v66, 31, 11);
  }
  else
  {
    if ( a3 <= 8 )
    {
      *(_DWORD *)(a1 + 80) = 1;
      v8 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v8 + 2056) != 2 )
        goto LABEL_4;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v8 + 2056) != 2 )
      {
LABEL_4:
        if ( v7 != 2 )
        {
          v67 = *(unsigned int **)a1;
          v74 = 255;
          sub_8E0FB0(v67, &v74, a2, a3);
          v68 = *(unsigned int **)a1;
          v69 = 0;
          v70 = *(_QWORD *)a1 + 1024LL;
          do
          {
            v71 = *v68 != 0;
            v72 = *v68++ >> 8;
            v73 = v71 + v72;
            *(v68 - 1) = v73;
            v69 += v73;
          }
          while ( (unsigned int *)v70 != v68 );
          *(_DWORD *)(a1 + 48) = v69;
        }
        v9 = 0;
        v10 = 4;
        v75.m128i_i64[0] = 0x200000004LL;
        v75.m128i_i64[1] = 0x100000001LL;
        v11 = _mm_load_si128(&v75);
        v76.m128i_i64[0] = 0x100000001LL;
        v76.m128i_i64[1] = 0x100000001LL;
        v12 = _mm_load_si128(&v76);
        v77.m128i_i64[0] = 0x100000001LL;
        v77.m128i_i64[1] = 0x100000001LL;
        v13 = _mm_load_si128(&v77);
        v78.m128i_i64[0] = 0x100000001LL;
        v78.m128i_i64[1] = 0x100000001LL;
        v14 = _mm_load_si128(&v78);
        v79.m128i_i64[0] = 0x100000001LL;
        v79.m128i_i64[1] = 0x100000001LL;
        v15 = _mm_load_si128(&v79);
        v80.m128i_i64[0] = 0x100000001LL;
        v80.m128i_i64[1] = 0x100000001LL;
        v16 = _mm_load_si128(&v80);
        v81.m128i_i64[0] = 0x100000001LL;
        v81.m128i_i64[1] = 0x100000001LL;
        v17 = _mm_load_si128(&v81);
        v82.m128i_i64[0] = 0x100000001LL;
        v82.m128i_i64[1] = 0x100000001LL;
        v83.m128i_i64[0] = 0x100000001LL;
        v83.m128i_i64[1] = 0x100000001LL;
        v18 = *(__m128i **)(a1 + 8);
        *v18 = v11;
        v18[1] = v12;
        v18[2] = v13;
        v18[3] = v14;
        v18[4] = v15;
        v18[5] = v16;
        v18[6] = v17;
        v19 = _mm_load_si128(&v83);
        v18[7] = _mm_load_si128(&v82);
        v18[8] = v19;
        for ( i = (__int64 *)((char *)v75.m128i_i64 + 4); ; i = (__int64 *)((char *)i + 4) )
        {
          v9 += v10;
          if ( &v84 == i )
            break;
          v10 = *(_DWORD *)i;
        }
        *(_DWORD *)(a1 + 52) = v9;
        for ( j = 0; j != 212; j += 4 )
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + j) = 1;
        *(_DWORD *)(a1 + 56) = 53;
        v76.m128i_i64[0] = 0x300000002LL;
        v22 = 6;
        v76.m128i_i64[1] = 0x400000004LL;
        v23 = _mm_load_si128(&v76);
        v75.m128i_i64[0] = 0x200000006LL;
        v77.m128i_i64[0] = 0x300000004LL;
        v75.m128i_i64[1] = 0x100000001LL;
        v24 = _mm_load_si128(&v75);
        v78.m128i_i64[0] = 0x100000001LL;
        v78.m128i_i64[1] = 0x100000001LL;
        v25 = _mm_load_si128(&v78);
        v79.m128i_i64[0] = 0x100000001LL;
        v79.m128i_i64[1] = 0x100000001LL;
        v26 = _mm_load_si128(&v79);
        v80.m128i_i64[0] = 0x100000001LL;
        v80.m128i_i64[1] = 0x100000001LL;
        v27 = _mm_load_si128(&v80);
        v81.m128i_i64[0] = 0x100000001LL;
        v81.m128i_i64[1] = 0x100000001LL;
        v28 = _mm_load_si128(&v81);
        v77.m128i_i64[1] = 0x100000002LL;
        v29 = _mm_load_si128(&v77);
        v82.m128i_i64[0] = 0x100000001LL;
        v82.m128i_i64[1] = 0x100000001LL;
        v30 = *(__m128i **)(a1 + 24);
        *v30 = v24;
        v30[1] = v23;
        v30[2] = v29;
        v30[3] = v25;
        v30[4] = v26;
        v30[5] = v27;
        v30[6] = v28;
        v30[7] = _mm_load_si128(&v82);
        for ( k = (__m128i *)((char *)v75.m128i_i64 + 4); ; k = (__m128i *)((char *)k + 4) )
        {
          v6 += v22;
          if ( &v83 == k )
            break;
          v22 = k->m128i_i32[0];
        }
        *(_DWORD *)(a1 + 60) = v6;
        goto LABEL_14;
      }
    }
    *(_DWORD *)(a1 + 80) = 0;
    if ( v7 != 2 )
    {
      *(_DWORD *)(a1 + 48) = 0;
      for ( m = 0; m != 256; ++m )
      {
        v34 = sub_8E4140(v8, m);
        v35 = 1;
        if ( v34 )
          v35 = 1 << (11 - v34);
        *(_DWORD *)(*(_QWORD *)a1 + 4 * m) = v35;
        v8 = *(_QWORD *)(a1 + 88);
        v36 = *(_DWORD *)(*(_QWORD *)a1 + 4 * m);
        *(_DWORD *)(a1 + 48) += v36;
      }
    }
    v37 = *(_WORD *)(v8 + 4288);
    v38 = 8;
    if ( v37 )
      v38 = 4LL * (1 << (v37 - 1)) + 4;
    *(_DWORD *)(a1 + 52) = 0;
    v39 = *(_QWORD *)(a1 + 8);
    v40 = 0;
    v41 = v38 + v8;
    do
    {
      v42 = 1;
      v43 = (unsigned int)(*(_DWORD *)(v41 + 2 * v40 + 4292) + 0xFFFF) >> 16;
      if ( v43 )
        v42 = 1 << (10 - v43);
      *(_DWORD *)(v39 + v40) = v42;
      v39 = *(_QWORD *)(a1 + 8);
      v44 = *(_DWORD *)(v39 + v40);
      v40 += 4;
      *(_DWORD *)(a1 + 52) += v44;
    }
    while ( v40 != 144 );
    v45 = *(_QWORD *)(a1 + 88);
    v46 = 8;
    v47 = *(_WORD *)(v45 + 2836);
    if ( v47 )
      v46 = 4LL * (1 << (v47 - 1)) + 4;
    *(_DWORD *)(a1 + 56) = 0;
    v48 = *(_QWORD *)(a1 + 16);
    v49 = 0;
    v50 = v46 + v45;
    do
    {
      v51 = 1;
      v52 = (unsigned int)(*(_DWORD *)(v50 + 2 * v49 + 2840) + 0xFFFF) >> 16;
      if ( v52 )
        v51 = 1 << (10 - v52);
      *(_DWORD *)(v48 + v49) = v51;
      v48 = *(_QWORD *)(a1 + 16);
      v53 = *(_DWORD *)(v48 + v49);
      v49 += 4;
      *(_DWORD *)(a1 + 56) += v53;
    }
    while ( v49 != 212 );
    v54 = *(_QWORD *)(a1 + 88);
    v55 = 8;
    v56 = *(_WORD *)(v54 + 2064);
    if ( v56 )
      v55 = 4LL * (1 << (v56 - 1)) + 4;
    *(_DWORD *)(a1 + 60) = 0;
    v57 = *(_QWORD *)(a1 + 24);
    v58 = 0;
    v59 = v55 + v54;
    do
    {
      v60 = 1;
      v61 = (unsigned int)(*(_DWORD *)(v59 + 2 * v58 + 2068) + 0xFFFF) >> 16;
      if ( v61 )
        v60 = 1 << (10 - v61);
      *(_DWORD *)(v57 + v58) = v60;
      v57 = *(_QWORD *)(a1 + 24);
      v62 = *(_DWORD *)(v57 + v58);
      v58 += 4;
      *(_DWORD *)(a1 + 60) += v62;
    }
    while ( v58 != 128 );
  }
LABEL_14:
  sub_935EC0((_DWORD *)a1, a4);
  return __readfsqword(0x28u) ^ v85;
}

