void __fastcall sub_B3C620(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r14
  int v6; // r13d
  __int64 v7; // r12
  int *v8; // rax
  int v9; // edx
  unsigned int **v10; // rdx
  __int64 v11; // rcx
  __int16 v12; // si
  unsigned int **v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int *v20; // r9
  unsigned int v21; // ecx
  int v22; // esi
  int *v23; // rdi
  int v24; // r10d
  __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // ecx
  unsigned int v33; // esi
  unsigned int v34; // edi
  bool v35; // cc
  unsigned int v36; // r12d
  __int64 v37; // r10
  __int64 v38; // rcx
  unsigned int **v39; // rcx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // r12
  __int64 v43; // rax
  unsigned int **v44; // rdi
  __int64 v45; // r10
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int **v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // [rsp+8h] [rbp-160h]
  unsigned int *v54; // [rsp+8h] [rbp-160h]
  unsigned int *v55; // [rsp+8h] [rbp-160h]
  unsigned int *v56; // [rsp+8h] [rbp-160h]
  unsigned int *v57; // [rsp+8h] [rbp-160h]
  unsigned int *v58; // [rsp+8h] [rbp-160h]
  unsigned int *v59; // [rsp+10h] [rbp-158h]
  unsigned int **v60; // [rsp+10h] [rbp-158h]
  unsigned int **v61; // [rsp+10h] [rbp-158h]
  unsigned int **v62; // [rsp+20h] [rbp-148h]
  __int64 v63; // [rsp+28h] [rbp-140h]
  unsigned int *v64; // [rsp+30h] [rbp-138h] BYREF
  int v65; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1 )
  {
    v6 = 1 << *a3;
    v7 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, *a3 + 1, 0);
      v8 = (int *)(v7 + *(_QWORD *)(a2 + 16));
      v9 = *v8;
    }
    else
    {
      v8 = (int *)(v7 + *(_QWORD *)(a2 + 16));
      v9 = *v8;
      if ( (v6 & *v8) != 0 )
        return;
    }
    *v8 = v6 | v9;
  }
  v10 = &v64;
  v64 = v3;
  LODWORD(v11) = 0;
  v62 = &v64;
  v65 = 0;
  v63 = 0x1000000001LL;
  while ( 1 )
  {
    v12 = *((_WORD *)v3 + 2);
    v13 = &v10[2 * (unsigned int)v11];
    if ( v12 == 1 )
      break;
    if ( v12 != 2 )
    {
      if ( v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v17 = v3[6];
      v18 = *((_DWORD *)v13 + 2);
      if ( v18 < v17 )
      {
        while ( 1 )
        {
          v19 = v18++;
          v20 = *(unsigned int **)&v3[2 * v19 + 8];
          *((_DWORD *)v13 + 2) = v18;
          if ( v20[2] > 1 )
          {
            v21 = *v20;
            if ( *v20 < *(_DWORD *)(a2 + 8) )
            {
              v23 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v21 >> 5));
              v24 = *v23;
              v22 = 1 << v21;
              if ( ((1 << v21) & *v23) != 0 )
                goto LABEL_34;
            }
            else
            {
              v59 = v20;
              v53 = *v20;
              sub_186B510(a2 + 8, v21 + 1, 0);
              v20 = v59;
              v22 = 1 << v53;
              v23 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v53 >> 5));
              v24 = *v23;
            }
            *v23 = v24 | v22;
          }
          v25 = *((_WORD *)v20 + 2);
          if ( v25 != 1 )
          {
            if ( v25 == 2 )
            {
              v38 = (unsigned int)v63;
              if ( (unsigned int)v63 < HIDWORD(v63) )
                goto LABEL_55;
              v55 = v20;
              v42 = (unsigned int)(2 * HIDWORD(v63));
              v10 = (unsigned int **)sub_186B270(16 * v42);
              v43 = 0;
              v44 = v62;
              v20 = v55;
              v38 = (unsigned int)v63;
              if ( (_DWORD)v63 )
              {
                do
                {
                  *(__m128i *)&v10[v43] = _mm_loadu_si128((const __m128i *)&v62[v43]);
                  v43 += 2;
                }
                while ( v43 != 2LL * (unsigned int)v63 );
              }
LABEL_61:
              if ( v44 != &v64 && v44 )
              {
                v60 = v10;
                v56 = v20;
                sub_186B220(v44);
                v38 = (unsigned int)v63;
                v10 = v60;
                v20 = v56;
              }
              v62 = v10;
              HIDWORD(v63) = v42;
              goto LABEL_56;
            }
            if ( v25 )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v20[6] )
            {
              v47 = (unsigned int)v63;
              if ( (unsigned int)v63 >= HIDWORD(v63) )
              {
                v58 = v20;
                v10 = (unsigned int **)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v63)));
                v52 = 0;
                v20 = v58;
                v47 = (unsigned int)v63;
                if ( (_DWORD)v63 )
                {
                  do
                  {
                    *(__m128i *)&v10[v52] = _mm_loadu_si128((const __m128i *)&v62[v52]);
                    v52 += 2;
                  }
                  while ( v52 != 2LL * (unsigned int)v63 );
                }
                if ( v62 != &v64 && v62 )
                {
                  v61 = v10;
                  sub_186B220(v62);
                  v47 = (unsigned int)v63;
                  v10 = v61;
                  v20 = v58;
                }
                v62 = v10;
                HIDWORD(v63) *= 2;
              }
              else
              {
                v10 = v62;
              }
              v48 = &v10[2 * v47];
              *v48 = v20;
              *((_DWORD *)v48 + 2) = 0;
              v40 = (unsigned int)v63;
              v41 = v63 + 1;
              goto LABEL_57;
            }
          }
          v29 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
          if ( v29 )
          {
            v30 = *v20;
            if ( (unsigned int)v30 < *(_DWORD *)(v29 - 4) )
            {
              v31 = *(_QWORD *)(v29 + 8 * v30);
              if ( v31 )
                sub_B39D50(v31, *(_QWORD *)a1, *(_DWORD *)(a1 + 8));
            }
          }
          v18 = *((_DWORD *)v13 + 2);
