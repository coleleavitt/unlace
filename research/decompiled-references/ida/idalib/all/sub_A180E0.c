__int64 __fastcall sub_A180E0(__int64 a1, __int64 *a2, unsigned __int8 *a3, size_t a4, int a5, char a6)
{
  _DWORD *v7; // r13
  unsigned __int64 v9; // rax
  char v10; // dl
  int v12; // r12d
  __int64 v13; // r15
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rdx
  _WORD *v18; // rcx
  int v19; // edi
  __int64 v20; // r10
  _WORD *v21; // rsi
  unsigned __int16 *v22; // rsi
  int v23; // edx
  int v24; // r12d
  __m128i v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __m128i *v28; // rax
  const __m128i *v29; // rsi
  __m128i *v30; // rdi
  __int64 v31; // rbp
  __m128i v32; // xmm1
  __m128i *v33; // r12
  __m128i *v34; // rbp
  int v35; // ecx
  __int64 v36; // r12
  __int64 i; // r15
  __m128i v38; // [rsp+0h] [rbp-208h]
  __m128i *v39; // [rsp+0h] [rbp-208h]
  int v40; // [rsp+1Ch] [rbp-1ECh]
  __int64 v41; // [rsp+28h] [rbp-1E0h]
  unsigned __int16 *v44; // [rsp+48h] [rbp-1C0h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-1B8h] BYREF
  char v46; // [rsp+60h] [rbp-1A8h] BYREF
  char v47; // [rsp+70h] [rbp-198h]
  char *v48; // [rsp+78h] [rbp-190h]
  __int64 v49; // [rsp+80h] [rbp-188h]
  char v50; // [rsp+88h] [rbp-180h] BYREF
  char v51; // [rsp+98h] [rbp-170h]
  char *v52; // [rsp+A0h] [rbp-168h]
  __int64 v53; // [rsp+A8h] [rbp-160h]
  char v54; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v55; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v56[112]; // [rsp+D0h] [rbp-138h] BYREF
  __m128i *v57; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+148h] [rbp-C0h]
  _BYTE v59[184]; // [rsp+150h] [rbp-B8h] BYREF

  v7 = (_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 144) )
    goto LABEL_3;
  v9 = sub_A0A820(*a2, a3, a4);
  if ( !v10 )
    goto LABEL_3;
  v12 = -1;
  if ( a6 )
    v12 = a5;
  v13 = *(_QWORD *)(*a2 + 144);
  v14 = v9 >> 33;
  v57 = (__m128i *)__PAIR64__(v14, v12);
  v15 = sub_A0DEF0(v12, (int *)&v57 + 1);
  v16 = *(unsigned int *)(*(_QWORD *)(v13 + 8) + 4LL * ((unsigned int)v15 & (*(_DWORD *)v13 - 1)));
  if ( !(_DWORD)v16 )
    goto LABEL_3;
  v17 = (_WORD *)(*(_QWORD *)(v13 + 16) + v16);
  v18 = v17 + 1;
  if ( !*v17 )
    goto LABEL_3;
  v19 = 0;
  while ( 1 )
  {
    v20 = (unsigned __int16)v18[4];
    v21 = v18 + 6;
    if ( v15 == *(_QWORD *)v18 && *((_DWORD *)v18 + 3) == v12 && *((_DWORD *)v18 + 4) == v14 )
      break;
    ++v19;
    v18 = (_WORD *)((char *)v21 + (unsigned int)v20 + (unsigned __int16)v18[5]);
    if ( (unsigned __int16)*v17 == v19 )
      goto LABEL_3;
  }
  v41 = *a2;
  v22 = (_WORD *)((char *)v21 + v20);
  if ( !v22 )
  {
LABEL_3:
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    *(_BYTE *)(a1 + 148) = 0;
    return a1;
  }
  v44 = v22;
  v23 = *v22;
  v44 = v22 + 1;
  v40 = v23;
  v58 = 0x100000000LL;
  v57 = (__m128i *)v59;
  if ( (unsigned __int16)v23 > 1uLL )
    sub_A17A90((__int64)&v57, (unsigned __int16)v23);
  if ( v40 )
  {
    v24 = 0;
    do
    {
      v25.m128i_i64[0] = sub_A09840((__int64 *)&v44);
      v45[0] = &v46;
      v48 = &v50;
      v38 = v25;
      v52 = &v54;
      v45[1] = 0;
      v46 = 0;
      v47 &= 0xF0u;
      v49 = 0;
      v50 = 0;
      v51 &= 0xF8u;
      v53 = 0;
      v54 = 0;
      sub_A0BF10(&v44, (__int64)v45);
      v55 = v38;
      sub_A11C70((__int64)v56, (__int64)v45);
      v26 = (unsigned int)v58;
      v27 = (unsigned int)v58 + 1LL;
      if ( v27 > HIDWORD(v58) )
      {
        if ( v57 > &v55 || &v55 >= &v57[8 * (unsigned __int64)(unsigned int)v58] )
        {
          sub_A17A90((__int64)&v57, v27);
          v28 = v57;
          v26 = (unsigned int)v58;
          v29 = &v55;
        }
        else
        {
          v39 = v57;
          sub_A17A90((__int64)&v57, v27);
          v28 = v57;
          v26 = (unsigned int)v58;
          v29 = (__m128i *)((char *)v57 + (char *)&v55 - (char *)v39);
        }
      }
      else
      {
        v28 = v57;
        v29 = &v55;
      }
      ++v24;
      v30 = &v28[8 * v26];
      *v30 = _mm_loadu_si128(v29);
      sub_A0A1C0(v30 + 1, v29 + 1);
      LODWORD(v58) = v58 + 1;
      sub_A09CE0((__int64)v56);
      sub_A09CE0((__int64)v45);
    }
    while ( v40 != v24 );
  }
  v31 = (unsigned int)v58;
  v32 = _mm_loadu_si128((const __m128i *)(v41 + 8));
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v55 = v32;
  if ( (_DWORD)v31 )
  {
    sub_A17D30(a1, (__int64)&v57);
    v35 = *(_DWORD *)(a1 + 8);
    v31 = (unsigned int)v58;
    *(_BYTE *)(a1 + 148) = 0;
    if ( v35 && v55.m128i_i32[0] | v55.m128i_i32[3] & 0x7FFFFFFF | (v55.m128i_i32[2] | v55.m128i_i32[1]) & 0x7FFFFFFF )
    {
      v36 = (unsigned int)(v35 - 1);
      v7 = *(_DWORD **)a1;
      for ( i = 0; (unsigned __int8)sub_A09E20(&v7[32 * i], (unsigned int *)&v55); ++i )
      {
        if ( i == v36 )
          goto LABEL_24;
      }
      *(_DWORD *)(a1 + 144) = i;
      *(_BYTE *)(a1 + 148) = 1;
      goto LABEL_29;
    }
    v7 = *(_DWORD **)a1;
  }
  else
  {
    *(_BYTE *)(a1 + 148) = 0;
  }
LABEL_24:
  if ( !*v7 && (v7[1] & 0x7FFFFFFF) == 0 && (v7[2] & 0x7FFFFFFF) == 0 && (v7[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 148) = 1;
  }
LABEL_29:
  v33 = v57;
  v34 = &v57[8 * v31];
  if ( v57 != v34 )
  {
    do
    {
      v34 -= 8;
      sub_A09CE0((__int64)v34[1].m128i_i64);
    }
    while ( v33 != v34 );
    v34 = v57;
  }
  if ( v34 != (__m128i *)v59 )
    free(v34);
  return a1;
}
