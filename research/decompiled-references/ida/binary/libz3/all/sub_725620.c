int *__fastcall sub_725620(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  int v6; // r13d
  __int64 v7; // rbp
  int *result; // rax
  int v9; // edx
  _QWORD *v10; // r10
  __int64 v11; // rax
  __int16 v12; // dx
  _QWORD *v13; // r15
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int *v18; // r9
  unsigned int v19; // ecx
  int v20; // eax
  int *v21; // rsi
  int v22; // edi
  __int16 v23; // ax
  _QWORD *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // esi
  bool v28; // cc
  unsigned int v29; // ebp
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int **v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rbp
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int **v41; // rax
  void *v42; // r15
  void *v43; // rbp
  __int64 v44; // rax
  unsigned int v45; // [rsp+10h] [rbp-158h]
  unsigned int *v46; // [rsp+10h] [rbp-158h]
  unsigned int *v47; // [rsp+10h] [rbp-158h]
  unsigned int *v48; // [rsp+10h] [rbp-158h]
  unsigned int *v49; // [rsp+10h] [rbp-158h]
  unsigned int *v50; // [rsp+10h] [rbp-158h]
  unsigned int *v51; // [rsp+18h] [rbp-150h]
  _QWORD *v52; // [rsp+18h] [rbp-150h]
  _QWORD *v53; // [rsp+18h] [rbp-150h]
  _QWORD *ptr; // [rsp+20h] [rbp-148h]
  __int64 v55; // [rsp+28h] [rbp-140h]
  _DWORD *v56; // [rsp+30h] [rbp-138h] BYREF
  int v57; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1u )
  {
    v6 = 1 << *a3;
    v7 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = (int *)(v7 + *(_QWORD *)(a2 + 16));
      v9 = *result;
    }
    else
    {
      result = (int *)(v7 + *(_QWORD *)(a2 + 16));
      v9 = *result;
      if ( (v6 & *result) != 0 )
        return result;
    }
    *result = v6 | v9;
  }
  v10 = &v56;
  v56 = v3;
  ptr = &v56;
  v57 = 0;
  v55 = 0x1000000001LL;
  LODWORD(v11) = 0;
  while ( 1 )
  {
    v12 = *((_WORD *)v3 + 2);
    v13 = &v10[2 * (unsigned int)v11];
    if ( v12 == 1 )
      break;
    if ( v12 == 2 )
    {
      v25 = v3[18];
      v26 = *((_DWORD *)v13 + 2);
      v27 = v25 + v3[19] + 1;
      if ( v26 >= v27 )
      {
LABEL_67:
        LODWORD(v55) = v55 - 1;
        sub_168D110(a1, v3);
        goto LABEL_12;
      }
      if ( !v26 )
      {
        v18 = *((unsigned int **)v3 + 3);
        goto LABEL_40;
      }
      while ( 1 )
      {
        v38 = v26 - 1;
        if ( v25 < v26 )
          v38 = (unsigned int)v38 - v25;
        v18 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v38];
LABEL_40:
        ++v26;
        v28 = v18[2] <= 1;
        *((_DWORD *)v13 + 2) = v26;
        if ( v28 )
          break;
        v29 = *v18;
        if ( *v18 >= *(_DWORD *)(a2 + 8) )
        {
          v46 = v18;
          sub_186B510(a2 + 8, v29 + 1, 0);
          v30 = *(_QWORD *)(a2 + 16);
          v18 = v46;
LABEL_43:
          *(_DWORD *)(v30 + 4LL * (v29 >> 5)) |= 1 << v29;
          break;
        }
        v30 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v30 + 4LL * (v29 >> 5)) & (1 << v29)) == 0 )
          goto LABEL_43;
        if ( v26 >= v27 )
          goto LABEL_67;
        v25 = v3[18];
      }
      v31 = (unsigned int)v55;
      if ( (unsigned int)v55 >= HIDWORD(v55) )
      {
        v49 = v18;
        v35 = (unsigned int)(2 * HIDWORD(v55));
        v10 = (_QWORD *)sub_186B270(16 * v35);
        v39 = 0;
        v37 = ptr;
        v18 = v49;
        v31 = (unsigned int)v55;
        if ( (_DWORD)v55 )
        {
          do
          {
            *(__m128i *)&v10[v39] = _mm_loadu_si128((const __m128i *)&ptr[v39]);
            v39 += 2;
          }
          while ( v39 != 2LL * (unsigned int)v55 );
        }
        goto LABEL_53;
      }
LABEL_45:
      v10 = ptr;
LABEL_46:
      v32 = (unsigned int **)&v10[2 * v31];
      *v32 = v18;
      *((_DWORD *)v32 + 2) = 0;
      v33 = (unsigned int)v55;
      v34 = v55 + 1;
