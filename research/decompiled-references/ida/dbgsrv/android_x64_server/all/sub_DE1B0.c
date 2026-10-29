/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE1B0
// Address: 0x00000000000DE1B0

//----- (00000000000DE1B0) ----------------------------------------------------
void *__fastcall sub_DE1B0(_QWORD *a1, void **a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  void *v6; // rax
  size_t v7; // rsi
  __int64 v8; // rdi
  const void *v9; // r15
  size_t v10; // rbx
  size_t v11; // rsi
  char *v12; // rax
  size_t v13; // rsi
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rax
  size_t v17; // rsi
  _BYTE *v18; // rbx
  char *v19; // rcx
  unsigned __int64 v20; // rsi
  void *v21; // rax
  size_t v22; // r15
  __int64 v23; // rdi
  size_t v24; // rsi
  size_t v25; // rax
  size_t v26; // rsi
  char *v27; // rax
  size_t v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32; // cf
  __int64 v33; // rbx
  const void *v34; // r15
  size_t v35; // rbx
  void *result; // rax
  char *v37; // rdi
  size_t v38; // rsi
  char *v39; // rax
  size_t v40; // rsi

  if ( a1[3] - a1[2] >= 4u )
  {
    v4 = (char *)a2[1];
    v5 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v4 + 1) >= v5 )
    {
      v7 = 2 * v5;
      if ( v7 < (unsigned __int64)(v4 + 1) )
        v7 = (size_t)(v4 + 1);
      a2[2] = (void *)v7;
      v6 = realloc(*a2, v7);
      *a2 = v6;
      v4 = (char *)a2[1];
    }
    else
    {
      v6 = *a2;
    }
    v4[(_QWORD)v6] = 40;
    v8 = (__int64)a2[1] + 1;
    a2[1] = (void *)v8;
    v9 = (const void *)a1[2];
    v10 = a1[3] - (_QWORD)v9;
    if ( v10 )
    {
      v11 = (size_t)a2[2];
      if ( v8 + v10 >= v11 )
      {
        v13 = 2 * v11;
        if ( v13 < v8 + v10 )
          v13 = v8 + v10;
        a2[2] = (void *)v13;
        v12 = (char *)realloc(*a2, v13);
        *a2 = v12;
        v8 = (__int64)a2[1];
      }
      else
      {
        v12 = (char *)*a2;
      }
      memmove(&v12[v8], v9, v10);
      v14 = (__int64)a2[1] + v10;
      a2[1] = (void *)v14;
      v8 = v14;
    }
    v15 = (unsigned __int64)a2[2];
    if ( v8 + 1 >= v15 )
    {
      v17 = 2 * v15;
      if ( v17 < v8 + 1 )
        v17 = v8 + 1;
      a2[2] = (void *)v17;
      v16 = realloc(*a2, v17);
      *a2 = v16;
      v8 = (__int64)a2[1];
    }
    else
    {
      v16 = *a2;
    }
    v16[v8] = 41;
    a2[1] = (char *)a2[1] + 1;
  }
  v18 = (_BYTE *)a1[4];
  if ( *v18 != 110 )
  {
    v22 = a1[5] - (_QWORD)v18;
    if ( !v22 )
      goto LABEL_37;
    v23 = (__int64)a2[1];
    v24 = (size_t)a2[2];
    v25 = v23 + v22;
    if ( v23 + v22 < v24 )
      goto LABEL_35;
    goto LABEL_25;
  }
  v19 = (char *)a2[1];
  v20 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v19 + 1) >= v20 )
  {
    v28 = 2 * v20;
    if ( v28 < (unsigned __int64)(v19 + 1) )
      v28 = (size_t)(v19 + 1);
    a2[2] = (void *)v28;
    v21 = realloc(*a2, v28);
    *a2 = v21;
    v19 = (char *)a2[1];
  }
  else
  {
    v21 = *a2;
  }
  v19[(_QWORD)v21] = 45;
  v23 = (__int64)a2[1] + 1;
  a2[1] = (void *)v23;
  v29 = a1[4];
  v30 = a1[5];
  v32 = v30 == v29;
  v31 = v30 - v29;
  v33 = v31 - 1;
  if ( !v32 && v31 != 1 )
    v33 = 1;
  v18 = (_BYTE *)(v29 + v33);
  v22 = a1[5] - (_QWORD)v18;
  if ( v22 )
  {
    v25 = v23 + v22;
    v24 = (size_t)a2[2];
    if ( v23 + v22 < v24 )
    {
LABEL_35:
      v27 = (char *)*a2;
LABEL_36:
      memmove(&v27[v23], v18, v22);
      a2[1] = (char *)a2[1] + v22;
      goto LABEL_37;
    }
LABEL_25:
    v26 = 2 * v24;
    if ( v26 < v25 )
      v26 = v25;
    a2[2] = (void *)v26;
    v27 = (char *)realloc(*a2, v26);
    *a2 = v27;
    v23 = (__int64)a2[1];
    goto LABEL_36;
  }
LABEL_37:
  v34 = (const void *)a1[2];
  v35 = a1[3] - (_QWORD)v34;
  result = (void *)(v35 - 1);
  if ( v35 - 1 <= 2 )
  {
    v37 = (char *)a2[1];
    v38 = (size_t)a2[2];
    if ( (unsigned __int64)&v37[v35] >= v38 )
    {
      v40 = 2 * v38;
      if ( v40 < (unsigned __int64)&v37[v35] )
        v40 = (size_t)&v37[v35];
      a2[2] = (void *)v40;
      v39 = (char *)realloc(*a2, v40);
      *a2 = v39;
      v37 = (char *)a2[1];
    }
    else
    {
      v39 = (char *)*a2;
    }
    result = memmove(&v37[(_QWORD)v39], v34, v35);
    a2[1] = (char *)a2[1] + v35;
  }
  return result;
}
