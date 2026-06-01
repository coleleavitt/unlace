void __fastcall sub_6AFB70(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v9; // rax
  double *v10; // rdx
  double *v11; // r10
  double *v12; // rsi
  double *v13; // r10
  __int64 v14; // rbp
  __int64 v15; // r13
  double **v16; // rbx
  __int64 v17; // rax
  size_t v18; // r14
  size_t v19; // r10
  double *v20; // rdi
  size_t v21; // rdx
  int v22; // eax
  __int64 v23; // r14
  double *v24; // rsi
  double *v25; // r11
  double *v26; // r13
  _DWORD *v27; // rax
  double v28; // rcx
  double *v29; // r15
  size_t v30; // rax
  __int64 v31; // r9
  void *v32; // r15
  __int64 v33; // r14
  size_t v34; // r13
  double *v35; // rsi
  size_t v36; // rdx
  __int64 v37; // r8
  size_t v38; // r12
  double *v39; // rdi
  signed __int64 v40; // rax
  __int64 v41; // rbp
  double *v42; // r11
  double **v43; // r13
  double *v44; // rax
  size_t v45; // rax
  double *v46; // rax
  double v47; // rcx
  double *v48; // r8
  _DWORD *v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdi
  double *v52; // r12
  double *v53; // rax
  double *v54; // rsi
  double *v55; // rdx
  unsigned __int64 v56; // rcx
  signed __int64 v57; // rdi
  unsigned int v58; // edx
  unsigned int v59; // esi
  __int64 v60; // r8
  __int64 v61; // rbp
  _BYTE **v62; // rsi
  double *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned __int64 v66; // rsi
  char *v67; // rax
  char *v68; // r8
  unsigned int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // rdi
  __int64 v72; // [rsp+0h] [rbp-88h]
  _QWORD *v73; // [rsp+0h] [rbp-88h]
  size_t v74; // [rsp+8h] [rbp-80h]
  __int64 v75; // [rsp+10h] [rbp-78h]
  __int64 v76; // [rsp+10h] [rbp-78h]
  void *v80; // [rsp+30h] [rbp-58h]
  size_t v81; // [rsp+38h] [rbp-50h]
  double v82[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a4;
  v5 = a1;
  v6 = a3;
  if ( a2 < (a3 - 1) / 2 )
  {
    v7 = a2;
    v75 = (a3 - 1) / 2;
    while ( 1 )
    {
      v14 = 2 * (v7 + 1);
      v15 = (v7 + 1) << 6;
      v16 = (double **)(a1 + v15);
      v17 = a1 + v15 - 32;
      v18 = *(_QWORD *)(a1 + v15 + 8);
      v19 = *(_QWORD *)(v17 + 8);
      v20 = *(double **)(a1 + v15);
      v21 = v19;
      if ( v18 <= v19 )
        v21 = *(_QWORD *)(a1 + v15 + 8);
      if ( v21 )
      {
        v74 = *(_QWORD *)(v17 + 8);
        v22 = memcmp(v20, *(const void **)v17, v21);
        v19 = v74;
        if ( v22 )
          goto LABEL_16;
      }
      v23 = v18 - v19;
      if ( v23 >= 0x80000000LL )
        goto LABEL_3;
      if ( v23 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        break;
LABEL_17:
      --v14;
      v15 = 32 * v14;
      v16 = (double **)(a1 + 32 * v14);
      v20 = *v16;
LABEL_3:
      v9 = a1 + 32 * v7;
      v10 = *(double **)v9;
      v11 = *(double **)v9;
      v12 = (double *)(v16 + 2);
      if ( *(_QWORD *)v9 == v9 + 16 )
      {
        if ( v12 != v20 )
        {
          *(_QWORD *)v9 = v20;
          *(_QWORD *)(v9 + 8) = v16[1];
          *(_QWORD *)(v9 + 16) = v16[2];
          v10 = (double *)(v16 + 2);
LABEL_30:
          *v16 = v10;
          goto LABEL_7;
        }
      }
      else if ( v12 != v20 )
      {
        *(_QWORD *)v9 = v20;
        v13 = *(double **)(v9 + 16);
        *(_QWORD *)(v9 + 8) = v16[1];
        *(_QWORD *)(v9 + 16) = v16[2];
        if ( v10 )
        {
          *v16 = v10;
          v16[2] = v13;
          goto LABEL_7;
        }
        v10 = (double *)(v16 + 2);
        goto LABEL_30;
      }
      v24 = v16[1];
      v25 = v24;
      if ( 32 * v7 == v15 )
      {
        v10 = v20;
      }
      else
      {
        if ( !v24 )
          goto LABEL_27;
        if ( v24 != (double *)((char *)&dword_0 + 1) )
        {
          if ( (unsigned int)v24 >= 8 )
          {
            *v11 = *v20;
            *(double *)((char *)v11 + (unsigned int)v24 - 8) = *(double *)((char *)v20 + (unsigned int)v24 - 8);
            v56 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v57 = (char *)v20 - ((char *)v11 - v56);
            if ( (((_DWORD)v24 + (_DWORD)v11 - (_DWORD)v56) & 0xFFFFFFF8) >= 8 )
            {
              v58 = ((_DWORD)v24 + (_DWORD)v11 - v56) & 0xFFFFFFF8;
              v59 = 0;
              do
              {
                v60 = v59;
                v59 += 8;
                *(_QWORD *)(v56 + v60) = *(_QWORD *)(v57 + v60);
              }
              while ( v59 < v58 );
            }
LABEL_25:
            v11 = *(double **)v9;
            v25 = v16[1];
          }
          else if ( ((unsigned __int8)v24 & 4) != 0 )
          {
            *(_DWORD *)v11 = *(_DWORD *)v20;
            *(_DWORD *)((char *)v11 + (unsigned int)v24 - 4) = *(_DWORD *)((char *)v20 + (unsigned int)v24 - 4);
            v11 = *(double **)v9;
            v25 = v16[1];
          }
          else if ( (_DWORD)v24 )
          {
            *(_BYTE *)v11 = *(_BYTE *)v20;
            if ( ((unsigned __int8)v24 & 2) == 0 )
              goto LABEL_25;
            *(_WORD *)((char *)v11 + (unsigned int)v24 - 2) = *(_WORD *)((char *)v20 + (unsigned int)v24 - 2);
            v11 = *(double **)v9;
            v25 = v16[1];
          }
          v24 = v25;
          v10 = v11;
LABEL_27:
          *(_QWORD *)(v9 + 8) = v24;
          *((_BYTE *)v24 + (_QWORD)v10) = 0;
          v10 = *v16;
          goto LABEL_7;
        }
        *(_BYTE *)v11 = *(_BYTE *)v20;
        v54 = v16[1];
        v55 = *(double **)v9;
        *(_QWORD *)(v9 + 8) = v54;
        *((_BYTE *)v54 + (_QWORD)v55) = 0;
        v10 = *v16;
      }
LABEL_7:
      v16[1] = nullptr;
      *(_BYTE *)v10 = 0;
      if ( v14 >= v75 )
      {
        v6 = a3;
        v4 = a4;
        v5 = a1;
        goto LABEL_32;
      }
      v7 = v14;
    }
    v22 = v23;
LABEL_16:
    if ( v22 >= 0 )
      goto LABEL_3;
    goto LABEL_17;
  }
  v14 = a2;
  v16 = (double **)(a1 + 32 * a2);
LABEL_32:
  if ( (v6 & 1) != 0 )
  {
    v26 = (double *)*v4;
    v27 = v4 + 2;
    v80 = v82;
    if ( v4 + 2 != (_QWORD *)v26 )
    {
LABEL_36:
      v28 = *((double *)v4 + 2);
      v80 = v26;
      v82[0] = v28;
      goto LABEL_37;
    }
  }
  else
  {
    if ( (v6 - 2) / 2 == v14 )
    {
      v61 = v14 + 1;
      v73 = v4;
      v62 = (_BYTE **)(v5 + (v61 << 6) - 32);
      v14 = 2 * v61 - 1;
      sub_6A7990(v16, v62);
      v4 = v73;
      v16 = (double **)(v5 + 32 * v14);
    }
    v26 = (double *)*v4;
    v27 = v4 + 2;
    v80 = v82;
    if ( v26 != (double *)(v4 + 2) )
      goto LABEL_36;
  }
  v48 = v82;
  v49 = v27;
  v50 = v4[1] + 1LL;
  if ( (unsigned int)v50 >= 8 )
  {
    LODWORD(v64) = 0;
    do
    {
      v65 = (unsigned int)v64;
      v64 = (unsigned int)(v64 + 8);
      *(double *)((char *)v82 + v65) = *(double *)((char *)v27 + v65);
    }
    while ( (unsigned int)v64 < ((unsigned int)v50 & 0xFFFFFFF8) );
    v48 = (double *)((char *)v82 + v64);
    v49 = (_DWORD *)((char *)v27 + v64);
  }
  v51 = 0;
  if ( (v50 & 4) != 0 )
  {
    *(_DWORD *)v48 = *v49;
    v51 = 4;
  }
  if ( (v50 & 2) != 0 )
  {
    *(_WORD *)((char *)v48 + v51) = *(_WORD *)((char *)v49 + v51);
    v51 += 2;
  }
  if ( (v50 & 1) != 0 )
    *((_BYTE *)v48 + v51) = *((_BYTE *)v49 + v51);
  v26 = v82;
LABEL_37:
  *v4 = v27;
  v29 = (double *)v4[1];
  v4[1] = 0;
  v81 = (size_t)v29;
  *((_BYTE *)v4 + 16) = 0;
  if ( a2 < v14 )
  {
    v30 = (size_t)v29;
    v31 = v5;
    v32 = v26;
    v33 = (v14 - 1) / 2;
    v34 = v30;
    while ( 1 )
    {
      v36 = v34;
      v37 = 32 * v33;
      v16 = (double **)(v31 + 32 * v33);
      v38 = (size_t)v16[1];
      v39 = *v16;
      if ( v38 <= v34 )
        v36 = (size_t)v16[1];
      if ( v36 )
      {
        v76 = v31;
        LODWORD(v40) = memcmp(v39, v32, v36);
        v37 = 32 * v33;
        v31 = v76;
        if ( (_DWORD)v40 )
          goto LABEL_50;
      }
      v40 = v38 - v34;
      if ( (__int64)(v38 - v34) >= 0x80000000LL )
        goto LABEL_60;
      if ( v40 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_50:
        if ( (int)v40 >= 0 )
        {
LABEL_60:
          v45 = v34;
          v26 = (double *)v32;
          v29 = (double *)v45;
          v16 = (double **)(v31 + 32 * v14);
          v46 = *v16;
          v42 = (double *)(v16 + 2);
          if ( *v16 == (double *)(v16 + 2) )
            goto LABEL_81;
          goto LABEL_61;
        }
      }
      v41 = 32 * v14;
      v42 = (double *)(v16 + 2);
      v43 = (double **)(v31 + v41);
      v44 = *(double **)(v31 + v41);
      if ( v44 == (double *)(v31 + v41 + 16) )
      {
        if ( v39 != v42 )
        {
          *v43 = v39;
          v43[1] = v16[1];
          v43[2] = v16[2];
          v44 = (double *)(v16 + 2);
LABEL_54:
          *v16 = v42;
          goto LABEL_42;
        }
      }
      else if ( v39 != v42 )
      {
        *v43 = v39;
        v35 = v43[2];
        v43[1] = v16[1];
        v43[2] = v16[2];
        if ( v44 )
        {
          *v16 = v44;
          v16[2] = v35;
          goto LABEL_42;
        }
        v44 = (double *)(v16 + 2);
        goto LABEL_54;
      }
      if ( v37 == v41 )
      {
        v44 = v39;
      }
      else
      {
        if ( !v38 )
          goto LABEL_59;
        if ( v38 != 1 )
        {
          v72 = v31;
          memcpy(*(void **)(v31 + v41), v39, v38);
          v38 = (size_t)v16[1];
          v44 = *v43;
          v42 = (double *)(v16 + 2);
          v31 = v72;
LABEL_59:
          v43[1] = (double *)v38;
          *((_BYTE *)v44 + v38) = 0;
          v44 = *v16;
          goto LABEL_42;
        }
        *(_BYTE *)v44 = *(_BYTE *)v39;
        v52 = v16[1];
        v53 = *v43;
        v43[1] = v52;
        *((_BYTE *)v52 + (_QWORD)v53) = 0;
        v44 = *v16;
      }
LABEL_42:
      v16[1] = nullptr;
      v14 = v33;
      *(_BYTE *)v44 = 0;
      v32 = v80;
      v34 = v81;
      if ( a2 >= v33 )
      {
        v26 = (double *)v80;
        v29 = (double *)v81;
        v46 = *v16;
        if ( *v16 != v42 )
          goto LABEL_61;
LABEL_81:
        if ( v26 != v82 )
        {
          *v16 = v26;
          *(__m128 *)(v16 + 1) = _mm_loadh_ps(v82);
LABEL_83:
          v80 = v82;
          v46 = v82;
          goto LABEL_64;
        }
        v46 = v42;
LABEL_89:
        if ( v29 )
        {
          if ( v29 == (double *)((char *)&dword_0 + 1) )
          {
            *(_BYTE *)v46 = LOBYTE(v82[0]);
            v29 = (double *)v81;
          }
          else
          {
            if ( (unsigned int)v29 >= 8 )
            {
              *v46 = v82[0];
              *(_QWORD *)((char *)v46 + (unsigned int)v29 - 8) = *(size_t *)((char *)&v82[-1] + (unsigned int)v29);
              v66 = (unsigned __int64)(v46 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              v67 = (char *)v46 - v66;
              v68 = (char *)((char *)v82 - v67);
              if ( (((_DWORD)v29 + (_DWORD)v67) & 0xFFFFFFF8) >= 8 )
              {
                v69 = ((_DWORD)v29 + (_DWORD)v67) & 0xFFFFFFF8;
                v70 = 0;
                do
                {
                  v71 = v70;
                  v70 += 8;
                  *(_QWORD *)(v66 + v71) = *(_QWORD *)&v68[v71];
                }
                while ( v70 < v69 );
              }
            }
            else if ( ((unsigned __int8)v29 & 4) != 0 )
            {
              *(_DWORD *)v46 = LODWORD(v82[0]);
              *(_DWORD *)((char *)v46 + (unsigned int)v29 - 4) = *(_DWORD *)((char *)&v81 + (unsigned int)v29 + 4);
            }
            else if ( (_DWORD)v29 )
            {
              *(_BYTE *)v46 = LOBYTE(v82[0]);
              if ( ((unsigned __int8)v29 & 2) != 0 )
                *(_WORD *)((char *)v46 + (unsigned int)v29 - 2) = *(_WORD *)((char *)&v81 + (unsigned int)v29 + 6);
            }
            v29 = (double *)v81;
          }
        }
        v63 = *v16;
        v16[1] = v29;
        *((_BYTE *)v29 + (_QWORD)v63) = 0;
        v46 = (double *)v80;
        goto LABEL_64;
      }
      v33 = (v33 - 1) / 2;
    }
  }
  v46 = *v16;
  if ( *v16 == (double *)(v16 + 2) )
  {
    v42 = *v16;
    goto LABEL_81;
  }
LABEL_61:
  if ( v26 == v82 )
    goto LABEL_89;
  v47 = *((double *)v16 + 2);
  *v16 = v26;
  *(__m128 *)(v16 + 1) = _mm_loadh_ps(v82);
  if ( !v46 )
    goto LABEL_83;
  v80 = v46;
  v82[0] = v47;
LABEL_64:
  v81 = 0;
  *(_BYTE *)v46 = 0;
  if ( v80 != v82 )
    operator delete(v80, *(_QWORD *)&v82[0] + 1LL);
}

