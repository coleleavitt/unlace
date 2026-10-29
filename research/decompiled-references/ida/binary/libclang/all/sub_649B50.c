void __fastcall sub_649B50(__int64 a1, __int64 a2)
{
  _BYTE **v4; // r11
  unsigned __int64 v5; // rax
  void **v6; // rbx
  unsigned __int64 v7; // r15
  int v8; // r13d
  char *v9; // rcx
  _QWORD *v10; // rax
  char *v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  char *v15; // rcx
  char *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rcx
  char *v19; // rcx
  unsigned int v20; // esi
  void **v21; // r13
  void **v22; // rdi
  void **v23; // r14
  _BYTE **v24; // r14
  void **v25; // r15
  __int64 v26; // r11
  void **v27; // r14
  void **v28; // rdi
  _BYTE **v29; // r12
  __int64 v30; // rbx
  void *v31; // rdi
  __int64 v32; // r14
  void **v33; // r11
  __int64 v34; // r15
  void *v35; // rsi
  _QWORD *v36; // rdi
  _BYTE *v37; // rdx
  void **v38; // rcx
  _BYTE *v39; // rdi
  unsigned int v40; // r9d
  _BYTE **v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  _BYTE **v44; // r12
  __int64 v45; // rbx
  void *v46; // rdi
  unsigned __int64 v47; // rsi
  char *v48; // rdi
  char *v49; // r11
  unsigned int v50; // r9d
  unsigned int v51; // r9d
  unsigned int v52; // edi
  __int64 v53; // r10
  unsigned __int64 v54; // rcx
  unsigned int v55; // esi
  unsigned int v56; // esi
  unsigned int v57; // edi
  __int64 v58; // r9
  __int64 v59; // rsi
  __int64 v60; // r8
  void **v61; // r14
  void **v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // ecx
  __int64 v70; // r8
  __int64 v71; // [rsp+0h] [rbp-40h]
  __int64 v72; // [rsp+0h] [rbp-40h]

  if ( a1 == a2 )
    return;
  v4 = *(_BYTE ***)a2;
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(void ***)a1;
  if ( *(_QWORD *)a2 == a2 + 16 )
  {
    v7 = *(unsigned int *)(a2 + 8);
    v8 = *(_DWORD *)(a2 + 8);
    if ( v5 >= v7 )
    {
      v23 = *(void ***)a1;
      if ( *(_DWORD *)(a2 + 8) )
      {
        v71 = 80 * v7;
        v24 = &v4[10 * v7];
        v25 = *(void ***)a1;
        do
        {
          sub_63DFC0(v25, v4);
          sub_63DFC0(v25 + 4, (_BYTE **)(v26 + 32));
          v25 += 10;
          *((_DWORD *)v25 - 4) = *((_DWORD *)v4 - 4);
          *((_DWORD *)v25 - 3) = *((_DWORD *)v4 - 3);
          *((_BYTE *)v25 - 8) = *((_BYTE *)v4 - 8);
        }
        while ( v4 != v24 );
        v23 = *(void ***)a1;
        v6 = (void **)((char *)v6 + v71);
        v5 = *(unsigned int *)(a1 + 8);
      }
      v27 = &v23[10 * v5];
      while ( v27 != v6 )
      {
        while ( 1 )
        {
          v27 -= 10;
          v28 = (void **)v27[4];
          if ( v28 != v27 + 6 )
            operator delete(v28, (unsigned __int64)v27[6] + 1);
          if ( *v27 == v27 + 2 )
            break;
          operator delete(*v27, (unsigned __int64)v27[2] + 1);
          if ( v27 == v6 )
            goto LABEL_40;
        }
      }
LABEL_40:
      *(_DWORD *)(a1 + 8) = v8;
      v29 = *(_BYTE ***)a2;
      v30 = *(_QWORD *)a2 + 80LL * *(unsigned int *)(a2 + 8);
      if ( *(_QWORD *)a2 != v30 )
      {
        do
        {
          v30 -= 80;
          v31 = *(void **)(v30 + 32);
          if ( v31 != (void *)(v30 + 48) )
            operator delete(v31, *(_QWORD *)(v30 + 48) + 1LL);
          if ( *(_QWORD *)v30 != v30 + 16 )
            operator delete(*(void **)v30, *(_QWORD *)(v30 + 16) + 1LL);
        }
        while ( v29 != (_BYTE **)v30 );
      }
    }
    else
    {
      if ( *(unsigned int *)(a1 + 12) >= v7 )
      {
        if ( !*(_DWORD *)(a1 + 8) )
        {
          v9 = (char *)&v4[10 * v7];
LABEL_7:
          v10 = v6 + 2;
          v11 = (char *)(v4 + 2);
          v12 = (unsigned __int64)v4 + ((v9 - (char *)v4 - 80) & 0xFFFFFFFFFFFFFFF0LL) + 96;
          while ( 1 )
          {
            *(v10 - 2) = v10;
            v19 = *((char **)v11 - 2);
            if ( v19 != v11 )
              break;
            v13 = *((_QWORD *)v11 - 1);
            v20 = v13 + 1;
            if ( (unsigned int)(v13 + 1) >= 8 )
            {
              *v10 = *(_QWORD *)v11;
              *(_QWORD *)((char *)v10 + v20 - 8) = *(_QWORD *)&v11[v20 - 8];
              v54 = (unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              v55 = ((_DWORD)v10 - v54 + v20) & 0xFFFFFFF8;
              if ( v55 >= 8 )
              {
                v56 = v55 & 0xFFFFFFF8;
                v57 = 0;
                do
                {
                  v58 = v57;
                  v57 += 8;
                  *(_QWORD *)(v54 + v58) = *(_QWORD *)(v11 - ((char *)v10 - v54) + v58);
                }
                while ( v57 < v56 );
              }
              goto LABEL_9;
            }
            if ( (v20 & 4) != 0 )
            {
              *(_DWORD *)v10 = *(_DWORD *)v11;
              *(_DWORD *)((char *)v10 + v20 - 4) = *(_DWORD *)&v11[v20 - 4];
              v13 = *((_QWORD *)v11 - 1);
            }
            else if ( (_DWORD)v13 != -1 )
            {
              *(_BYTE *)v10 = *v11;
              if ( (v20 & 2) == 0 )
                goto LABEL_9;
              *(_WORD *)((char *)v10 + v20 - 2) = *(_WORD *)&v11[v20 - 2];
              v13 = *((_QWORD *)v11 - 1);
            }
LABEL_10:
            v14 = v10 + 4;
            *(v10 - 1) = v13;
            v15 = v11 + 32;
            *((_QWORD *)v11 - 2) = v11;
            *((_QWORD *)v11 - 1) = 0;
            *v11 = 0;
            v10[2] = v10 + 4;
            v16 = *((char **)v11 + 2);
            if ( v16 != v11 + 32 )
            {
              v10[2] = v16;
              v10[4] = *((_QWORD *)v11 + 4);
LABEL_12:
              v17 = *((_QWORD *)v11 + 3);
              goto LABEL_13;
            }
            v17 = *((_QWORD *)v11 + 3);
            v40 = v17 + 1;
            if ( (unsigned int)(v17 + 1) >= 8 )
            {
              *v14 = *(_QWORD *)v15;
              *(_QWORD *)((char *)v14 + v40 - 8) = *(_QWORD *)&v15[v40 - 8];
              v47 = (unsigned __int64)(v10 + 5) & 0xFFFFFFFFFFFFFFF8LL;
              v48 = (char *)v14 - v47;
              v49 = (char *)(v15 - v48);
              v50 = ((_DWORD)v48 + v40) & 0xFFFFFFF8;
              if ( v50 >= 8 )
              {
                v51 = v50 & 0xFFFFFFF8;
                v52 = 0;
                do
                {
                  v53 = v52;
                  v52 += 8;
                  *(_QWORD *)(v47 + v53) = *(_QWORD *)&v49[v53];
                }
                while ( v52 < v51 );
              }
              goto LABEL_12;
            }
            if ( (v40 & 4) != 0 )
            {
              *(_DWORD *)v14 = *(_DWORD *)v15;
              *(_DWORD *)((char *)v14 + v40 - 4) = *(_DWORD *)&v15[v40 - 4];
              v17 = *((_QWORD *)v11 + 3);
              goto LABEL_13;
            }
            if ( (_DWORD)v17 != -1 )
            {
              *(_BYTE *)v14 = *v15;
              if ( (v40 & 2) != 0 )
              {
                *(_WORD *)((char *)v14 + v40 - 2) = *(_WORD *)&v15[v40 - 2];
                v17 = *((_QWORD *)v11 + 3);
                goto LABEL_13;
              }
              goto LABEL_12;
            }
LABEL_13:
            v10[3] = v17;
            v11 += 80;
            v10 += 10;
            *((_QWORD *)v11 - 8) = v15;
            v18 = *((_QWORD *)v11 - 4);
            *((_QWORD *)v11 - 7) = 0;
            *(v11 - 48) = 0;
            *(v10 - 4) = v18;
            *((_BYTE *)v10 - 24) = *(v11 - 24);
            if ( v11 == (char *)v12 )
              goto LABEL_64;
          }
          *(v10 - 2) = v19;
          *v10 = *(_QWORD *)v11;
LABEL_9:
          v13 = *((_QWORD *)v11 - 1);
          goto LABEL_10;
        }
        v72 = 80 * v5;
        v32 = 80 * v5;
        v33 = (void **)(a2 + 32);
        v34 = a2 + 32 + 80 * v5;
        while ( 1 )
        {
          v37 = *v6;
          v38 = (void **)*(v33 - 2);
          v39 = *v6;
          if ( *v6 == v6 + 2 )
            break;
          if ( v38 == v33 )
            goto LABEL_80;
          *v6 = v38;
          v35 = v6[2];
          v6[1] = *(v33 - 1);
          v6[2] = *v33;
          if ( !v37 )
            goto LABEL_56;
          *(v33 - 2) = v37;
          *v33 = v35;
LABEL_52:
          *(v33 - 1) = nullptr;
          v36 = v6 + 4;
          *v37 = 0;
          v6 += 10;
          sub_63DFC0(v36, (_BYTE **)v33 + 2);
          *((_DWORD *)v6 - 4) = *((_DWORD *)v33 - 8);
          *((_DWORD *)v6 - 3) = *((_DWORD *)v33 - 7);
          *((_BYTE *)v6 - 8) = *((_BYTE *)v33 - 24);
          if ( v33 == (void **)v34 )
          {
            v41 = *(_BYTE ***)a2;
            v42 = *(unsigned int *)(a2 + 8);
            v4 = (_BYTE **)(*(_QWORD *)a2 + v72);
            goto LABEL_63;
          }
        }
        if ( v38 == v33 )
        {
LABEL_80:
          v59 = (__int64)*(v33 - 1);
          v60 = v59;
          if ( v6 == v33 - 2 )
          {
            v37 = *(v33 - 2);
            goto LABEL_52;
          }
          if ( v59 )
          {
            if ( v59 == 1 )
            {
              *v39 = *(_BYTE *)v33;
              v59 = (__int64)*(v33 - 1);
              v37 = *v6;
            }
            else
            {
              if ( (unsigned int)v59 >= 8 )
              {
                *(_QWORD *)v39 = *v33;
                v63 = (unsigned int)v59;
                v64 = *(__int64 *)((char *)v33 + (unsigned int)v59 - 8);
                v65 = (unsigned __int64)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                *(_QWORD *)&v39[v63 - 8] = v64;
                LODWORD(v63) = (_DWORD)v39 - v65;
                v66 = (char *)v33 - &v39[-v65];
                v67 = (v60 + v63) & 0xFFFFFFF8;
                if ( v67 >= 8 )
                {
                  v68 = v67 & 0xFFFFFFF8;
                  v69 = 0;
                  do
                  {
                    v70 = v69;
                    v69 += 8;
                    *(_QWORD *)(v65 + v70) = *(_QWORD *)(v66 + v70);
                  }
                  while ( v69 < v68 );
                }
LABEL_87:
                v39 = *v6;
                v60 = (__int64)*(v33 - 1);
              }
              else if ( (v59 & 4) != 0 )
              {
                *(_DWORD *)v39 = *(_DWORD *)v33;
                *(_DWORD *)&v39[(unsigned int)v59 - 4] = *(_DWORD *)((char *)v33 + (unsigned int)v59 - 4);
                v39 = *v6;
                v60 = (__int64)*(v33 - 1);
              }
              else if ( (_DWORD)v59 )
              {
                *v39 = *(_BYTE *)v33;
                if ( (v59 & 2) == 0 )
                  goto LABEL_87;
                *(_WORD *)&v39[(unsigned int)v59 - 2] = *(_WORD *)((char *)v33 + (unsigned int)v59 - 2);
                v39 = *v6;
                v60 = (__int64)*(v33 - 1);
              }
              v59 = v60;
              v37 = v39;
            }
          }
          v6[1] = (void *)v59;
          v37[v59] = 0;
          v37 = *(v33 - 2);
          goto LABEL_52;
        }
        *v6 = v38;
        v6[1] = *(v33 - 1);
        v6[2] = *v33;
LABEL_56:
        *(v33 - 2) = v33;
        v37 = v33;
        goto LABEL_52;
      }
      v61 = &v6[10 * v5];
      while ( v61 != v6 )
      {
        while ( 1 )
        {
          v61 -= 10;
          v62 = (void **)v61[4];
          if ( v62 != v61 + 6 )
            operator delete(v62, (unsigned __int64)v61[6] + 1);
          if ( *v61 == v61 + 2 )
            break;
          operator delete(*v61, (unsigned __int64)v61[2] + 1);
          if ( v61 == v6 )
            goto LABEL_96;
        }
      }
LABEL_96:
      *(_DWORD *)(a1 + 8) = 0;
      v32 = 0;
      sub_649850(a1, v7);
      v41 = *(_BYTE ***)a2;
      v42 = *(unsigned int *)(a2 + 8);
      v4 = *(_BYTE ***)a2;
LABEL_63:
      v43 = 80 * v42;
      v6 = (void **)(v32 + *(_QWORD *)a1);
      v9 = (char *)&v41[(unsigned __int64)v43 / 8];
      if ( v32 != v43 )
        goto LABEL_7;
LABEL_64:
      *(_DWORD *)(a1 + 8) = v8;
      v44 = *(_BYTE ***)a2;
      v45 = *(_QWORD *)a2 + 80LL * *(unsigned int *)(a2 + 8);
      if ( *(_QWORD *)a2 != v45 )
      {
        do
        {
          v45 -= 80;
          v46 = *(void **)(v45 + 32);
          if ( v46 != (void *)(v45 + 48) )
            operator delete(v46, *(_QWORD *)(v45 + 48) + 1LL);
          if ( *(_QWORD *)v45 != v45 + 16 )
            operator delete(*(void **)v45, *(_QWORD *)(v45 + 16) + 1LL);
        }
        while ( v44 != (_BYTE **)v45 );
        *(_DWORD *)(a2 + 8) = 0;
        return;
      }
    }
    *(_DWORD *)(a2 + 8) = 0;
    return;
  }
  v21 = &v6[10 * v5];
  if ( v21 != v6 )
  {
    do
    {
      v21 -= 10;
      v22 = (void **)v21[4];
      if ( v22 != v21 + 6 )
        operator delete(v22, (unsigned __int64)v21[6] + 1);
      if ( *v21 != v21 + 2 )
        operator delete(*v21, (unsigned __int64)v21[2] + 1);
    }
    while ( v21 != v6 );
    v6 = *(void ***)a1;
  }
  if ( v6 != (void **)(a1 + 16) )
    free(v6);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0;
}

