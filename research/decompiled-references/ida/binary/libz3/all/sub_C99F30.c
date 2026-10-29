double __fastcall sub_C99F30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 i; // rsi
  __int64 v4; // rcx
  char v5; // dl
  unsigned int v6; // edx
  unsigned int *v7; // r15
  unsigned int v8; // ebx
  int v9; // eax
  int *v10; // rdx
  int v11; // esi
  int **v12; // rbx
  __int64 v13; // rax
  __int16 v14; // dx
  int **v15; // rbp
  unsigned int v16; // ebx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int *v19; // r14
  unsigned int v20; // r12d
  int v21; // eax
  int *v22; // rsi
  int v23; // edi
  __int16 v24; // ax
  void *v25; // r12
  int v26; // ebx
  __int64 v27; // rbx
  void *v28; // rbx
  double result; // xmm0_8
  double v30; // xmm0_8
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edi
  _DWORD *v34; // r10
  unsigned int v35; // edx
  unsigned int *v36; // r13
  unsigned int v37; // r12d
  __int64 v38; // rdx
  unsigned int **v39; // rdx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // r12d
  __int64 v43; // r12
  void *v44; // r12
  __int64 v45; // rdx
  unsigned int **v46; // rdx
  __int64 v47; // r11
  __int64 v48; // r12
  int **v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r12
  int **v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // edx
  unsigned int **v57; // rax
  __int64 v58; // rdx
  unsigned int **v59; // rax
  __int64 v60; // r12
  int **v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // [rsp+1Ch] [rbp-1ECh]
  void *v66; // [rsp+28h] [rbp-1E0h]
  _BYTE v68[9]; // [rsp+4Fh] [rbp-1B9h] BYREF
  __int64 v69; // [rsp+58h] [rbp-1B0h] BYREF
  void *v70; // [rsp+60h] [rbp-1A8h]
  __int64 v71; // [rsp+70h] [rbp-198h] BYREF
  __int64 v72; // [rsp+78h] [rbp-190h]
  __int64 v73; // [rsp+80h] [rbp-188h] BYREF
  __int64 v74; // [rsp+88h] [rbp-180h]
  __int64 v75; // [rsp+90h] [rbp-178h]
  _BYTE v76[16]; // [rsp+98h] [rbp-170h] BYREF
  unsigned int v77; // [rsp+A8h] [rbp-160h]
  __int64 v78; // [rsp+B0h] [rbp-158h]
  int v79; // [rsp+B8h] [rbp-150h]
  void *v80; // [rsp+C0h] [rbp-148h]
  __int64 v81; // [rsp+C8h] [rbp-140h]
  unsigned int *v82; // [rsp+D0h] [rbp-138h] BYREF
  int v83; // [rsp+D8h] [rbp-130h]

  v75 = *a2;
  sub_16669D0(v76, v75);
  v2 = a2[9];
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v69 = 0;
  v70 = nullptr;
  if ( !v2 )
    goto LABEL_40;
  v64 = 0;
  for ( i = *a2; ; i = *a2 )
  {
    v4 = v2;
    v5 = *(_BYTE *)(v2 + 3) >> 6;
    if ( v5 )
    {
      if ( v5 == 1 )
        goto LABEL_37;
    }
    else
    {
      do
      {
        v4 = *(_QWORD *)(v4 + 16);
        v5 = *(_BYTE *)(v4 + 3) >> 6;
      }
      while ( !v5 );
      if ( v5 == 1 )
      {
LABEL_37:
        if ( v64 >= *(_DWORD *)(v4 + 4) + 1 )
          break;
        goto LABEL_8;
      }
    }
    v6 = v5 == 2 ? *(_DWORD *)(v4 + 4) - 1 : *(_DWORD *)(v4 + 4);
    if ( v64 >= v6 )
      break;
LABEL_8:
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v7 = *(unsigned int **)(i + 864);
      goto LABEL_10;
    }
    v56 = 17;
    while ( 1 )
    {
      if ( *(char *)(v2 + 3) < 0 )
      {
        if ( *(_BYTE *)(v2 + 3) >> 6 != 2 )
        {
          v57 = (unsigned int **)(*(_QWORD *)(v2 + 16) + 8LL * v64);
          goto LABEL_101;
        }
        goto LABEL_103;
      }
      if ( v64 == *(_DWORD *)(v2 + 4) )
        break;
LABEL_103:
      v2 = *(_QWORD *)(v2 + 16);
      if ( !--v56 )
      {
        sub_233F80((__int64 *)(i + 616), (_DWORD *)a2 + 18);
        v57 = (unsigned int **)(*(_QWORD *)(a2[9] + 16) + 8LL * v64);
        goto LABEL_101;
      }
    }
    v57 = (unsigned int **)(v2 + 8);
LABEL_101:
    v7 = *v57;
