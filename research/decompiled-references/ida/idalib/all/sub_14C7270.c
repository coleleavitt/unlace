void __fastcall sub_14C7270(void **a1, __int64 a2, __m128i *a3, __m128i *a4, unsigned __int16 a5, char a6)
{
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // rcx
  __int64 v15; // rax
  _BYTE *v16; // rdi
  void **v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __m128i si128; // xmm1
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  __m128i *v30; // r12
  __m128i *v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rax
  size_t v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  void **v39; // rsi
  void **v40; // rax
  char *v41; // rdi
  __int64 v42; // rsi
  __int8 *v43; // rbx
  __int64 v44; // rsi
  __int8 *v45; // rbx
  __int64 v46; // rax
  void **p_src; // [rsp+8h] [rbp-110h] BYREF
  _QWORD *v48; // [rsp+10h] [rbp-108h]
  int v49; // [rsp+1Ch] [rbp-FCh]
  char *v50; // [rsp+20h] [rbp-F8h]
  __int64 v51; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  size_t n; // [rsp+38h] [rbp-E0h]
  _QWORD v54[2]; // [rsp+40h] [rbp-D8h] BYREF
  int v55; // [rsp+50h] [rbp-C8h] BYREF
  int v56; // [rsp+54h] [rbp-C4h]
  char v57; // [rsp+58h] [rbp-C0h]
  __int64 v58; // [rsp+5Ch] [rbp-BCh]
  char v59; // [rsp+64h] [rbp-B4h]
  void *dest; // [rsp+68h] [rbp-B0h]
  __m128 v61; // [rsp+70h] [rbp-A8h] BYREF
  char v62; // [rsp+88h] [rbp-90h]
  unsigned __int8 *v63; // [rsp+90h] [rbp-88h] BYREF
  __int64 v64; // [rsp+98h] [rbp-80h]

  p_src = a1;
  if ( !a6 )
    sub_14634E0((__int64 *)a2, a3->m128i_i32);
  sub_14634E0((__int64 *)a2, a4->m128i_i32);
  v11 = a4->m128i_i32[0];
  LODWORD(v48) = a3->m128i_i32[0];
  v49 = v11;
  sub_1564820(&v63, p_src, (unsigned int)v48, 1734);
  if ( a5 == 132 )
  {
    v12 = 3;
  }
  else if ( a5 <= 0x84u )
  {
    if ( !a5 )
    {
      v13 = v63;
      v12 = 0;
      if ( v63 )
        goto LABEL_9;
      goto LABEL_26;
    }
    if ( a5 != 130 )
    {
LABEL_29:
      v12 = 4;
      goto LABEL_8;
    }
    v12 = 2;
  }
  else
  {
    if ( a5 != 145 )
    {
      if ( a5 == 354 )
      {
        v12 = 1;
        goto LABEL_8;
      }
      goto LABEL_29;
    }
    v12 = 5;
  }
LABEL_8:
  v13 = v63;
  if ( v63 )
    goto LABEL_9;
LABEL_26:
  v21 = v64;
  v22 = *(_DWORD *)(v64 + 14976);
  if ( v22 )
  {
    v37 = (unsigned int)(v22 - 1);
    *(_DWORD *)(v64 + 14976) = v37;
    v13 = *(unsigned __int8 **)(v21 + 8 * v37 + 14848);
    v38 = *((unsigned int *)v13 + 134);
    v39 = *((void ***)v13 + 66);
    *v13 = 0;
    *((_DWORD *)v13 + 106) = 0;
    v40 = &v39[8 * v38];
    while ( v39 != v40 )
    {
      while ( 1 )
      {
        v40 -= 8;
        v41 = (char *)v40[3];
        if ( v41 == (char *)(v40 + 5) )
          break;
        v51 = v12;
        v50 = (char *)v40;
        p_src = v39;
        operator delete(v41);
        v40 = (void **)v50;
        v12 = v51;
        if ( v39 == (void **)v50 )
          goto LABEL_55;
      }
    }
LABEL_55:
    *((_DWORD *)v13 + 134) = 0;
  }
  else
  {
    p_src = (void **)v12;
    v13 = (unsigned __int8 *)operator new(0x3A0u);
    *v13 = 0;
    *((_QWORD *)v13 + 12) = v13 + 112;
    *((_QWORD *)v13 + 16) = v13 + 144;
    *((_QWORD *)v13 + 20) = v13 + 176;
    *((_QWORD *)v13 + 24) = v13 + 208;
    *((_QWORD *)v13 + 28) = v13 + 240;
    *((_QWORD *)v13 + 32) = v13 + 272;
    *((_QWORD *)v13 + 36) = v13 + 304;
    *((_QWORD *)v13 + 40) = v13 + 336;
    *((_QWORD *)v13 + 44) = v13 + 368;
    *((_QWORD *)v13 + 48) = v13 + 400;
    *((_QWORD *)v13 + 52) = v13 + 432;
    *((_QWORD *)v13 + 13) = 0;
    v13[112] = 0;
    *((_QWORD *)v13 + 17) = 0;
    v13[144] = 0;
    *((_QWORD *)v13 + 21) = 0;
    v13[176] = 0;
    *((_QWORD *)v13 + 25) = 0;
    v13[208] = 0;
    *((_QWORD *)v13 + 29) = 0;
    v13[240] = 0;
    *((_QWORD *)v13 + 33) = 0;
    v13[272] = 0;
    *((_QWORD *)v13 + 37) = 0;
    v13[304] = 0;
    *((_QWORD *)v13 + 41) = 0;
    v13[336] = 0;
    *((_QWORD *)v13 + 45) = 0;
    v13[368] = 0;
    *((_QWORD *)v13 + 49) = 0;
    v13[400] = 0;
    *((_QWORD *)v13 + 53) = 0x800000000LL;
    v12 = (__int64)p_src;
    *((_QWORD *)v13 + 66) = v13 + 544;
    *((_QWORD *)v13 + 67) = 0x600000000LL;
  }
  v63 = v13;
LABEL_9:
  v13[*v13 + 1] = 2;
  v14 = v63;
  v15 = *v63;
  v50 = &v61.m128_i8[8];
  *v63 = v15 + 1;
  *(_QWORD *)&v14[8 * v15 + 16] = v12;
  dest = &v61.m128_u16[4];
  v55 = (int)v48;
  p_src = &src;
  v56 = v49;
  src = v54;
  v48 = v54;
  v58 = 0;
  v59 = 0;
  v61.m128_u64[0] = 0;
  v61.m128_i8[8] = 0;
  v62 = 0;
  v57 = 1;
  sub_14C5380(&src, "< ::", (__int64)"");
  v16 = dest;
  v17 = &src;
  if ( src == v54 )
  {
    v36 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *(_BYTE *)dest = v54[0];
        v36 = n;
        v16 = dest;
      }
      else
      {
        memcpy(dest, src, n);
        v36 = n;
        v16 = dest;
        v17 = p_src;
      }
    }
    v61.m128_u64[0] = v36;
    v16[v36] = 0;
    v16 = src;
  }
  else
  {
    if ( dest == v50 )
    {
      p_src = (void **)v54[0];
      dest = src;
      v61 = _mm_loadh_ps((const double *)&p_src);
    }
    else
    {
      p_src = (void **)v54[0];
      v18 = v61.m128_u64[1];
      dest = src;
      v61 = _mm_loadh_ps((const double *)&p_src);
      if ( v16 )
      {
        src = v16;
        v54[0] = v18;
        goto LABEL_13;
      }
    }
    v16 = v54;
    src = v54;
  }
