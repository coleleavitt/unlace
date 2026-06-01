__int64 __fastcall sub_2FAFC0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  unsigned int *v4; // rdx
  __int64 v5; // rax
  int v6; // r13d
  unsigned __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rax
  int v16; // r13d
  unsigned __int64 v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 *v26; // r13
  __int64 *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int *v35; // rax
  unsigned int v36; // r13d
  unsigned int v37; // eax
  __int64 i; // rbx
  __int64 v39; // r12
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r12
  void *v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int *v52; // rax
  unsigned int j; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rbx
  void *v57; // r12
  __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // r12
  void *v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 result; // rax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r9
  int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 k; // rax
  int v76; // edx
  __int64 v77; // rsi
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // r13d
  _QWORD *v82; // rax
  _QWORD *v83; // rbx
  _QWORD *v84; // r12
  void *v85; // rdi
  int v86; // edx
  unsigned int v87; // [rsp+Ch] [rbp-3Ch]

  v1 = 0x3FFFFFFFCLL;
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    v1 = 4LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v4 = (unsigned int *)(v3 + v1);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
  {
    v6 = *v4;
    v7 = v5 + 8LL * *(unsigned int *)(v5 - 4);
    v8 = (__int64 *)(v5 + 8LL * *v4);
    if ( (unsigned __int64)v8 >= v7 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          v10 = *(_QWORD *)(a1 + 120);
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v8 >= v7 )
          goto LABEL_10;
      }
      sub_15D7BC0(v10, v9);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v7 );
LABEL_10:
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
LABEL_11:
      *(_DWORD *)(v5 - 4) = v6;
  }
  v12 = 0x3FFFFFFFCLL;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    v12 = 4LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v14 = (unsigned int *)(v13 + v12);
  v15 = *(_QWORD *)(a1 + 144);
  if ( v15 )
  {
    v16 = *v14;
    v17 = v15 + 8LL * *(unsigned int *)(v15 - 4);
    v18 = (__int64 *)(v15 + 8LL * *v14);
    if ( (unsigned __int64)v18 >= v17 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 )
        {
          v20 = *(_QWORD *)(a1 + 136);
          v11 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v18 >= v17 )
          goto LABEL_21;
      }
      sub_15D7BC0(v20, v19);
      ++v18;
    }
    while ( (unsigned __int64)v18 < v17 );
LABEL_21:
    v15 = *(_QWORD *)(a1 + 144);
    if ( v15 )
LABEL_22:
      *(_DWORD *)(v15 - 4) = v16;
  }
  v21 = 0x3FFFFFFFCLL;
  v22 = *(_QWORD *)(a1 + 88);
  if ( v22 )
    v21 = 4LL * (unsigned int)(*(_DWORD *)(v22 - 4) - 1);
  v23 = *(_QWORD *)(a1 + 160);
  if ( v23 )
  {
    v24 = *(unsigned int *)(v22 + v21);
    v25 = 32LL * *(unsigned int *)(v23 - 4);
    v26 = (__int64 *)(v23 + v25);
    v27 = (__int64 *)(v23 + 32 * v24);
    if ( 32 * v24 != v25 )
    {
      do
      {
        while ( 1 )
        {
          v30 = v27[2];
          if ( v30 )
          {
            v31 = v27[3];
            v11 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v11 )
              sub_15D7BC0(v31, v30);
          }
          v28 = *v27;
          if ( *v27 )
          {
            v29 = v27[1];
            v11 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v11 )
              break;
          }
          v27 += 4;
          if ( v26 == v27 )
            goto LABEL_35;
        }
        sub_15D7BC0(v29, v28);
        v27 += 4;
      }
      while ( v26 != v27 );
