void __fastcall sub_64AB70(__int64 a1, __int64 a2)
{
  _BYTE **v4; // r13
  unsigned __int64 v5; // rbx
  void **v6; // r14
  void **v7; // rbx
  void **v8; // rdi
  void **v9; // rdi
  void **v10; // rdi
  unsigned __int64 v11; // rbx
  _BYTE **v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE **v15; // r15
  _QWORD *v16; // rdx
  char *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  char *v20; // rcx
  char *v21; // rsi
  __int64 v22; // rsi
  _QWORD *v23; // rdi
  char *v24; // rcx
  char *v25; // rsi
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  char *v28; // rcx
  char *v29; // rsi
  __int64 v30; // r9
  char *v31; // rcx
  unsigned int v32; // esi
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rax
  unsigned __int64 v38; // r15
  void **v39; // r11
  _BYTE **v40; // rbx
  __int64 v41; // r11
  __int64 v42; // r11
  _BYTE **v43; // rsi
  __int64 v44; // r11
  __int64 v45; // r11
  void **v46; // rbx
  void **v47; // rdi
  void **v48; // rdi
  void **v49; // rdi
  _BYTE **v50; // r12
  unsigned __int64 v51; // rbx
  void *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  _BYTE **v55; // rsi
  _BYTE **v56; // r11
  unsigned int v57; // esi
  unsigned int v58; // r9d
  unsigned int v59; // r9d
  _BYTE **v60; // r12
  unsigned __int64 v61; // rbx
  void *v62; // rdi
  void *v63; // rdi
  void *v64; // rdi
  unsigned __int64 v65; // rcx
  unsigned int v66; // esi
  unsigned int v67; // esi
  unsigned int v68; // edi
  __int64 v69; // r9
  unsigned __int64 v70; // r9
  char *v71; // rdi
  char *v72; // r11
  unsigned int v73; // esi
  unsigned int v74; // esi
  unsigned int v75; // edi
  __int64 v76; // r10
  unsigned __int64 v77; // rsi
  char *v78; // rdi
  char *v79; // r11
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  unsigned int v82; // edi
  __int64 v83; // r10
  unsigned __int64 v84; // rsi
  char *v85; // rdi
  char *v86; // r11
  unsigned int v87; // r9d
  unsigned int v88; // r9d
  unsigned int v89; // edi
  __int64 v90; // r10
  unsigned int v91; // [rsp+0h] [rbp-3Ch]

  if ( a1 == a2 )
    return;
  v4 = *(_BYTE ***)a2;
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(void ***)a1;
  if ( *(_QWORD *)a2 == a2 + 16 )
  {
    v91 = *(_DWORD *)(a2 + 8);
    if ( v5 >= v91 )
    {
      v37 = *(void ***)a1;
      if ( v91 )
      {
        v38 = (unsigned __int64)v91 << 7;
        v39 = *(void ***)a1;
        v40 = (_BYTE **)((char *)v4 + v38);
        do
        {
          sub_63DFC0(v39, v4);
          sub_63DFC0((_QWORD *)(v41 + 32), v4 + 4);
          sub_63DFC0((_QWORD *)(v42 + 64), v4 + 8);
          v43 = v4 + 12;
          v4 += 16;
          sub_63DFC0((_QWORD *)(v44 + 96), v43);
          v39 = (void **)(v45 + 128);
        }
        while ( v4 != v40 );
        v37 = *(void ***)a1;
        v5 = *(unsigned int *)(a1 + 8);
        v6 = (void **)((char *)v6 + v38);
      }
      v46 = &v37[16 * v5];
      while ( v46 != v6 )
      {
        while ( 1 )
        {
          v46 -= 16;
          v47 = (void **)v46[12];
          if ( v47 != v46 + 14 )
            operator delete(v47, (unsigned __int64)v46[14] + 1);
          v48 = (void **)v46[8];
          if ( v48 != v46 + 10 )
            operator delete(v48, (unsigned __int64)v46[10] + 1);
          v49 = (void **)v46[4];
          if ( v49 != v46 + 6 )
            operator delete(v49, (unsigned __int64)v46[6] + 1);
          if ( *v46 == v46 + 2 )
            break;
          operator delete(*v46, (unsigned __int64)v46[2] + 1);
          if ( v46 == v6 )
            goto LABEL_63;
        }
      }
LABEL_63:
      *(_DWORD *)(a1 + 8) = v91;
      v50 = *(_BYTE ***)a2;
      v51 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 7);
      if ( *(_QWORD *)a2 != v51 )
      {
        do
        {
          v51 -= 128LL;
          v52 = *(void **)(v51 + 96);
          if ( v52 != (void *)(v51 + 112) )
            operator delete(v52, *(_QWORD *)(v51 + 112) + 1LL);
          v53 = *(void **)(v51 + 64);
          if ( v53 != (void *)(v51 + 80) )
            operator delete(v53, *(_QWORD *)(v51 + 80) + 1LL);
          v54 = *(void **)(v51 + 32);
          if ( v54 != (void *)(v51 + 48) )
            operator delete(v54, *(_QWORD *)(v51 + 48) + 1LL);
          if ( *(_QWORD *)v51 != v51 + 16 )
            operator delete(*(void **)v51, *(_QWORD *)(v51 + 16) + 1LL);
        }
        while ( v50 != (_BYTE **)v51 );
      }
    }
    else
    {
      if ( *(unsigned int *)(a1 + 12) >= (unsigned __int64)v91 )
      {
        if ( !*(_DWORD *)(a1 + 8) )
        {
          v15 = &v4[16 * (unsigned __int64)v91];
          goto LABEL_17;
        }
        v11 = v5 << 7;
        do
        {
          sub_63DFC0(v6, v4);
          sub_63DFC0(v6 + 4, v4 + 4);
          sub_63DFC0(v6 + 8, v4 + 8);
          v55 = v4 + 12;
          v4 += 16;
          sub_63DFC0(v6 + 12, v55);
          v6 += 16;
        }
        while ( v4 != v56 );
        v12 = *(_BYTE ***)a2;
        v13 = *(unsigned int *)(a2 + 8);
        v4 = (_BYTE **)(*(_QWORD *)a2 + v11);
      }
      else
      {
        v7 = &v6[16 * v5];
        while ( v7 != v6 )
        {
          while ( 1 )
          {
            v7 -= 16;
            v8 = (void **)v7[12];
            if ( v8 != v7 + 14 )
              operator delete(v8, (unsigned __int64)v7[14] + 1);
            v9 = (void **)v7[8];
            if ( v9 != v7 + 10 )
              operator delete(v9, (unsigned __int64)v7[10] + 1);
            v10 = (void **)v7[4];
            if ( v10 != v7 + 6 )
              operator delete(v10, (unsigned __int64)v7[6] + 1);
            if ( *v7 == v7 + 2 )
              break;
            operator delete(*v7, (unsigned __int64)v7[2] + 1);
            if ( v7 == v6 )
              goto LABEL_15;
          }
        }
LABEL_15:
        *(_DWORD *)(a1 + 8) = 0;
        v11 = 0;
        sub_64A630(a1, v91);
        v12 = *(_BYTE ***)a2;
        v13 = *(unsigned int *)(a2 + 8);
        v4 = *(_BYTE ***)a2;
      }
      v14 = v13 << 7;
      v15 = (_BYTE **)((char *)v12 + v14);
      v6 = (void **)(v11 + *(_QWORD *)a1);
      if ( v14 != v11 )
      {
LABEL_17:
        v16 = v6 + 2;
        v17 = (char *)(v4 + 2);
        while ( 1 )
        {
          *(v16 - 2) = v16;
          v31 = *((char **)v17 - 2);
          if ( v31 != v17 )
            break;
          v18 = *((_QWORD *)v17 - 1);
          v32 = v18 + 1;
          if ( (unsigned int)(v18 + 1) >= 8 )
          {
            *v16 = *(_QWORD *)v17;
            *(_QWORD *)((char *)v16 + v32 - 8) = *(_QWORD *)&v17[v32 - 8];
            v65 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v66 = ((_DWORD)v16 - v65 + v32) & 0xFFFFFFF8;
            if ( v66 >= 8 )
            {
              v67 = v66 & 0xFFFFFFF8;
              v68 = 0;
              do
              {
                v69 = v68;
                v68 += 8;
                *(_QWORD *)(v65 + v69) = *(_QWORD *)(v17 - ((char *)v16 - v65) + v69);
              }
              while ( v68 < v67 );
            }
            goto LABEL_19;
          }
          if ( (v32 & 4) != 0 )
          {
            *(_DWORD *)v16 = *(_DWORD *)v17;
            *(_DWORD *)((char *)v16 + v32 - 4) = *(_DWORD *)&v17[v32 - 4];
            v18 = *((_QWORD *)v17 - 1);
          }
          else if ( (_DWORD)v18 != -1 )
          {
            *(_BYTE *)v16 = *v17;
            if ( (v32 & 2) == 0 )
              goto LABEL_19;
            *(_WORD *)((char *)v16 + v32 - 2) = *(_WORD *)&v17[v32 - 2];
            v18 = *((_QWORD *)v17 - 1);
          }
LABEL_20:
          v19 = v16 + 4;
          *(v16 - 1) = v18;
          v20 = v17 + 32;
          *((_QWORD *)v17 - 2) = v17;
          *((_QWORD *)v17 - 1) = 0;
          *v17 = 0;
          v16[2] = v16 + 4;
          v21 = *((char **)v17 + 2);
          if ( v21 != v17 + 32 )
          {
            v16[2] = v21;
            v16[4] = *((_QWORD *)v17 + 4);
LABEL_22:
            v22 = *((_QWORD *)v17 + 3);
            goto LABEL_23;
          }
          v22 = *((_QWORD *)v17 + 3);
          v59 = v22 + 1;
          if ( (unsigned int)(v22 + 1) >= 8 )
          {
            *v19 = *(_QWORD *)v20;
            *(_QWORD *)((char *)v19 + v59 - 8) = *(_QWORD *)&v20[v59 - 8];
            v84 = (unsigned __int64)(v16 + 5) & 0xFFFFFFFFFFFFFFF8LL;
            v85 = (char *)v19 - v84;
            v86 = (char *)(v20 - v85);
            v87 = ((_DWORD)v85 + v59) & 0xFFFFFFF8;
            if ( v87 >= 8 )
            {
              v88 = v87 & 0xFFFFFFF8;
              v89 = 0;
              do
              {
                v90 = v89;
                v89 += 8;
                *(_QWORD *)(v84 + v90) = *(_QWORD *)&v86[v90];
              }
              while ( v89 < v88 );
            }
            goto LABEL_22;
          }
          if ( (v59 & 4) != 0 )
          {
            *(_DWORD *)v19 = *(_DWORD *)v20;
            *(_DWORD *)((char *)v19 + v59 - 4) = *(_DWORD *)&v20[v59 - 4];
            v22 = *((_QWORD *)v17 + 3);
          }
          else if ( (_DWORD)v22 != -1 )
          {
            *(_BYTE *)v19 = *v20;
            if ( (v59 & 2) == 0 )
              goto LABEL_22;
            *(_WORD *)((char *)v19 + v59 - 2) = *(_WORD *)&v20[v59 - 2];
            v22 = *((_QWORD *)v17 + 3);
          }
LABEL_23:
          v23 = v16 + 8;
          v16[3] = v22;
          *((_QWORD *)v17 + 2) = v20;
          v24 = v17 + 64;
          *((_QWORD *)v17 + 3) = 0;
          v17[32] = 0;
          v16[6] = v16 + 8;
          v25 = *((char **)v17 + 6);
          if ( v25 != v17 + 64 )
          {
            v16[6] = v25;
            v16[8] = *((_QWORD *)v17 + 8);
LABEL_25:
            v26 = *((_QWORD *)v17 + 7);
            goto LABEL_26;
          }
          v26 = *((_QWORD *)v17 + 7);
          v58 = v26 + 1;
          if ( (unsigned int)(v26 + 1) >= 8 )
          {
            *v23 = *(_QWORD *)v24;
            *(_QWORD *)((char *)v23 + v58 - 8) = *(_QWORD *)&v24[v58 - 8];
            v77 = (unsigned __int64)(v16 + 9) & 0xFFFFFFFFFFFFFFF8LL;
            v78 = (char *)v23 - v77;
            v79 = (char *)(v24 - v78);
            v80 = ((_DWORD)v78 + v58) & 0xFFFFFFF8;
            if ( v80 >= 8 )
            {
              v81 = v80 & 0xFFFFFFF8;
              v82 = 0;
              do
              {
                v83 = v82;
                v82 += 8;
                *(_QWORD *)(v77 + v83) = *(_QWORD *)&v79[v83];
              }
              while ( v82 < v81 );
            }
            goto LABEL_25;
          }
          if ( (v58 & 4) != 0 )
          {
            *(_DWORD *)v23 = *(_DWORD *)v24;
            *(_DWORD *)((char *)v23 + v58 - 4) = *(_DWORD *)&v24[v58 - 4];
            v26 = *((_QWORD *)v17 + 7);
          }
          else if ( (_DWORD)v26 != -1 )
          {
            *(_BYTE *)v23 = *v24;
            if ( (v58 & 2) == 0 )
              goto LABEL_25;
            *(_WORD *)((char *)v23 + v58 - 2) = *(_WORD *)&v24[v58 - 2];
            v26 = *((_QWORD *)v17 + 7);
          }
LABEL_26:
          v27 = v16 + 12;
          v16[7] = v26;
          *((_QWORD *)v17 + 6) = v24;
          v28 = v17 + 96;
          *((_QWORD *)v17 + 7) = 0;
          v17[64] = 0;
          v16[10] = v16 + 12;
          v29 = *((char **)v17 + 10);
          v30 = *((_QWORD *)v17 + 11);
          if ( v29 == v17 + 96 )
          {
            v57 = v30 + 1;
            if ( (unsigned int)(v30 + 1) >= 8 )
            {
              *v27 = *(_QWORD *)v28;
              *(_QWORD *)((char *)v27 + v57 - 8) = *(_QWORD *)&v28[v57 - 8];
              v70 = (unsigned __int64)(v16 + 13) & 0xFFFFFFFFFFFFFFF8LL;
              v71 = (char *)v27 - v70;
              v72 = (char *)(v28 - v71);
              v73 = ((_DWORD)v71 + v57) & 0xFFFFFFF8;
              if ( v73 >= 8 )
              {
                v74 = v73 & 0xFFFFFFF8;
                v75 = 0;
                do
                {
                  v76 = v75;
                  v75 += 8;
                  *(_QWORD *)(v70 + v76) = *(_QWORD *)&v72[v76];
                }
                while ( v75 < v74 );
              }
LABEL_83:
              v30 = *((_QWORD *)v17 + 11);
              goto LABEL_28;
            }
            if ( (v57 & 4) != 0 )
            {
              *(_DWORD *)v27 = *(_DWORD *)v28;
              *(_DWORD *)((char *)v27 + v57 - 4) = *(_DWORD *)&v28[v57 - 4];
              v30 = *((_QWORD *)v17 + 11);
              goto LABEL_28;
            }
            if ( (_DWORD)v30 != -1 )
            {
              *(_BYTE *)v27 = *v28;
              if ( (v57 & 2) != 0 )
              {
                *(_WORD *)((char *)v27 + v57 - 2) = *(_WORD *)&v28[v57 - 2];
                v30 = *((_QWORD *)v17 + 11);
                goto LABEL_28;
              }
              goto LABEL_83;
            }
          }
          else
          {
            v16[10] = v29;
            v16[12] = *((_QWORD *)v17 + 12);
          }
LABEL_28:
          v16[11] = v30;
          v16 += 16;
          v17 += 128;
          *((_QWORD *)v17 - 6) = v28;
          *((_QWORD *)v17 - 5) = 0;
          *(v17 - 32) = 0;
          if ( v16 == (_BYTE **)((char *)v15 + (char *)v6 - (char *)v4 + 16) )
            goto LABEL_94;
        }
        *(v16 - 2) = v31;
        *v16 = *(_QWORD *)v17;
LABEL_19:
        v18 = *((_QWORD *)v17 - 1);
        goto LABEL_20;
      }
LABEL_94:
      *(_DWORD *)(a1 + 8) = v91;
      v60 = *(_BYTE ***)a2;
      v61 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 7);
      if ( *(_QWORD *)a2 != v61 )
      {
        do
        {
          v61 -= 128LL;
          v62 = *(void **)(v61 + 96);
          if ( v62 != (void *)(v61 + 112) )
            operator delete(v62, *(_QWORD *)(v61 + 112) + 1LL);
          v63 = *(void **)(v61 + 64);
          if ( v63 != (void *)(v61 + 80) )
            operator delete(v63, *(_QWORD *)(v61 + 80) + 1LL);
          v64 = *(void **)(v61 + 32);
          if ( v64 != (void *)(v61 + 48) )
            operator delete(v64, *(_QWORD *)(v61 + 48) + 1LL);
          if ( *(_QWORD *)v61 != v61 + 16 )
            operator delete(*(void **)v61, *(_QWORD *)(v61 + 16) + 1LL);
        }
        while ( v60 != (_BYTE **)v61 );
        *(_DWORD *)(a2 + 8) = 0;
        return;
      }
    }
    *(_DWORD *)(a2 + 8) = 0;
    return;
  }
  v33 = &v6[16 * v5];
  if ( v33 != v6 )
  {
    do
    {
      v33 -= 16;
      v34 = (void **)v33[12];
      if ( v34 != v33 + 14 )
        operator delete(v34, (unsigned __int64)v33[14] + 1);
      v35 = (void **)v33[8];
      if ( v35 != v33 + 10 )
        operator delete(v35, (unsigned __int64)v33[10] + 1);
      v36 = (void **)v33[4];
      if ( v36 != v33 + 6 )
        operator delete(v36, (unsigned __int64)v33[6] + 1);
      if ( *v33 != v33 + 2 )
        operator delete(*v33, (unsigned __int64)v33[2] + 1);
    }
    while ( v33 != v6 );
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

