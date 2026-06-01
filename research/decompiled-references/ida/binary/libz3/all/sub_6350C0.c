__int64 __fastcall sub_6350C0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v6; // rdx
  unsigned int *v7; // r13
  unsigned int **v8; // r10
  __int64 v9; // rax
  unsigned int **v10; // rbp
  __int16 v11; // ax
  __int64 v12; // rax
  char v13; // al
  unsigned int v14; // r14d
  __int64 v15; // r9
  unsigned int *v16; // r11
  __int64 v17; // r15
  __int64 *v18; // r10
  __int64 v19; // rax
  int v20; // edi
  __int64 *v21; // rcx
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int16 v28; // ax
  __int64 v29; // rsi
  __int64 v30; // rdx
  char v31; // dl
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // r9d
  unsigned int v35; // r15d
  __int64 v36; // r14
  __int64 *v37; // r11
  int v38; // edi
  __int64 *v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 *v42; // rsi
  __int64 v43; // rdx
  __int64 *v44; // r8
  __int64 *i; // rax
  __int64 v46; // rdx
  unsigned int v47; // edx
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rsi
  char v53; // al
  unsigned int v54; // edx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rbp
  unsigned int **v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbp
  unsigned int **v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  unsigned int **v65; // [rsp+18h] [rbp-170h]
  unsigned int **v66; // [rsp+18h] [rbp-170h]
  __int64 *v67; // [rsp+28h] [rbp-160h] BYREF
  __m128i v68; // [rsp+30h] [rbp-158h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v70; // [rsp+48h] [rbp-140h]
  unsigned int *v71; // [rsp+50h] [rbp-138h] BYREF
  int v72; // [rsp+58h] [rbp-130h]

  result = (__int64)sub_629F40(*(_QWORD **)a2, *(_DWORD *)(a2 + 8), a3);
  if ( result )
    return result;
  v7 = v6;
  ptr = v6;
  sub_4A3CA0(a2, (__int64 **)&ptr);
  v8 = &v71;
  ptr = &v71;
  v71 = v7;
  v72 = 0;
  v70 = 0x1000000001LL;
  v9 = 0;
LABEL_4:
  v10 = &v8[2 * v9];
  v11 = *((_WORD *)v7 + 2);
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v33 = v7[18];
      v34 = *((_DWORD *)v10 + 2);
      v35 = v33 + v7[19] + 1;
      if ( v34 >= v35 )
        goto LABEL_80;
      if ( v34 )
      {
        v37 = *(__int64 **)a2;
LABEL_58:
        v50 = v34 - 1;
        if ( v33 < v34 )
          v50 = (unsigned int)v50 - v33;
        v36 = *(_QWORD *)&v7[4 * v7[5] + 20 + 2 * v50];
      }
      else
      {
        v36 = *((_QWORD *)v7 + 3);
        v37 = *(__int64 **)a2;
      }
      ++v34;
      v38 = *(_DWORD *)(v36 + 12);
      v39 = v37;
      *((_DWORD *)v10 + 2) = v34;
      v40 = *(unsigned int *)(a2 + 8);
      v41 = v40 - 1;
      v40 *= 8;
      v42 = (__int64 *)((char *)v37 + v40);
      v43 = 8LL * (v38 & v41);
      v44 = &v37[(unsigned __int64)v43 / 8];
      if ( v43 != v40 )
      {
        for ( i = &v37[(unsigned __int64)v43 / 8]; v42 != i; ++i )
        {
          v46 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v46 + 12) == v38 && v36 == v46 )
            {
LABEL_56:
              if ( v34 < v35 )
              {
                v33 = v7[18];
                goto LABEL_58;
              }
LABEL_80:
              v56 = v70;
              a1[32] = 0;
              result = (unsigned int)(v56 - 1);
              LODWORD(v70) = result;
              goto LABEL_8;
            }
          }
          else if ( !v46 )
          {
            goto LABEL_51;
          }
        }
      }
      if ( v37 != v44 )
      {
        do
        {
          v51 = *v39;
          if ( (unsigned __int64)*v39 > 1 )
          {
            if ( *(_DWORD *)(v51 + 12) == v38 && v36 == v51 )
              goto LABEL_56;
          }
          else if ( !v51 )
          {
            break;
          }
          ++v39;
        }
        while ( v44 != v39 );
      }
LABEL_51:
      v68.m128i_i64[0] = v36;
      sub_4A3CA0(a2, (__int64 **)&v68);
      v47 = v70;
      if ( (unsigned int)v70 >= HIDWORD(v70) )
      {
        v57 = (unsigned int)(2 * HIDWORD(v70));
        v8 = (unsigned int **)sub_186B270(16 * v57);
        v58 = (unsigned int **)ptr;
        v59 = 0;
        v47 = v70;
        v60 = 16LL * (unsigned int)v70;
        if ( (_DWORD)v70 )
        {
          do
          {
            *(__m128i *)&v8[v59 / 8] = _mm_loadu_si128((const __m128i *)&v58[v59 / 8]);
            v59 += 16LL;
          }
          while ( v59 != v60 );
        }
        if ( v58 != &v71 && v58 )
        {
          v65 = v8;
          sub_186B220(v58);
          v47 = v70;
          v8 = v65;
        }
        ptr = v8;
        HIDWORD(v70) = v57;
      }
      else
      {
        v8 = (unsigned int **)ptr;
      }
      v48 = (__int64 *)&v8[2 * v47];
      *v48 = v36;
