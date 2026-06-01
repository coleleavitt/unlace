_QWORD *__fastcall sub_75F900(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  bool v6; // zf
  int v7; // eax
  _DWORD *v8; // rdx
  __int64 v9; // r13
  _DWORD *v10; // rdx
  __int64 v11; // rbx
  char *v12; // rax
  int v13; // edx
  _QWORD *v14; // rdi
  _QWORD *v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rsi
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rbx
  _QWORD *v22; // r8
  __int64 v23; // r14
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r14
  __int64 v27; // r12
  char *v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  _BYTE *v36; // rdi
  _QWORD *result; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  _QWORD *v40; // r15
  __int64 v41; // r14
  __int64 v42; // rbx
  unsigned int v43; // edx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // edx
  __int64 v49; // r15
  __int64 v50; // rbx
  _QWORD *v51; // r13
  __int64 v52; // rsi
  __int64 v53; // rax
  char *v54; // rax
  _QWORD *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  int v63; // [rsp+8h] [rbp-C90h]
  _QWORD *v65; // [rsp+18h] [rbp-C80h]
  _QWORD *v66; // [rsp+30h] [rbp-C68h]
  unsigned int v67; // [rsp+38h] [rbp-C60h]
  _QWORD v68[128]; // [rsp+40h] [rbp-C58h] BYREF
  void *ptr; // [rsp+440h] [rbp-858h]
  __int64 v70; // [rsp+448h] [rbp-850h]
  _QWORD v71[128]; // [rsp+450h] [rbp-848h] BYREF
  void *v72; // [rsp+850h] [rbp-448h]
  __int64 v73; // [rsp+858h] [rbp-440h]
  _BYTE v74[1080]; // [rsp+860h] [rbp-438h] BYREF

  v6 = *(_WORD *)(a2 + 4) == 0;
  v66 = v68;
  ptr = v71;
  v7 = *((_DWORD *)a1 + 2);
  v67 = 0;
  v70 = 0x8000000000LL;
  if ( v6 )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      if ( v7 == *v8 && v8[1] == 37 )
      {
        v9 = *(unsigned int *)(a2 + 24);
        if ( (_DWORD)v9 )
        {
          v40 = v68;
          v41 = a2 + 8 * v9;
          v42 = a2;
          LODWORD(v9) = 0;
          v43 = 128;
          while ( 1 )
          {
            v44 = *(_QWORD *)(v42 + 32);
            v45 = (unsigned int)v9;
            v42 += 8;
            v9 = (unsigned int)(v9 + 1);
            v40[v45] = v44;
            v67 = v9;
            if ( v42 == v41 )
              break;
            if ( (unsigned int)v9 >= v43 )
            {
              v63 = 2 * v43;
              v40 = (_QWORD *)sub_186B270(16LL * v43);
              v43 = v63;
              if ( (_DWORD)v9 )
              {
                if ( (unsigned int)(v9 - 1) <= 2 || v40 == v66 + 1 )
                {
                  v62 = 0;
                  do
                  {
                    v40[v62] = v66[v62];
                    ++v62;
                  }
                  while ( v62 != (unsigned int)v9 );
                }
                else
                {
                  v46 = 0;
                  do
                  {
                    *(__m128i *)&v40[v46] = _mm_loadu_si128((const __m128i *)&v66[v46]);
                    v46 += 2;
                  }
                  while ( 2LL * ((unsigned int)v9 >> 1) != v46 );
                  if ( (v9 & 1) != 0 )
                    v40[(unsigned int)v9 & 0xFFFFFFFE] = v66[(unsigned int)v9 & 0xFFFFFFFE];
                }
              }
              if ( v66 != v68 && v66 )
              {
                sub_186B220(v66);
                v43 = v63;
              }
              v66 = v40;
            }
          }
          if ( *(_WORD *)(a3 + 4) )
            goto LABEL_8;
          v7 = *((_DWORD *)a1 + 2);
        }
        else if ( *(_WORD *)(a3 + 4) )
        {
          v71[0] = a3;
          LODWORD(v70) = 1;
          v72 = v74;
          v73 = 0x8000000000LL;
          goto LABEL_39;
        }
LABEL_6:
        v10 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
        if ( v10 && *v10 == v7 && v10[1] == 37 )
        {
          v47 = *(unsigned int *)(a3 + 24);
          if ( (_DWORD)v47 )
          {
            v48 = v70;
            LODWORD(v49) = HIDWORD(v70);
            v50 = a3 + 8 * v47;
            do
            {
              if ( v48 < (unsigned int)v49 )
              {
                v51 = ptr;
              }
              else
              {
                v49 = (unsigned int)(2 * v49);
                v54 = (char *)sub_186B270(8 * v49);
                v48 = v70;
                v55 = ptr;
                v51 = v54;
                if ( (_DWORD)v70 )
                {
                  if ( (unsigned int)(v70 - 1) <= 2 || v54 == (char *)ptr + 8 )
                  {
                    v60 = 0;
                    v61 = 8LL * (unsigned int)v70;
                    do
                    {
                      v51[v60 / 8] = v55[v60 / 8];
                      v60 += 8LL;
                    }
                    while ( v61 != v60 );
                  }
                  else
                  {
                    v56 = 0;
                    v57 = 16LL * ((unsigned int)v70 >> 1);
                    do
                    {
                      *(__m128i *)&v51[v56 / 8] = _mm_loadu_si128((const __m128i *)&v55[v56 / 8]);
                      v56 += 16LL;
                    }
                    while ( v56 != v57 );
                    if ( (v48 & 1) != 0 )
                      v51[v48 & 0xFFFFFFFE] = v55[v48 & 0xFFFFFFFE];
                  }
                }
                if ( v55 && v55 != v71 )
                {
                  sub_186B220(v55);
                  v48 = v70;
                }
                ptr = v51;
                HIDWORD(v70) = v49;
              }
              v52 = *(_QWORD *)(a3 + 32);
              v53 = v48;
              a3 += 8;
              ++v48;
              v51[v53] = v52;
              LODWORD(v70) = v48;
            }
            while ( v50 != a3 );
            v9 = v67;
          }
          goto LABEL_21;
        }
LABEL_8:
        if ( (unsigned int)v70 < HIDWORD(v70) )
        {
          v19 = v70 + 1;
          v18 = (char *)ptr + 8 * (unsigned int)v70;
        }
        else
        {
          v11 = (unsigned int)(2 * HIDWORD(v70));
          v12 = (char *)sub_186B270(8 * v11);
          v13 = v70;
          v14 = ptr;
          v15 = v12;
          if ( (_DWORD)v70 )
          {
            if ( (unsigned int)(v70 - 1) <= 2 || v12 == (char *)ptr + 8 )
            {
              v58 = 0;
              v59 = 8LL * (unsigned int)v70;
              do
              {
                v15[v58 / 8] = v14[v58 / 8];
                v58 += 8LL;
              }
              while ( v58 != v59 );
            }
            else
            {
              v16 = 0;
              v17 = 16LL * ((unsigned int)v70 >> 1);
              do
              {
                *(__m128i *)&v15[v16 / 8] = _mm_loadu_si128((const __m128i *)&v14[v16 / 8]);
                v16 += 16LL;
              }
              while ( v17 != v16 );
              if ( (v13 & 1) != 0 )
                v15[v13 & 0xFFFFFFFE] = v14[v13 & 0xFFFFFFFE];
            }
          }
          if ( v14 && v14 != v71 )
          {
            sub_186B220(v14);
            v13 = v70;
          }
          HIDWORD(v70) = v11;
          v18 = &v15[v13];
          ptr = v15;
          v19 = v13 + 1;
          v9 = v67;
        }
        *v18 = a3;
        LODWORD(v70) = v19;
LABEL_21:
        v73 = 0x8000000000LL;
        v72 = v74;
        if ( !(_DWORD)v9 )
          goto LABEL_39;
        goto LABEL_24;
      }
    }
  }
  v6 = *(_WORD *)(a3 + 4) == 0;
  v68[0] = a2;
  v67 = 1;
  if ( v6 )
  {
    v9 = 1;
    goto LABEL_6;
  }
  v71[0] = a3;
  v9 = 1;
  LODWORD(v70) = 1;
  v72 = v74;
  v73 = 0x8000000000LL;
