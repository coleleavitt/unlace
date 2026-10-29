__int64 __fastcall sub_C6FBE0(_QWORD *a1, __int64 a2, int a3, int a4, _BYTE *a5, int a6)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbp
  unsigned int *v12; // rdx
  __int64 v13; // rsi
  unsigned int *v14; // rax
  unsigned int *v15; // rdi
  __int64 v16; // rcx
  unsigned __int8 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // esi
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rsi
  unsigned int v40; // ecx
  _QWORD *v41; // r14
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // [rsp+8h] [rbp-E0h]
  _BYTE *v64; // [rsp+18h] [rbp-D0h]
  __int64 v65; // [rsp+18h] [rbp-D0h]
  _BYTE *v66; // [rsp+18h] [rbp-D0h]
  _BYTE *ptr; // [rsp+20h] [rbp-C8h]
  _BYTE *ptra; // [rsp+20h] [rbp-C8h]
  __int64 v69; // [rsp+28h] [rbp-C0h]
  __int64 v70; // [rsp+28h] [rbp-C0h]
  _BYTE v71[184]; // [rsp+30h] [rbp-B8h] BYREF

  v8 = *(unsigned int *)(a2 + 8);
  if ( !(_DWORD)v8 )
  {
    v9 = *(_DWORD *)(a2 + 40);
    if ( v9 > 0 || (*(_BYTE *)(a2 + 7) & 0x20) == 0 && !v9 )
      return *(_QWORD *)(*a1 + 856LL);
    v30 = *(_DWORD *)(a2 + 4);
    if ( (v30 & 0x1FFFFFFF) == 0 )
      return *(_QWORD *)(*a1 + 864LL);
    v10 = 0;
    ptra = v71;
    v70 = 0x1000000000LL;
    goto LABEL_53;
  }
  v12 = *(unsigned int **)(a2 + 24);
  v13 = a1[75];
  v14 = v12;
  v15 = &v12[v8];
  while ( 1 )
  {
    v16 = *v14;
    if ( !*(_BYTE *)(v13 + v16) )
      break;
    if ( ++v14 == v15 )
    {
      v17 = 1;
      goto LABEL_9;
    }
  }
  v17 = 0;
LABEL_9:
  v18 = 0;
  ptr = v71;
  v69 = 0x1000000000LL;
  while ( 1 )
  {
    v21 = v12[v18];
    v22 = *(_QWORD *)(a1[78] + 8 * v21);
    if ( !v17 && *(_BYTE *)(a1[75] + v21) )
      v22 = sub_15E1A70(a1[66]);
    v23 = *(_QWORD *)(a2 + 32) + 32 * v18;
    if ( (*(_BYTE *)(v23 + 4) & 1) != 0
      || *(_DWORD *)v23 != 1
      || (*(_BYTE *)(v23 + 20) & 1) != 0
      || *(_DWORD *)(v23 + 16) != 1 )
    {
      break;
    }
    v31 = v69;
    if ( (unsigned int)v69 >= HIDWORD(v69) )
    {
      v60 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v69)));
      v31 = v69;
      a5 = (_BYTE *)v60;
      if ( (_DWORD)v69 )
      {
        if ( (unsigned int)(v69 - 1) <= 2 || (_BYTE *)v60 == ptr + 8 )
        {
          v62 = 0;
          do
          {
            *(_QWORD *)&a5[v62] = *(_QWORD *)&ptr[v62];
            v62 += 8;
          }
          while ( v62 != 8LL * (unsigned int)v69 );
        }
        else
        {
          v61 = 0;
          do
          {
            *(__m128i *)&a5[v61] = _mm_loadu_si128((const __m128i *)&ptr[v61]);
            v61 += 16;
          }
          while ( 16LL * ((unsigned int)v69 >> 1) != v61 );
          if ( (v69 & 1) != 0 )
            *(_QWORD *)&a5[8 * (v69 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v69 & 0xFFFFFFFE)];
        }
      }
      if ( ptr && ptr != v71 )
      {
        v66 = a5;
        sub_186B220(ptr);
        v31 = v69;
        a5 = v66;
      }
      ptr = a5;
      HIDWORD(v69) *= 2;
    }
    else
    {
      a5 = ptr;
    }
    v32 = v31;
    ++v18;
    LODWORD(v16) = v31 + 1;
    *(_QWORD *)&a5[8 * v32] = v22;
    v20 = *(_DWORD *)(a2 + 8);
    LODWORD(v69) = v16;
    if ( (unsigned int)v18 >= v20 )
      goto LABEL_40;
