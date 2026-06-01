/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033580
// Address: 0x0000000100033580

//----- (0000000100033580) ----------------------------------------------------
char *__fastcall sub_100033580(char **a1, _QWORD *a2)
{
  char *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  char *result; // rax
  char *v7; // r12
  char *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  char *v12; // rax
  char *v13; // rcx
  __int64 v14; // r9
  __int128 v15; // xmm1
  _QWORD *v16; // r15
  char *v17; // r12
  char *v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  char *v22; // rax
  char *v23; // rcx
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx

  v3 = *a1;
  v4 = (unsigned __int64)a1[2];
  if ( *a1 > (char *)a2 || &(*a1)[8 * v4] <= (char *)a2 )
  {
    result = a1[1];
    if ( v4 >= (unsigned __int64)(result + 1) )
    {
LABEL_41:
      *(_QWORD *)&v3[8 * (_QWORD)result] = *a2;
      goto LABEL_42;
    }
    v16 = a2;
    v3 = (char *)qvector_reserve((__int64)a1, nullptr, (unsigned __int64)(result + 1), 8u);
    v17 = a1[2];
    a1[2] = (char *)v4;
    v18 = *a1;
    v19 = (unsigned __int64)a1[1];
    v20 = v19 - 1;
    if ( (__int64)(v19 - 1) < 0 )
    {
LABEL_40:
      qfree(v18);
      *a1 = v3;
      a1[2] = v17;
      result = a1[1];
      a2 = v16;
      goto LABEL_41;
    }
    if ( v19 < 6 || (unsigned __int64)(v3 - v18) < 0x20 )
    {
      v22 = v3;
      v23 = *a1;
    }
    else
    {
      v21 = v19 & 0xFFFFFFFFFFFFFFFCLL;
      v20 -= v19 & 0xFFFFFFFFFFFFFFFCLL;
      v22 = &v3[8 * (v19 & 0xFFFFFFFFFFFFFFFCLL)];
      v23 = &v18[8 * (v19 & 0xFFFFFFFFFFFFFFFCLL)];
      v24 = 0;
      do
      {
        v25 = *(_OWORD *)&v18[8 * v24 + 16];
        *(_OWORD *)&v3[8 * v24] = *(_OWORD *)&v18[8 * v24];
        *(_OWORD *)&v3[8 * v24 + 16] = v25;
        v24 += 4;
      }
      while ( v21 != v24 );
      if ( v19 == v21 )
        goto LABEL_39;
    }
    if ( (((_BYTE)v20 + 1) & 7) != 0 )
    {
      v28 = 0;
      do
      {
        *(_QWORD *)v22 = *(_QWORD *)v23;
        v23 += 8;
        v22 += 8;
        ++v28;
      }
      while ( (((_BYTE)v20 + 1) & 7) != v28 );
      v29 = v20 - v28;
      if ( v20 < 7 )
        goto LABEL_39;
    }
    else
    {
      v29 = v20;
      if ( v20 < 7 )
      {
LABEL_39:
        v18 = *a1;
        goto LABEL_40;
      }
    }
    v32 = v29 + 1;
    v33 = 0;
    do
    {
      *(_QWORD *)&v22[8 * v33] = *(_QWORD *)&v23[8 * v33];
      *(_QWORD *)&v22[8 * v33 + 8] = *(_QWORD *)&v23[8 * v33 + 8];
      *(_QWORD *)&v22[8 * v33 + 16] = *(_QWORD *)&v23[8 * v33 + 16];
      *(_QWORD *)&v22[8 * v33 + 24] = *(_QWORD *)&v23[8 * v33 + 24];
      *(_QWORD *)&v22[8 * v33 + 32] = *(_QWORD *)&v23[8 * v33 + 32];
      *(_QWORD *)&v22[8 * v33 + 40] = *(_QWORD *)&v23[8 * v33 + 40];
      *(_QWORD *)&v22[8 * v33 + 48] = *(_QWORD *)&v23[8 * v33 + 48];
      *(_QWORD *)&v22[8 * v33 + 56] = *(_QWORD *)&v23[8 * v33 + 56];
      v33 += 8;
    }
    while ( v32 != v33 );
    goto LABEL_39;
  }
  v5 = *a2;
  result = a1[1];
  if ( v4 < (unsigned __int64)(result + 1) )
  {
    v3 = (char *)qvector_reserve((__int64)a1, nullptr, (unsigned __int64)(result + 1), 8u);
    v7 = a1[2];
    a1[2] = (char *)v4;
    v8 = *a1;
    v9 = (unsigned __int64)a1[1];
    v10 = v9 - 1;
    if ( (__int64)(v9 - 1) < 0 )
    {
LABEL_34:
      qfree(v8);
      *a1 = v3;
      a1[2] = v7;
      result = a1[1];
      goto LABEL_35;
    }
    if ( v9 < 6 || (unsigned __int64)(v3 - v8) < 0x20 )
    {
      v12 = v3;
      v13 = *a1;
    }
    else
    {
      v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      v10 -= v9 & 0xFFFFFFFFFFFFFFFCLL;
      v12 = &v3[8 * (v9 & 0xFFFFFFFFFFFFFFFCLL)];
      v13 = &v8[8 * (v9 & 0xFFFFFFFFFFFFFFFCLL)];
      v14 = 0;
      do
      {
        v15 = *(_OWORD *)&v8[8 * v14 + 16];
        *(_OWORD *)&v3[8 * v14] = *(_OWORD *)&v8[8 * v14];
        *(_OWORD *)&v3[8 * v14 + 16] = v15;
        v14 += 4;
      }
      while ( v11 != v14 );
      if ( v9 == v11 )
        goto LABEL_33;
    }
    if ( (((_BYTE)v10 + 1) & 7) != 0 )
    {
      v26 = 0;
      do
      {
        *(_QWORD *)v12 = *(_QWORD *)v13;
        v13 += 8;
        v12 += 8;
        ++v26;
      }
      while ( (((_BYTE)v10 + 1) & 7) != v26 );
      v27 = v10 - v26;
      if ( v10 < 7 )
        goto LABEL_33;
    }
    else
    {
      v27 = v10;
      if ( v10 < 7 )
      {
LABEL_33:
        v8 = *a1;
        goto LABEL_34;
      }
    }
    v30 = v27 + 1;
    v31 = 0;
    do
    {
      *(_QWORD *)&v12[8 * v31] = *(_QWORD *)&v13[8 * v31];
      *(_QWORD *)&v12[8 * v31 + 8] = *(_QWORD *)&v13[8 * v31 + 8];
      *(_QWORD *)&v12[8 * v31 + 16] = *(_QWORD *)&v13[8 * v31 + 16];
      *(_QWORD *)&v12[8 * v31 + 24] = *(_QWORD *)&v13[8 * v31 + 24];
      *(_QWORD *)&v12[8 * v31 + 32] = *(_QWORD *)&v13[8 * v31 + 32];
      *(_QWORD *)&v12[8 * v31 + 40] = *(_QWORD *)&v13[8 * v31 + 40];
      *(_QWORD *)&v12[8 * v31 + 48] = *(_QWORD *)&v13[8 * v31 + 48];
      *(_QWORD *)&v12[8 * v31 + 56] = *(_QWORD *)&v13[8 * v31 + 56];
      v31 += 8;
    }
    while ( v30 != v31 );
    goto LABEL_33;
  }
LABEL_35:
  *(_QWORD *)&v3[8 * (_QWORD)result] = v5;
LABEL_42:
  ++a1[1];
  return result;
}