LABEL_13:
  n = 0;
  *v16 = 0;
  if ( src != v17 + 2 )
    operator delete(src);
  if ( v55 && v56 )
    sub_14C6E00((__int64 *)&v63, (unsigned __int64)&v55);
  if ( dest != &v61.m128_u16[4] )
    operator delete(dest);
  sub_AEA040((__int64)&v63);
  --a4->m128i_i32[0];
  a4[1].m128i_i16[0] = 72;
  a4->m128i_i32[1] = 2;
  a3[1].m128i_i16[0] = 47;
  a3->m128i_i32[1] = 1;
  if ( *(_DWORD *)(a2 + 1012) )
  {
    v19 = operator new[](0x18u);
    si128 = _mm_load_si128(a4);
    *(_DWORD *)(v19 + 16) = a4[1].m128i_i32[0];
    *(__m128i *)v19 = si128;
    sub_14368B0(a2, (char *)v19, 1, 1u, 1u, 1u);
    goto LABEL_22;
  }
  sub_1417F90((_QWORD *)a2);
  v23 = *(unsigned int *)(a2 + 2912);
  v24 = a2 + 2904;
  v25 = *(_QWORD *)(a2 + 2904);
  v26 = 3 * v23;
  v27 = v23 + 1;
  v28 = 24LL * *(_QWORD *)(a2 + 2944);
  v29 = 8 * v26;
  v30 = (__m128i *)(v25 + v28);
  v31 = (__m128i *)(v25 + v29);
  if ( v25 + v28 == v25 + v29 )
  {
    if ( v27 > *(unsigned int *)(a2 + 2916) )
    {
      v44 = a2 + 2920;
      if ( v25 > (unsigned __int64)a4 || v31 <= a4 )
      {
        sub_2237220(v24, v44, v27, 24);
        v31 = (__m128i *)(*(_QWORD *)(a2 + 2904) + 24LL * *(unsigned int *)(a2 + 2912));
      }
      else
      {
        v45 = &a4->m128i_i8[-v25];
        sub_2237220(v24, v44, v27, 24);
        v46 = *(_QWORD *)(a2 + 2904);
        a4 = (__m128i *)&v45[v46];
        v31 = (__m128i *)(v46 + 24LL * *(unsigned int *)(a2 + 2912));
      }
    }
    *v31 = _mm_loadu_si128(a4);
    v31[1].m128i_i64[0] = a4[1].m128i_i64[0];
    ++*(_DWORD *)(a2 + 2912);
LABEL_22:
    if ( a6 )
      return;
LABEL_42:
    sub_1479990(a2, a3, 1u);
    return;
  }
  if ( v27 > *(unsigned int *)(a2 + 2916) )
  {
    v42 = a2 + 2920;
    if ( v25 > (unsigned __int64)a4 || v31 <= a4 )
    {
      sub_2237220(v24, v42, v27, 24);
      v25 = *(_QWORD *)(a2 + 2904);
    }
    else
    {
      v43 = &a4->m128i_i8[-v25];
      sub_2237220(v24, v42, v27, 24);
      v25 = *(_QWORD *)(a2 + 2904);
      a4 = (__m128i *)&v43[v25];
    }
    v30 = (__m128i *)(v25 + v28);
    v29 = 24LL * *(unsigned int *)(a2 + 2912);
    v31 = (__m128i *)(v25 + v29);
  }
  *v31 = _mm_loadu_si128((const __m128i *)(v25 + v29 - 24));
  v31[1].m128i_i64[0] = *(_QWORD *)(v25 + v29 - 8);
  v32 = *(_QWORD *)(a2 + 2904);
  v33 = *(_DWORD *)(a2 + 2912);
  v34 = 24LL * v33;
  if ( v30 != (__m128i *)(v32 + v34 - 24) )
  {
    memmove(&v30[1].m128i_u64[1], v30, v32 + v34 - 24 - (_QWORD)v30);
    v33 = *(_DWORD *)(a2 + 2912);
    v32 = *(_QWORD *)(a2 + 2904);
  }
  v35 = v33 + 1;
  *(_DWORD *)(a2 + 2912) = v35;
  if ( v30 <= a4 && (unsigned __int64)a4 < v32 + 24 * v35 )
    a4 = (__m128i *)((char *)a4 + 24);
  *v30 = _mm_loadu_si128(a4);
  v30[1].m128i_i32[0] = a4[1].m128i_i32[0];
  if ( !a6 )
    goto LABEL_42;
}
