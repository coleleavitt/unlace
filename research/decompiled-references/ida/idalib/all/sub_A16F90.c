__int64 __fastcall sub_A16F90(__int64 a1, __int64 *a2, int a3, unsigned __int8 *a4, size_t a5)
{
  unsigned int *v6; // r12
  unsigned __int64 v9; // rax
  char v10; // dl
  unsigned int v12; // r14d
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _WORD *v16; // rcx
  _WORD *v17; // rdx
  int v18; // edi
  __int64 v19; // r10
  _WORD *v20; // rsi
  unsigned __int16 *v21; // rsi
  int v22; // edx
  int v23; // r13d
  __m128i v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __m128i *v27; // rax
  const __m128i *v28; // rsi
  __m128i *v29; // rdi
  __int64 v30; // rbp
  __m128i v31; // xmm1
  __m128i *v32; // r12
  __m128i *v33; // rbp
  int v34; // ecx
  __int64 v35; // r13
  __int64 v36; // r14
  char i; // al
  __m128i v38; // [rsp+0h] [rbp-1F8h]
  __m128i *v39; // [rsp+0h] [rbp-1F8h]
  int v40; // [rsp+1Ch] [rbp-1DCh]
  __int64 v41; // [rsp+28h] [rbp-1D0h]
  unsigned __int16 *v42; // [rsp+38h] [rbp-1C0h] BYREF
  _QWORD v43[2]; // [rsp+40h] [rbp-1B8h] BYREF
  char v44; // [rsp+50h] [rbp-1A8h] BYREF
  char v45; // [rsp+60h] [rbp-198h]
  char *v46; // [rsp+68h] [rbp-190h]
  __int64 v47; // [rsp+70h] [rbp-188h]
  char v48; // [rsp+78h] [rbp-180h] BYREF
  char v49; // [rsp+88h] [rbp-170h]
  char *v50; // [rsp+90h] [rbp-168h]
  __int64 v51; // [rsp+98h] [rbp-160h]
  char v52; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v53; // [rsp+B0h] [rbp-148h] BYREF
  _BYTE v54[112]; // [rsp+C0h] [rbp-138h] BYREF
  __m128i *v55; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+138h] [rbp-C0h]
  _BYTE v57[184]; // [rsp+140h] [rbp-B8h] BYREF

  v6 = (unsigned int *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 112) )
    goto LABEL_3;
  v9 = sub_A0A820(*a2, a4, a5);
  if ( !v10 )
    goto LABEL_3;
  v12 = v9 >> 33;
  v13 = *(_QWORD *)(*a2 + 112);
  v55 = (__m128i *)__PAIR64__(v12, a3);
  v14 = sub_A0DEF0(a3, (int *)&v55 + 1);
  v15 = *(unsigned int *)(*(_QWORD *)(v13 + 8) + 4LL * ((unsigned int)v14 & (*(_DWORD *)v13 - 1)));
  if ( !(_DWORD)v15 )
    goto LABEL_3;
  v16 = (_WORD *)(*(_QWORD *)(v13 + 16) + v15);
  v17 = v16 + 1;
  if ( !*v16 )
    goto LABEL_3;
  v18 = 0;
  while ( 1 )
  {
    v19 = (unsigned __int16)v17[4];
    v20 = v17 + 6;
    if ( v14 == *(_QWORD *)v17 && *((_DWORD *)v17 + 3) == a3 && *((_DWORD *)v17 + 4) == v12 )
      break;
    ++v18;
    v17 = (_WORD *)((char *)v20 + (unsigned int)v19 + (unsigned __int16)v17[5]);
    if ( (unsigned __int16)*v16 == v18 )
      goto LABEL_3;
  }
  v41 = *a2;
  v21 = (_WORD *)((char *)v20 + v19);
  if ( !v21 )
  {
LABEL_3:
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    *(_BYTE *)(a1 + 148) = 0;
    return a1;
  }
  v42 = v21;
  v22 = *v21;
  v42 = v21 + 1;
  v40 = v22;
  v55 = (__m128i *)v57;
  v56 = 0x100000000LL;
  if ( (unsigned __int16)v22 > 1uLL )
    sub_A16940((__int64)&v55, (unsigned __int16)v22);
  if ( v40 )
  {
    v23 = 0;
    do
    {
      v24.m128i_i64[0] = sub_A09840((__int64 *)&v42);
      v43[0] = &v44;
      v46 = &v48;
      v38 = v24;
      v50 = &v52;
      v43[1] = 0;
      v44 = 0;
      v45 &= 0xF0u;
      v47 = 0;
      v48 = 0;
      v49 &= 0xF8u;
      v51 = 0;
      v52 = 0;
      sub_A0BF10(&v42, (__int64)v43);
      v53 = v38;
      sub_A11C70((__int64)v54, (__int64)v43);
      v25 = (unsigned int)v56;
      v26 = (unsigned int)v56 + 1LL;
      if ( v26 > HIDWORD(v56) )
      {
        if ( v55 > &v53 || &v53 >= &v55[8 * (unsigned __int64)(unsigned int)v56] )
        {
          sub_A16940((__int64)&v55, v26);
          v27 = v55;
          v28 = &v53;
          v25 = (unsigned int)v56;
        }
        else
        {
          v39 = v55;
          sub_A16940((__int64)&v55, v26);
          v27 = v55;
          v25 = (unsigned int)v56;
          v28 = (__m128i *)((char *)v55 + (char *)&v53 - (char *)v39);
        }
      }
      else
      {
        v27 = v55;
        v28 = &v53;
      }
      ++v23;
      v29 = &v27[8 * v25];
      *v29 = _mm_loadu_si128(v28);
      sub_A0A1C0(v29 + 1, v28 + 1);
      LODWORD(v56) = v56 + 1;
      sub_A09CE0((__int64)v54);
      sub_A09CE0((__int64)v43);
    }
    while ( v40 != v23 );
  }
  v30 = (unsigned int)v56;
  v31 = _mm_loadu_si128((const __m128i *)(v41 + 8));
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v53 = v31;
  if ( (_DWORD)v30 )
  {
    sub_A16BE0(a1, (__int64)&v55);
    v34 = *(_DWORD *)(a1 + 8);
    v30 = (unsigned int)v56;
    *(_BYTE *)(a1 + 148) = 0;
    if ( v34 && v53.m128i_i32[0] | v53.m128i_i32[3] & 0x7FFFFFFF | (v53.m128i_i32[2] | v53.m128i_i32[1]) & 0x7FFFFFFF )
    {
      v35 = (unsigned int)(v34 - 1);
      v6 = *(unsigned int **)a1;
      v36 = 0;
      for ( i = sub_A09E20(*(unsigned int **)a1, (unsigned int *)&v53);
            i;
            i = sub_A09E20(&v6[32 * v36], (unsigned int *)&v53) )
      {
        if ( v36 == v35 )
          goto LABEL_22;
        ++v36;
      }
      *(_DWORD *)(a1 + 144) = v36;
      *(_BYTE *)(a1 + 148) = 1;
      goto LABEL_27;
    }
    v6 = *(unsigned int **)a1;
  }
  else
  {
    *(_BYTE *)(a1 + 148) = 0;
  }
LABEL_22:
  if ( !*v6 && (v6[1] & 0x7FFFFFFF) == 0 && (v6[2] & 0x7FFFFFFF) == 0 && (v6[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 148) = 1;
  }
LABEL_27:
  v32 = v55;
  v33 = &v55[8 * v30];
  if ( v55 != v33 )
  {
    do
    {
      v33 -= 8;
      sub_A09CE0((__int64)v33[1].m128i_i64);
    }
    while ( v32 != v33 );
    v33 = v55;
  }
  if ( v33 != (__m128i *)v57 )
    free(v33);
  return a1;
}
