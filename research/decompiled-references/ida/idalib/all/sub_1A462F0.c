void __fastcall sub_1A462F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 *v15; // rax
  char *v16; // rdi
  int v17; // edx
  size_t v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  bool v21; // r15
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  char ***v26; // rdi
  unsigned __int64 *v27; // r13
  unsigned __int64 *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 *i; // rbp
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  _QWORD *v35; // r15
  _QWORD *v36; // r12
  _QWORD *v37; // rdi
  void *v38; // rdi
  void **v39; // r15
  void **v40; // r12
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  signed __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  void *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // [rsp+10h] [rbp-D8h]
  __int64 *v51; // [rsp+10h] [rbp-D8h]
  __int64 v52; // [rsp+10h] [rbp-D8h]
  char v53; // [rsp+10h] [rbp-D8h]
  size_t v54; // [rsp+18h] [rbp-D0h]
  void *src; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+28h] [rbp-C0h]
  _BYTE dest[32]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v58[2]; // [rsp+50h] [rbp-98h] BYREF
  char **v59[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v60[4]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v61; // [rsp+90h] [rbp-58h]
  __int64 v62; // [rsp+A0h] [rbp-48h]

  v7 = *(unsigned int *)(a2 + 24);
  v8 = *(__int64 **)(a2 + 16);
  if ( !(_DWORD)v7 || !*v8 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 61) = 0;
    return;
  }
  v10 = &v8[v7];
  while ( 1 )
  {
    v13 = *v8;
    v12 = *(_QWORD *)(*v8 + 8);
    if ( (v12 & 6) != 0 )
    {
      if ( *(char *)(v13 + 29) >= 0 )
      {
        v11 = *(_QWORD *)(v13 - 8);
        LOBYTE(v12) = v12 & 7;
      }
      else
      {
        v11 = sub_B8C660(*v8);
        v12 = *(_QWORD *)(v13 + 8) & 7LL;
      }
      if ( !sub_1A42210(a1, v11, (unsigned __int8)v12 > 2u, a4, a5, a6) && !sub_1A42580(a1, v13, 0) )
        break;
    }
    if ( v10 == ++v8 )
      goto LABEL_11;
  }
  v14 = *(unsigned int *)(a2 + 24);
  v15 = *(__int64 **)(a2 + 16);
  if ( (_DWORD)v14 && !*v15 )
    v15 += v14;
  v16 = dest;
  v17 = 0;
  v18 = (char *)v8 - (char *)v15;
  v19 = 0x400000000LL;
  src = dest;
  v20 = v8 - v15;
  v56 = 0x400000000LL;
  if ( v20 > 4 )
  {
    v54 = (char *)v8 - (char *)v15;
    v51 = v15;
    sub_2237220(&src, dest, v8 - v15, 8);
    v17 = v56;
    v19 = (unsigned __int64)src;
    v18 = v54;
    v15 = v51;
    v16 = (char *)src + 8 * (unsigned int)v56;
  }
  if ( v15 != v8 )
  {
    memcpy(v16, v15, v18);
    v17 = v56;
  }
  LODWORD(v56) = v17 + v20;
  v21 = v17 + (_DWORD)v20 != 0;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = *v8;
        v23 = *(_QWORD *)(*v8 + 8);
        if ( (v23 & 6) == 0 )
          goto LABEL_49;
        if ( *(char *)(v22 + 29) < 0 )
        {
          v24 = sub_B8C660(*v8);
          v23 = *(_QWORD *)(v22 + 8) & 7LL;
        }
        else
        {
          v24 = *(_QWORD *)(v22 - 8);
          LOBYTE(v23) = v23 & 7;
        }
        if ( !sub_1A42210(a1, v24, (unsigned __int8)v23 > 2u, v19, v18, a6) )
        {
          LOBYTE(v25) = sub_1A42580(a1, v22, 0);
          v18 = v25;
          if ( !(_BYTE)v25 )
            break;
        }
        v22 = *v8;
