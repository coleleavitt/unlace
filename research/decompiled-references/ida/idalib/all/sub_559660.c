__int64 __fastcall sub_559660(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, int a6)
{
  __int64 v9; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h]
  int v30; // [rsp+0h] [rbp-48h]
  int v31; // [rsp+0h] [rbp-48h]
  int v32; // [rsp+Ch] [rbp-3Ch]

  v9 = a4 - a3;
  for ( i = a3; ; i = v11 )
  {
    v15 = (unsigned __int64 *)a1[7];
    v16 = &v15[2 * a1[8]];
    if ( v15 == v16 )
      break;
    while ( i < *v15 || i >= v15[1] )
    {
      v15 += 2;
      if ( v16 == v15 )
        goto LABEL_13;
    }
    if ( !v15 )
      break;
    v11 = v15[1];
    if ( v11 > a4 )
      v11 = a4;
    if ( i >= v11 )
      goto LABEL_16;
LABEL_7:
    v12 = a1[5];
    v13 = a1[4];
    if ( a1[6] < (unsigned __int64)(v12 + 1) )
    {
      v32 = a6;
      v29 = v11;
      v18 = qvector_reserve(a1 + 4, v13, v12 + 1, 32);
      a6 = v32;
      v11 = v29;
      a1[4] = v18;
      v13 = v18;
      v12 = a1[5];
    }
    v14 = v13 + 32 * v12;
    *(_WORD *)(v14 + 28) = 0;
    *(_BYTE *)(v14 + 30) = 0;
    ++a1[5];
    *(_QWORD *)(v14 + 8) = v11 - i;
    *(_DWORD *)(v14 + 24) = a6;
    *(_WORD *)(v14 + 28) = 257;
    *(_BYTE *)(v14 + 30) = i < a5;
    *(_QWORD *)v14 = a2;
    v9 = i + v9 - v11;
    a2 += v11 - i;
    *(_QWORD *)(v14 + 16) = i;
  }
LABEL_13:
  v11 = (i + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 > a4 )
    v11 = a4;
  if ( i < v11 )
    goto LABEL_7;
LABEL_16:
  if ( v9 > 7 )
  {
    v22 = a1[5];
    v23 = a1[4];
    v24 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[6] < (unsigned __int64)(v22 + 1) )
    {
      v31 = a6;
      v28 = qvector_reserve(a1 + 4, v23, v22 + 1, 32);
      a6 = v31;
      a1[4] = v28;
      v23 = v28;
      v22 = a1[5];
    }
    v25 = v23 + 32 * v22;
    v26 = v9 >> 3;
    *(_WORD *)(v25 + 28) = 0;
    *(_BYTE *)(v25 + 30) = 0;
    ++a1[5];
    *(_BYTE *)(v25 + 30) = i < a5;
    v9 -= v24;
    *(_QWORD *)v25 = a2;
    a2 += v26;
    *(_QWORD *)(v25 + 16) = i;
    i += v24;
    *(_QWORD *)(v25 + 8) = v26;
    *(_DWORD *)(v25 + 24) = a6;
    *(_WORD *)(v25 + 28) = 256;
  }
  if ( v9 > 0 )
  {
    v19 = a1[5];
    v20 = a1[4];
    if ( a1[6] < (unsigned __int64)(v19 + 1) )
    {
      v30 = a6;
      v27 = qvector_reserve(a1 + 4, v20, v19 + 1, 32);
      a6 = v30;
      a1[4] = v27;
      v20 = v27;
      v19 = a1[5];
    }
    v21 = v20 + 32 * v19;
    *(_WORD *)(v21 + 28) = 0;
    *(_BYTE *)(v21 + 30) = 0;
    ++a1[5];
    *(_QWORD *)v21 = a2;
    *(_BYTE *)(v21 + 30) = i < a5;
    a2 += v9;
    *(_QWORD *)(v21 + 8) = v9;
    *(_QWORD *)(v21 + 16) = i;
    *(_DWORD *)(v21 + 24) = a6;
    *(_WORD *)(v21 + 28) = 257;
  }
  return a2;
}
