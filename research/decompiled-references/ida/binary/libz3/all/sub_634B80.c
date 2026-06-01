unsigned int **__fastcall sub_634B80(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int **result; // rax
  unsigned int *v5; // rdx
  unsigned int *v6; // r12
  unsigned int **v7; // r15
  __int64 *v8; // rax
  __int16 v9; // dx
  unsigned int **v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // r9
  unsigned int *v13; // r11
  __int64 v14; // r14
  __int64 *v15; // r10
  __int64 v16; // rax
  int v17; // edi
  __int64 *v18; // rcx
  unsigned int v19; // edx
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int16 v25; // ax
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r9d
  unsigned int v29; // r11d
  __int64 *v30; // r10
  int v31; // edi
  __int64 *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 *v35; // rsi
  __int64 v36; // rdx
  __int64 *v37; // r8
  __int64 *v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned int **v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // edx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 *v52; // [rsp+28h] [rbp-160h] BYREF
  __m128i v53; // [rsp+30h] [rbp-158h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v55; // [rsp+48h] [rbp-140h]
  unsigned int *v56; // [rsp+50h] [rbp-138h] BYREF
  int v57; // [rsp+58h] [rbp-130h]

  result = (unsigned int **)sub_629F40(*(_QWORD **)a2, *(_DWORD *)(a2 + 8), a3);
  if ( result )
    return result;
  v6 = v5;
  v7 = &v56;
  ptr = v5;
  sub_4A3CA0(a2, (__int64 **)&ptr);
  ptr = &v56;
  v56 = v6;
  v57 = 0;
  v55 = 0x1000000001LL;
  LODWORD(v8) = 0;
LABEL_4:
  v9 = *((_WORD *)v6 + 2);
  v10 = &v7[2 * (unsigned int)v8];
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v27 = v6[18];
      v28 = *((_DWORD *)v10 + 2);
      v29 = v27 + v6[19] + 1;
      if ( v28 >= v29 )
        goto LABEL_73;
      if ( v28 )
      {
        v30 = *(__int64 **)a2;
LABEL_53:
        v42 = v28 - 1;
        if ( v27 < v28 )
          v42 = (unsigned int)v42 - v27;
        v14 = *(_QWORD *)&v6[4 * v6[5] + 20 + 2 * v42];
      }
      else
      {
        v14 = *((_QWORD *)v6 + 3);
        v30 = *(__int64 **)a2;
      }
      ++v28;
      v31 = *(_DWORD *)(v14 + 12);
      v32 = v30;
      *((_DWORD *)v10 + 2) = v28;
      v33 = *(unsigned int *)(a2 + 8);
      v34 = v33 - 1;
      v33 *= 8;
      v35 = (__int64 *)((char *)v30 + v33);
      v36 = 8LL * (v31 & v34);
      v37 = &v30[(unsigned __int64)v36 / 8];
      if ( v36 == v33 )
      {
LABEL_56:
        if ( v30 != v37 )
        {
          do
          {
            v43 = *v32;
            if ( (unsigned __int64)*v32 > 1 )
            {
              if ( *(_DWORD *)(v43 + 12) == v31 && v14 == v43 )
                goto LABEL_51;
            }
            else if ( !v43 )
            {
              break;
            }
            ++v32;
          }
          while ( v37 != v32 );
        }
LABEL_47:
        v53.m128i_i64[0] = v14;
        sub_4A3CA0(a2, (__int64 **)&v53);
        v40 = v55;
        if ( (unsigned int)v55 < HIDWORD(v55) )
        {
LABEL_48:
          v7 = (unsigned int **)ptr;
LABEL_49:
          v8 = (__int64 *)&v7[2 * v40];
          *((_DWORD *)v8 + 2) = 0;
          v41 = (unsigned int)v55;
          *v8 = v14;
          LODWORD(v55) = v41 + 1;
          LODWORD(v8) = v41;
          goto LABEL_50;
        }
        v44 = (unsigned int)(2 * HIDWORD(v55));
        v7 = (unsigned int **)sub_186B270(16 * v44);
        v45 = (unsigned int **)ptr;
        v49 = 0;
        v40 = v55;
        v50 = 16LL * (unsigned int)v55;
        if ( (_DWORD)v55 )
        {
          do
          {
            *(__m128i *)&v7[v49 / 8] = _mm_loadu_si128((const __m128i *)&v45[v49 / 8]);
            v49 += 16LL;
          }
          while ( v49 != v50 );
        }
LABEL_69:
        if ( v45 != &v56 && v45 )
        {
          sub_186B220(v45);
          v40 = v55;
        }
        ptr = v7;
        HIDWORD(v55) = v44;
        goto LABEL_49;
      }
      v38 = &v30[(unsigned __int64)v36 / 8];
      while ( 1 )
      {
        v39 = *v38;
        if ( (unsigned __int64)*v38 > 1 )
        {
          if ( *(_DWORD *)(v39 + 12) == v31 && v14 == v39 )
          {
LABEL_51:
            if ( v28 < v29 )
            {
              v27 = v6[18];
              goto LABEL_53;
            }
LABEL_73:
            v48 = v6[4];
            LODWORD(v8) = v55 - 1;
            LODWORD(v55) = v55 - 1;
            switch ( v48 )
            {
              case 1u:
                *a1 = 1;
                break;
              case 2u:
                a1[2] = 1;
                break;
              case 0u:
                a1[1] = 1;
                break;
            }
LABEL_8:
            if ( !(_DWORD)v8 )
              goto LABEL_11;
LABEL_9:
            v8 = (__int64 *)(unsigned int)((_DWORD)v8 - 1);
            v6 = v7[2 * (_QWORD)v8];
            goto LABEL_4;
          }
        }
        else if ( !v39 )
        {
          goto LABEL_47;
        }
        if ( v35 == ++v38 )
          goto LABEL_56;
      }
    }
    if ( v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v11 = v6[6];
LABEL_15:
    v12 = *((unsigned int *)v10 + 2);
    v13 = &v6[2 * v12];
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_28;
    while ( 1 )
    {
      v14 = *((_QWORD *)v13 + 4);
      LODWORD(v12) = v12 + 1;
      v15 = *(__int64 **)a2;
      *((_DWORD *)v10 + 2) = v12;
      v16 = *(unsigned int *)(a2 + 8);
      v17 = *(_DWORD *)(v14 + 12);
      v18 = v15;
      v19 = v16 - 1;
      v16 *= 8;
      v20 = (__int64 *)((char *)v15 + v16);
      v21 = 8LL * (v17 & v19);
      v22 = &v15[(unsigned __int64)v21 / 8];
      if ( v21 == v16 )
      {
LABEL_29:
        if ( v15 != v22 )
        {
          do
          {
            v26 = *v18;
            if ( (unsigned __int64)*v18 > 1 )
            {
              if ( *(_DWORD *)(v26 + 12) == v17 && v14 == v26 )
                goto LABEL_27;
            }
            else if ( !v26 )
            {
              break;
            }
            ++v18;
          }
          while ( v22 != v18 );
        }
LABEL_23:
        v52 = (__int64 *)v14;
        sub_4A3CA0(a2, &v52);
        v25 = *(_WORD *)(v14 + 4);
        if ( v25 != 1 )
        {
          if ( v25 == 2 )
          {
            v40 = v55;
            if ( (unsigned int)v55 < HIDWORD(v55) )
              goto LABEL_48;
            v44 = (unsigned int)(2 * HIDWORD(v55));
            v7 = (unsigned int **)sub_186B270(16 * v44);
            v45 = (unsigned int **)ptr;
            v46 = 0;
            v40 = v55;
            v47 = 16LL * (unsigned int)v55;
            if ( (_DWORD)v55 )
            {
              do
              {
                *(__m128i *)&v7[v46 / 8] = _mm_loadu_si128((const __m128i *)&v45[v46 / 8]);
                v46 += 16LL;
              }
              while ( v46 != v47 );
            }
            goto LABEL_69;
          }
          if ( v25 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v14 + 24) )
          {
            v53.m128i_i64[0] = v14;
            v53.m128i_i32[2] = 0;
            sub_3DCD80((char **)&ptr, &v53);
            v7 = (unsigned int **)ptr;
            LODWORD(v8) = v55 - 1;
            v41 = (unsigned int)(v55 - 1);
LABEL_50:
            v6 = v7[2 * v41];
            goto LABEL_4;
          }
        }
        goto LABEL_15;
      }
      v23 = &v15[(unsigned __int64)v21 / 8];
      while ( 1 )
      {
        v24 = *v23;
        if ( (unsigned __int64)*v23 > 1 )
          break;
        if ( !v24 )
          goto LABEL_23;
LABEL_20:
        if ( v20 == ++v23 )
          goto LABEL_29;
      }
      if ( *(_DWORD *)(v24 + 12) != v17 || v14 != v24 )
        goto LABEL_20;
LABEL_27:
      v13 += 2;
      if ( (unsigned int)v12 >= v11 )
      {
LABEL_28:
        v7 = (unsigned int **)ptr;
        LODWORD(v8) = v55 - 1;
        LODWORD(v55) = v55 - 1;
        goto LABEL_8;
      }
    }
  }
  LODWORD(v55) = (_DWORD)v8;
  if ( (_DWORD)v8 )
    goto LABEL_9;
LABEL_11:
  result = &v56;
  if ( v7 != &v56 && v7 )
    return (unsigned int **)sub_186B220(v7);
  return result;
}

