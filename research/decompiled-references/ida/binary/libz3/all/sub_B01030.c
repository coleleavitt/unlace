char *__fastcall sub_B01030(__int64 a1, unsigned int **a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int *v5; // r13
  unsigned int v6; // ebx
  int *v7; // rcx
  __int64 v8; // r12
  __int16 v9; // dx
  int v10; // esi
  int *v11; // r12
  unsigned int v12; // r14d
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int *v15; // r15
  unsigned int v16; // ecx
  int v17; // esi
  char *v18; // rdi
  int v19; // r9d
  __int16 v20; // dx
  int *v21; // rdi
  char *v22; // rcx
  char *result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // r9d
  _DWORD *v28; // r10
  unsigned int v29; // esi
  unsigned int v30; // ecx
  __int64 v31; // rdx
  int *v32; // rdx
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rdx
  int *v36; // rax
  __int64 v37; // r12
  int *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r14
  unsigned __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // r14
  unsigned __int64 v48; // r12
  __int64 v49; // r12
  int *v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  unsigned int v53; // [rsp+0h] [rbp-238h]
  unsigned int v54; // [rsp+0h] [rbp-238h]
  int *v55; // [rsp+0h] [rbp-238h]
  int *v56; // [rsp+0h] [rbp-238h]
  int v57[2]; // [rsp+20h] [rbp-218h] BYREF
  int v58[2]; // [rsp+28h] [rbp-210h]
  int v59[2]; // [rsp+38h] [rbp-200h] BYREF
  void *v60; // [rsp+40h] [rbp-1F8h]
  int v61[2]; // [rsp+50h] [rbp-1E8h]
  void *v62; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-1D8h]
  int v64[32]; // [rsp+68h] [rbp-1D0h] BYREF
  int v65[2]; // [rsp+E8h] [rbp-150h]
  void *v66; // [rsp+F0h] [rbp-148h]
  __int64 v67; // [rsp+F8h] [rbp-140h]
  int v68[2]; // [rsp+100h] [rbp-138h] BYREF
  int v69; // [rsp+108h] [rbp-130h]

  v4 = sub_8E35C0(a1 + 880);
  v5 = *a2;
  *(_QWORD *)v59 = 0;
  *(_QWORD *)v61 = v4;
  v62 = v64;
  *(_QWORD *)v65 = a3;
  v63 = 0x1000000000LL;
  v6 = *v5;
  v60 = nullptr;
  sub_186B510(v59, v6 + 1, 0);
  v7 = v68;
  v8 = 0;
  *((_DWORD *)v60 + (v6 >> 5)) |= 1 << v6;
  v66 = v68;
  *(_QWORD *)v68 = v5;
  v69 = 0;
  v67 = 0x1000000001LL;
  while ( 1 )
  {
LABEL_2:
    v9 = *((_WORD *)v5 + 2);
    v10 = v8;
    if ( v9 == 1 )
      goto LABEL_15;
    v11 = &v7[4 * v8];
    if ( v9 != 2 )
    {
      if ( v9 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v12 = v5[6];
      v13 = v11[2];
      if ( v13 < v12 )
      {
        while ( 1 )
        {
          v14 = v13++;
          v15 = *(unsigned int **)&v5[2 * v14 + 8];
          v11[2] = v13;
          v16 = *v15;
          if ( *v15 < v59[0] )
          {
            v18 = (char *)v60 + 4 * (v16 >> 5);
            v19 = *(_DWORD *)v18;
            v17 = 1 << v16;
            if ( ((1 << v16) & *(_DWORD *)v18) != 0 )
              goto LABEL_13;
          }
          else
          {
            v53 = *v15;
            sub_186B510(v59, v16 + 1, 0);
            v17 = 1 << v53;
            v18 = (char *)v60 + 4 * (v53 >> 5);
            v19 = *(_DWORD *)v18;
          }
          *(_DWORD *)v18 = v19 | v17;
          v20 = *((_WORD *)v15 + 2);
          if ( v20 != 1 )
          {
            if ( v20 == 2 )
            {
              v31 = (unsigned int)v67;
              if ( (unsigned int)v67 < HIDWORD(v67) )
                goto LABEL_38;
              v37 = (unsigned int)(2 * HIDWORD(v67));
              v7 = (int *)sub_186B270(16 * v37);
              v38 = (int *)v66;
              v39 = 0;
              v31 = (unsigned int)v67;
              v40 = 16LL * (unsigned int)v67;
              if ( (_DWORD)v67 )
              {
                do
                {
                  *(__m128i *)&v7[v39 / 4] = _mm_loadu_si128((const __m128i *)&v38[v39 / 4]);
                  v39 += 16LL;
                }
                while ( v40 != v39 );
              }
              if ( v38 != v68 && v38 )
              {
LABEL_50:
                v55 = v7;
                sub_186B220(v38);
                v31 = (unsigned int)v67;
                v7 = v55;
              }
LABEL_51:
              v66 = v7;
              HIDWORD(v67) = v37;
              goto LABEL_39;
            }
            if ( v20 )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v15[6] )
            {
              v35 = (unsigned int)v67;
              if ( (unsigned int)v67 >= HIDWORD(v67) )
              {
                v49 = (unsigned int)(2 * HIDWORD(v67));
                v7 = (int *)sub_186B270(16 * v49);
                v50 = (int *)v66;
                v51 = 0;
                v35 = (unsigned int)v67;
                v52 = 16LL * (unsigned int)v67;
                if ( (_DWORD)v67 )
                {
                  do
                  {
                    *(__m128i *)&v7[v51 / 4] = _mm_loadu_si128((const __m128i *)&v50[v51 / 4]);
                    v51 += 16LL;
                  }
                  while ( v52 != v51 );
                }
                if ( v50 != v68 )
                {
                  if ( v50 )
                  {
                    v56 = v7;
                    sub_186B220(v50);
                    v35 = (unsigned int)v67;
                    v7 = v56;
                  }
                }
                v66 = v7;
                HIDWORD(v67) = v49;
              }
              else
              {
                v7 = (int *)v66;
              }
              v36 = &v7[4 * v35];
              *(_QWORD *)v36 = v15;
              v36[2] = 0;
              v33 = (unsigned int)v67;
              v34 = v67 + 1;
              goto LABEL_40;
            }
          }
          v13 = v11[2];
LABEL_13:
          if ( v13 >= v12 )
          {
            v7 = (int *)v66;
            v10 = v67 - 1;
            break;
          }
        }
      }
LABEL_15:
      LODWORD(v67) = v10;
      if ( !v10 )
        break;
      goto LABEL_16;
    }
    v25 = v5[18];
    v26 = v11[2];
    v27 = v59[0];
    v28 = v60;
    v29 = v25 + v5[19] + 1;
    if ( v26 >= v29 )
      goto LABEL_64;
    if ( !v26 )
    {
      v15 = *((unsigned int **)v5 + 3);
      goto LABEL_35;
    }
    while ( 1 )
    {
      v41 = v26 - 1;
      if ( (unsigned int)v25 < v26 )
        v41 = (unsigned int)(v41 - v25);
      v15 = *(unsigned int **)&v5[4 * v5[5] + 20 + 2 * v41];
LABEL_35:
      v30 = *v15;
      v11[2] = ++v26;
      if ( v30 >= v27 )
      {
        v54 = v30;
        sub_186B510(v59, v30 + 1, 0);
        v30 = v54;
LABEL_37:
        *((_DWORD *)v60 + (v30 >> 5)) |= 1 << v30;
        v31 = (unsigned int)v67;
        if ( (unsigned int)v67 >= HIDWORD(v67) )
        {
          v37 = (unsigned int)(2 * HIDWORD(v67));
          v7 = (int *)sub_186B270(16 * v37);
          v38 = (int *)v66;
          v42 = 0;
          v31 = (unsigned int)v67;
          v43 = 16LL * (unsigned int)v67;
          if ( (_DWORD)v67 )
          {
            do
            {
              *(__m128i *)&v7[v42 / 4] = _mm_loadu_si128((const __m128i *)&v38[v42 / 4]);
              v42 += 16LL;
            }
            while ( v43 != v42 );
          }
          if ( v38 && v38 != v68 )
            goto LABEL_50;
          goto LABEL_51;
        }
LABEL_38:
        v7 = (int *)v66;
LABEL_39:
        v32 = &v7[4 * v31];
        v32[2] = 0;
        v33 = (unsigned int)v67;
        *(_QWORD *)v32 = v15;
        v34 = v33 + 1;
LABEL_40:
        LODWORD(v67) = v34;
        v8 = (unsigned int)(v34 - 1);
        v5 = *(unsigned int **)&v7[4 * v33];
        goto LABEL_2;
      }
      if ( (v28[v30 >> 5] & (1 << v30)) == 0 )
        goto LABEL_37;
      if ( v26 >= v29 )
        break;
      LODWORD(v25) = v5[18];
    }
    v25 = v5[18];
LABEL_64:
    LODWORD(v67) = v67 - 1;
    *(_QWORD *)v57 = *(_QWORD *)v61;
    *(_QWORD *)v58 = *(_QWORD *)v65;
    if ( (_DWORD)v25 )
    {
      v44 = 8 * v25;
      v45 = 0;
      do
      {
        sub_AFDA10((__int64)v57, (char **)&v62, *(_QWORD *)&v5[4 * v5[5] + 20 + v45 / 4]);
        v45 += 8LL;
      }
      while ( v45 != v44 );
    }
    v46 = v5[19];
    if ( (_DWORD)v46 )
    {
      v47 = 8 * v46;
      v48 = 0;
      do
      {
        sub_AFDA10((__int64)v57, (char **)&v62, *(_QWORD *)&v5[4 * v5[5] + 20 + v48 / 4]);
        v48 += 8LL;
      }
      while ( v48 != v47 );
    }
    v10 = v67;
    v7 = (int *)v66;
    if ( !(_DWORD)v67 )
      break;
LABEL_16:
    v8 = (unsigned int)(v10 - 1);
    v5 = *(unsigned int **)&v7[4 * v8];
  }
  if ( v7 != v68 && v7 )
    sub_186B220(v7);
  if ( v60 )
    sub_186B220(v60);
  v21 = (int *)v62;
  v22 = (char *)v62 + 8 * (unsigned int)v63;
  result = (char *)v62;
  if ( v62 != v22 )
  {
    do
    {
      v24 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v24 + 6) &= ~1u;
    }
    while ( result != v22 );
  }
  LODWORD(v63) = 0;
  if ( v21 )
  {
    result = (char *)v64;
    if ( v21 != v64 )
      return (char *)sub_186B220(v21);
  }
  return result;
}