LABEL_49:
        if ( v21 )
        {
          v41 = (unsigned int)v56;
          v19 = HIDWORD(v56);
          v42 = (unsigned int)v56 + 1LL;
          if ( HIDWORD(v56) < v42 )
            goto LABEL_54;
        }
        else
        {
          v19 = HIDWORD(v56);
          v42 = 1;
          LODWORD(v56) = 0;
          v41 = 0;
          if ( !HIDWORD(v56) )
          {
LABEL_54:
            sub_2237220(&src, dest, v42, 8);
            v41 = (unsigned int)v56;
          }
        }
        ++v8;
        v18 = 0;
        v21 = 1;
        *((_QWORD *)src + v41) = v22;
        LODWORD(v56) = v56 + 1;
        if ( v10 == v8 )
          goto LABEL_27;
      }
      if ( !v21 )
      {
        a6 = *v8;
        v18 = 1;
        if ( (*(_QWORD *)(*v8 + 8) & 7LL) != 4 )
          break;
      }
      if ( v10 == ++v8 )
        goto LABEL_27;
    }
    v43 = (unsigned int)v56;
    v19 = HIDWORD(v56);
    v44 = (unsigned int)v56 + 1LL;
    if ( v44 > HIDWORD(v56) )
    {
      v52 = *v8;
      sub_2237220(&src, dest, v44, 8);
      v43 = (unsigned int)v56;
      a6 = v52;
    }
    ++v8;
    v18 = 1;
    *((_QWORD *)src + v43) = a6;
    LODWORD(v56) = v56 + 1;
  }
  while ( v10 != v8 );
LABEL_27:
  v26 = (char ***)(a2 + 16);
  if ( (_DWORD)v56 )
  {
    v45 = 8LL * (unsigned int)v56;
    v46 = *(unsigned int *)(a2 + 28);
    v47 = src;
    v48 = 0;
    *(_DWORD *)(a2 + 24) = 0;
    if ( v45 >> 3 > v46 )
    {
      v53 = v18;
      sub_2237220(v26, a2 + 32, v45 >> 3, 8);
      LOBYTE(v18) = v53;
      v48 = 8LL * *(unsigned int *)(a2 + 24);
    }
    v50 = v18;
    memcpy((void *)(*(_QWORD *)(a2 + 16) + v48), v47, v45);
    *(_DWORD *)(a2 + 24) += v45 >> 3;
    *(_BYTE *)(a2 + 61) = v50;
  }
  else
  {
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    memset(v60, 0, sizeof(v60));
    v58[1] = 0;
    v59[0] = (char **)v60;
    v58[0] = 0;
    v59[1] = (char **)0x100000000LL;
    v61 = 0;
    v62 = 0;
    sub_AEA1F0(v26, v59);
    v27 = *(unsigned __int64 **)(a2 + 64);
    v28 = *(unsigned __int64 **)(a2 + 72);
    *(_QWORD *)(a2 + 40) = v60[1];
    *(_DWORD *)(a2 + 48) = v60[2];
    *(_QWORD *)(a2 + 52) = *(_QWORD *)((char *)&v60[2] + 4);
    *(_WORD *)(a2 + 60) = WORD2(v60[3]);
    v29 = v61;
    *(_QWORD *)&v61 = 0;
    *(_QWORD *)(a2 + 64) = v29;
    v30 = *((_QWORD *)&v61 + 1);
    *((_QWORD *)&v61 + 1) = 0;
    *(_QWORD *)(a2 + 72) = v30;
    v31 = v62;
    v62 = 0;
    *(_QWORD *)(a2 + 80) = v31;
    for ( i = v27; v28 != i; i += 3 )
    {
      v33 = *i;
      if ( *i )
      {
        v34 = i[1];
        if ( v34 )
        {
          if ( v33 < v34 || v33 > v34 + 14848 )
          {
            v35 = *(_QWORD **)(v33 + 528);
            v36 = &v35[8 * (unsigned __int64)*(unsigned int *)(v33 + 536)];
            if ( v35 != v36 )
            {
              do
              {
                while ( 1 )
                {
                  v36 -= 8;
                  v37 = (_QWORD *)v36[3];
                  if ( v37 == v36 + 5 )
                    break;
                  operator delete(v37);
                  if ( v35 == v36 )
                    goto LABEL_35;
                }
              }
              while ( v35 != v36 );
LABEL_35:
              v36 = *(_QWORD **)(v33 + 528);
            }
            if ( v36 != (_QWORD *)(v33 + 544) )
              free(v36);
            v38 = *(void **)(v33 + 416);
            if ( v38 != (void *)(v33 + 432) )
              free(v38);
            v39 = (void **)(v33 + 384);
            v40 = (void **)(v33 + 64);
            do
            {
              while ( *v39 != v39 + 2 )
              {
                operator delete(*v39);
                v39 -= 4;
                if ( v39 == v40 )
                  goto LABEL_43;
              }
              v39 -= 4;
            }
            while ( v39 != v40 );
LABEL_43:
            operator delete((void *)v33, 0x3A0u);
          }
          else
          {
            v49 = *(unsigned int *)(v34 + 14976);
            *(_DWORD *)(v34 + 14976) = v49 + 1;
            *(_QWORD *)(v34 + 8 * v49 + 14848) = v33;
          }
        }
      }
    }
    if ( v27 )
      operator delete(v27);
    sub_17A1D90(v58);
  }
  if ( src != dest )
    free(src);
}
