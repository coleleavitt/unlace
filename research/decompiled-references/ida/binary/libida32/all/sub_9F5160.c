__int64 __fastcall sub_9F5160(__int64 a1, __int64 *a2, unsigned __int8 *a3, size_t a4)
{
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  char v7; // dl
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  _WORD *v13; // rcx
  _WORD *v14; // rdx
  int v15; // r9d
  __int64 v16; // r11
  _WORD *v17; // rdi
  unsigned __int16 *v18; // rdi
  unsigned __int64 v19; // rax
  int i; // r13d
  __m128i v21; // rax
  _QWORD *v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __m128i *v25; // rdx
  const __m128i *v26; // rsi
  __m128i *v27; // rdi
  __m128i v28; // xmm1
  __m128i *v29; // r12
  __m128i *v30; // rbp
  unsigned int v31; // eax
  int v32; // r14d
  __int64 v33; // r13
  int v34; // r15d
  unsigned int v35; // [rsp+8h] [rbp-1B0h]
  __m128i v36; // [rsp+10h] [rbp-1A8h]
  __m128i *v37; // [rsp+10h] [rbp-1A8h]
  int v38; // [rsp+2Ch] [rbp-18Ch]
  __int64 v39; // [rsp+48h] [rbp-170h]
  unsigned __int16 *v40; // [rsp+58h] [rbp-160h] BYREF
  void *v41; // [rsp+60h] [rbp-158h] BYREF
  __int64 v42; // [rsp+68h] [rbp-150h]
  _BYTE v43[16]; // [rsp+70h] [rbp-148h] BYREF
  char v44; // [rsp+80h] [rbp-138h]
  void *v45; // [rsp+88h] [rbp-130h]
  __int64 v46; // [rsp+90h] [rbp-128h]
  _BYTE v47[24]; // [rsp+98h] [rbp-120h] BYREF
  __m128i v48; // [rsp+B0h] [rbp-108h] BYREF
  void *v49; // [rsp+C0h] [rbp-F8h] BYREF
  _BYTE v50[16]; // [rsp+D0h] [rbp-E8h] BYREF
  char v51; // [rsp+E0h] [rbp-D8h]
  void *v52; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v53[24]; // [rsp+F8h] [rbp-C0h] BYREF
  __m128i *v54; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+118h] [rbp-A0h]
  _BYTE v56[152]; // [rsp+120h] [rbp-98h] BYREF

  v5 = (_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 160) )
    goto LABEL_3;
  v6 = sub_9E6AE0(*a2, a3, a4);
  if ( !v7 )
    goto LABEL_3;
  v9 = v6 >> 33;
  v10 = *(_QWORD *)(*a2 + 160);
  v39 = *a2;
  v11 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (8 * v9 - 0xAE502812AA7333LL))
         ^ ((0x9DDFEA08EB382D69LL * (8 * v9 - 0xAE502812AA7333LL)) >> 47)))
       ^ ((0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (8 * v9 - 0xAE502812AA7333LL))
          ^ ((0x9DDFEA08EB382D69LL * (8 * v9 - 0xAE502812AA7333LL)) >> 47))) >> 47));
  v12 = *(unsigned int *)(*(_QWORD *)(v10 + 8) + 4LL * ((unsigned int)v11 & (*(_DWORD *)v10 - 1)));
  if ( !(_DWORD)v12 )
    goto LABEL_3;
  v13 = (_WORD *)(v12 + *(_QWORD *)(v10 + 16));
  v14 = v13 + 1;
  if ( !*v13 )
    goto LABEL_3;
  v15 = 0;
  while ( 1 )
  {
    v16 = (unsigned __int16)v14[4];
    v17 = v14 + 6;
    if ( v11 == *(_QWORD *)v14 && (_DWORD)v9 == *((_DWORD *)v14 + 3) )
      break;
    ++v15;
    v14 = (_WORD *)((char *)v17 + (unsigned int)v16 + (unsigned __int16)v14[5]);
    if ( (unsigned __int16)*v13 == v15 )
      goto LABEL_3;
  }
  v18 = (_WORD *)((char *)v17 + v16);
  if ( !v18 )
  {
LABEL_3:
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    *(_BYTE *)(a1 + 108) = 0;
    return a1;
  }
  v40 = v18;
  v19 = *v18;
  v40 = v18 + 1;
  v38 = v19;
  v54 = (__m128i *)v56;
  v55 = 0x100000000LL;
  if ( v19 > 1 )
    sub_9F4B80((__int64)&v54, v19);
  if ( v38 )
  {
    for ( i = 0; i != v38; ++i )
    {
      while ( 1 )
      {
        v21.m128i_i64[0] = sub_9E5B00((__int64 *)&v40);
        v41 = v43;
        v36 = v21;
        v42 = 0;
        v43[0] = 0;
        v44 &= 0xF0u;
        v45 = v47;
        v46 = 0;
        v47[0] = 0;
        sub_9E6EF0(v22, (__int64)&v41);
        v48 = v36;
        v49 = v50;
        sub_9E5DA0(&v49, v41, (__int64)v41 + v42);
        v51 = v44 & 0xF | v51 & 0xF0;
        v52 = v53;
        sub_9E5DA0(&v52, v45, (__int64)v45 + v46);
        v23 = (unsigned int)v55;
        v24 = (unsigned int)v55 + 1LL;
        if ( v24 > HIDWORD(v55) )
        {
          if ( v54 > &v48 || &v48 >= (__m128i *)((char *)v54 + 88 * (unsigned int)v55) )
          {
            sub_9F4B80((__int64)&v54, v24);
            v25 = v54;
            v23 = (unsigned int)v55;
            v26 = &v48;
          }
          else
          {
            v37 = v54;
            sub_9F4B80((__int64)&v54, v24);
            v25 = v54;
            v23 = (unsigned int)v55;
            v26 = (__m128i *)((char *)v54 + (char *)&v48 - (char *)v37);
          }
        }
        else
        {
          v25 = v54;
          v26 = &v48;
        }
        v27 = (__m128i *)((char *)v25 + 88 * v23);
        *v27 = _mm_loadu_si128(v26);
        sub_9E61E0((__int64)v27[1].m128i_i64, (__int64)v26[1].m128i_i64);
        LODWORD(v55) = v55 + 1;
        if ( v52 != v53 )
          operator delete(v52);
        if ( v49 != v50 )
          operator delete(v49);
        if ( v45 != v47 )
          operator delete(v45);
        if ( v41 == v43 )
          break;
        operator delete(v41);
        if ( v38 == ++i )
          goto LABEL_25;
      }
    }
  }