LABEL_35:
      v23 = *(_QWORD *)(a1 + 160);
    }
    *(_DWORD *)(v23 - 4) = v24;
  }
  v32 = 0x3FFFFFFFCLL;
  v33 = *(_QWORD *)(a1 + 80);
  if ( v33 )
    v32 = 4LL * (unsigned int)(*(_DWORD *)(v33 - 4) - 1);
  v34 = *(_QWORD *)(a1 + 72);
  v35 = (unsigned int *)(v33 + v32);
  if ( v34 )
  {
    v36 = *v35;
    v37 = *(_DWORD *)(v34 - 4);
    for ( i = *(_QWORD *)(a1 + 152); v36 < v37; *(_DWORD *)(v34 - 4) = v37 )
    {
      v39 = 104LL * *(unsigned int *)(v34 + 4LL * (v37 - 1));
      v40 = (_QWORD *)(v39 + i);
      v41 = v40[4];
      v42 = (unsigned int)(*(_DWORD *)(v41 - 4) - 1);
      v43 = *(_QWORD *)(v41 + 8 * v42);
      *(_DWORD *)(v41 - 4) = v42;
      if ( v43 )
      {
        v44 = v40[3];
        v11 = (*(_DWORD *)(v43 + 8))-- == 1;
        if ( v11 )
        {
          sub_15D7BC0(v44, v43);
          v40 = (_QWORD *)(v39 + *(_QWORD *)(a1 + 152));
        }
      }
      v45 = v40[5];
      v46 = 0x1FFFFFFFE0LL;
      if ( v45 )
        v46 = 32LL * (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
      v47 = v45 + v46;
      v48 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v45 + v46);
      sub_182CBA0(v48, v47 + 16);
      v49 = v40[5];
      v34 = *(_QWORD *)(a1 + 72);
      i = *(_QWORD *)(a1 + 152);
      --*(_DWORD *)(v49 - 4);
      v37 = *(_DWORD *)(v34 - 4) - 1;
    }
    v33 = *(_QWORD *)(a1 + 80);
  }
  else
  {
    i = *(_QWORD *)(a1 + 152);
  }
  v50 = *(_QWORD *)(a1 + 64);
  --*(_DWORD *)(v33 - 4);
  v51 = 0x3FFFFFFFCLL;
  if ( v50 )
    v51 = 4LL * (unsigned int)(*(_DWORD *)(v50 - 4) - 1);
  v52 = (unsigned int *)(v50 + v51);
  if ( i )
  {
    v87 = *v52;
    for ( j = *(_DWORD *)(i - 4); v87 < j; *(_DWORD *)(i - 4) = j )
    {
      v54 = i + 104LL * (j - 1);
      if ( *(_DWORD *)v54 != 2 )
        goto LABEL_53;
      v67 = *(_QWORD *)(v54 + 88);
      if ( v67 )
      {
        if ( (*(_QWORD *)(v54 + 88) & 7LL) == 1 )
          v68 = v67 >> 3;
        else
          LODWORD(v68) = *(_DWORD *)(v67 - 8);
      }
      else
      {
        LODWORD(v68) = -1640531495;
      }
      v69 = *(unsigned int *)(a1 + 104);
      v70 = *(_QWORD *)(a1 + 96);
      v71 = v69 - 1;
      v69 *= 24;
      v72 = v70 + v69;
      v73 = 24LL * ((unsigned int)v68 & v71);
      v74 = v70 + v73;
      if ( v73 != v69 )
      {
        for ( k = v70 + v73; v72 != k; k += 24 )
        {
          v76 = *(_DWORD *)(k + 4);
          if ( v76 == 2 )
          {
            if ( (_DWORD)v68 == *(_DWORD *)k && v67 == *(_QWORD *)(k + 8) )
            {
LABEL_77:
              v77 = k + 24;
              if ( v72 == k + 24 )
                v77 = *(_QWORD *)(a1 + 96);
              v78 = *(_DWORD *)(a1 + 108) - 1;
              if ( *(_DWORD *)(v77 + 4) )
              {
                *(_DWORD *)(k + 4) = 1;
                v79 = *(_DWORD *)(a1 + 112);
                *(_DWORD *)(a1 + 108) = v78;
                v80 = v79 + 1;
                if ( v78 < 0x40 )
                  v78 = 64;
                *(_DWORD *)(a1 + 112) = v80;
                if ( v78 < v80 )
                {
                  if ( !(unsigned __int8)sub_186AF10(v74) )
                  {
                    v81 = *(_DWORD *)(a1 + 104);
                    v82 = (_QWORD *)sub_186B270(24LL * v81);
                    v83 = v82;
                    v84 = &v82[3 * v81];
                    if ( v81 )
                    {
                      do
                      {
                        *v82 = 0;
                        v82 += 3;
                        *(v82 - 2) = 0;
                      }
                      while ( v82 != v84 );
                    }
                    sub_2FF5A0(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 104), v83, *(unsigned int *)(a1 + 104));
                    v85 = *(void **)(a1 + 96);
                    if ( v85 )
                      sub_186B220(v85);
                    *(_QWORD *)(a1 + 96) = v83;
                    *(_DWORD *)(a1 + 112) = 0;
                  }
                  i = *(_QWORD *)(a1 + 152);
                }
              }
              else
              {
                *(_DWORD *)(k + 4) = 0;
                *(_DWORD *)(a1 + 108) = v78;
              }
              goto LABEL_53;
            }
          }
          else if ( !v76 )
          {
            goto LABEL_53;
          }
        }
      }
      if ( v70 != v74 )
      {
        for ( k = *(_QWORD *)(a1 + 96); v74 != k; k += 24 )
        {
          v86 = *(_DWORD *)(k + 4);
          if ( v86 == 2 )
          {
            if ( (_DWORD)v68 == *(_DWORD *)k && v67 == *(_QWORD *)(k + 8) )
              goto LABEL_77;
          }
          else if ( !v86 )
          {
            break;
          }
        }
      }
LABEL_53:
      v55 = 0x67FFFFFF98LL;
      if ( i )
        v55 = 104LL * (unsigned int)(*(_DWORD *)(i - 4) - 1);
      v56 = (_QWORD *)(v55 + i);
      v57 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v56 + 6);
      sub_182CBA0(v57, v56 + 8);
      v58 = v56[5];
      if ( v58 )
      {
        v59 = *(unsigned int *)(v58 - 4);
        if ( (_DWORD)v59 )
        {
          v60 = v58 + 32 * v59;
          do
          {
            v61 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v58);
            v62 = v58 + 16;
            v58 += 32;
            sub_182CBA0(v61, v62);
          }
          while ( v58 != v60 );
          v58 = v56[5];
        }
        sub_186B220((void *)(v58 - 8));
      }
      sub_2334C0(v56 + 3);
      v63 = v56[1];
      if ( v63 )
      {
        v64 = v56[2];
        v11 = (*(_DWORD *)(v63 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v64, v63);
      }
      i = *(_QWORD *)(a1 + 152);
      j = *(_DWORD *)(i - 4) - 1;
    }
    v50 = *(_QWORD *)(a1 + 64);
  }
  v65 = *(_QWORD *)(a1 + 48);
  --*(_DWORD *)(v50 - 4);
  --*(_DWORD *)(v65 - 4);
  --*(_DWORD *)(*(_QWORD *)(a1 + 56) - 4LL);
  result = *(_QWORD *)(a1 + 88);
  --*(_DWORD *)(result - 4);
  return result;
}