LABEL_34:
          if ( v18 >= v17 )
          {
            LODWORD(v11) = v63 - 1;
            break;
          }
        }
      }
      LODWORD(v63) = v11;
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
      if ( v26 )
      {
        v27 = *v3;
        if ( (unsigned int)v27 < *(_DWORD *)(v26 - 4) )
        {
          v28 = *(_QWORD *)(v26 + 8 * v27);
          if ( v28 )
          {
            sub_B39D50(v28, *(_QWORD *)a1, *(_DWORD *)(a1 + 8));
            goto LABEL_12;
          }
        }
      }
      goto LABEL_13;
    }
    v32 = v3[18];
    v33 = *((_DWORD *)v13 + 2);
    v34 = v32 + v3[19] + 1;
    if ( v33 >= v34 )
    {
LABEL_77:
      LODWORD(v11) = v63 - 1;
      v49 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
      LODWORD(v63) = v63 - 1;
      if ( v49 )
      {
        v50 = *v3;
        if ( (unsigned int)v50 < *(_DWORD *)(v49 - 4) )
        {
          v51 = *(_QWORD *)(v49 + 8 * v50);
          if ( v51 )
          {
            sub_B39D50(v51, *(_QWORD *)a1, *(_DWORD *)(a1 + 8));
LABEL_12:
            LODWORD(v11) = v63;
LABEL_13:
            v10 = v62;
          }
        }
      }
      if ( !(_DWORD)v11 )
        goto LABEL_21;
LABEL_15:
      v11 = (unsigned int)(v11 - 1);
      v3 = v10[2 * v11];
    }
    else
    {
      if ( !v33 )
      {
        v20 = *((unsigned int **)v3 + 3);
        goto LABEL_50;
      }
      while ( 1 )
      {
        v45 = v33 - 1;
        if ( v32 < v33 )
          v45 = (unsigned int)v45 - v32;
        v20 = *(unsigned int **)&v3[4 * v3[5] + 20 + 2 * v45];
LABEL_50:
        ++v33;
        v35 = v20[2] <= 1;
        *((_DWORD *)v13 + 2) = v33;
        if ( v35 )
          break;
        v36 = *v20;
        if ( *v20 >= *(_DWORD *)(a2 + 8) )
        {
          v54 = v20;
          sub_186B510(a2 + 8, v36 + 1, 0);
          v37 = *(_QWORD *)(a2 + 16);
          v20 = v54;
LABEL_53:
          *(_DWORD *)(v37 + 4LL * (v36 >> 5)) |= 1 << v36;
          break;
        }
        v37 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v37 + 4LL * (v36 >> 5)) & (1 << v36)) == 0 )
          goto LABEL_53;
        if ( v33 >= v34 )
          goto LABEL_77;
        v32 = v3[18];
      }
      v38 = (unsigned int)v63;
      if ( (unsigned int)v63 >= HIDWORD(v63) )
      {
        v57 = v20;
        v42 = (unsigned int)(2 * HIDWORD(v63));
        v10 = (unsigned int **)sub_186B270(16 * v42);
        v46 = 0;
        v44 = v62;
        v20 = v57;
        v38 = (unsigned int)v63;
        if ( (_DWORD)v63 )
        {
          do
          {
            *(__m128i *)&v10[v46] = _mm_loadu_si128((const __m128i *)&v62[v46]);
            v46 += 2;
          }
          while ( v46 != 2LL * (unsigned int)v63 );
        }
        goto LABEL_61;
      }
LABEL_55:
      v10 = v62;
LABEL_56:
      v39 = &v10[2 * v38];
      *((_DWORD *)v39 + 2) = 0;
      v40 = (unsigned int)v63;
      *v39 = v20;
      v41 = v63 + 1;
LABEL_57:
      LODWORD(v63) = v41;
      LODWORD(v11) = v41 - 1;
      v3 = v10[2 * v40];
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 8656LL);
  if ( v14 )
  {
    v15 = *v3;
    if ( (unsigned int)v15 < *(_DWORD *)(v14 - 4) )
    {
      v16 = *(_QWORD *)(v14 + 8 * v15);
      if ( v16 )
      {
        sub_B39D50(v16, *(_QWORD *)a1, *(_DWORD *)(a1 + 8));
        v10 = v62;
        LODWORD(v11) = v63 - 1;
      }
    }
  }
  LODWORD(v63) = v11;
  if ( (_DWORD)v11 )
    goto LABEL_15;
LABEL_21:
  if ( v10 )
  {
    if ( v10 != &v64 )
      sub_186B220(v10);
  }
}