LABEL_25:
  v28 = _mm_loadu_si128((const __m128i *)(v39 + 8));
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v48 = v28;
  v35 = v55;
  if ( (_DWORD)v55 )
  {
    sub_9F4D70(a1, (__int64)&v54);
    v31 = v55;
    v32 = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 108) = 0;
    v35 = v31;
    if ( v32 )
    {
      v5 = *(_DWORD **)a1;
      if ( (v48.m128i_i32[2] | v48.m128i_i32[1]) & 0x7FFFFFFF | v48.m128i_i32[0] | v48.m128i_i32[3] & 0x7FFFFFFF )
      {
        v33 = 0;
        v34 = 0;
        while ( (unsigned __int8)sub_9E60E0(&v5[v33], (unsigned int *)&v48) )
        {
          ++v34;
          v33 += 22;
          if ( v32 == v34 )
            goto LABEL_27;
        }
        *(_DWORD *)(a1 + 104) = v34;
        *(_BYTE *)(a1 + 108) = 1;
        goto LABEL_32;
      }
    }
    else
    {
      v5 = *(_DWORD **)a1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 108) = 0;
  }
LABEL_27:
  if ( !*v5 && (v5[1] & 0x7FFFFFFF) == 0 && (v5[2] & 0x7FFFFFFF) == 0 && (v5[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(a1 + 104) = 0;
    *(_BYTE *)(a1 + 108) = 1;
  }
LABEL_32:
  v29 = v54;
  v30 = (__m128i *)((char *)v54 + 88 * v35);
  if ( v54 != v30 )
  {
    do
    {
      v30 = (__m128i *)((char *)v30 - 88);
      sub_9E5EF0((__int64)v30[1].m128i_i64);
    }
    while ( v29 != v30 );
    v30 = v54;
  }
  if ( v30 != (__m128i *)v56 )
    free(v30);
  return a1;
}

