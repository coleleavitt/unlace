/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CAFE0
// Address: 0x00000000000CAFE0

//----- (00000000000CAFE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_CAFE0(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 i; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 j; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // r13
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rdx
  __int128 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+10h] [rbp-38h]

  v4 = (_QWORD *)*a1;
  v5 = a1[2];
  if ( *a1 <= a2 && (unsigned __int64)&v4[3 * v5] > a2 )
  {
    v31 = *(_QWORD *)(a2 + 16);
    v30 = *(_OWORD *)a2;
    v6 = a1[1];
    if ( v5 >= v6 + 1 )
    {
LABEL_28:
      v25 = a1 + 1;
      v26 = 3 * v6;
      v4[v26 + 2] = v31;
      v27 = v30;
      goto LABEL_29;
    }
    v7 = qvector_reserve((__int64)a1, nullptr, v6 + 1, 0x18u);
    v4 = v7;
    v8 = a1[2];
    a1[2] = v5;
    v9 = (_QWORD *)*a1;
    v10 = a1[1];
    v11 = v10 - 1;
    if ( (__int64)(v10 - 1) < 0 )
    {
LABEL_27:
      qfree(v9);
      *a1 = (unsigned __int64)v4;
      a1[2] = v8;
      v6 = a1[1];
      goto LABEL_28;
    }
    v12 = v10 & 7;
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v7[2] = v9[2];
        *(_OWORD *)v7 = *(_OWORD *)v9;
        v9 += 3;
        v7 += 3;
      }
      v14 = v11 - i;
      if ( v11 < 7 )
        goto LABEL_26;
    }
    else
    {
      v14 = a1[1] - 1;
      if ( v11 < 7 )
      {
LABEL_26:
        v9 = (_QWORD *)*a1;
        goto LABEL_27;
      }
    }
    v28 = 0;
    do
    {
      v7[v28 + 2] = v9[v28 + 2];
      *(_OWORD *)&v7[v28] = *(_OWORD *)&v9[v28];
      v7[v28 + 5] = v9[v28 + 5];
      *(_OWORD *)&v7[v28 + 3] = *(_OWORD *)&v9[v28 + 3];
      v7[v28 + 8] = v9[v28 + 8];
      *(_OWORD *)&v7[v28 + 6] = *(_OWORD *)&v9[v28 + 6];
      v7[v28 + 11] = v9[v28 + 11];
      *(_OWORD *)&v7[v28 + 9] = *(_OWORD *)&v9[v28 + 9];
      v7[v28 + 14] = v9[v28 + 14];
      *(_OWORD *)&v7[v28 + 12] = *(_OWORD *)&v9[v28 + 12];
      v7[v28 + 17] = v9[v28 + 17];
      *(_OWORD *)&v7[v28 + 15] = *(_OWORD *)&v9[v28 + 15];
      *(_OWORD *)&v7[v28 + 18] = *(_OWORD *)&v9[v28 + 18];
      v7[v28 + 20] = v9[v28 + 20];
      *(_OWORD *)&v7[v28 + 21] = *(_OWORD *)&v9[v28 + 21];
      v7[v28 + 23] = v9[v28 + 23];
      v28 += 24;
      v14 -= 8;
    }
    while ( v14 >= 0 );
    goto LABEL_26;
  }
  v15 = a1[1];
  if ( v5 < v15 + 1 )
  {
    v16 = qvector_reserve((__int64)a1, nullptr, v15 + 1, 0x18u);
    v4 = v16;
    v17 = a1[2];
    a1[2] = v5;
    v18 = (_QWORD *)*a1;
    v19 = a1[1];
    v20 = v19 - 1;
    if ( (__int64)(v19 - 1) < 0 )
    {
LABEL_21:
      qfree(v18);
      *a1 = (unsigned __int64)v4;
      a1[2] = v17;
      v15 = a1[1];
      goto LABEL_22;
    }
    v21 = v19 & 7;
    if ( v21 )
    {
      for ( j = 0; j != v21; ++j )
      {
        v16[2] = v18[2];
        *(_OWORD *)v16 = *(_OWORD *)v18;
        v18 += 3;
        v16 += 3;
      }
      v23 = v20 - j;
      if ( v20 < 7 )
        goto LABEL_20;
    }
    else
    {
      v23 = a1[1] - 1;
      if ( v20 < 7 )
      {
LABEL_20:
        v18 = (_QWORD *)*a1;
        goto LABEL_21;
      }
    }
    v24 = 0;
    do
    {
      v16[v24 + 2] = v18[v24 + 2];
      *(_OWORD *)&v16[v24] = *(_OWORD *)&v18[v24];
      v16[v24 + 5] = v18[v24 + 5];
      *(_OWORD *)&v16[v24 + 3] = *(_OWORD *)&v18[v24 + 3];
      v16[v24 + 8] = v18[v24 + 8];
      *(_OWORD *)&v16[v24 + 6] = *(_OWORD *)&v18[v24 + 6];
      v16[v24 + 11] = v18[v24 + 11];
      *(_OWORD *)&v16[v24 + 9] = *(_OWORD *)&v18[v24 + 9];
      v16[v24 + 14] = v18[v24 + 14];
      *(_OWORD *)&v16[v24 + 12] = *(_OWORD *)&v18[v24 + 12];
      v16[v24 + 17] = v18[v24 + 17];
      *(_OWORD *)&v16[v24 + 15] = *(_OWORD *)&v18[v24 + 15];
      *(_OWORD *)&v16[v24 + 18] = *(_OWORD *)&v18[v24 + 18];
      v16[v24 + 20] = v18[v24 + 20];
      *(_OWORD *)&v16[v24 + 21] = *(_OWORD *)&v18[v24 + 21];
      v16[v24 + 23] = v18[v24 + 23];
      v24 += 24;
      v23 -= 8;
    }
    while ( v23 >= 0 );
    goto LABEL_20;
  }
LABEL_22:
  v25 = a1 + 1;
  v26 = 3 * v15;
  v4[v26 + 2] = *(_QWORD *)(a2 + 16);
  v27 = *(_OWORD *)a2;
LABEL_29:
  *(_OWORD *)&v4[v26] = v27;
  ++*v25;
  return __readfsqword(0x28u);
}
