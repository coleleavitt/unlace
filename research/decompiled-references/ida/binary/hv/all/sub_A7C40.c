__int64 __fastcall sub_A7C40(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        const __m128i *a5,
        __int64 a6,
        int a7)
{
  const __m128i *v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  unsigned int v15; // r15d
  __int64 v16; // r8
  const __m128i *v17; // r14
  int *v18; // r12
  unsigned int v19; // r10d
  int v20; // eax
  unsigned int v21; // r9d
  unsigned int v22; // r12d
  _BOOL4 v23; // ecx
  int v24; // esi
  unsigned int v25; // edx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // r11
  __m128i *v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // eax
  unsigned int v42; // edi
  __m128i *v43; // rdx
  char *v44; // rsi
  const __m128i *v45; // rcx
  __m128i *v46; // rdx
  __m128i v47; // xmm0
  int v48; // esi
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  unsigned int v52; // ecx
  unsigned __int64 v54; // [rsp+10h] [rbp-78h]
  __int64 v55; // [rsp+18h] [rbp-70h]
  const __m128i *v56; // [rsp+20h] [rbp-68h]
  unsigned int v57; // [rsp+28h] [rbp-60h]
  unsigned int v58; // [rsp+2Ch] [rbp-5Ch]
  _QWORD v59[9]; // [rsp+3Ch] [rbp-4Ch]

  v9 = a5;
  *(_QWORD *)((char *)&v59[1] + 4) = __readfsqword(0x28u);
  v58 = *a2;
  v56 = (const __m128i *)((char *)a5 + a6);
  v11 = *(_QWORD *)(a1 + 3696);
  if ( v11 )
  {
    v57 = *(_DWORD *)(v11 + 8);
  }
  else
  {
    v57 = 0;
    if ( *(_QWORD *)(a1 + 3704) )
      v57 = *(_DWORD *)(a1 + 3712);
  }
  v12 = *(_QWORD *)(a1 + 3200);
  v13 = v58;
  v14 = *(_QWORD *)(v12 + 5616);
  v15 = *a2;
  LODWORD(v59[1]) = *(_DWORD *)(v12 + 5624);
  v59[0] = v14;
  if ( a4 <= v58 )
  {
    v18 = (int *)(a3 + 16LL * v58);
    goto LABEL_34;
  }
  v16 = a3;
  v17 = v56 - 2;
  while ( 1 )
  {
    v18 = (int *)(v16 + 16 * v13);
    v19 = v18[2];
    v20 = *v18;
    if ( !(*v18 | v19) )
      break;
    v21 = v18[1];
    v22 = v20 + 3;
    if ( a7 == 2 )
      goto LABEL_14;
    v23 = v21 == 0;
    if ( v21 && LODWORD(v59[0]) == v20 )
    {
      v22 = 1;
    }
    else
    {
      v24 = HIDWORD(v59[0]);
      if ( HIDWORD(v59[0]) == v20 )
      {
        v42 = v59[0];
        v22 = 2 - v23;
LABEL_44:
        v24 = v59[1];
LABEL_45:
        LODWORD(v59[1]) = v24;
        v59[0] = __PAIR64__(v42, v20);
        goto LABEL_14;
      }
      if ( LODWORD(v59[1]) == v20 )
      {
        v42 = v59[0];
        v48 = HIDWORD(v59[0]);
        v22 = 3 - v23;
LABEL_51:
        LODWORD(v59[1]) = v48;
        v59[0] = __PAIR64__(v42, v20);
        goto LABEL_14;
      }
      if ( v21 || LODWORD(v59[0]) - 1 != v20 )
      {
        if ( v22 > 3 )
        {
          v25 = v59[0];
          LODWORD(v59[0]) = v20;
          *(_QWORD *)((char *)v59 + 4) = __PAIR64__(HIDWORD(v59[0]), v25);
          goto LABEL_14;
        }
        v52 = v20 + v23 + 2;
        if ( v52 )
        {
          v42 = v59[0];
          v20 = LODWORD(v59[0]) - 1;
          if ( v52 == 3 )
            goto LABEL_45;
          v20 = *((_DWORD *)v59 + v52);
          if ( v52 <= 1 )
            goto LABEL_44;
          v48 = HIDWORD(v59[0]);
          goto LABEL_51;
        }
      }
      else
      {
        v22 = 3;
        *(_QWORD *)((char *)v59 + 4) = v59[0];
        LODWORD(v59[0]) = v20;
      }
    }
LABEL_14:
    if ( *(_DWORD *)(a1 + 368) )
    {
      v26 = *((_QWORD *)a2 + 1) + v19 + v21;
      *((_QWORD *)a2 + 1) = v26;
      v27 = (unsigned int)(1 << *(_DWORD *)(a1 + 236));
      if ( v26 <= v27 )
        v27 = v26 + v57;
      if ( *(_DWORD *)(a1 + 252) == 3 || (v28 = 4, *(_QWORD *)(a1 + 424)) )
      {
        v28 = 3;
        if ( v22 > v27 + 3 )
          return -107;
      }
      else if ( v22 > v27 + 3 )
      {
        return -107;
      }
      if ( v19 < v28 )
        return -107;
    }
    if ( (unsigned __int64)(v15 - *a2) >= *(_QWORD *)(a1 + 1008) )
      return -107;
    v29 = v21;
    v30 = v19;
    v31 = *(__m128i **)(a1 + 976);
    v32 = (unsigned __int64)v9->m128i_u64 + v21;
    if ( v32 > (unsigned __int64)v17 )
    {
      v55 = v16;
      v54 = v21;
      sub_A74D0(v31, v9, v32, v17);
      v16 = v55;
      v29 = v54;
LABEL_39:
      *(_QWORD *)(a1 + 976) += v29;
      v33 = *(_QWORD *)(a1 + 960);
      if ( v29 > 0xFFFF )
      {
        *(_DWORD *)(a1 + 1024) = 1;
        *(_DWORD *)(a1 + 1028) = (v33 - *(_QWORD *)(a1 + 952)) >> 3;
      }
      goto LABEL_25;
    }
    *v31 = _mm_loadu_si128(v9);
    if ( v21 > 0x10uLL )
    {
      v43 = *(__m128i **)(a1 + 976);
      v43[1] = _mm_loadu_si128(v9 + 1);
      if ( v21 - 16LL > 16 )
      {
        v44 = &v43->m128i_i8[v21];
        v45 = v9 + 2;
        v46 = v43 + 2;
        do
        {
          v47 = _mm_loadu_si128(v45);
          v46 += 2;
          v45 += 2;
          v46[-2] = v47;
          v46[-1] = _mm_loadu_si128(v45 - 1);
        }
        while ( v44 > (char *)v46 );
      }
      goto LABEL_39;
    }
    *(_QWORD *)(a1 + 976) += v21;
    v33 = *(_QWORD *)(a1 + 960);
LABEL_25:
    *(_WORD *)(v33 + 4) = v21;
    v34 = v30 - 3;
    **(_DWORD **)(a1 + 960) = v22;
    v35 = *(_QWORD *)(a1 + 960);
    if ( v34 > 0xFFFF )
    {
      *(_DWORD *)(a1 + 1024) = 2;
      *(_DWORD *)(a1 + 1028) = (v35 - *(_QWORD *)(a1 + 952)) >> 3;
    }
    *(_WORD *)(v35 + 6) = v34;
    *(_QWORD *)(a1 + 960) += 8LL;
    v9 = (const __m128i *)((char *)v9 + v19 + v21);
    v13 = ++v15;
    if ( v15 >= a4 )
    {
      v36 = v16;
      v18 = (int *)(v16 + 16LL * v15);
      goto LABEL_29;
    }
  }
  v36 = v16;
LABEL_29:
  if ( a7 == 2 && v58 != v15 )
  {
    v37 = v15 - 1;
    v38 = *(_DWORD *)(v36 + 16 * v37);
    if ( v58 + 2 <= (unsigned int)v37 )
    {
      LODWORD(v59[1]) = *(_DWORD *)(v36 + 16LL * (v15 - 3));
      goto LABEL_33;
    }
    if ( v58 + 1 == (_DWORD)v37 )
    {
      LODWORD(v59[1]) = v59[0];
LABEL_33:
      v59[0] = __PAIR64__(*(_DWORD *)(v36 + 16LL * (v15 - 2)), v38);
    }
    else
    {
      v49 = v59[0];
      LODWORD(v59[0]) = *(_DWORD *)(v36 + 16 * v37);
      *(_QWORD *)((char *)v59 + 4) = v49;
    }
  }
LABEL_34:
  v39 = *(_QWORD *)(a1 + 3208);
  *(_QWORD *)(v39 + 5616) = v59[0];
  *(_DWORD *)(v39 + 5624) = v59[1];
  v40 = v18[1];
  if ( v40 )
  {
    v50 = v40;
    memcpy(*(void **)(a1 + 976), v9, v40);
    *(_QWORD *)(a1 + 976) += v50;
    v51 = (unsigned int)v18[1];
    *((_QWORD *)a2 + 1) += v51;
    v9 = (const __m128i *)((char *)v9 + v51);
  }
  if ( v9 != v56 )
    return -107;
  *a2 = v15 + 1;
  return 0;
}