LABEL_47:
      LODWORD(v55) = v34;
      LODWORD(v11) = v34 - 1;
      v3 = (_DWORD *)v10[2 * v33];
    }
    else
    {
      if ( v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v15 = v3[6];
      v16 = *((_DWORD *)v13 + 2);
      if ( v16 < v15 )
      {
        while ( 1 )
        {
          v17 = v16++;
          v18 = *(unsigned int **)&v3[2 * v17 + 8];
          *((_DWORD *)v13 + 2) = v16;
          if ( v18[2] > 1 )
          {
            v19 = *v18;
            if ( *v18 < *(_DWORD *)(a2 + 8) )
            {
              v21 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v19 >> 5));
              v22 = *v21;
              v20 = 1 << v19;
              if ( ((1 << v19) & *v21) != 0 )
                goto LABEL_29;
            }
            else
            {
              v51 = v18;
              v45 = *v18;
              sub_186B510(a2 + 8, v19 + 1, 0);
              v18 = v51;
              v20 = 1 << v45;
              v21 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v45 >> 5));
              v22 = *v21;
            }
            *v21 = v22 | v20;
          }
          v23 = *((_WORD *)v18 + 2);
          if ( v23 == 1 )
          {
            sub_15B9070(a1 + 8, v18, v18, 0);
          }
          else
          {
            if ( v23 == 2 )
            {
              v31 = (unsigned int)v55;
              if ( (unsigned int)v55 < HIDWORD(v55) )
                goto LABEL_45;
              v47 = v18;
              v35 = (unsigned int)(2 * HIDWORD(v55));
              v10 = (_QWORD *)sub_186B270(16 * v35);
              v36 = 0;
              v37 = ptr;
              v18 = v47;
              v31 = (unsigned int)v55;
              if ( (_DWORD)v55 )
              {
                do
                {
                  *(__m128i *)&v10[v36] = _mm_loadu_si128((const __m128i *)&ptr[v36]);
                  v36 += 2;
                }
                while ( v36 != 2LL * (unsigned int)v55 );
              }
LABEL_53:
              if ( v37 != &v56 && v37 )
              {
                v52 = v10;
                v48 = v18;
                sub_186B220(v37);
                v31 = (unsigned int)v55;
                v10 = v52;
                v18 = v48;
              }
              ptr = v10;
              HIDWORD(v55) = v35;
              goto LABEL_46;
            }
            if ( v23 )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v18[6] )
            {
              v40 = (unsigned int)v55;
              if ( (unsigned int)v55 >= HIDWORD(v55) )
              {
                v50 = v18;
                v10 = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v55)));
                v44 = 0;
                v18 = v50;
                v40 = (unsigned int)v55;
                if ( (_DWORD)v55 )
                {
                  do
                  {
                    *(__m128i *)&v10[v44] = _mm_loadu_si128((const __m128i *)&ptr[v44]);
                    v44 += 2;
                  }
                  while ( v44 != 2LL * (unsigned int)v55 );
                }
                if ( ptr != &v56 && ptr )
                {
                  v53 = v10;
                  sub_186B220(ptr);
                  v40 = (unsigned int)v55;
                  v10 = v53;
                  v18 = v50;
                }
                ptr = v10;
                HIDWORD(v55) *= 2;
              }
              else
              {
                v10 = ptr;
              }
              v41 = (unsigned int **)&v10[2 * v40];
              *((_DWORD *)v41 + 2) = 0;
              v33 = (unsigned int)v55;
              *v41 = v18;
              v34 = v55 + 1;
              goto LABEL_47;
            }
            sub_168D200(a1, v18);
          }
          v16 = *((_DWORD *)v13 + 2);
LABEL_29:
          if ( v16 >= v15 )
          {
            LODWORD(v11) = v55 - 1;
            break;
          }
        }
      }
      LODWORD(v55) = v11;
      if ( *((_WORD *)v3 + 2)
        || (v24 = *(_QWORD **)(*((_QWORD *)v3 + 2) + 24LL)) == nullptr
        || *v24 != 0x200000000LL
        || v3[6] != 2
        || (v42 = *((void **)v3 + 4),
            v43 = *((void **)v3 + 5),
            !(unsigned __int8)sub_71F020(a1, (int)v3, (__int64)v42, v43))
        && !(unsigned __int8)sub_71F020(a1, (int)v3, (__int64)v43, v42) )
      {
        sub_168D200(a1, v3);
LABEL_12:
        v14 = v55;
        goto LABEL_13;
      }
      *(_BYTE *)(a1 + 88) = 1;
      v14 = v55;
LABEL_13:
      v10 = ptr;
      if ( !v14 )
        goto LABEL_16;
LABEL_14:
      v11 = (unsigned int)(v14 - 1);
      v3 = (_DWORD *)v10[2 * v11];
    }
  }
  sub_15B9070(a1 + 8, v3, v3, 0);
  v10 = ptr;
  v14 = v55 - 1;
  LODWORD(v55) = v14;
  if ( v14 )
    goto LABEL_14;
LABEL_16:
  result = (int *)&v56;
  if ( v10 != &v56 )
  {
    if ( v10 )
      return (int *)sub_186B220(v10);
  }
  return result;
}