LABEL_54:
      *((_DWORD *)v48 + 2) = 0;
      v49 = (unsigned int)v70;
      LODWORD(v70) = v70 + 1;
      v9 = (unsigned int)v49;
      goto LABEL_55;
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v14 = v7[6];
LABEL_17:
    v15 = *((unsigned int *)v10 + 2);
    v16 = &v7[2 * v15];
    if ( (unsigned int)v15 >= v14 )
      goto LABEL_30;
    while ( 1 )
    {
      v17 = *((_QWORD *)v16 + 4);
      LODWORD(v15) = v15 + 1;
      v18 = *(__int64 **)a2;
      *((_DWORD *)v10 + 2) = v15;
      v19 = *(unsigned int *)(a2 + 8);
      v20 = *(_DWORD *)(v17 + 12);
      v21 = v18;
      v22 = v19 - 1;
      v19 *= 8;
      v23 = (__int64 *)((char *)v18 + v19);
      v24 = 8LL * (v20 & v22);
      v25 = &v18[(unsigned __int64)v24 / 8];
      if ( v24 == v19 )
      {
LABEL_33:
        if ( v18 != v25 )
        {
          do
          {
            v32 = *v21;
            if ( (unsigned __int64)*v21 > 1 )
            {
              if ( *(_DWORD *)(v32 + 12) == v20 && v17 == v32 )
                goto LABEL_29;
            }
            else if ( !v32 )
            {
              break;
            }
            ++v21;
          }
          while ( v25 != v21 );
        }
LABEL_25:
        v67 = (__int64 *)v17;
        sub_4A3CA0(a2, &v67);
        v28 = *(_WORD *)(v17 + 4);
        if ( v28 == 1 )
        {
          v55 = sub_15D1F10(v17);
          if ( v55 != *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
          {
            v53 = sub_1673B10(a1 + 8, v55);
            goto LABEL_72;
          }
LABEL_78:
          v53 = 1;
          goto LABEL_72;
        }
        if ( v28 == 2 )
        {
          v54 = v70;
          if ( (unsigned int)v70 >= HIDWORD(v70) )
          {
            v61 = (unsigned int)(2 * HIDWORD(v70));
            v8 = (unsigned int **)sub_186B270(16 * v61);
            v62 = (unsigned int **)ptr;
            v63 = 0;
            v54 = v70;
            v64 = 16LL * (unsigned int)v70;
            if ( (_DWORD)v70 )
            {
              do
              {
                *(__m128i *)&v8[v63 / 8] = _mm_loadu_si128((const __m128i *)&v62[v63 / 8]);
                v63 += 16LL;
              }
              while ( v63 != v64 );
            }
            if ( v62 != &v71 && v62 )
            {
              v66 = v8;
              sub_186B220(v62);
              v54 = v70;
              v8 = v66;
            }
            ptr = v8;
            HIDWORD(v70) = v61;
          }
          else
          {
            v8 = (unsigned int **)ptr;
          }
          v48 = (__int64 *)&v8[2 * v54];
          *v48 = v17;
          goto LABEL_54;
        }
        if ( v28 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( !*(_DWORD *)(v17 + 24) )
        {
          v52 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 40LL);
          if ( v52 != *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
          {
            v53 = sub_1673B10(a1 + 8, v52);
LABEL_72:
            a1[32] &= v53;
            goto LABEL_17;
          }
          goto LABEL_78;
        }
        v68.m128i_i64[0] = v17;
        v68.m128i_i32[2] = 0;
        sub_3DCD80((char **)&ptr, &v68);
        v8 = (unsigned int **)ptr;
        v9 = (unsigned int)(v70 - 1);
        v49 = v9;
LABEL_55:
        v7 = v8[2 * v49];
        goto LABEL_4;
      }
      v26 = &v18[(unsigned __int64)v24 / 8];
      while ( 1 )
      {
        v27 = *v26;
        if ( (unsigned __int64)*v26 > 1 )
          break;
        if ( !v27 )
          goto LABEL_25;
LABEL_22:
        if ( v23 == ++v26 )
          goto LABEL_33;
      }
      if ( *(_DWORD *)(v27 + 12) != v20 || v17 != v27 )
        goto LABEL_22;
LABEL_29:
      v16 += 2;
      if ( (unsigned int)v15 >= v14 )
      {
LABEL_30:
        v29 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
        v30 = *(_QWORD *)a1;
        result = (unsigned int)(v70 - 1);
        LODWORD(v70) = v70 - 1;
        if ( v29 == *(_QWORD *)(v30 + 840) )
        {
          v31 = 1;
        }
        else
        {
          v31 = sub_1673B10(a1 + 8, v29);
          result = (unsigned int)v70;
        }
        a1[32] &= v31;
        v8 = (unsigned int **)ptr;
LABEL_8:
        if ( !(_DWORD)result )
          goto LABEL_13;
LABEL_9:
        v9 = (unsigned int)(result - 1);
        v7 = v8[2 * (unsigned int)v9];
        goto LABEL_4;
      }
    }
  }
  v12 = sub_15D1F10(v7);
  if ( v12 == *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
    v13 = 1;
  else
    v13 = sub_1673B10(a1 + 8, v12);
  a1[32] &= v13;
  v8 = (unsigned int **)ptr;
  result = (unsigned int)(v70 - 1);
  LODWORD(v70) = result;
  if ( (_DWORD)result )
    goto LABEL_9;
LABEL_13:
  if ( v8 )
  {
    result = (__int64)&v71;
    if ( v8 != &v71 )
      return sub_186B220(v8);
  }
  return result;
}