LABEL_12:
    v12 = *(unsigned int **)(a2 + 24);
  }
  v24 = a1[67];
  if ( !v24 )
  {
    v65 = *(_QWORD *)(a2 + 32) + 32 * v18;
    sub_16669E0(a1 + 66);
    v24 = a1[67];
    LODWORD(v23) = v65;
  }
  sub_166A700(v24, v23, v17, v16, (_DWORD)a5, a6);
  v25 = sub_15E1B70(a1[66]);
  v26 = v69;
  v27 = v25;
  if ( (unsigned int)v69 < HIDWORD(v69) )
  {
    a5 = ptr;
  }
  else
  {
    v28 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v69)));
    v26 = v69;
    a5 = (_BYTE *)v28;
    if ( (_DWORD)v69 )
    {
      if ( (unsigned int)(v69 - 1) <= 2 || (_BYTE *)v28 == ptr + 8 )
      {
        v54 = 0;
        do
        {
          *(_QWORD *)&a5[v54] = *(_QWORD *)&ptr[v54];
          v54 += 8;
        }
        while ( v54 != 8LL * (unsigned int)v69 );
      }
      else
      {
        v29 = 0;
        do
        {
          *(__m128i *)&a5[v29] = _mm_loadu_si128((const __m128i *)&ptr[v29]);
          v29 += 16;
        }
        while ( v29 != 16LL * ((unsigned int)v69 >> 1) );
        if ( (v69 & 1) != 0 )
          *(_QWORD *)&a5[8 * (v69 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v69 & 0xFFFFFFFE)];
      }
    }
    if ( ptr != v71 && ptr )
    {
      v64 = a5;
      sub_186B220(ptr);
      v26 = v69;
      a5 = v64;
    }
    ptr = a5;
    HIDWORD(v69) *= 2;
  }
  v19 = v26;
  ++v18;
  LODWORD(v16) = v26 + 1;
  *(_QWORD *)&a5[8 * v19] = v27;
  v20 = *(_DWORD *)(a2 + 8);
  LODWORD(v69) = v16;
  if ( (unsigned int)v18 < v20 )
    goto LABEL_12;
