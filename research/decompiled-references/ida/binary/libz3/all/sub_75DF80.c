_QWORD *__fastcall sub_75DF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // r15
  bool v8; // zf
  int v9; // esi
  _DWORD *v10; // rdx
  __int64 v11; // rbp
  _DWORD *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  int v15; // edx
  _QWORD *v16; // rdi
  _QWORD *v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rbp
  unsigned __int64 v23; // r14
  unsigned int v24; // ecx
  _QWORD *v25; // r8
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  char *v30; // rax
  char *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  _BYTE *v38; // rdi
  _QWORD *result; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rbx
  _QWORD *v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // r14
  __int64 v52; // rbx
  _QWORD *v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rax
  char *v56; // rax
  _QWORD *v57; // rdi
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // [rsp+8h] [rbp-C90h]
  int v66; // [rsp+8h] [rbp-C90h]
  _QWORD *v68; // [rsp+18h] [rbp-C80h]
  _QWORD *v69; // [rsp+18h] [rbp-C80h]
  _QWORD *v70; // [rsp+30h] [rbp-C68h]
  unsigned int v71; // [rsp+38h] [rbp-C60h]
  _QWORD v72[128]; // [rsp+40h] [rbp-C58h] BYREF
  void *ptr; // [rsp+440h] [rbp-858h]
  __int64 v74; // [rsp+448h] [rbp-850h]
  _QWORD v75[128]; // [rsp+450h] [rbp-848h] BYREF
  void *v76; // [rsp+850h] [rbp-448h]
  __int64 v77; // [rsp+858h] [rbp-440h]
  _BYTE v78[1080]; // [rsp+860h] [rbp-438h] BYREF

  v6 = a4;
  v8 = *(_WORD *)(a3 + 4) == 0;
  v70 = v72;
  ptr = v75;
  v9 = *(_DWORD *)(a1 + 8);
  v71 = 0;
  v74 = 0x8000000000LL;
  if ( v8 )
  {
    v10 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v10 )
    {
      if ( v9 == *v10 && v10[1] == 37 )
      {
        v11 = *(unsigned int *)(a3 + 24);
        if ( (_DWORD)v11 )
        {
          v42 = a3 + 8 * v11;
          v43 = a3;
          v44 = v72;
          LODWORD(v11) = 0;
          v45 = 128;
          while ( 1 )
          {
            v46 = *(_QWORD *)(v43 + 32);
            v47 = (unsigned int)v11;
            v43 += 8;
            v11 = (unsigned int)(v11 + 1);
            v44[v47] = v46;
            v71 = v11;
            if ( v43 == v42 )
              break;
            if ( (unsigned int)v11 >= v45 )
            {
              v66 = 2 * v45;
              v44 = (_QWORD *)sub_186B270(16LL * v45);
              v45 = v66;
              if ( (_DWORD)v11 )
              {
                if ( (unsigned int)(v11 - 1) <= 2 || v44 == v70 + 1 )
                {
                  v64 = 0;
                  do
                  {
                    v44[v64] = v70[v64];
                    ++v64;
                  }
                  while ( v64 != (unsigned int)v11 );
                }
                else
                {
                  v48 = 0;
                  do
                  {
                    *(__m128i *)&v44[v48] = _mm_loadu_si128((const __m128i *)&v70[v48]);
                    v48 += 2;
                  }
                  while ( 2LL * ((unsigned int)v11 >> 1) != v48 );
                  if ( (v11 & 1) != 0 )
                    v44[(unsigned int)v11 & 0xFFFFFFFE] = v70[(unsigned int)v11 & 0xFFFFFFFE];
                }
              }
              if ( v70 != v72 && v70 )
              {
                v69 = v44;
                sub_186B220(v70);
                v44 = v69;
                v45 = v66;
              }
              v70 = v44;
            }
          }
          if ( *(_WORD *)(v6 + 4) )
            goto LABEL_8;
          v9 = *(_DWORD *)(a1 + 8);
        }
        else if ( *(_WORD *)(a4 + 4) )
        {
          v75[0] = a4;
          LODWORD(v74) = 1;
          v76 = v78;
          v77 = 0x8000000000LL;
          goto LABEL_41;
        }
LABEL_6:
        v12 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( v12 && *v12 == v9 && v12[1] == 37 )
        {
          v49 = *(unsigned int *)(v6 + 24);
          if ( (_DWORD)v49 )
          {
            v50 = v74;
            LODWORD(v51) = HIDWORD(v74);
            v52 = v6 + 8 * v49;
            do
            {
              if ( v50 < (unsigned int)v51 )
              {
                v53 = ptr;
              }
              else
              {
                v51 = (unsigned int)(2 * v51);
                v56 = (char *)sub_186B270(8 * v51);
                v50 = v74;
                v57 = ptr;
                v53 = v56;
                if ( (_DWORD)v74 )
                {
                  if ( (unsigned int)(v74 - 1) <= 2 || v56 == (char *)ptr + 8 )
                  {
                    v62 = 0;
                    v63 = 8LL * (unsigned int)v74;
                    do
                    {
                      v53[v62 / 8] = v57[v62 / 8];
                      v62 += 8LL;
                    }
                    while ( v63 != v62 );
                  }
                  else
                  {
                    v58 = 0;
                    v59 = 16LL * ((unsigned int)v74 >> 1);
                    do
                    {
                      *(__m128i *)&v53[v58 / 8] = _mm_loadu_si128((const __m128i *)&v57[v58 / 8]);
                      v58 += 16LL;
                    }
                    while ( v58 != v59 );
                    if ( (v50 & 1) != 0 )
                      v53[v50 & 0xFFFFFFFE] = v57[v50 & 0xFFFFFFFE];
                  }
                }
                if ( v57 && v57 != v75 )
                {
                  sub_186B220(v57);
                  v50 = v74;
                }
                ptr = v53;
                HIDWORD(v74) = v51;
              }
              v54 = *(_QWORD *)(v6 + 32);
              v55 = v50;
              v6 += 8;
              ++v50;
              v53[v55] = v54;
              LODWORD(v74) = v50;
            }
            while ( v52 != v6 );
            v11 = v71;
          }
          goto LABEL_21;
        }
LABEL_8:
        if ( (unsigned int)v74 < HIDWORD(v74) )
        {
          v21 = v74 + 1;
          v20 = (char *)ptr + 8 * (unsigned int)v74;
        }
        else
        {
          v13 = (unsigned int)(2 * HIDWORD(v74));
          v14 = (char *)sub_186B270(8 * v13);
          v15 = v74;
          v16 = ptr;
          v17 = v14;
          if ( (_DWORD)v74 )
          {
            if ( (unsigned int)(v74 - 1) <= 2 || v14 == (char *)ptr + 8 )
            {
              v60 = 0;
              v61 = 8LL * (unsigned int)v74;
              do
              {
                v17[v60 / 8] = v16[v60 / 8];
                v60 += 8LL;
              }
              while ( v60 != v61 );
            }
            else
            {
              v18 = 0;
              v19 = 16LL * ((unsigned int)v74 >> 1);
              do
              {
                *(__m128i *)&v17[v18 / 8] = _mm_loadu_si128((const __m128i *)&v16[v18 / 8]);
                v18 += 16LL;
              }
              while ( v19 != v18 );
              if ( (v15 & 1) != 0 )
                v17[v15 & 0xFFFFFFFE] = v16[v15 & 0xFFFFFFFE];
            }
          }
          if ( v16 && v16 != v75 )
          {
            sub_186B220(v16);
            v15 = v74;
          }
          HIDWORD(v74) = v13;
          v20 = &v17[v15];
          ptr = v17;
          v21 = v15 + 1;
          v11 = v71;
        }
        *v20 = v6;
        LODWORD(v74) = v21;
LABEL_21:
        v77 = 0x8000000000LL;
        v76 = v78;
        if ( !(_DWORD)v11 )
          goto LABEL_41;
        goto LABEL_24;
      }
    }
  }
  v8 = *(_WORD *)(a4 + 4) == 0;
  v72[0] = a3;
  v71 = 1;
  if ( v8 )
  {
    v11 = 1;
    goto LABEL_6;
  }
  v75[0] = a4;
  v11 = 1;
  LODWORD(v74) = 1;
  v76 = v78;
  v77 = 0x8000000000LL;
