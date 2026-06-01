__int64 __fastcall sub_11110(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // rbx
  char *v9; // r15
  char *v10; // rcx
  char v11; // bp
  unsigned int v12; // edx
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  size_t v25; // r10
  char *v26; // rcx
  unsigned __int64 v27; // r14
  int v28; // r9d
  unsigned __int64 v29; // r14
  char *v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  char *v34; // rax
  int v35; // r9d
  unsigned __int64 v36; // [rsp+0h] [rbp-58h]
  unsigned int v37; // [rsp+0h] [rbp-58h]

  v3 = a3;
  v4 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v4;
  if ( !v4 || (v5 = v4 + 24, v4 + 24 > a1[2]) )
  {
    v21 = 2LL * a1[4];
    if ( v21 < 0x20 )
      v21 = 32;
    a1[4] = v21;
    v22 = v21 + 8;
    v23 = malloc(v21 + 8);
    v24 = a1[3];
    a1[3] = v23;
    *v23 = v24;
    v4 = ((unsigned __int64)v23 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v23 + v22;
    v5 = v4 + 24;
  }
  a1[1] = v5;
  *(_WORD *)(v4 + 16) = 77;
  *(_BYTE *)(v4 + 18) = 2;
  *(_QWORD *)v4 = v3;
  sub_C080(a2, v4, a1);
  v6 = a1[9];
  if ( a1[8] <= v6 )
    return 0;
  v7 = 0;
  v8 = 0;
  v9 = nullptr;
  while ( 1 )
  {
    v10 = (char *)(v6 + a1[7]);
    if ( (unsigned __int8)(*v10 - 48) > 9u )
      break;
    a1[9] = v6 + 1;
    v11 = *v10;
    if ( (unsigned int)v8 >= v7 )
    {
      v25 = v7;
      v26 = (char *)a1[1];
      if ( v26 == &v9[v7] && (unsigned __int64)(v26 + 1) <= a1[2] )
      {
        a1[1] = v26 + 1;
        ++v7;
      }
      else
      {
        v27 = 2 * v7;
        v28 = 2 * v7;
        if ( v27 < 4 )
          v27 = 4;
        v29 = v7 + v27;
        if ( !v26 || (v30 = &v26[v29], (unsigned __int64)&v26[v29] > a1[2]) )
        {
          v31 = 2LL * a1[4];
          if ( v31 < v29 + 1 )
            v31 = v29 + 1;
          a1[4] = v31;
          v36 = v31 + 8;
          v32 = malloc(v31 + 8);
          v33 = a1[3];
          v28 = 2 * v7;
          v25 = v7;
          a1[3] = v32;
          *v32 = v33;
          v26 = (char *)(v32 + 1);
          a1[2] = (char *)v32 + v36;
          v30 = (char *)v32 + v29 + 8;
        }
        a1[1] = v30;
        v37 = v28;
        v34 = (char *)memcpy(v26, v9, v25);
        v35 = v37;
        v9 = v34;
        if ( v37 < 4 )
          v35 = 4;
        v7 += v35;
      }
    }
    v9[v8] = v11;
    v12 = v8 + 1;
    v6 = a1[9];
    if ( v6 >= a1[8] )
      goto LABEL_9;
    v8 = v12;
  }
  v12 = v8;
LABEL_9:
  if ( !v12 )
    return 0;
  v13 = v12;
  v14 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v14;
  if ( !v14 || (v15 = v14 + 24, v14 + 24 > a1[2]) )
  {
    v16 = 2LL * a1[4];
    if ( v16 < 0x20 )
      v16 = 32;
    a1[4] = v16;
    v17 = v16 + 8;
    v18 = malloc(v16 + 8);
    v19 = a1[3];
    a1[3] = v18;
    *v18 = v19;
    v14 = ((unsigned __int64)v18 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v18 + v17;
    v15 = v14 + 24;
  }
  a1[1] = v15;
  *(_QWORD *)(v14 + 8) = v13;
  *(_WORD *)(v14 + 16) = 78;
  *(_BYTE *)(v14 + 18) = 1;
  *(_QWORD *)v14 = v9;
  if ( !a2 || !v14 )
    return 0;
  sub_C080(a2, v14, a1);
  return a2;
}
