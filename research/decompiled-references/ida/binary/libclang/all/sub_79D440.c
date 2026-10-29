unsigned __int64 __fastcall sub_79D440(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  int v10; // eax
  const __m128i *v11; // r15
  const __m128i *v12; // rbx
  unsigned __int64 v13; // r14
  size_t v14; // rdx
  size_t v15; // rbx
  __int32 v16; // r12d
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  __int64 *v22; // rbx
  _BYTE *v23; // rdi
  int v24; // eax
  size_t v25; // r15
  _BYTE *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // r12
  void *v29; // rdi
  unsigned __int64 v31; // r14
  void *v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE *v40; // rdi
  _BYTE *v41; // rsi
  size_t v42; // rdx
  _BYTE *v43; // rdi
  _BYTE *v44; // rsi
  unsigned __int64 v45; // r12
  __int64 v46; // r14
  unsigned __int64 v47; // r15
  __int64 v48; // rcx
  unsigned __int64 v49; // r14
  __int64 v50; // rbx
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-68h]
  _BYTE *v54; // [rsp+8h] [rbp-60h]
  unsigned __int64 v55; // [rsp+8h] [rbp-60h]
  unsigned __int64 v56; // [rsp+8h] [rbp-60h]
  unsigned __int32 v57; // [rsp+1Ch] [rbp-4Ch]

  v4 = (__int64 *)sub_79CC40(a2);
  v53 = *v4;
  if ( !*v4 )
  {
    sub_79C6E0(v4, (__int64)a1);
    v53 = *v4;
  }
  v5 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v6 = a1[274];
    a1[284] += 928LL;
    v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[275] >= v7 + 928 && v6 )
    {
      a1[274] = v7 + 928;
      v5 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v5 = sub_792ED0((__int64)(a1 + 274), 928, 3);
    }
    *(_BYTE *)v5 = 0;
    *(_QWORD *)(v5 + 96) = v5 + 112;
    *(_QWORD *)(v5 + 128) = v5 + 144;
    *(_QWORD *)(v5 + 160) = v5 + 176;
    *(_QWORD *)(v5 + 192) = v5 + 208;
    *(_QWORD *)(v5 + 224) = v5 + 240;
    *(_QWORD *)(v5 + 256) = v5 + 272;
    *(_QWORD *)(v5 + 288) = v5 + 304;
    *(_QWORD *)(v5 + 320) = v5 + 336;
    *(_QWORD *)(v5 + 352) = v5 + 368;
    *(_QWORD *)(v5 + 384) = v5 + 400;
    *(_QWORD *)(v5 + 104) = 0;
    *(_BYTE *)(v5 + 112) = 0;
    *(_QWORD *)(v5 + 136) = 0;
    *(_BYTE *)(v5 + 144) = 0;
    *(_QWORD *)(v5 + 168) = 0;
    *(_BYTE *)(v5 + 176) = 0;
    *(_QWORD *)(v5 + 200) = 0;
    *(_BYTE *)(v5 + 208) = 0;
    *(_QWORD *)(v5 + 232) = 0;
    *(_BYTE *)(v5 + 240) = 0;
    *(_QWORD *)(v5 + 264) = 0;
    *(_BYTE *)(v5 + 272) = 0;
    *(_QWORD *)(v5 + 296) = 0;
    *(_BYTE *)(v5 + 304) = 0;
    *(_QWORD *)(v5 + 328) = 0;
    *(_BYTE *)(v5 + 336) = 0;
    *(_QWORD *)(v5 + 360) = 0;
    *(_BYTE *)(v5 + 368) = 0;
    *(_QWORD *)(v5 + 392) = 0;
    *(_BYTE *)(v5 + 400) = 0;
    *(_QWORD *)(v5 + 416) = v5 + 432;
    *(_QWORD *)(v5 + 424) = 0x800000000LL;
    *(_QWORD *)(v5 + 528) = v5 + 544;
    *(_QWORD *)(v5 + 536) = 0x600000000LL;
  }
  v8 = a1[274];
  a1[284] += 64LL;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v9 + 64 && v8 )
    a1[274] = v9 + 64;
  else
    v9 = sub_792ED0((__int64)(a1 + 274), 64, 3);
  *(_OWORD *)(v9 + 8) = 0;
  v10 = *(_DWORD *)(a3 + 16);
  v11 = *(const __m128i **)a3;
  *(_QWORD *)(v9 + 16) = -1;
  *(_DWORD *)(v9 + 24) = v10;
  *(_QWORD *)(v9 + 8) = v5;
  if ( !v11 )
    goto LABEL_43;
  *(_BYTE *)v5 = v11->m128i_i8[0];
  if ( v5 + ~(unsigned __int64)v11 <= 6 )
  {
    *(_BYTE *)(v5 + 1) = v11->m128i_i8[1];
    *(_BYTE *)(v5 + 2) = v11->m128i_i8[2];
    *(_BYTE *)(v5 + 3) = v11->m128i_i8[3];
    *(_BYTE *)(v5 + 4) = v11->m128i_i8[4];
    *(_BYTE *)(v5 + 5) = v11->m128i_i8[5];
    *(_BYTE *)(v5 + 6) = v11->m128i_i8[6];
    *(_BYTE *)(v5 + 7) = v11->m128i_i8[7];
    *(_BYTE *)(v5 + 8) = v11->m128i_i8[8];
  }
  else
  {
    *(_QWORD *)(v5 + 1) = *(__int64 *)((char *)v11->m128i_i64 + 1);
  }
  *(_BYTE *)(v5 + 9) = v11->m128i_i8[9];
  *(_BYTE *)(v5 + 10) = v11->m128i_i8[10];
  if ( (unsigned __int64 *)(v5 + 16) == &v11[1].m128i_u64[1] )
  {
    *(_QWORD *)(v5 + 16) = v11[1].m128i_i64[0];
    *(_QWORD *)(v5 + 24) = v11[1].m128i_i64[1];
    *(_QWORD *)(v5 + 32) = v11[2].m128i_i64[0];
    *(_QWORD *)(v5 + 40) = v11[2].m128i_i64[1];
    *(_QWORD *)(v5 + 48) = v11[3].m128i_i64[0];
    *(_QWORD *)(v5 + 56) = v11[3].m128i_i64[1];
    *(_QWORD *)(v5 + 64) = v11[4].m128i_i64[0];
    *(_QWORD *)(v5 + 72) = v11[4].m128i_i64[1];
    *(_QWORD *)(v5 + 80) = v11[5].m128i_i64[0];
    *(_QWORD *)(v5 + 88) = v11[5].m128i_i64[1];
  }
  else
  {
    *(__m128i *)(v5 + 16) = _mm_loadu_si128(v11 + 1);
    *(__m128i *)(v5 + 32) = _mm_loadu_si128(v11 + 2);
    *(__m128i *)(v5 + 48) = _mm_loadu_si128(v11 + 3);
    *(__m128i *)(v5 + 64) = _mm_loadu_si128(v11 + 4);
    *(__m128i *)(v5 + 80) = _mm_loadu_si128(v11 + 5);
  }
  v12 = v11 + 6;
  v13 = v5 + 96;
  do
  {
    v12 += 2;
    v13 += 32LL;
    std::string::_M_assign();
  }
  while ( v12 != &v11[26] );
  if ( (const __m128i *)(v5 + 416) != v12 )
  {
    v14 = v11[26].m128i_u32[2];
    v15 = *(unsigned int *)(v5 + 424);
    v16 = v11[26].m128i_i32[2];
    if ( v15 >= v14 )
    {
      if ( v11[26].m128i_i32[2] )
      {
        v39 = 3 * v14;
        v40 = *(_BYTE **)(v5 + 416);
        v41 = (_BYTE *)v11[26].m128i_i64[0];
        v42 = 12 * v14;
        if ( v39 == 3 )
        {
          *(_QWORD *)v40 = *(_QWORD *)v41;
          v40[8] = v41[8];
        }
        else
        {
          memmove(v40, v41, v42);
        }
      }
      goto LABEL_24;
    }
    if ( *(_DWORD *)(v5 + 428) < (unsigned int)v14 )
    {
      v15 = 0;
      *(_DWORD *)(v5 + 424) = 0;
      sub_25D6060(v5 + 416, v5 + 432, v14, 12);
      v37 = v11[26].m128i_u32[2];
    }
    else
    {
      if ( !*(_DWORD *)(v5 + 424) )
      {
        v17 = 12 * v14;
LABEL_23:
        memcpy((void *)(v15 + *(_QWORD *)(v5 + 416)), (const void *)(v15 + v11[26].m128i_i64[0]), v17 - v15);
LABEL_24:
        *(_DWORD *)(v5 + 424) = v16;
        goto LABEL_25;
      }
      v43 = *(_BYTE **)(v5 + 416);
      v44 = (_BYTE *)v11[26].m128i_i64[0];
      v15 *= 12LL;
      if ( v15 == 12 )
      {
        *(_QWORD *)v43 = *(_QWORD *)v44;
        v43[8] = v44[8];
      }
      else
      {
        memmove(v43, v44, v15);
      }
      v37 = v11[26].m128i_u32[2];
    }
    v17 = 12 * v37;
    if ( 12 * v37 == v15 )
      goto LABEL_24;
    goto LABEL_23;
  }