LABEL_24:
  v22 = 8 * v11;
  v23 = 0;
  v24 = 0;
  do
  {
    v27 = *(_QWORD *)((char *)ptr + v23);
    if ( v70[v23 / 8] != v27 )
    {
      v28 = sub_15E1BF0(*(_QWORD *)a1);
      v24 = v77;
      v27 = v28;
    }
    if ( v24 < HIDWORD(v77) )
    {
      v25 = v76;
    }
    else
    {
      v65 = v27;
      v29 = (unsigned int)(2 * HIDWORD(v77));
      v30 = (char *)sub_186B270(8 * v29);
      v24 = v77;
      v31 = (char *)v76;
      v25 = v30;
      v27 = v65;
      if ( (_DWORD)v77 )
      {
        if ( (unsigned int)(v77 - 1) <= 2 || v30 == (char *)v76 + 8 )
        {
          v40 = 0;
          v41 = 8LL * (unsigned int)v77;
          do
          {
            v25[v40 / 8] = *(_QWORD *)&v31[v40];
            v40 += 8LL;
          }
          while ( v41 != v40 );
        }
        else
        {
          v32 = 0;
          v33 = 16LL * ((unsigned int)v77 >> 1);
          do
          {
            *(__m128i *)&v25[v32 / 8] = _mm_loadu_si128((const __m128i *)&v31[v32]);
            v32 += 16LL;
          }
          while ( v32 != v33 );
          if ( (v24 & 1) != 0 )
            v25[v24 & 0xFFFFFFFE] = *(_QWORD *)&v31[8 * (v24 & 0xFFFFFFFE)];
        }
      }
      if ( v31 != v78 && v31 )
      {
        v68 = v25;
        sub_186B220(v31);
        v24 = v77;
        v25 = v68;
        v27 = v65;
      }
      v76 = v25;
      HIDWORD(v77) = v29;
    }
    v26 = v24;
    v23 += 8LL;
    ++v24;
    v25[v26] = v27;
    LODWORD(v77) = v24;
  }
  while ( v22 != v23 );
LABEL_41:
  v34 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v36 = *a5;
  if ( *a5 )
  {
    v37 = a5[1];
    v8 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v37, v36);
  }
  v38 = v76;
  *a5 = v35;
  if ( v38 && v38 != v78 )
    sub_186B220(v38);
  if ( ptr && ptr != v75 )
    sub_186B220(ptr);
  result = v72;
  if ( v70 != v72 )
  {
    if ( v70 )
      return (_QWORD *)sub_186B220(v70);
  }
  return result;
}

