__int64 *__fastcall sub_3B1380(__int64 *a1, int a2)
{
  char **exception; // r13
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // eax
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // r13
  int v19; // edx
  unsigned int v20; // ebx
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  char v31; // al
  char v32; // al
  unsigned int v34; // r13d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r9
  size_t v40; // rdx
  const __m128i *v41; // r15
  __int64 v42; // r8
  __m128i *v43; // r14
  __int64 v44; // rax
  __m128i *v45; // rdx
  __m128i *v46; // rax
  __m128i v47; // xmm0
  _QWORD *v48; // rax
  __int64 v49; // [rsp+8h] [rbp-80h]
  __int64 v50; // [rsp+8h] [rbp-80h]
  size_t v51; // [rsp+8h] [rbp-80h]
  __int64 v52; // [rsp+8h] [rbp-80h]
  __int64 v53; // [rsp+10h] [rbp-78h]
  __int64 v54[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = sub_186B270(0x290u);
  *(_QWORD *)(v4 + 8) = v4;
  v5 = v4 + 32;
  v6 = v4;
  *(_QWORD *)(v4 + 16) = 0;
  *(_BYTE *)(v4 + 24) = 0;
  sub_186A780(v4 + 32, (unsigned int)(2 * a2));
  *(_QWORD *)(v6 + 576) = 0;
  *(_QWORD *)(v6 + 584) = v5;
  *(_QWORD *)(v6 + 592) = v5;
  *(_QWORD *)(v6 + 600) = v5;
  *(_QWORD *)(v6 + 608) = v5;
  v7 = (_QWORD *)sub_186B270(0x80u);
  v7[1] = 0;
  v7[3] = 0;
  v7[5] = 0;
  v7[7] = 0;
  v7[9] = 0;
  v7[11] = 0;
  v7[13] = 0;
  v7[15] = 0;
  *(_QWORD *)(v6 + 616) = v7;
  *(_QWORD *)(v6 + 624) = 8;
  *(_DWORD *)(v6 + 632) = 0;
  *(_QWORD *)(v6 + 640) = 0;
  *(_QWORD *)(v6 + 648) = 0;
  v8 = sub_1829AC0(v5);
  v9 = sub_186B270(0x60u);
  v10 = *(_DWORD *)(v6 + 628);
  *(_QWORD *)v9 = v5;
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  *(_QWORD *)(v9 + 8) = v8;
  *(_QWORD *)(v9 + 16) = v6;
  *(_QWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 36) = v10;
  *(__m128i *)(v9 + 40) = v11;
  *(__m128i *)(v9 + 56) = v11;
  v12 = (_QWORD *)sub_186B270(0x80u);
  v13 = *(_QWORD **)(v6 + 16);
  ++*(_DWORD *)(v9 + 32);
  v12[1] = 0;
  v12[3] = 0;
  v12[5] = 0;
  v12[7] = 0;
  v12[9] = 0;
  v12[11] = 0;
  v12[13] = 0;
  v12[15] = 0;
  *(_QWORD *)(v9 + 72) = v12;
  *(_QWORD *)(v9 + 80) = 8;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)v6 = v9;
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v34 = (3 * v14 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v35 || v14 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v54, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v13 - 1, v35);
      v37 = v36[1];
      v13 = v36 + 2;
      *v36 = v34;
      *(_QWORD *)(v6 + 16) = v36 + 2;
      LODWORD(v36) = v37;
      v17 = &v13[v37];
      v16 = (_DWORD)v36 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v48 = (_QWORD *)sub_186B270(0x18u);
    v13 = v48 + 1;
    *v48 = 2;
    v16 = 1;
    *(_QWORD *)(v6 + 16) = v13;
    v17 = v13;
  }
  *v17 = v9;
  v18 = *(_QWORD *)v6;
  *((_DWORD *)v13 - 1) = v16;
  v19 = *(_DWORD *)(v6 + 624);
  v20 = 2 * v19;
  if ( 3 * v19 < (unsigned int)(4 * (*(_DWORD *)(v6 + 628) + *(_DWORD *)(v6 + 632))) )
  {
    v51 = 16LL * v20;
    v38 = sub_186B270(v51);
    v39 = v38;
    v40 = v38 + v51;
    if ( v20 )
    {
      if ( (v51 & 0x10) == 0 || (*(_QWORD *)(v38 + 8) = 0, v38 += 16, v40 != v38) )
      {
        do
        {
          *(_QWORD *)(v38 + 8) = 0;
          v38 += 32;
          *(_QWORD *)(v38 - 8) = 0;
        }
        while ( v40 != v38 );
      }
    }
    v41 = *(const __m128i **)(v6 + 616);
    v42 = *(unsigned int *)(v6 + 624);
    v43 = (__m128i *)&v41[v42];
    if ( v41 != &v41[v42] )
    {
      do
      {
        while ( v41->m128i_i64[1] <= 1uLL )
        {
          if ( v43 == ++v41 )
            goto LABEL_44;
        }
        v44 = 16LL * (v41->m128i_i32[0] & (v20 - 1));
        v45 = (__m128i *)(v39 + v44);
        if ( v51 == v44 )
        {
LABEL_48:
          if ( (__m128i *)v39 == v45 )
          {
LABEL_53:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v46 = (__m128i *)v39;
          while ( v46->m128i_i64[1] )
          {
            if ( v45 == ++v46 )
              goto LABEL_53;
          }
        }
        else
        {
          v46 = (__m128i *)(v39 + v44);
          while ( v46->m128i_i64[1] )
          {
            if ( (__m128i *)(v39 + v51) == ++v46 )
              goto LABEL_48;
          }
        }
        v47 = _mm_loadu_si128(v41++);
        *v46 = v47;
      }
      while ( v43 != v41 );
LABEL_44:
      v43 = *(__m128i **)(v6 + 616);
    }
    if ( v43 )
    {
      v52 = v39;
      sub_186B220(v43);
      v39 = v52;
    }
    *(_QWORD *)(v6 + 616) = v39;
    *(_DWORD *)(v6 + 624) = v20;
    *(_DWORD *)(v6 + 632) = 0;
  }
  v21 = sub_182A670(*(_QWORD *)(v6 + 600), *(_QWORD *)(v18 + 8));
  v22 = *(unsigned int *)(v6 + 624);
  v23 = *(_QWORD *)(v6 + 616);
  v24 = v22 - 1;
  v22 *= 16;
  v25 = v23 + v22;
  v26 = 16LL * (v21 & v24);
  v27 = v23 + v26;
  if ( v26 == v22 )
  {
    v28 = 0;
    while ( 1 )
    {
LABEL_15:
      if ( v27 == v23 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v30 = *(_QWORD *)(v23 + 8);
      if ( v30 > 1 )
      {
        if ( v21 == *(_DWORD *)v23 )
        {
          v50 = v28;
          v32 = sub_182A660(*(_QWORD *)(v6 + 608), *(_QWORD *)(v30 + 8), *(_QWORD *)(v18 + 8));
          v28 = v50;
          if ( v32 )
            goto LABEL_20;
        }
      }
      else
      {
        if ( !v30 )
        {
LABEL_23:
          if ( v28 )
            --*(_DWORD *)(v6 + 632);
          else
            v28 = v23;
          *(_QWORD *)(v28 + 8) = v18;
          *(_DWORD *)v28 = v21;
          ++*(_DWORD *)(v6 + 628);
          goto LABEL_26;
        }
        v28 = v23;
      }
      v23 += 16;
    }
  }
  v23 += v26;
  v28 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)(v23 + 8);
      if ( v29 > 1 )
        break;
      if ( !v29 )
        goto LABEL_23;
      v28 = v23;
      v23 += 16;
      if ( v25 == v23 )
      {
LABEL_12:
        v23 = *(_QWORD *)(v6 + 616);
        goto LABEL_15;
      }
    }
    if ( v21 == *(_DWORD *)v23 )
    {
      v53 = v25;
      v49 = v28;
      v31 = sub_182A660(*(_QWORD *)(v6 + 608), *(_QWORD *)(v29 + 8), *(_QWORD *)(v18 + 8));
      v28 = v49;
      v25 = v53;
      if ( v31 )
        break;
    }
    v23 += 16;
    if ( v25 == v23 )
      goto LABEL_12;
  }
LABEL_20:
  *(_QWORD *)(v23 + 8) = v18;
LABEL_26:
  *a1 = v6;
  return a1;
}

