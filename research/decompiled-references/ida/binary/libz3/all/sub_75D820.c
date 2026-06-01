_QWORD *__fastcall sub_75D820(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  bool v7; // zf
  int v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  char *v13; // rax
  int v14; // ecx
  _QWORD *v15; // rdi
  _QWORD *v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // edx
  _QWORD *v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdi
  _BYTE *v26; // rdi
  _QWORD *result; // rax
  __int64 v28; // r15
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // esi
  __int64 v33; // r14
  __int64 v34; // rbx
  char *v35; // rax
  char *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // r10
  _QWORD *v41; // r15
  __int64 v42; // r14
  __int64 v43; // rbx
  unsigned int v44; // esi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // r15
  __int64 v51; // r14
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  char *v55; // rax
  _QWORD *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  __int64 v60; // r9
  __int64 i; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // r10
  _QWORD *v64; // [rsp+8h] [rbp-C80h]
  _QWORD *v65; // [rsp+20h] [rbp-C68h]
  unsigned int v66; // [rsp+28h] [rbp-C60h]
  _QWORD v67[128]; // [rsp+30h] [rbp-C58h] BYREF
  void *ptr; // [rsp+430h] [rbp-858h]
  __int64 v69; // [rsp+438h] [rbp-850h]
  _QWORD v70[128]; // [rsp+440h] [rbp-848h] BYREF
  void *v71; // [rsp+840h] [rbp-448h]
  __int64 v72; // [rsp+848h] [rbp-440h]
  _BYTE v73[1080]; // [rsp+850h] [rbp-438h] BYREF

  v7 = *(_WORD *)(a2 + 4) == 0;
  v8 = *(_DWORD *)(a1 + 8);
  v65 = v67;
  v66 = 0;
  ptr = v70;
  v69 = 0x8000000000LL;
  if ( v7 && (v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && v8 == *v9 && v9[1] == 37 )
  {
    v10 = *(unsigned int *)(a2 + 24);
    if ( (_DWORD)v10 )
    {
      v41 = v67;
      v42 = a2 + 8 * v10;
      v43 = a2;
      LODWORD(v10) = 0;
      v44 = 128;
      while ( 1 )
      {
        v45 = *(_QWORD *)(v43 + 32);
        v46 = (unsigned int)v10;
        v43 += 8;
        LODWORD(v10) = v10 + 1;
        v41[v46] = v45;
        v66 = v10;
        if ( v43 == v42 )
          break;
        if ( (unsigned int)v10 >= v44 )
        {
          v41 = (_QWORD *)sub_186B270(16LL * v44);
          LODWORD(v10) = v66;
          v44 *= 2;
          if ( v66 )
          {
            if ( v66 - 1 <= 2 || v41 == v65 + 1 )
            {
              for ( i = 0; i != v66; ++i )
                v41[i] = v65[i];
            }
            else
            {
              v47 = 0;
              do
              {
                *(__m128i *)&v41[v47] = _mm_loadu_si128((const __m128i *)&v65[v47]);
                v47 += 2;
              }
              while ( 2LL * (v66 >> 1) != v47 );
              if ( (v66 & 1) != 0 )
                v41[v66 & 0xFFFFFFFE] = v65[v66 & 0xFFFFFFFE];
            }
          }
          if ( v65 != v67 && v65 )
          {
            sub_186B220(v65);
            LODWORD(v10) = v66;
          }
          v65 = v41;
        }
      }
      if ( *(_WORD *)(a3 + 4) )
        goto LABEL_8;
      v8 = *(_DWORD *)(a1 + 8);
    }
    else if ( *(_WORD *)(a3 + 4) )
    {
      v70[0] = a3;
      LODWORD(v69) = 1;
      v71 = v73;
      v72 = 0x8000000000LL;
      goto LABEL_22;
    }
  }
  else
  {
    v7 = *(_WORD *)(a3 + 4) == 0;
    v67[0] = a2;
    v66 = 1;
    if ( !v7 )
    {
      v70[0] = a3;
      LODWORD(v10) = 1;
      LODWORD(v69) = 1;
      v71 = v73;
      v72 = 0x8000000000LL;
      goto LABEL_39;
    }
    LODWORD(v10) = 1;
  }
  v11 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( v11 && *v11 == v8 && v11[1] == 37 )
  {
    v48 = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)v48 )
    {
      v49 = v69;
      LODWORD(v50) = HIDWORD(v69);
      v51 = a3 + 8 * v48;
      do
      {
        if ( v49 < (unsigned int)v50 )
        {
          v52 = ptr;
        }
        else
        {
          v50 = (unsigned int)(2 * v50);
          v55 = (char *)sub_186B270(8 * v50);
          v49 = v69;
          v56 = ptr;
          v52 = v55;
          if ( (_DWORD)v69 )
          {
            if ( (unsigned int)(v69 - 1) <= 2 || v55 == (char *)ptr + 8 )
            {
              v62 = 0;
              v63 = 8LL * (unsigned int)v69;
              do
              {
                v52[v62 / 8] = v56[v62 / 8];
                v62 += 8LL;
              }
              while ( v63 != v62 );
            }
            else
            {
              v57 = 0;
              v58 = 16LL * ((unsigned int)v69 >> 1);
              do
              {
                *(__m128i *)&v52[v57 / 8] = _mm_loadu_si128((const __m128i *)&v56[v57 / 8]);
                v57 += 16LL;
              }
              while ( v57 != v58 );
              if ( (v49 & 1) != 0 )
                v52[v49 & 0xFFFFFFFE] = v56[v49 & 0xFFFFFFFE];
            }
          }
          if ( v56 && v56 != v70 )
          {
            sub_186B220(v56);
            v49 = v69;
          }
          ptr = v52;
          HIDWORD(v69) = v50;
        }
        v53 = *(_QWORD *)(a3 + 32);
        v54 = v49;
        a3 += 8;
        ++v49;
        v52[v54] = v53;
        LODWORD(v69) = v49;
      }
      while ( a3 != v51 );
      LODWORD(v10) = v66;
    }
    goto LABEL_21;
  }
