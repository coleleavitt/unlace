/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C780
// Address: 0x000000000006C780

//----- (000000000006C780) ----------------------------------------------------
char *__fastcall sub_6C780(char **a1, char *a2)
{
  char *v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // r15
  char *result; // rax
  char *v8; // r12
  char *v9; // rdi
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r14
  char *v15; // r12
  char *v16; // rdi
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int128 v34; // xmm1
  __int64 v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int128 v42; // xmm1

  v4 = *a1;
  v5 = (unsigned __int64)a1[2];
  if ( *a1 > a2 || &v4[8 * v5] <= a2 )
  {
    result = a1[1];
    if ( v5 >= (unsigned __int64)(result + 1) )
    {
LABEL_24:
      v14 = a1 + 1;
      *(_QWORD *)&v4[8 * (_QWORD)result] = *(_QWORD *)a2;
      goto LABEL_25;
    }
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, (unsigned __int64)(result + 1), 8u);
    v15 = a1[2];
    a1[2] = (char *)v5;
    v16 = *a1;
    v17 = (unsigned __int64)a1[1];
    v18 = v17 - 1;
    if ( (__int64)(v17 - 1) < 0 )
    {
LABEL_23:
      qfree(v16);
      *a1 = v4;
      a1[2] = v15;
      result = a1[1];
      goto LABEL_24;
    }
    if ( v17 < 4 || v4 < &v16[8 * v17] && &v4[8 * v17] > v16 )
    {
      v19 = v4;
      goto LABEL_20;
    }
    v24 = v17 & 0xFFFFFFFFFFFFFFFCLL;
    v25 = ((unsigned __int8)(((v17 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
    if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) - 4 >= 0xC )
    {
      v35 = v25 - ((((v17 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
      v26 = 0;
      do
      {
        v36 = *(_OWORD *)&v16[8 * v26 + 16];
        *(_OWORD *)&v4[8 * v26] = *(_OWORD *)&v16[8 * v26];
        *(_OWORD *)&v4[8 * v26 + 16] = v36;
        v37 = *(_OWORD *)&v16[8 * v26 + 48];
        *(_OWORD *)&v4[8 * v26 + 32] = *(_OWORD *)&v16[8 * v26 + 32];
        *(_OWORD *)&v4[8 * v26 + 48] = v37;
        v38 = *(_OWORD *)&v16[8 * v26 + 80];
        *(_OWORD *)&v4[8 * v26 + 64] = *(_OWORD *)&v16[8 * v26 + 64];
        *(_OWORD *)&v4[8 * v26 + 80] = v38;
        v39 = *(_OWORD *)&v16[8 * v26 + 112];
        *(_OWORD *)&v4[8 * v26 + 96] = *(_OWORD *)&v16[8 * v26 + 96];
        *(_OWORD *)&v4[8 * v26 + 112] = v39;
        v26 += 16;
        v35 += 4;
      }
      while ( v35 );
      if ( (((unsigned __int8)(((v17 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
        goto LABEL_44;
    }
    else
    {
      v26 = 0;
      if ( (((unsigned __int8)(((v17 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
      {
LABEL_44:
        if ( v17 == v24 )
        {
LABEL_22:
          v16 = *a1;
          goto LABEL_23;
        }
        v18 -= v24;
        v19 = &v4[8 * v24];
        v16 += 8 * v24;
LABEL_20:
        v20 = 0;
        do
        {
          *(_QWORD *)&v19[v20] = *(_QWORD *)&v16[v20];
          v20 += 8;
          --v18;
        }
        while ( v18 >= 0 );
        goto LABEL_22;
      }
    }
    v40 = 8 * v26 + 16;
    v41 = -v25;
    do
    {
      v42 = *(_OWORD *)&v16[v40];
      *(_OWORD *)&v4[v40 - 16] = *(_OWORD *)&v16[v40 - 16];
      *(_OWORD *)&v4[v40] = v42;
      v40 += 32;
      ++v41;
    }
    while ( v41 );
    goto LABEL_44;
  }
  v6 = *(_QWORD *)a2;
  result = a1[1];
  if ( v5 < (unsigned __int64)(result + 1) )
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, (unsigned __int64)(result + 1), 8u);
    v8 = a1[2];
    a1[2] = (char *)v5;
    v9 = *a1;
    v10 = (unsigned __int64)a1[1];
    v11 = v10 - 1;
    if ( (__int64)(v10 - 1) < 0 )
    {
LABEL_12:
      qfree(v9);
      *a1 = v4;
      a1[2] = v8;
      result = a1[1];
      goto LABEL_13;
    }
    if ( v10 < 4 || v4 < &v9[8 * v10] && &v4[8 * v10] > v9 )
    {
      v12 = v4;
      goto LABEL_9;
    }
    v21 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    v22 = ((unsigned __int8)(((v10 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) - 4 >= 0xC )
    {
      v27 = v22 - ((((v10 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
      v23 = 0;
      do
      {
        v28 = *(_OWORD *)&v9[8 * v23 + 16];
        *(_OWORD *)&v4[8 * v23] = *(_OWORD *)&v9[8 * v23];
        *(_OWORD *)&v4[8 * v23 + 16] = v28;
        v29 = *(_OWORD *)&v9[8 * v23 + 48];
        *(_OWORD *)&v4[8 * v23 + 32] = *(_OWORD *)&v9[8 * v23 + 32];
        *(_OWORD *)&v4[8 * v23 + 48] = v29;
        v30 = *(_OWORD *)&v9[8 * v23 + 80];
        *(_OWORD *)&v4[8 * v23 + 64] = *(_OWORD *)&v9[8 * v23 + 64];
        *(_OWORD *)&v4[8 * v23 + 80] = v30;
        v31 = *(_OWORD *)&v9[8 * v23 + 112];
        *(_OWORD *)&v4[8 * v23 + 96] = *(_OWORD *)&v9[8 * v23 + 96];
        *(_OWORD *)&v4[8 * v23 + 112] = v31;
        v23 += 16;
        v27 += 4;
      }
      while ( v27 );
      if ( (((unsigned __int8)(((v10 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
        goto LABEL_37;
    }
    else
    {
      v23 = 0;
      if ( (((unsigned __int8)(((v10 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
      {
LABEL_37:
        if ( v10 == v21 )
        {
LABEL_11:
          v9 = *a1;
          goto LABEL_12;
        }
        v11 -= v21;
        v12 = &v4[8 * v21];
        v9 += 8 * v21;
LABEL_9:
        v13 = 0;
        do
        {
          *(_QWORD *)&v12[v13] = *(_QWORD *)&v9[v13];
          v13 += 8;
          --v11;
        }
        while ( v11 >= 0 );
        goto LABEL_11;
      }
    }
    v32 = 8 * v23 + 16;
    v33 = -v22;
    do
    {
      v34 = *(_OWORD *)&v9[v32];
      *(_OWORD *)&v4[v32 - 16] = *(_OWORD *)&v9[v32 - 16];
      *(_OWORD *)&v4[v32] = v34;
      v32 += 32;
      ++v33;
    }
    while ( v33 );
    goto LABEL_37;
  }
LABEL_13:
  v14 = a1 + 1;
  *(_QWORD *)&v4[8 * (_QWORD)result] = v6;
LABEL_25:
  ++*v14;
  return result;
}