LABEL_10:
    v8 = *v7;
    if ( *v7 >= (unsigned int)v69 )
    {
      sub_186B510(&v69, v8 + 1, 0);
      v9 = 1 << v8;
      v10 = (int *)((char *)v70 + 4 * (v8 >> 5));
      v11 = *v10;
      goto LABEL_12;
    }
    v10 = (int *)((char *)v70 + 4 * (v8 >> 5));
    v11 = *v10;
    v9 = 1 << v8;
    if ( ((1 << v8) & *v10) == 0 )
    {
LABEL_12:
      v12 = (int **)&v82;
      *v10 = v11 | v9;
      v80 = &v82;
      v82 = v7;
      v83 = 0;
      v81 = 0x1000000001LL;
      LODWORD(v13) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = *((_WORD *)v7 + 2);
          v15 = &v12[2 * (unsigned int)v13];
          if ( v14 == 1 )
            goto LABEL_49;
          if ( v14 == 2 )
            break;
          if ( v14 )
          {
            sub_1872CE0("");
            sub_1873130(114, 100);
          }
          v16 = v7[6];
          v17 = *((_DWORD *)v15 + 2);
          if ( v17 < v16 )
          {
            while ( 1 )
            {
              v18 = v17++;
              v19 = *(unsigned int **)&v7[2 * v18 + 8];
              *((_DWORD *)v15 + 2) = v17;
              v20 = *v19;
              if ( *v19 < (unsigned int)v69 )
              {
                v22 = (int *)((char *)v70 + 4 * (v20 >> 5));
                v23 = *v22;
                v21 = 1 << v20;
                if ( ((1 << v20) & *v22) != 0 )
                  goto LABEL_24;
              }
              else
              {
                sub_186B510(&v69, v20 + 1, 0);
                v21 = 1 << v20;
                v22 = (int *)((char *)v70 + 4 * (v20 >> 5));
                v23 = *v22;
              }
              *v22 = v23 | v21;
              v24 = *((_WORD *)v19 + 2);
              if ( v24 == 1 )
              {
                v17 = *((_DWORD *)v15 + 2);
              }
              else
              {
                if ( v24 == 2 )
                {
                  v45 = (unsigned int)v81;
                  if ( (unsigned int)v81 >= HIDWORD(v81) )
                  {
                    v52 = (unsigned int)(2 * HIDWORD(v81));
                    v12 = (int **)sub_186B270(16 * v52);
                    v53 = (int **)v80;
                    v54 = 0;
                    v45 = (unsigned int)v81;
                    v55 = 16LL * (unsigned int)v81;
                    if ( (_DWORD)v81 )
                    {
                      do
                      {
                        *(__m128i *)&v12[v54 / 8] = _mm_loadu_si128((const __m128i *)&v53[v54 / 8]);
                        v54 += 16LL;
                      }
                      while ( v54 != v55 );
                    }
                    if ( v53 != (int **)&v82 && v53 )
                    {
                      sub_186B220(v53);
                      v45 = (unsigned int)v81;
                    }
                    v80 = v12;
                    HIDWORD(v81) = v52;
                  }
                  else
                  {
                    v12 = (int **)v80;
                  }
                  v46 = (unsigned int **)&v12[2 * v45];
                  *v46 = v19;
                  *((_DWORD *)v46 + 2) = 0;
                  v40 = (unsigned int)v81;
                  v41 = v81 + 1;
                  goto LABEL_64;
                }
                if ( v24 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 73);
                }
                if ( v19[6] )
                {
                  v58 = (unsigned int)v81;
                  if ( (unsigned int)v81 >= HIDWORD(v81) )
                  {
                    v60 = (unsigned int)(2 * HIDWORD(v81));
                    v12 = (int **)sub_186B270(16 * v60);
                    v61 = (int **)v80;
                    v62 = 0;
                    v58 = (unsigned int)v81;
                    v63 = 16LL * (unsigned int)v81;
                    if ( (_DWORD)v81 )
                    {
                      do
                      {
                        *(__m128i *)&v12[v62 / 8] = _mm_loadu_si128((const __m128i *)&v61[v62 / 8]);
                        v62 += 16LL;
                      }
                      while ( v62 != v63 );
                    }
                    if ( v61 != (int **)&v82 && v61 )
                    {
                      sub_186B220(v61);
                      v58 = (unsigned int)v81;
                    }
                    v80 = v12;
                    HIDWORD(v81) = v60;
                  }
                  else
                  {
                    v12 = (int **)v80;
                  }
                  v59 = (unsigned int **)&v12[2 * v58];
                  *((_DWORD *)v59 + 2) = 0;
                  v40 = (unsigned int)v81;
                  *v59 = v19;
                  v41 = v40 + 1;
                  goto LABEL_64;
                }
                v71 = 0;
                v72 = 0;
                v73 = 1;
                v74 = 0;
                if ( (unsigned __int8)sub_1666AE0(v76, v19, &v71, v68) )
                {
                  if ( (v73 & 0x100000000LL) == 0 && (_DWORD)v73 == 1 )
                  {
                    v43 = (unsigned int)sub_182E1D0(qword_1C7F2C0, &v71);
                  }
                  else
                  {
                    v66 = qword_1C7F2C0;
                    v42 = sub_182E1D0(qword_1C7F2C0, &v71);
                    v43 = (unsigned int)sub_182E1D0(v66, &v73) + v42;
                  }
                  if ( v77 < (unsigned int)v43 )
                    v77 = v43;
                  v78 += v43;
                  ++v79;
                }
                v44 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v71);
                sub_182CBA0(v44, &v73);
                v17 = *((_DWORD *)v15 + 2);
              }
LABEL_24:
              if ( v17 >= v16 )
              {
                LODWORD(v13) = v81 - 1;
                break;
              }
            }
          }
          LODWORD(v81) = v13;
          v71 = 0;
          v72 = 0;
          v73 = 1;
          v74 = 0;
          if ( (unsigned __int8)sub_1666AE0(v76, v7, &v71, v68) )
          {
            v25 = qword_1C7F2C0;
            if ( (v73 & 0x100000000LL) == 0 && (_DWORD)v73 == 1 )
            {
              v27 = (unsigned int)sub_182E1D0(qword_1C7F2C0, &v71);
            }
            else
            {
              v26 = sub_182E1D0(qword_1C7F2C0, &v71);
              v27 = (unsigned int)sub_182E1D0(v25, &v73) + v26;
            }
            if ( v77 < (unsigned int)v27 )
              v77 = v27;
            v78 += v27;
            ++v79;
          }
          v28 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v71);
          sub_182CBA0(v28, &v73);
          LODWORD(v13) = v81;
          v12 = (int **)v80;
          if ( !(_DWORD)v81 )
          {
LABEL_50:
            if ( v12 != (int **)&v82 && v12 )
              sub_186B220(v12);
            goto LABEL_53;
          }