LABEL_8:
  if ( (unsigned int)v69 < HIDWORD(v69) )
  {
    v19 = v69 + 1;
    v20 = (char *)ptr + 8 * (unsigned int)v69;
  }
  else
  {
    v12 = (unsigned int)(2 * HIDWORD(v69));
    v13 = (char *)sub_186B270(8 * v12);
    v14 = v69;
    v15 = ptr;
    v16 = v13;
    if ( (_DWORD)v69 )
    {
      if ( (unsigned int)(v69 - 1) <= 2 || v13 == (char *)ptr + 8 )
      {
        v59 = 0;
        v60 = 8LL * (unsigned int)v69;
        do
        {
          v16[v59 / 8] = v15[v59 / 8];
          v59 += 8LL;
        }
        while ( v59 != v60 );
      }
      else
      {
        v17 = 0;
        v18 = 16LL * ((unsigned int)v69 >> 1);
        do
        {
          *(__m128i *)&v16[v17 / 8] = _mm_loadu_si128((const __m128i *)&v15[v17 / 8]);
          v17 += 16LL;
        }
        while ( v18 != v17 );
        if ( (v14 & 1) != 0 )
          v16[v14 & 0xFFFFFFFE] = v15[v14 & 0xFFFFFFFE];
      }
    }
    if ( v15 && v15 != v70 )
    {
      sub_186B220(v15);
      v14 = v69;
    }
    ptr = v16;
    v19 = v14 + 1;
    HIDWORD(v69) = v12;
    v20 = &v16[v14];
    LODWORD(v10) = v66;
  }
  *v20 = a3;
  LODWORD(v69) = v19;
LABEL_21:
  v72 = 0x8000000000LL;
  v71 = v73;
  if ( !(_DWORD)v10 )
  {
LABEL_22:
    v21 = 0;
    goto LABEL_23;
  }
LABEL_39:
  v28 = 8LL * (unsigned int)(v10 - 1);
  do
  {
    v31 = sub_15E1B70(*(_QWORD *)a1);
    v32 = v72;
    v33 = v31;
    if ( (unsigned int)v72 < HIDWORD(v72) )
    {
      v29 = v71;
    }
    else
    {
      v34 = (unsigned int)(2 * HIDWORD(v72));
      v35 = (char *)sub_186B270(8 * v34);
      v32 = v72;
      v36 = (char *)v71;
      v29 = v35;
      if ( (_DWORD)v72 )
      {
        if ( (unsigned int)(v72 - 1) <= 2 || v35 == (char *)v71 + 8 )
        {
          v39 = 0;
          v40 = 8LL * (unsigned int)v72;
          do
          {
            v29[v39 / 8] = *(_QWORD *)&v36[v39];
            v39 += 8LL;
          }
          while ( v40 != v39 );
        }
        else
        {
          v37 = 0;
          v38 = 16LL * ((unsigned int)v72 >> 1);
          do
          {
            *(__m128i *)&v29[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37]);
            v37 += 16LL;
          }
          while ( v37 != v38 );
          if ( (v32 & 1) != 0 )
            v29[v32 & 0xFFFFFFFE] = *(_QWORD *)&v36[8 * (v32 & 0xFFFFFFFE)];
        }
      }
      if ( v36 != v73 && v36 )
      {
        v64 = v29;
        sub_186B220(v36);
        v32 = v72;
        v29 = v64;
      }
      v71 = v29;
      HIDWORD(v72) = v34;
    }
    v30 = v32;
    v28 -= 8;
    v21 = v32 + 1;
    v29[v30] = v33;
    LODWORD(v72) = v21;
  }
  while ( v28 != -8 );
LABEL_23:
  v22 = sub_15EC1C0(*(_QWORD *)a1, v21);
  v23 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v24 = *a4;
  if ( *a4 )
  {
    v25 = a4[1];
    v7 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v25, v24);
  }
  v26 = v71;
  *a4 = v23;
  if ( v26 && v26 != v73 )
    sub_186B220(v26);
  if ( ptr && ptr != v70 )
    sub_186B220(ptr);
  result = v67;
  if ( v65 != v67 )
  {
    if ( v65 )
      return (_QWORD *)sub_186B220(v65);
  }
  return result;
}

