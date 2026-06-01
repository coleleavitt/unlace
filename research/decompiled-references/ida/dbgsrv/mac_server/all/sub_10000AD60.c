/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AD60
// Address: 0x000000010000AD60

//----- (000000010000AD60) ----------------------------------------------------
__int64 __fastcall sub_10000AD60(char **a1, _QWORD *a2)
{
  char *v3; // r15
  char *v4; // rcx
  char *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // r12
  size_t v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  char *v13; // rax
  char *v14; // rdx
  char *v15; // rsi
  signed __int64 v16; // r15
  unsigned __int64 v17; // r15
  char *v18; // rdi
  char *v19; // r8
  __int64 result; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  unsigned __int64 v23; // r9
  __int64 v24; // r11
  __int128 v25; // xmm1
  char *__p; // [rsp+8h] [rbp-38h]
  _QWORD *v27; // [rsp+10h] [rbp-30h]

  v3 = a1[2];
  if ( v3 != a1[3] )
    goto LABEL_16;
  v27 = a2;
  v4 = *a1;
  v5 = a1[1];
  if ( v5 > *a1 )
  {
    v6 = (__int64)(((unsigned __int64)(((v5 - *a1) >> 3) + 1) >> 63) + ((v5 - *a1) >> 3) + 1) >> 1;
    v7 = -v6;
    v8 = 8 * v6;
    v9 = &v5[-v8];
    v10 = v3 - v5;
    if ( v10 )
    {
      memmove(&v5[-v8], a1[1], v10);
      v5 = a1[1];
    }
    v3 = &v9[v10];
    a1[2] = v3;
    a1[1] = &v5[8 * v7];
    goto LABEL_16;
  }
  __p = *a1;
  v11 = 1;
  if ( v3 != v4 )
    v11 = (v3 - v4) >> 2;
  if ( v11 >> 61 )
    sub_10000AF40();
  v12 = v11 >> 2;
  v13 = (char *)operator new(8 * v11);
  v14 = &v13[8 * (v11 >> 2)];
  v15 = v14;
  v16 = v3 - v5;
  if ( v16 )
  {
    v15 = &v14[v16];
    v17 = v16 - 8;
    if ( v17 < 0x68 || (unsigned __int64)(&v13[8 * v12] - v5) < 0x20 )
    {
      v18 = &v13[8 * v12];
      v19 = v5;
      do
      {
LABEL_13:
        *(_QWORD *)v18 = *(_QWORD *)v19;
        v18 += 8;
        v19 += 8;
      }
      while ( v18 != v15 );
      goto LABEL_14;
    }
    v21 = (v17 >> 3) + 1;
    v22 = 8 * v12;
    v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
    v18 = &v14[8 * (v21 & 0xFFFFFFFFFFFFFFFCLL)];
    v19 = &v5[8 * (v21 & 0xFFFFFFFFFFFFFFFCLL)];
    v24 = 0;
    do
    {
      v25 = *(_OWORD *)&v5[8 * v24 + 16];
      *(_OWORD *)&v13[8 * v24 + v22] = *(_OWORD *)&v5[8 * v24];
      *(_OWORD *)&v13[8 * v24 + 16 + v22] = v25;
      v24 += 4;
    }
    while ( v23 != v24 );
    if ( v21 != v23 )
      goto LABEL_13;
  }
LABEL_14:
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
  a1[3] = &v13[8 * v11];
  v3 = v15;
  a2 = v27;
  if ( __p )
  {
    operator delete(__p);
    a2 = v27;
    v3 = a1[2];
  }
LABEL_16:
  result = *a2;
  *(_QWORD *)v3 = *a2;
  a1[2] += 8;
  return result;
}