LABEL_34:
          v13 = (unsigned int)(v13 - 1);
          v7 = (unsigned int *)v12[2 * v13];
        }
        v31 = v7[18];
        v32 = *((_DWORD *)v15 + 2);
        v33 = v69;
        v34 = v70;
        v35 = v31 + v7[19] + 1;
        if ( v32 >= v35 )
        {
LABEL_48:
          LODWORD(v13) = v81 - 1;
LABEL_49:
          LODWORD(v81) = v13;
          if ( !(_DWORD)v13 )
            goto LABEL_50;
          goto LABEL_34;
        }
        if ( !v32 )
        {
          v36 = *((unsigned int **)v7 + 3);
          goto LABEL_59;
        }
        while ( 1 )
        {
          v47 = v32 - 1;
          if ( v31 < v32 )
            v47 = (unsigned int)v47 - v31;
          v36 = *(unsigned int **)&v7[4 * v7[5] + 20 + 2 * v47];
LABEL_59:
          v37 = *v36;
          *((_DWORD *)v15 + 2) = ++v32;
          if ( v37 >= v33 )
            break;
          if ( (v34[v37 >> 5] & (1 << v37)) == 0 )
            goto LABEL_61;
          if ( v32 >= v35 )
            goto LABEL_48;
          v31 = v7[18];
        }
        sub_186B510(&v69, v37 + 1, 0);
LABEL_61:
        *((_DWORD *)v70 + (v37 >> 5)) |= 1 << v37;
        v38 = (unsigned int)v81;
        if ( (unsigned int)v81 >= HIDWORD(v81) )
        {
          v48 = (unsigned int)(2 * HIDWORD(v81));
          v12 = (int **)sub_186B270(16 * v48);
          v49 = (int **)v80;
          v50 = 0;
          v38 = (unsigned int)v81;
          v51 = 16LL * (unsigned int)v81;
          if ( (_DWORD)v81 )
          {
            do
            {
              *(__m128i *)&v12[v50 / 8] = _mm_loadu_si128((const __m128i *)&v49[v50 / 8]);
              v50 += 16LL;
            }
            while ( v50 != v51 );
          }
          if ( v49 != (int **)&v82 && v49 )
          {
            sub_186B220(v49);
            v38 = (unsigned int)v81;
          }
          v80 = v12;
          HIDWORD(v81) = v48;
        }
        else
        {
          v12 = (int **)v80;
        }
        v39 = (unsigned int **)&v12[2 * v38];
        *v39 = v36;
        *((_DWORD *)v39 + 2) = 0;
        v40 = (unsigned int)v81;
        v41 = v81 + 1;
LABEL_64:
        LODWORD(v81) = v41;
        LODWORD(v13) = v41 - 1;
        v7 = (unsigned int *)v12[2 * v40];
      }
    }
LABEL_53:
    ++v64;
    v2 = a2[9];
    if ( !v2 )
      break;
  }
  if ( v70 )
    sub_186B220(v70);
LABEL_40:
  if ( !*(_BYTE *)(a1 + 12) )
    return (double)(int)v77;
  result = 0.0;
  if ( v79 )
  {
    if ( v78 < 0 )
      v30 = (double)(int)(v78 & 1 | ((unsigned __int64)v78 >> 1))
          + (double)(int)(v78 & 1 | ((unsigned __int64)v78 >> 1));
    else
      v30 = (double)(int)v78;
    return v30 / (double)v79;
  }
  return result;
}

