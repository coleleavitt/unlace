/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E68C0
// Address: 0x00000000000E68C0

//----- (00000000000E68C0) ----------------------------------------------------
char *__fastcall sub_E68C0(__int64 a1, char **a2)
{
  __int64 *v4; // r13
  char *v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // rax
  _BYTE *v8; // rbx
  char *v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  size_t v12; // rsi
  __int64 v13; // rdi
  const void *v14; // r15
  size_t v15; // rbx
  size_t v16; // rsi
  char *v17; // rax
  size_t v18; // rsi
  __int64 v19; // rbx
  char *result; // rax
  unsigned __int64 v21; // rsi
  char *v22; // rdi
  size_t v23; // rsi
  size_t v24; // rsi
  __int64 v25; // rdi
  _BYTE *v26; // r15
  __int64 v27; // r14
  size_t v28; // r14
  size_t v29; // rsi
  char *v30; // rax
  size_t v31; // rsi
  char *v32; // rdi
  unsigned __int64 v33; // rsi
  size_t v34; // rsi

  if ( *(_BYTE *)(a1 + 40) )
  {
    v4 = (__int64 *)(a2 + 1);
    v5 = a2[1];
    v6 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v5 + 13) >= v6 )
    {
      v12 = 2 * v6;
      if ( v12 < (unsigned __int64)(v5 + 13) )
        v12 = (size_t)(v5 + 13);
      a2[2] = (char *)v12;
      v7 = (char *)realloc(*a2, v12);
      *a2 = v7;
      v5 = a2[1];
    }
    else
    {
      v7 = *a2;
    }
    qmemcpy(&v5[(_QWORD)v7], "pixel vector[", 13);
    v13 = *v4 + 13;
    *v4 = v13;
    v14 = *(const void **)(a1 + 24);
    v15 = *(_QWORD *)(a1 + 32) - (_QWORD)v14;
    if ( v15 )
    {
      v16 = (size_t)a2[2];
      if ( v13 + v15 >= v16 )
      {
        v18 = 2 * v16;
        if ( v18 < v13 + v15 )
          v18 = v13 + v15;
        a2[2] = (char *)v18;
        v17 = (char *)realloc(*a2, v18);
        *a2 = v17;
        v13 = (__int64)a2[1];
      }
      else
      {
        v17 = *a2;
      }
      memmove(&v17[v13], v14, v15);
      v19 = *v4 + v15;
      *v4 = v19;
      v13 = v19;
    }
    result = (char *)(v13 + 1);
    v21 = (unsigned __int64)a2[2];
    if ( v13 + 1 >= v21 )
    {
      v23 = 2 * v21;
      if ( v23 < (unsigned __int64)result )
        v23 = v13 + 1;
      a2[2] = (char *)v23;
      result = (char *)realloc(*a2, v23);
      *a2 = result;
      v22 = &result[(_QWORD)a2[1]];
    }
    else
    {
      v22 = &(*a2)[v13];
    }
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 16);
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 24LL))(v8, a2);
    if ( v8[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 32LL))(v8, a2);
    v4 = (__int64 *)(a2 + 1);
    v9 = a2[1];
    v10 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v9 + 8) >= v10 )
    {
      v24 = 2 * v10;
      if ( v24 < (unsigned __int64)(v9 + 8) )
        v24 = (size_t)(v9 + 8);
      a2[2] = (char *)v24;
      v11 = (char *)realloc(*a2, v24);
      *a2 = v11;
      v9 = a2[1];
    }
    else
    {
      v11 = *a2;
    }
    *(_QWORD *)&v9[(_QWORD)v11] = 0x5B726F7463657620LL;
    v25 = *v4 + 8;
    *v4 = v25;
    v26 = *(_BYTE **)(a1 + 24);
    if ( v26 )
    {
      v27 = *(_QWORD *)(a1 + 32);
      if ( v27 )
      {
        v28 = v27 - (_QWORD)v26;
        if ( v28 )
        {
          v29 = (size_t)a2[2];
          if ( v25 + v28 >= v29 )
          {
            v31 = 2 * v29;
            if ( v31 < v25 + v28 )
              v31 = v25 + v28;
            a2[2] = (char *)v31;
            v30 = (char *)realloc(*a2, v31);
            *a2 = v30;
            v25 = (__int64)a2[1];
          }
          else
          {
            v30 = *a2;
          }
          memmove(&v30[v25], v26, v28);
          *v4 += v28;
        }
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v26 + 24LL))(v26, a2);
        if ( v26[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v26 + 32LL))(v26, a2);
      }
    }
    v32 = a2[1];
    v33 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v32 + 1) >= v33 )
    {
      v34 = 2 * v33;
      if ( v34 < (unsigned __int64)(v32 + 1) )
        v34 = (size_t)(v32 + 1);
      a2[2] = (char *)v34;
      result = (char *)realloc(*a2, v34);
      *a2 = result;
      v32 = a2[1];
    }
    else
    {
      result = *a2;
    }
    v22 = &v32[(_QWORD)result];
  }
  *v22 = 93;
  ++*v4;
  return result;
}
