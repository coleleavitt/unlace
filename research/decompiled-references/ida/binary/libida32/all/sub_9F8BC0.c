__int64 __fastcall sub_9F8BC0(__int64 a1, __int64 *a2, unsigned __int8 *a3, size_t a4, int a5, char a6)
{
  _DWORD *v7; // r14
  unsigned __int64 v9; // rax
  char v10; // dl
  int v12; // r12d
  __int64 v13; // r15
  unsigned int v14; // r13d
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rdx
  _WORD *v18; // rcx
  int v19; // edi
  _WORD *v20; // rsi
  __int64 v21; // r9
  unsigned __int16 *v22; // rsi
  int v23; // ebx
  int v24; // r13d
  __m128i v25; // rax
  unsigned __int64 v26; // rsi
  const __m128i *v27; // rdx
  unsigned __int64 v28; // r15
  const __m128i *v29; // rsi
  const __m128i *v30; // rsi
  unsigned __int16 *v31; // rcx
  char v32; // cl
  __m128i v33; // xmm3
  __int64 v34; // r12
  __m128i *v35; // rbx
  unsigned int v36; // eax
  int v37; // r12d
  __int64 v38; // r13
  int v39; // r15d
  unsigned int v40; // [rsp+8h] [rbp-2A0h]
  const __m128i *v41; // [rsp+10h] [rbp-298h]
  __m128i v42; // [rsp+10h] [rbp-298h]
  __int64 v43; // [rsp+10h] [rbp-298h]
  __int64 v44; // [rsp+38h] [rbp-270h]
  unsigned __int16 *v47; // [rsp+58h] [rbp-250h] BYREF
  char *v48; // [rsp+60h] [rbp-248h] BYREF
  __int64 v49; // [rsp+68h] [rbp-240h]
  char v50; // [rsp+70h] [rbp-238h] BYREF
  char v51; // [rsp+80h] [rbp-228h]
  char *v52; // [rsp+88h] [rbp-220h]
  __int64 v53; // [rsp+90h] [rbp-218h]
  char v54; // [rsp+98h] [rbp-210h] BYREF
  _BYTE *v55; // [rsp+A8h] [rbp-200h]
  __int64 v56; // [rsp+B0h] [rbp-1F8h]
  char v57; // [rsp+C8h] [rbp-1E0h]
  _BYTE *v58; // [rsp+D0h] [rbp-1D8h]
  __int64 v59; // [rsp+D8h] [rbp-1D0h]
  char v60; // [rsp+F0h] [rbp-1B8h]
  __int64 v61; // [rsp+F8h] [rbp-1B0h]
  __m128i v62; // [rsp+100h] [rbp-1A8h] BYREF
  _QWORD v63[2]; // [rsp+110h] [rbp-198h] BYREF
  __int64 v64; // [rsp+120h] [rbp-188h] BYREF
  char v65; // [rsp+130h] [rbp-178h]
  __int64 *v66; // [rsp+138h] [rbp-170h] BYREF
  __int64 v67; // [rsp+148h] [rbp-160h] BYREF
  __int64 *v68; // [rsp+158h] [rbp-150h] BYREF
  __int64 v69; // [rsp+168h] [rbp-140h] BYREF
  char v70; // [rsp+178h] [rbp-130h]
  __int64 *v71; // [rsp+180h] [rbp-128h] BYREF
  __int64 v72; // [rsp+190h] [rbp-118h] BYREF
  char v73; // [rsp+1A0h] [rbp-108h]
  __int64 v74; // [rsp+1A8h] [rbp-100h]
  __m128i *v75; // [rsp+1B0h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+1B8h] [rbp-F0h]
  _BYTE v77[232]; // [rsp+1C0h] [rbp-E8h] BYREF

  v7 = (_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 176) )
    goto LABEL_3;
  v9 = sub_9E6AE0(*a2, a3, a4);
  if ( !v10 )
    goto LABEL_3;
  v12 = -1;
  if ( a6 )
    v12 = a5;
  v13 = *(_QWORD *)(*a2 + 176);
  v14 = v9 >> 33;
  v75 = (__m128i *)__PAIR64__(v14, v12);
  v15 = sub_9EA1B0(v12, (int *)&v75 + 1);
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
    v20 = v18 + 6;
    v21 = (unsigned __int16)v18[4];
    if ( v15 == *(_QWORD *)v18 && v14 == *((_QWORD *)v18 + 2) >> 33 && *((_DWORD *)v18 + 3) == v12 )
      break;
    ++v19;
    v18 = (_WORD *)((char *)v20 + (unsigned int)v21 + (unsigned __int16)v18[5]);
    if ( (unsigned __int16)*v17 == v19 )
      goto LABEL_3;
  }
  v44 = *a2;
  v22 = (_WORD *)((char *)v20 + v21);
  if ( !v22 )
  {
LABEL_3:
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    *(_BYTE *)(a1 + 196) = 0;
    return a1;
  }
  v47 = v22;
  v23 = *v22;
  v47 = v22 + 1;
  v75 = (__m128i *)v77;
  v76 = 0x100000000LL;
  if ( (unsigned __int16)v23 > 1uLL )
    sub_9F7080((__int64 *)&v75, (unsigned __int16)v23);
  if ( v23 )
  {
    v24 = 0;
    for ( v25.m128i_i64[0] = sub_9E5B00((__int64 *)&v47); ; v25.m128i_i64[0] = sub_9E5B00((__int64 *)&v47) )
    {
      v49 = 0;
      v48 = &v50;
      v52 = &v54;
      v31 = v47;
      v50 = 0;
      v51 &= 0xF0u;
      v53 = 0;
      v54 = 0;
      v57 = 0;
      v60 = 0;
      BYTE4(v61) = 0;
      v47 = (unsigned __int16 *)((char *)v47 + 1);
      v32 = *(_BYTE *)v31;
      if ( v32 )
      {
        BYTE4(v61) = 1;
        LODWORD(v61) = (v32 & 3) - 1;
      }
      v42 = v25;
      sub_9E8510(&v47, (__int64)&v48);
      v62 = v42;
      v63[0] = &v64;
      sub_9E5DA0(v63, v48, (__int64)&v48[v49]);
      v65 = v51 & 0xF | v65 & 0xF0;
      v66 = &v67;
      sub_9E5DA0(&v66, v52, (__int64)&v52[v53]);
      v70 = 0;
      if ( v57 )
      {
        v68 = &v69;
        sub_9E5DA0(&v68, v55, (__int64)&v55[v56]);
        v70 = 1;
      }
      v73 = 0;
      if ( v60 )
      {
        v71 = &v72;
        sub_9E5DA0(&v71, v58, (__int64)&v58[v59]);
        v73 = 1;
      }
      v74 = v61;
      v26 = (unsigned int)v76 + 1LL;
      v27 = &v62;
      v28 = (unsigned __int64)&v75[11 * (unsigned int)v76];
      if ( v26 > HIDWORD(v76) )
      {
        if ( v75 > &v62 || v28 <= (unsigned __int64)&v62 )
        {
          sub_9F7080((__int64 *)&v75, v26);
          v27 = &v62;
          v28 = (unsigned __int64)&v75[11 * (unsigned int)v76];
        }
        else
        {
          v43 = (__int64)v75;
          sub_9F7080((__int64 *)&v75, v26);
          v27 = (__m128i *)((char *)&v62 + (_QWORD)v75 - v43);
          v28 = (unsigned __int64)&v75[11 * (unsigned int)v76];
        }
      }
      v41 = v27;
      *(__m128i *)v28 = _mm_loadu_si128(v27);
      sub_9E61E0(v28 + 16, (__int64)v27[1].m128i_i64);
      *(_BYTE *)(v28 + 120) = 0;
      if ( v41[7].m128i_i8[8] )
      {
        *(_QWORD *)(v28 + 88) = v28 + 104;
        v29 = (const __m128i *)v41[5].m128i_i64[1];
        if ( v29 == (const __m128i *)&v41[6].m128i_u64[1] )
        {
          *(__m128i *)(v28 + 104) = _mm_loadu_si128((const __m128i *)((char *)v41 + 104));
        }
        else
        {
          *(_QWORD *)(v28 + 88) = v29;
          *(_QWORD *)(v28 + 104) = v41[6].m128i_i64[1];
        }
        *(_QWORD *)(v28 + 96) = v41[6].m128i_i64[0];
        v41[5].m128i_i64[1] = (__int64)&v41[6].m128i_i64[1];
        v41[6].m128i_i64[0] = 0;
        v41[6].m128i_i8[8] = 0;
        *(_BYTE *)(v28 + 120) = 1;
      }
      *(_BYTE *)(v28 + 160) = 0;
      if ( v41[10].m128i_i8[0] )
      {
        *(_QWORD *)(v28 + 128) = v28 + 144;
        v30 = (const __m128i *)v41[8].m128i_i64[0];
        if ( v30 == &v41[9] )
        {
          *(__m128i *)(v28 + 144) = _mm_loadu_si128(v41 + 9);
        }
        else
        {
          *(_QWORD *)(v28 + 128) = v30;
          *(_QWORD *)(v28 + 144) = v41[9].m128i_i64[0];
        }
        *(_QWORD *)(v28 + 136) = v41[8].m128i_i64[1];
        v41[8].m128i_i64[0] = (__int64)v41[9].m128i_i64;
        v41[8].m128i_i64[1] = 0;
        v41[9].m128i_i8[0] = 0;
        *(_BYTE *)(v28 + 160) = 1;
      }
      ++v24;
      *(_QWORD *)(v28 + 168) = v41[10].m128i_i64[1];
      LODWORD(v76) = v76 + 1;
      sub_9E5F30((__int64)v63);
      sub_9E5F30((__int64)&v48);
      if ( v23 == v24 )
        break;
    }
  }
  v33 = _mm_loadu_si128((const __m128i *)(v44 + 8));
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v62 = v33;
  v40 = v76;
  if ( (_DWORD)v76 )
  {
    sub_9F8800(a1, (__int64)&v75);
    v36 = v76;
    v37 = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 196) = 0;
    v40 = v36;
    if ( v37 )
    {
      v7 = *(_DWORD **)a1;
      if ( (v62.m128i_i32[2] | v62.m128i_i32[1]) & 0x7FFFFFFF | v62.m128i_i32[0] | v62.m128i_i32[3] & 0x7FFFFFFF )
      {
        v38 = 0;
        v39 = 0;
        while ( (unsigned __int8)sub_9E60E0(&v7[v38], (unsigned int *)&v62) )
        {
          ++v39;
          v38 += 44;
          if ( v37 == v39 )
            goto LABEL_40;
        }
        *(_DWORD *)(a1 + 192) = v39;
        *(_BYTE *)(a1 + 196) = 1;
        goto LABEL_45;
      }
    }
    else
    {
      v7 = *(_DWORD **)a1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 196) = 0;
  }
LABEL_40:
  if ( !*v7 && (v7[1] & 0x7FFFFFFF) == 0 && (v7[2] & 0x7FFFFFFF) == 0 && (v7[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(a1 + 192) = 0;
    *(_BYTE *)(a1 + 196) = 1;
  }
LABEL_45:
  v34 = (__int64)v75;
  v35 = &v75[11 * v40];
  if ( v75 != v35 )
  {
    do
    {
      v35 -= 11;
      sub_9E5F30((__int64)v35[1].m128i_i64);
    }
    while ( (__m128i *)v34 != v35 );
    v35 = v75;
  }
  if ( v35 != (__m128i *)v77 )
    free(v35);
  return a1;
}

