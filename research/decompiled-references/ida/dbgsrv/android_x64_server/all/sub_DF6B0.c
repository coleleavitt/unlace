/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF6B0
// Address: 0x00000000000DF6B0

//----- (00000000000DF6B0) ----------------------------------------------------
char *__fastcall sub_DF6B0(_QWORD *a1, char **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rcx
  unsigned __int64 v7; // rsi
  char *v8; // rax
  size_t v9; // rsi
  char *v10; // rcx
  unsigned __int64 v11; // rsi
  char *v12; // rax
  size_t v13; // rsi
  _BYTE *v14; // rbx
  char *v15; // rcx
  unsigned __int64 v16; // rsi
  char *v17; // rax
  size_t v18; // rsi
  __int64 v19; // rdi
  const void *v20; // r12
  size_t v21; // rbx
  size_t v22; // rsi
  char *v23; // rax
  size_t v24; // rsi
  __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  char *v27; // rax
  size_t v28; // rsi
  _BYTE *v29; // rbx
  char *v30; // rcx
  unsigned __int64 v31; // rsi
  char *v32; // rax
  size_t v33; // rsi
  char *result; // rax
  char *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdi
  char *v38; // rax
  unsigned __int64 v39; // rsi
  size_t v40; // rsi

  v4 = a1[3];
  if ( a1[4] - v4 == 1 )
  {
    if ( v4 == a1[4] )
    {
LABEL_6:
      v6 = a2[1];
      v7 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v6 + 1) >= v7 )
      {
        v9 = 2 * v7;
        if ( v9 < (unsigned __int64)(v6 + 1) )
          v9 = (size_t)(v6 + 1);
        a2[2] = (char *)v9;
        v8 = (char *)realloc(*a2, v9);
        *a2 = v8;
        v6 = a2[1];
      }
      else
      {
        v8 = *a2;
      }
      v6[(_QWORD)v8] = 40;
      ++a2[1];
    }
    else
    {
      v5 = 0;
      while ( *(_BYTE *)(v4 + v5) == asc_FD804[v5] )
      {
        if ( ++v5 == 1 )
          goto LABEL_6;
      }
    }
  }
  v10 = a2[1];
  v11 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v10 + 1) >= v11 )
  {
    v13 = 2 * v11;
    if ( v13 < (unsigned __int64)(v10 + 1) )
      v13 = (size_t)(v10 + 1);
    a2[2] = (char *)v13;
    v12 = (char *)realloc(*a2, v13);
    *a2 = v12;
    v10 = a2[1];
  }
  else
  {
    v12 = *a2;
  }
  v10[(_QWORD)v12] = 40;
  ++a2[1];
  v14 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v14 + 24LL))(v14, a2);
  if ( v14[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v14 + 32LL))(v14, a2);
  v15 = a2[1];
  v16 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v15 + 2) >= v16 )
  {
    v18 = 2 * v16;
    if ( v18 < (unsigned __int64)(v15 + 2) )
      v18 = (size_t)(v15 + 2);
    a2[2] = (char *)v18;
    v17 = (char *)realloc(*a2, v18);
    *a2 = v17;
    v15 = a2[1];
  }
  else
  {
    v17 = *a2;
  }
  *(_WORD *)&v15[(_QWORD)v17] = 8233;
  v19 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v19;
  v20 = (const void *)a1[3];
  v21 = a1[4] - (_QWORD)v20;
  if ( v21 )
  {
    v22 = (size_t)a2[2];
    if ( v19 + v21 >= v22 )
    {
      v24 = 2 * v22;
      if ( v24 < v19 + v21 )
        v24 = v19 + v21;
      a2[2] = (char *)v24;
      v23 = (char *)realloc(*a2, v24);
      *a2 = v23;
      v19 = (__int64)a2[1];
    }
    else
    {
      v23 = *a2;
    }
    memmove(&v23[v19], v20, v21);
    v25 = (__int64)&a2[1][v21];
    a2[1] = (char *)v25;
    v19 = v25;
  }
  v26 = (unsigned __int64)a2[2];
  if ( v19 + 2 >= v26 )
  {
    v28 = 2 * v26;
    if ( v28 < v19 + 2 )
      v28 = v19 + 2;
    a2[2] = (char *)v28;
    v27 = (char *)realloc(*a2, v28);
    *a2 = v27;
    v19 = (__int64)a2[1];
  }
  else
  {
    v27 = *a2;
  }
  *(_WORD *)&v27[v19] = 10272;
  a2[1] += 2;
  v29 = (_BYTE *)a1[5];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v29 + 24LL))(v29, a2);
  if ( v29[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v29 + 32LL))(v29, a2);
  v30 = a2[1];
  v31 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v30 + 1) >= v31 )
  {
    v33 = 2 * v31;
    if ( v33 < (unsigned __int64)(v30 + 1) )
      v33 = (size_t)(v30 + 1);
    a2[2] = (char *)v33;
    v32 = (char *)realloc(*a2, v33);
    *a2 = v32;
    v30 = a2[1];
  }
  else
  {
    v32 = *a2;
  }
  v30[(_QWORD)v32] = 41;
  result = a2[1];
  v35 = result + 1;
  a2[1] = result + 1;
  v36 = a1[3];
  if ( a1[4] - v36 == 1 )
  {
    if ( v36 == a1[4] )
    {
LABEL_48:
      v38 = result + 2;
      v39 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)v38 >= v39 )
      {
        v40 = 2 * v39;
        if ( v40 < (unsigned __int64)v38 )
          v40 = (size_t)v38;
        a2[2] = (char *)v40;
        result = (char *)realloc(*a2, v40);
        *a2 = result;
        v35 = a2[1];
      }
      else
      {
        result = *a2;
      }
      v35[(_QWORD)result] = 41;
      ++a2[1];
    }
    else
    {
      v37 = 0;
      while ( *(_BYTE *)(v36 + v37) == asc_FD804[v37] )
      {
        if ( ++v37 == 1 )
          goto LABEL_48;
      }
    }
  }
  return result;
}