LABEL_24:
  v20 = 8 * v9;
  v21 = 0;
  do
  {
    v23 = *a1;
    sub_15E1B70(*a1);
    v24 = sub_15E1BF0(v23);
    v25 = v73;
    v26 = v24;
    if ( (unsigned int)v73 < HIDWORD(v73) )
    {
      v22 = v72;
    }
    else
    {
      v27 = (unsigned int)(2 * HIDWORD(v73));
      v28 = (char *)sub_186B270(8 * v27);
      v25 = v73;
      v29 = (char *)v72;
      v22 = v28;
      if ( (_DWORD)v73 )
      {
        if ( (unsigned int)(v73 - 1) <= 2 || v28 == (char *)v72 + 8 )
        {
          v38 = 0;
          v39 = 8LL * (unsigned int)v73;
          do
          {
            v22[v38 / 8] = *(_QWORD *)&v29[v38];
            v38 += 8LL;
          }
          while ( v39 != v38 );
        }
        else
        {
          v30 = 0;
          v31 = 16LL * ((unsigned int)v73 >> 1);
          do
          {
            *(__m128i *)&v22[v30 / 8] = _mm_loadu_si128((const __m128i *)&v29[v30]);
            v30 += 16LL;
          }
          while ( v30 != v31 );
          if ( (v25 & 1) != 0 )
            v22[v25 & 0xFFFFFFFE] = *(_QWORD *)&v29[8 * (v25 & 0xFFFFFFFE)];
        }
      }
      if ( v29 != v74 && v29 )
      {
        v65 = v22;
        sub_186B220(v29);
        v25 = v73;
        v22 = v65;
      }
      v72 = v22;
      HIDWORD(v73) = v27;
    }
    v21 += 8;
    v22[v25] = v26;
    LODWORD(v73) = v25 + 1;
  }
  while ( v20 != v21 );
LABEL_39:
  v32 = sub_15E1AF0(a1[2]);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = *a4;
  if ( *a4 )
  {
    v35 = a4[1];
    v6 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v35, v34);
  }
  v36 = v72;
  *a4 = v33;
  if ( v36 && v36 != v74 )
    sub_186B220(v36);
  if ( ptr && ptr != v71 )
    sub_186B220(ptr);
  result = v68;
  if ( v66 != v68 )
  {
    if ( v66 )
      return (_QWORD *)sub_186B220(v66);
  }
  return result;
}

