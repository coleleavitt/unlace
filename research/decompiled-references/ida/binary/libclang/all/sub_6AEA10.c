void __fastcall sub_6AEA10(__int64 a1, _QWORD *a2)
{
  double *v2; // rbp
  size_t v3; // r14
  double *v4; // r13
  double *v5; // r15
  size_t v6; // rbx
  size_t v7; // rdx
  signed __int64 v8; // rax
  double v9; // rax
  double *v10; // rbx
  size_t v11; // r12
  void *v12; // rbp
  double *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  size_t v16; // r14
  size_t v17; // rdx
  double *v18; // rsi
  signed __int64 v19; // rax
  __int64 v20; // rax
  double **v21; // r9
  double *v22; // r13
  size_t v23; // r14
  double *v24; // r15
  double v25; // rax
  _QWORD *v26; // rbx
  double v27; // rax
  __int64 v28; // rsi
  char *v29; // rax
  __int64 v30; // rdi
  char *v31; // rdx
  char *v32; // rcx
  char *v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  char *v36; // rcx
  char *v37; // r9
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // r8
  void *v42; // rax
  double *v43; // rcx
  double *v44; // rdx
  __m128 v45; // xmm0
  double v46; // rcx
  double *v47; // rdi
  int v48; // eax
  double *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __m128 v53; // xmm0
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // edx
  double *v57; // rsi
  double *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  size_t v62; // r14
  double *v63; // r13
  unsigned __int64 v64; // rsi
  char *v65; // rdi
  unsigned int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // rdx
  double *src; // [rsp+0h] [rbp-88h]
  double *v71; // [rsp+18h] [rbp-70h]
  void *v73; // [rsp+30h] [rbp-58h]
  size_t i; // [rsp+38h] [rbp-50h]
  double v75[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( (_QWORD *)a1 == a2 || a2 == (_QWORD *)(a1 + 32) )
    return;
  v2 = (double *)(a1 + 48);
  do
  {
    v3 = *((_QWORD *)v2 - 1);
    v4 = v2;
    v5 = *((double **)v2 - 2);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6;
    if ( v3 <= v6 )
      v7 = *((_QWORD *)v2 - 1);
    if ( !v7 || (LODWORD(v8) = memcmp(*((const void **)v2 - 2), *(const void **)a1, v7), !(_DWORD)v8) )
    {
      v8 = v3 - v6;
      if ( (__int64)(v3 - v6) >= 0x80000000LL )
        goto LABEL_11;
      if ( v8 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
        goto LABEL_44;
    }
    if ( (int)v8 < 0 )
    {
LABEL_44:
      v73 = v75;
      if ( v5 == v2 )
      {
        v56 = v3 + 1;
        v57 = v75;
        v58 = v2;
        if ( (unsigned int)(v3 + 1) >= 8 )
        {
          LODWORD(v60) = 0;
          do
          {
            v61 = (unsigned int)v60;
            v60 = (unsigned int)(v60 + 8);
            *(double *)((char *)v75 + v61) = *(double *)((char *)v2 + v61);
          }
          while ( (unsigned int)v60 < (v56 & 0xFFFFFFF8) );
          v57 = (double *)((char *)v75 + v60);
          v58 = (double *)((char *)v2 + v60);
        }
        v59 = 0;
        if ( (v56 & 4) != 0 )
        {
          *(_DWORD *)v57 = *(_DWORD *)v58;
          v59 = 4;
        }
        if ( (v56 & 2) != 0 )
        {
          *(_WORD *)((char *)v57 + v59) = *(_WORD *)((char *)v58 + v59);
          v59 += 2;
        }
        if ( (v56 & 1) != 0 )
          *((_BYTE *)v57 + v59) = *((_BYTE *)v58 + v59);
        v5 = v75;
      }
      else
      {
        v27 = *v2;
        v73 = v5;
        v75[0] = v27;
      }
      *((_QWORD *)v2 - 2) = v2;
      v26 = v2 + 2;
      i = v3;
      *(v2 - 1) = 0.0;
      *(_BYTE *)v2 = 0;
      v28 = ((__int64)v2 - a1 - 16) >> 5;
      if ( (__int64)v2 - a1 - 16 > 0 )
      {
        v29 = (char *)(v2 - 4);
        while ( 1 )
        {
          v32 = *((char **)v29 + 2);
          v33 = *((char **)v29 - 2);
          if ( v32 == v29 + 32 )
            break;
          if ( v33 == v29 )
            goto LABEL_56;
          *((_QWORD *)v29 + 2) = v33;
          v30 = *((_QWORD *)v29 + 4);
          *((_QWORD *)v29 + 3) = *((_QWORD *)v29 - 1);
          *((_QWORD *)v29 + 4) = *(_QWORD *)v29;
          if ( !v32 )
            goto LABEL_55;
          *((_QWORD *)v29 - 2) = v32;
          v31 = v32;
          *(_QWORD *)v29 = v30;
LABEL_51:
          *((_QWORD *)v29 - 1) = 0;
          v29 -= 32;
          *v31 = 0;
          if ( !--v28 )
          {
            v5 = (double *)v73;
            v3 = i;
            v42 = *(void **)a1;
            v43 = (double *)(a1 + 16);
            v44 = *(double **)a1;
            if ( *(_QWORD *)a1 != a1 + 16 )
              goto LABEL_68;
LABEL_98:
            if ( v5 != v75 )
            {
              v53 = _mm_loadh_ps(v75);
              *(_QWORD *)a1 = v5;
              *(__m128 *)(a1 + 8) = v53;
LABEL_100:
              v73 = v75;
              v44 = v75;
              goto LABEL_71;
            }
            v44 = v43;
            goto LABEL_103;
          }
        }
        if ( v33 == v29 )
        {
LABEL_56:
          v34 = *((_QWORD *)v29 - 1);
          if ( v34 )
          {
            if ( v34 == 1 )
            {
              *v32 = *v29;
              v54 = *((_QWORD *)v29 - 1);
              v55 = *((_QWORD *)v29 + 2);
              *((_QWORD *)v29 + 3) = v54;
              *(_BYTE *)(v55 + v54) = 0;
              v31 = *((char **)v29 - 2);
              goto LABEL_51;
            }
            if ( (unsigned int)v34 < 8 )
            {
              if ( (v34 & 4) != 0 )
              {
                *(_DWORD *)v32 = *(_DWORD *)v29;
                *(_DWORD *)&v32[(unsigned int)v34 - 4] = *(_DWORD *)&v29[(unsigned int)v34 - 4];
                v32 = *((char **)v29 + 2);
                v34 = *((_QWORD *)v29 - 1);
              }
              else if ( (_DWORD)v34 )
              {
                *v32 = *v29;
                if ( (v34 & 2) == 0 )
                  goto LABEL_62;
                *(_WORD *)&v32[(unsigned int)v34 - 2] = *(_WORD *)&v29[(unsigned int)v34 - 2];
                v32 = *((char **)v29 + 2);
                v34 = *((_QWORD *)v29 - 1);
              }
            }
            else
            {
              *(_QWORD *)v32 = *(_QWORD *)v29;
              *(_QWORD *)&v32[(unsigned int)v34 - 8] = *(_QWORD *)&v29[(unsigned int)v34 - 8];
              v35 = (unsigned __int64)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v36 = &v32[-v35];
              v37 = (char *)(v29 - v36);
              v38 = ((_DWORD)v36 + v34) & 0xFFFFFFF8;
              if ( v38 >= 8 )
              {
                v39 = v38 & 0xFFFFFFF8;
                v40 = 0;
                do
                {
                  v41 = v40;
                  v40 += 8;
                  *(_QWORD *)(v35 + v41) = *(_QWORD *)&v37[v41];
                }
                while ( v40 < v39 );
              }
LABEL_62:
              v32 = *((char **)v29 + 2);
              v34 = *((_QWORD *)v29 - 1);
            }
          }
          *((_QWORD *)v29 + 3) = v34;
          v32[v34] = 0;
          v31 = *((char **)v29 - 2);
          goto LABEL_51;
        }
        *((_QWORD *)v29 + 2) = v33;
        *((_QWORD *)v29 + 3) = *((_QWORD *)v29 - 1);
        *((_QWORD *)v29 + 4) = *(_QWORD *)v29;
LABEL_55:
        *((_QWORD *)v29 - 2) = v29;
        v31 = v29;
        goto LABEL_51;
      }
      v42 = *(void **)a1;
      v44 = *(double **)a1;
      if ( *(_QWORD *)a1 == a1 + 16 )
      {
        v43 = *(double **)a1;
        goto LABEL_98;
      }
LABEL_68:
      if ( v5 != v75 )
      {
        v45 = _mm_loadh_ps(v75);
        v46 = *(double *)(a1 + 16);
        *(_QWORD *)a1 = v5;
        *(__m128 *)(a1 + 8) = v45;
        if ( !v42 )
          goto LABEL_100;
        v73 = v42;
        v75[0] = v46;
LABEL_71:
        i = 0;
        *(_BYTE *)v44 = 0;
        if ( v73 != v75 )
          operator delete(v73, *(_QWORD *)&v75[0] + 1LL);
        goto LABEL_42;
      }
LABEL_103:
      if ( !v3 )
      {
LABEL_111:
        *(_QWORD *)(a1 + 8) = v3;
        *((_BYTE *)v42 + v3) = 0;
        v44 = (double *)v73;
        goto LABEL_71;
      }
      if ( v3 == 1 )
      {
        *(_BYTE *)v44 = LOBYTE(v75[0]);
        v3 = i;
        v42 = *(void **)a1;
        goto LABEL_111;
      }
      if ( (unsigned int)v3 >= 8 )
      {
        v64 = (unsigned __int64)(v44 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v44 = v75[0];
        *(_QWORD *)((char *)v44 + (unsigned int)v3 - 8) = *(size_t *)((char *)&v75[-1] + (unsigned int)v3);
        v65 = (char *)((char *)v75 - ((char *)v44 - v64));
        if ( (((_DWORD)v3 + (_DWORD)v44 - (_DWORD)v64) & 0xFFFFFFF8) >= 8 )
        {
          v66 = (v3 + (_DWORD)v44 - v64) & 0xFFFFFFF8;
          v67 = 0;
          do
          {
            v68 = v67;
            v67 += 8;
            *(_QWORD *)(v64 + v68) = *(_QWORD *)&v65[v68];
          }
          while ( v67 < v66 );
        }
      }
      else
      {
        if ( (v3 & 4) != 0 )
        {
          *(_DWORD *)v44 = LODWORD(v75[0]);
          *(_DWORD *)((char *)v44 + (unsigned int)v3 - 4) = *(_DWORD *)((char *)&i + (unsigned int)v3 + 4);
          v42 = *(void **)a1;
          goto LABEL_110;
        }
        if ( !(_DWORD)v3 )
        {
LABEL_110:
          v3 = i;
          goto LABEL_111;
        }
        *(_BYTE *)v44 = LOBYTE(v75[0]);
        if ( (v3 & 2) != 0 )
        {
          *(_WORD *)((char *)v44 + (unsigned int)v3 - 2) = *(_WORD *)((char *)&i + (unsigned int)v3 + 6);
          v42 = *(void **)a1;
          goto LABEL_110;
        }
      }
      v42 = *(void **)a1;
      goto LABEL_110;
    }
LABEL_11:
    v73 = v75;
    if ( v5 == v2 )
    {
      v47 = v75;
      v48 = v3 + 1;
      v49 = v2;
      if ( (unsigned int)(v3 + 1) >= 8 )
      {
        LODWORD(v51) = 0;
        do
        {
          v52 = (unsigned int)v51;
          v51 = (unsigned int)(v51 + 8);
          *(double *)((char *)v75 + v52) = *(double *)((char *)v2 + v52);
        }
        while ( (unsigned int)v51 < (v48 & 0xFFFFFFF8) );
        v47 = (double *)((char *)v75 + v51);
        v49 = (double *)((char *)v2 + v51);
      }
      v50 = 0;
      if ( (v48 & 4) != 0 )
      {
        *(_DWORD *)v47 = *(_DWORD *)v49;
        v50 = 4;
        if ( (v48 & 2) == 0 )
        {
LABEL_77:
          if ( (v48 & 1) != 0 )
            goto LABEL_84;
LABEL_78:
          v5 = v75;
          goto LABEL_13;
        }
      }
      else if ( (v48 & 2) == 0 )
      {
        goto LABEL_77;
      }
      *(_WORD *)((char *)v47 + v50) = *(_WORD *)((char *)v49 + v50);
      v50 += 2;
      if ( (v48 & 1) != 0 )
      {
LABEL_84:
        *((_BYTE *)v47 + v50) = *((_BYTE *)v49 + v50);
        v5 = v75;
        goto LABEL_13;
      }
      goto LABEL_78;
    }
    v9 = *v2;
    v73 = v5;
    v75[0] = v9;
LABEL_13:
    *((_QWORD *)v2 - 2) = v2;
    v10 = v2 - 4;
    v11 = v3;
    *(v2 - 1) = 0.0;
    *(_BYTE *)v2 = 0;
    v71 = v2;
    v12 = v5;
    v13 = v4;
    for ( i = v3; ; v11 = i )
    {
      v16 = *((_QWORD *)v10 - 1);
      v17 = v11;
      v18 = *((double **)v10 - 2);
      if ( v16 <= v11 )
        v17 = *((_QWORD *)v10 - 1);
      if ( v17 )
      {
        src = *((double **)v10 - 2);
        LODWORD(v19) = memcmp(v12, v18, v17);
        v18 = src;
        if ( (_DWORD)v19 )
          goto LABEL_24;
      }
      v19 = v11 - v16;
      if ( (__int64)(v11 - v16) >= 0x80000000LL )
        break;
      if ( v19 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_24:
        if ( (int)v19 >= 0 )
          break;
      }
      if ( v13 == v10 + 4 )
      {
        if ( v10 != v18 )
        {
          v20 = *(_QWORD *)v10;
          *((_QWORD *)v10 + 2) = v18;
          *((_QWORD *)v10 + 3) = v16;
          *((_QWORD *)v10 + 4) = v20;
LABEL_28:
          *((_QWORD *)v10 - 2) = v10;
          v13 = v10;
          goto LABEL_17;
        }
      }
      else if ( v10 != v18 )
      {
        v14 = *(_QWORD *)v10;
        v15 = *((_QWORD *)v10 + 4);
        *((_QWORD *)v10 + 2) = v18;
        *((_QWORD *)v10 + 3) = v16;
        *((_QWORD *)v10 + 4) = v14;
        if ( v13 )
        {
          *((_QWORD *)v10 - 2) = v13;
          *(_QWORD *)v10 = v15;
          goto LABEL_17;
        }
        goto LABEL_28;
      }
      if ( v10 + 2 == v10 - 2 )
      {
        v13 = v18;
      }
      else
      {
        if ( v16 )
        {
          if ( v16 == 1 )
            *(_BYTE *)v13 = *(_BYTE *)v18;
          else
            memcpy(v13, v18, v16);
          v16 = *((_QWORD *)v10 - 1);
          v13 = *((double **)v10 + 2);
        }
        *((_QWORD *)v10 + 3) = v16;
        *((_BYTE *)v13 + v16) = 0;
        v13 = *((double **)v10 - 2);
      }
LABEL_17:
      *(v10 - 1) = 0.0;
      v10 -= 4;
      *(_BYTE *)v13 = 0;
      v13 = *((double **)v10 + 2);
      v12 = v73;
    }
    v21 = (double **)(v10 + 2);
    v22 = v13;
    v23 = v11;
    v24 = (double *)v12;
    v2 = v71;
    if ( v22 == v10 + 4 )
    {
      if ( v24 != v75 )
      {
        *v21 = v24;
        *(__m128 *)(v10 + 3) = _mm_loadh_ps(v75);
        goto LABEL_66;
      }
LABEL_79:
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          *(_BYTE *)v22 = *(_BYTE *)v24;
          v62 = i;
          v63 = *v21;
          *((_QWORD *)v10 + 3) = i;
          *((_BYTE *)v63 + v62) = 0;
          v22 = (double *)v73;
          goto LABEL_39;
        }
        memcpy(v22, v24, v11);
        v21 = (double **)(v10 + 2);
        v23 = i;
        v22 = *((double **)v10 + 2);
      }
      v21[1] = (double *)v23;
      *((_BYTE *)v22 + v23) = 0;
      v22 = (double *)v73;
      goto LABEL_39;
    }
    if ( v24 == v75 )
      goto LABEL_79;
    v25 = v10[4];
    *v21 = v24;
    *(__m128 *)(v10 + 3) = _mm_loadh_ps(v75);
    if ( v22 )
    {
      v73 = v22;
      v75[0] = v25;
      goto LABEL_39;
    }
LABEL_66:
    v22 = v75;
    v73 = v75;
LABEL_39:
    i = 0;
    *(_BYTE *)v22 = 0;
    if ( v73 != v75 )
      operator delete(v73, *(_QWORD *)&v75[0] + 1LL);
    v26 = v71 + 2;
LABEL_42:
    v2 += 4;
  }
  while ( a2 != v26 );
}