LABEL_40:
  if ( v20 != 1 && ((_DWORD)v16 != 1 || *(_WORD *)(*(_QWORD *)a5 + 4LL)) )
    sub_15E1AF0(a1[66]);
  v33 = a1[67];
  v34 = a2 + 40;
  if ( !v33 )
  {
    sub_16669E0(a1 + 66);
    v33 = a1[67];
    v34 = a2 + 40;
  }
  sub_166A700(v33, v34, v17, v16, (_DWORD)a5, a6);
  v35 = a1[66];
  if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
  {
    v36 = *a1;
    sub_15E1B70(v35);
    v37 = sub_15E1A70(v36);
  }
  else
  {
    v37 = sub_15E1B70(v35);
  }
  v10 = v37;
  if ( ptr && ptr != v71 )
    sub_186B220(ptr);
  v30 = *(_DWORD *)(a2 + 4);
  if ( (v30 & 0x1FFFFFFF) != 0 )
  {
    ptra = v71;
    v70 = 0x1000000000LL;
LABEL_53:
    v38 = 0;
    do
    {
      v44 = *(int *)(*(_QWORD *)(a2 + 16) + 4 * v38);
      if ( (int)v44 >= 0 )
      {
        v39 = *(_QWORD *)(a1[70] + 8 * v44);
        v40 = v70;
        if ( (unsigned int)v70 >= HIDWORD(v70) )
        {
          v49 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v70)));
          v40 = v70;
          v41 = (_QWORD *)v49;
          if ( (_DWORD)v70 )
          {
            if ( (unsigned int)(v70 - 1) <= 2 || (_BYTE *)v49 == ptra + 8 )
            {
              v55 = 0;
              do
              {
                v41[v55] = *(_QWORD *)&ptra[v55 * 8];
                ++v55;
              }
              while ( (unsigned int)v70 != v55 );
            }
            else
            {
              v50 = 0;
              do
              {
                *(__m128i *)&v41[v50] = _mm_loadu_si128((const __m128i *)&ptra[v50 * 8]);
                v50 += 2;
              }
              while ( v50 != 2LL * ((unsigned int)v70 >> 1) );
              if ( (v70 & 1) != 0 )
                v41[(unsigned int)v70 & 0xFFFFFFFE] = *(_QWORD *)&ptra[8 * (v70 & 0xFFFFFFFE)];
            }
          }
          if ( ptra != v71 && ptra )
          {
            sub_186B220(ptra);
            v40 = v70;
          }
          ptra = v41;
          v30 = *(_DWORD *)(a2 + 4);
          HIDWORD(v70) *= 2;
        }
        else
        {
          v41 = ptra;
        }
        v42 = v40;
        v43 = v40 + 1;
        v41[v42] = v39;
      }
      else
      {
        v45 = sub_15E1A70(*a1);
        v46 = v70;
        v47 = v45;
        if ( (unsigned int)v70 >= HIDWORD(v70) )
        {
          v63 = v45;
          v51 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v70)));
          v46 = v70;
          v41 = (_QWORD *)v51;
          v47 = v63;
          if ( (_DWORD)v70 )
          {
            if ( (unsigned int)(v70 - 1) <= 2 || (_BYTE *)v51 == ptra + 8 )
            {
              v56 = 0;
              do
              {
                v41[v56] = *(_QWORD *)&ptra[v56 * 8];
                ++v56;
              }
              while ( (unsigned int)v70 != v56 );
            }
            else
            {
              v52 = 0;
              do
              {
                *(__m128i *)&v41[v52] = _mm_loadu_si128((const __m128i *)&ptra[v52 * 8]);
                v52 += 2;
              }
              while ( 2LL * ((unsigned int)v70 >> 1) != v52 );
              if ( (v70 & 1) != 0 )
                v41[(unsigned int)v70 & 0xFFFFFFFE] = *(_QWORD *)&ptra[8 * (v70 & 0xFFFFFFFE)];
            }
          }
          if ( ptra && ptra != v71 )
          {
            sub_186B220(ptra);
            v46 = v70;
            v47 = v63;
          }
          ptra = v41;
          HIDWORD(v70) *= 2;
        }
        else
        {
          v41 = ptra;
        }
        v48 = v46;
        v43 = v46 + 1;
        v41[v48] = v47;
        v30 = *(_DWORD *)(a2 + 4);
      }
      ++v38;
      LODWORD(v70) = v43;
    }
    while ( (unsigned int)v38 < (v30 & 0x1FFFFFFFu) );
    if ( v10 )
    {
      if ( v43 >= HIDWORD(v70) )
      {
        v57 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v70)));
        v43 = v70;
        v41 = (_QWORD *)v57;
        if ( (_DWORD)v70 )
        {
          if ( (unsigned int)(v70 - 1) <= 2 || (_BYTE *)v57 == ptra + 8 )
          {
            v59 = 0;
            do
            {
              v41[v59] = *(_QWORD *)&ptra[v59 * 8];
              ++v59;
            }
            while ( v59 != (unsigned int)v70 );
          }
          else
          {
            v58 = 0;
            do
            {
              *(__m128i *)&v41[v58] = _mm_loadu_si128((const __m128i *)&ptra[v58 * 8]);
              v58 += 2;
            }
            while ( 2LL * ((unsigned int)v70 >> 1) != v58 );
            if ( (v70 & 1) != 0 )
              v41[(unsigned int)v70 & 0xFFFFFFFE] = *(_QWORD *)&ptra[8 * (v70 & 0xFFFFFFFE)];
          }
        }
        if ( ptra != v71 && ptra )
        {
          sub_186B220(ptra);
          v43 = v70;
        }
        ptra = v41;
      }
      v53 = v43++;
      v41[v53] = v10;
    }
    if ( v43 == 1 )
    {
      v10 = *v41;
    }
    else
    {
      v41 = ptra;
      v10 = sub_15E1AF0(*a1);
    }
    if ( v41 != (_QWORD *)v71 && v41 )
      sub_186B220(v41);
    return v10;
  }
  if ( !v10 )
    return *(_QWORD *)(*a1 + 864LL);
  return v10;
}