LABEL_25:
  if ( (const __m128i *)(v5 + 528) != &v11[33] )
  {
    v18 = *(unsigned int *)(v5 + 536);
    v19 = *(_QWORD *)(v5 + 528);
    v57 = v11[33].m128i_u32[2];
    if ( v18 >= v57 )
    {
      v27 = *(_QWORD *)(v5 + 528);
      if ( v57 )
      {
        v45 = v19 + 24;
        v55 = (unsigned __int64)v57 << 6;
        v46 = v11[33].m128i_i64[0] + 24;
        v47 = v46 + v55;
        do
        {
          v48 = *(_QWORD *)(v46 - 24);
          v46 += 64;
          v45 += 64LL;
          *(_QWORD *)(v45 - 88) = v48;
          *(_BYTE *)(v45 - 80) = *(_BYTE *)(v46 - 80);
          *(_QWORD *)(v45 - 76) = *(_QWORD *)(v46 - 76);
          *(_BYTE *)(v45 - 68) = *(_BYTE *)(v46 - 68);
          std::string::_M_assign();
          *(_BYTE *)(v45 - 32) = *(_BYTE *)(v46 - 32);
        }
        while ( v46 != v47 );
        v27 = *(_QWORD *)(v5 + 528);
        v19 += v55;
        v18 = *(unsigned int *)(v5 + 536);
      }
      v28 = v27 + (v18 << 6);
      while ( v28 != v19 )
      {
        while ( 1 )
        {
          v28 -= 64;
          v29 = *(void **)(v28 + 24);
          if ( v29 == (void *)(v28 + 40) )
            break;
          operator delete(v29, *(_QWORD *)(v28 + 40) + 1LL);
          if ( v28 == v19 )
            goto LABEL_42;
        }
      }
    }
    else
    {
      if ( *(unsigned int *)(v5 + 540) < (unsigned __int64)v57 )
      {
        v31 = v19 + (v18 << 6);
        while ( v31 != v19 )
        {
          while ( 1 )
          {
            v31 -= 64LL;
            v32 = *(void **)(v31 + 24);
            if ( v32 == (void *)(v31 + 40) )
              break;
            operator delete(v32, *(_QWORD *)(v31 + 40) + 1LL);
            if ( v31 == v19 )
              goto LABEL_48;
          }
        }
LABEL_48:
        *(_DWORD *)(v5 + 536) = 0;
        sub_79CA60(v5 + 528, v57);
        v33 = v11[33].m128i_u32[2];
        v34 = 0;
      }
      else
      {
        if ( !*(_DWORD *)(v5 + 536) )
        {
          v20 = v11[33].m128i_i64[0];
          v21 = v20 + ((unsigned __int64)v57 << 6);
LABEL_30:
          v22 = (__int64 *)(v19 + 24);
          while ( 1 )
          {
            v23 = v22 + 2;
            *(v22 - 3) = *(_QWORD *)v20;
            *((_DWORD *)v22 - 4) = *(_DWORD *)(v20 + 8);
            *(__int64 *)((char *)v22 - 12) = *(_QWORD *)(v20 + 12);
            v24 = *(_DWORD *)(v20 + 20);
            *v22 = (__int64)(v22 + 2);
            v25 = *(_QWORD *)(v20 + 32);
            *((_DWORD *)v22 - 1) = v24;
            v26 = *(_BYTE **)(v20 + 24);
            if ( v25 > 0xF )
              break;
            if ( v25 == 1 )
            {
              *((_BYTE *)v22 + 16) = *v26;
            }
            else if ( v25 )
            {
              goto LABEL_57;
            }
LABEL_32:
            v22[1] = v25;
            v20 += 64;
            v22 += 8;
            v23[v25] = 0;
            *((_BYTE *)v22 - 32) = *(_BYTE *)(v20 - 8);
            if ( v21 == v20 )
              goto LABEL_42;
          }
          v54 = *(_BYTE **)(v20 + 24);
          v38 = std::string::_M_create();
          v26 = v54;
          *v22 = v38;
          v23 = (_BYTE *)v38;
          v22[2] = v25;
LABEL_57:
          memcpy(v23, v26, v25);
          v23 = (_BYTE *)*v22;
          goto LABEL_32;
        }
        v49 = v19 + 24;
        v34 = v18 << 6;
        v50 = v11[33].m128i_i64[0] + 24;
        v51 = v50 + (v18 << 6);
        do
        {
          v52 = *(_QWORD *)(v50 - 24);
          v56 = v34;
          v50 += 64;
          v49 += 64LL;
          *(_QWORD *)(v49 - 88) = v52;
          *(_BYTE *)(v49 - 80) = *(_BYTE *)(v50 - 80);
          *(_QWORD *)(v49 - 76) = *(_QWORD *)(v50 - 76);
          *(_BYTE *)(v49 - 68) = *(_BYTE *)(v50 - 68);
          std::string::_M_assign();
          v34 = v56;
          *(_BYTE *)(v49 - 32) = *(_BYTE *)(v50 - 32);
        }
        while ( v51 != v50 );
        v33 = v11[33].m128i_u32[2];
      }
      v35 = v11[33].m128i_i64[0];
      v36 = v33 << 6;
      v19 = v34 + *(_QWORD *)(v5 + 528);
      v21 = v35 + v36;
      v20 = v35 + v34;
      if ( v36 != v34 )
        goto LABEL_30;
    }
LABEL_42:
    *(_DWORD *)(v5 + 536) = v57;
  }
LABEL_43:
  *(_DWORD *)(v9 + 32) = 0;
  *(_QWORD *)v9 = *(_QWORD *)(v53 + 80);
  *(_QWORD *)(v53 + 80) = v9;
  return v9;
}

