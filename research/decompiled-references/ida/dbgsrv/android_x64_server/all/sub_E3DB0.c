/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3DB0
// Address: 0x00000000000E3DB0

//----- (00000000000E3DB0) ----------------------------------------------------
char *__fastcall sub_E3DB0(_QWORD *a1, char **a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  __int64 v8; // rdi
  const void *v9; // r12
  size_t v10; // r15
  size_t v11; // rsi
  char *v12; // rax
  size_t v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // rsi
  char *v16; // rax
  size_t v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // r15
  unsigned __int64 v21; // rsi
  char *v22; // rax
  __int64 v23; // rcx
  size_t v24; // rsi
  _QWORD *v25; // rbp
  _BYTE *v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  char *result; // rax
  size_t v30; // rsi
  int v31; // [rsp+0h] [rbp-34h]

  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 7) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 7) )
      v7 = (size_t)(v4 + 7);
    a2[2] = (char *)v7;
    v6 = (char *)realloc(*a2, v7);
    *a2 = v6;
    v4 = a2[1];
  }
  else
  {
    v6 = *a2;
  }
  v4[(_QWORD)v6 + 6] = 97;
  *(_WORD *)&v4[(_QWORD)v6 + 4] = 25698;
  *(_DWORD *)&v4[(_QWORD)v6] = 1835101223;
  v8 = (__int64)(a2[1] + 7);
  a2[1] = (char *)v8;
  v9 = (const void *)a1[4];
  v10 = a1[5] - (_QWORD)v9;
  if ( v10 )
  {
    v11 = (size_t)a2[2];
    if ( v8 + v10 >= v11 )
    {
      v13 = 2 * v11;
      if ( v13 < v8 + v10 )
        v13 = v8 + v10;
      a2[2] = (char *)v13;
      v12 = (char *)realloc(*a2, v13);
      *a2 = v12;
      v8 = (__int64)a2[1];
    }
    else
    {
      v12 = *a2;
    }
    memmove(&v12[v8], v9, v10);
    v14 = (__int64)&a2[1][v10];
    a2[1] = (char *)v14;
    v8 = v14;
  }
  v15 = (unsigned __int64)a2[2];
  if ( v8 + 2 >= v15 )
  {
    v17 = 2 * v15;
    if ( v17 < v8 + 2 )
      v17 = v8 + 2;
    a2[2] = (char *)v17;
    v16 = (char *)realloc(*a2, v17);
    *a2 = v16;
    v8 = (__int64)a2[1];
  }
  else
  {
    v16 = *a2;
  }
  *(_WORD *)&v16[v8] = 10279;
  v18 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v18;
  if ( a1[3] )
  {
    LOBYTE(v16) = 1;
    v19 = 0;
    do
    {
      v20 = v18;
      v31 = (int)v16;
      if ( ((unsigned __int8)v16 & 1) == 0 )
      {
        v21 = (unsigned __int64)a2[2];
        if ( v18 + 2 >= v21 )
        {
          v24 = 2 * v21;
          if ( v24 < v18 + 2 )
            v24 = v18 + 2;
          a2[2] = (char *)v24;
          v22 = (char *)realloc(*a2, v24);
          *a2 = v22;
          v23 = (__int64)a2[1];
        }
        else
        {
          v22 = *a2;
          v23 = v18;
        }
        *(_WORD *)&v22[v23] = 8236;
        v20 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v20;
      }
      v25 = a1;
      v26 = *(_BYTE **)(a1[2] + 8 * v19);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v26 + 24LL))(v26, a2);
      if ( v26[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v26 + 32LL))(v26, a2);
      v27 = (__int64)a2[1];
      if ( v20 == v27 )
      {
        a2[1] = (char *)v18;
        v27 = v18;
        a1 = v25;
        LODWORD(v16) = v31;
      }
      else
      {
        LODWORD(v16) = 0;
        v18 = (__int64)a2[1];
        a1 = v25;
      }
      ++v19;
    }
    while ( v19 != a1[3] );
  }
  else
  {
    v27 = v18;
  }
  v28 = (unsigned __int64)a2[2];
  if ( v27 + 1 >= v28 )
  {
    v30 = 2 * v28;
    if ( v30 < v27 + 1 )
      v30 = v27 + 1;
    a2[2] = (char *)v30;
    result = (char *)realloc(*a2, v30);
    *a2 = result;
    v27 = (__int64)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v27] = 41;
  ++a2[1];
  return result;
}
