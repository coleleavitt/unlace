__int64 __fastcall sub_153B3A0(
        const __m128i *a1,
        __int64 (__fastcall ***a2)(),
        unsigned int a3,
        void *a4,
        __int64 a5,
        __m128i a6,
        __m128 si128)
{
  int v7; // r12d
  int v8; // r13d
  __int16 v9; // ax
  __int64 v10; // r15
  __int64 v11; // r14
  __int16 v12; // ax
  int v13; // edx
  int v14; // eax
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm2
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  char *v24; // rbx
  __int64 v25; // r10
  __int64 v26; // rax
  signed __int64 v27; // r13
  char *v28; // r8
  __int64 v29; // rsi
  signed __int64 v30; // r14
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char *v33; // r12
  unsigned __int64 v34; // rcx
  char *v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // r12
  unsigned int v43; // edx
  size_t v45; // rax
  char *v46; // r11
  char *v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 j; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // [rsp+8h] [rbp-140h]
  __int64 v52; // [rsp+8h] [rbp-140h]
  size_t n; // [rsp+20h] [rbp-128h]
  char *na; // [rsp+20h] [rbp-128h]
  char *v56; // [rsp+28h] [rbp-120h]
  char *v57; // [rsp+28h] [rbp-120h]
  char *v58; // [rsp+28h] [rbp-120h]
  char *v59; // [rsp+28h] [rbp-120h]
  char *v60; // [rsp+28h] [rbp-120h]
  unsigned __int64 v62; // [rsp+30h] [rbp-118h]
  char *v63; // [rsp+30h] [rbp-118h]
  char *v64; // [rsp+30h] [rbp-118h]
  __int32 v66; // [rsp+44h] [rbp-104h]
  unsigned __int128 v67; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v68; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+70h] [rbp-D8h]
  void *src; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+80h] [rbp-C8h]
  _BYTE v72[16]; // [rsp+88h] [rbp-C0h] BYREF
  __int8 *v73; // [rsp+98h] [rbp-B0h] BYREF
  void *i; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-A0h]
  _BYTE v76[16]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-88h] BYREF
  void *v78[2]; // [rsp+C8h] [rbp-80h]
  __int128 v79; // [rsp+D8h] [rbp-70h] BYREF
  __int8 *v80; // [rsp+E8h] [rbp-60h] BYREF
  void *ptr; // [rsp+F0h] [rbp-58h]
  __int64 v82; // [rsp+F8h] [rbp-50h]
  _BYTE v83[72]; // [rsp+100h] [rbp-48h] BYREF

  src = v72;
  v71 = 0x200000000LL;
  v75 = 0x200000000LL;
  v66 = a1[1].m128i_i32[0];
  v9 = a1[2].m128i_i16[0];
  v69 = 0;
  v73 = &a1[31].m128i_i8[8];
  for ( i = v76; v9 == 452; v9 = a1[2].m128i_i16[0] )
  {
    a6 = 0;
    v77 = 0;
    *(_OWORD *)v78 = 0;
    v79 = 0;
    if ( (unsigned __int8)sub_1529320(a1, (__int64)&v77, (__m128i)0LL) )
    {
      v10 = *((_QWORD *)v78[0] + 1);
      v51 = v77;
      v67 = *(_OWORD *)v78 | __PAIR128__(2, 2);
      v68.m128i_i64[0] = v79 | 2;
      v68.m128i_i64[1] = *((_QWORD *)&v79 + 1) & 0xFFFFFFFFFFFFFFFDLL;
      v11 = sub_15D92D0(v73, 112);
      v12 = sub_F963B0(v10, 0, 7);
      v13 = v8;
      *(_QWORD *)v11 = v10;
      *(_WORD *)(v11 + 32) = v12;
      v14 = v7;
      BYTE1(v13) = BYTE1(v8) & 0xFC;
      BYTE1(v14) = BYTE1(v7) & 0xFC;
      *(_QWORD *)(v11 + 24) = v51;
      v8 = v13;
      v15 = BYTE1(v7) & 0xFC;
      v7 = v14;
      LOBYTE(v14) = *(_BYTE *)(v11 + 35);
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_BYTE *)(v11 + 34) = -9;
      *(_QWORD *)(v11 + 40) = 0;
      *(_BYTE *)(v11 + 35) = (2 * ((v13 & 0x200) != 0)) | v15 & 1 | v14 & 0xFC;
      v16 = *(_QWORD *)(v11 + 56);
      *(_QWORD *)(v11 + 48) = 0;
      *(_QWORD *)(v11 + 56) = v16 & 0x7F800000 | 4;
      v17 = sub_15D7D80(v11);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v67);
      v18 = _mm_load_si128(&v68);
      *(_QWORD *)(v11 + 72) = v17;
      *(__m128 *)(v11 + 80) = si128;
      *(__m128i *)(v11 + 96) = v18;
      v19 = (unsigned int)v75;
      v20 = (unsigned int)v75 + 1LL;
      if ( v20 > HIDWORD(v75) )
      {
        sub_2237220(&i, v76, v20, 8);
        v19 = (unsigned int)v75;
      }
      *((_QWORD *)i + v19) = v11;
      v21 = (unsigned int)v71;
      LODWORD(v75) = v75 + 1;
      v22 = (unsigned int)v71 + 1LL;
      if ( v22 > HIDWORD(v71) )
      {
        sub_2237220(&src, v72, v22, 8);
        v21 = (unsigned int)v71;
      }
      *((_QWORD *)src + v21) = v11;
      LODWORD(v71) = v71 + 1;
    }
  }
  if ( (unsigned __int16)(v9 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_14AB020((__int64)a1, (unsigned int *)a5, a6, si128);
  v77 = 0;
  v80 = &a1[31].m128i_i8[8];
  ptr = v83;
  v78[0] = &v79;
  v78[1] = (void *)0x200000000LL;
  v82 = 0x200000000LL;
  v23 = sub_153A000(a1, a2, a3, a4, a5, (__int64)&v77, a6, si128);
  v24 = (char *)src;
  v25 = a5 + 8;
  v52 = v23;
  v26 = *(unsigned int *)(a5 + 16);
  v27 = 8LL * (unsigned int)v71;
  v28 = (char *)src + v27;
  v29 = v26;
  v30 = 8 * v26;
  if ( 8 * v26 )
  {
    v31 = v27 >> 3;
    v32 = v29 + (v27 >> 3);
    if ( v32 > *(unsigned int *)(a5 + 20) )
    {
      v57 = (char *)src + v27;
      sub_2237220(v25, a5 + 24, v32, 8);
      v29 = *(unsigned int *)(a5 + 16);
      v33 = *(char **)(a5 + 8);
      LODWORD(v31) = v27 >> 3;
      v28 = v57;
      v30 = 8 * v29;
      v25 = a5 + 8;
      v35 = &v33[8 * v29];
      v34 = (8 * v29) >> 3;
      if ( v27 >> 3 > v34 )
        goto LABEL_14;
    }
    else
    {
      v33 = *(char **)(a5 + 8);
      v34 = v30 >> 3;
      v35 = &v33[v30];
      if ( v31 > v30 >> 3 )
      {
LABEL_14:
        v36 = v29 + v31;
        *(_DWORD *)(a5 + 16) = v36;
        if ( v35 != v33 )
        {
          v62 = v34;
          v56 = v28;
          n = (size_t)v35;
          memcpy(&v33[8 * v36 - v30], v33, v30);
          v34 = v62;
          v28 = v56;
          v35 = (char *)n;
        }
        if ( v34 )
        {
          if ( (v33 >= v24 + 16 || v24 >= v33 + 16) && v34 - 1 > 3 )
          {
            v37 = 0;
            v38 = 0;
            v39 = ((v34 - 2) >> 1) + 1;
            do
            {
              ++v38;
              *(__m128i *)&v33[v37] = _mm_loadu_si128((const __m128i *)&v24[v37]);
              v37 += 16;
            }
            while ( v39 > v38 );
            v40 = 2 * v39;
            v41 = 16 * v39;
            v42 = &v33[v41];
            if ( v40 != v34 )
              *(_QWORD *)v42 = *(_QWORD *)&v24[v41];
          }
          else
          {
            for ( j = 0; j != v34; ++j )
              *(_QWORD *)&v33[8 * j] = *(_QWORD *)&v24[8 * j];
          }
          v24 += v30;
        }
        if ( v24 != v28 )
          memcpy(v35, v24, v28 - v24);
        goto LABEL_26;
      }
    }
    v45 = v27;
    v46 = &v33[v30 - v27];
    v47 = v35;
    v48 = v29 + (v27 >> 3);
    if ( v48 > *(unsigned int *)(a5 + 20) )
    {
      v64 = v28;
      v60 = v35;
      sub_2237220(v25, a5 + 24, v48, 8);
      v29 = *(unsigned int *)(a5 + 16);
      v45 = v27;
      v46 = &v33[v30 - v27];
      v47 = (char *)(*(_QWORD *)(a5 + 8) + 8 * v29);
      v28 = v64;
      v35 = v60;
    }
    if ( v35 != v46 )
    {
      v63 = v28;
      v58 = v46;
      memmove(v47, v46, v45);
      v28 = v63;
      v46 = v58;
      LODWORD(v29) = *(_DWORD *)(a5 + 16);
    }
    *(_DWORD *)(a5 + 16) = v29 + (v27 >> 3);
    if ( v46 != v33 )
    {
      v59 = v28;
      memmove(&v33[v27], v33, v30 - v27);
      v28 = v59;
    }
    if ( v24 != v28 )
      memmove(v33, v24, v27);
  }
  else
  {
    v50 = v26 + (v27 >> 3);
    if ( v50 > *(unsigned int *)(a5 + 20) )
    {
      na = (char *)src + v27;
      sub_2237220(v25, a5 + 24, v50, 8);
      v26 = *(unsigned int *)(a5 + 16);
      v28 = na;
    }
    if ( v24 != v28 )
    {
      memcpy((void *)(*(_QWORD *)(a5 + 8) + 8 * v26), v24, v27);
      LODWORD(v26) = *(_DWORD *)(a5 + 16);
    }
    *(_DWORD *)(a5 + 16) = (v27 >> 3) + v26;
  }
LABEL_26:
  LODWORD(v71) = 0;
  sub_15D8C50(a5 + 40, &v73);
  v43 = *(_DWORD *)a5;
  LODWORD(v75) = 0;
  if ( !v43 )
    *(_DWORD *)a5 = v66;
  sub_15DCED0(v80, &v80);
  if ( ptr != v83 )
    free(ptr);
  if ( v78[0] != &v79 )
    free(v78[0]);
  sub_15DCED0(v73, &v73);
  if ( i != v76 )
    free(i);
  if ( src != v72 )
    free(src);
  return v52;
}
