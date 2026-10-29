/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF960
// Address: 0x00000000000DF960

//----- (00000000000DF960) ----------------------------------------------------
char *__fastcall sub_DF960(_QWORD *a1, char **a2)
{
  const void *v4; // r12
  __int64 v5; // r15
  char *v6; // rdi
  size_t v7; // r15
  size_t v8; // rsi
  char *v9; // rax
  _QWORD *v10; // rbx
  size_t v11; // rsi
  size_t v12; // r15
  char *v13; // rax
  size_t v14; // rsi
  _BYTE *v15; // rbx
  char *v16; // rcx
  unsigned __int64 v17; // rsi
  char *result; // rax
  size_t v19; // rsi

  v4 = (const void *)a1[2];
  v5 = a1[3];
  v6 = a2[1];
  v7 = v5 - (_QWORD)v4;
  if ( v7 )
  {
    v8 = (size_t)a2[2];
    if ( (unsigned __int64)&v6[v7] >= v8 )
    {
      v11 = 2 * v8;
      if ( v11 < (unsigned __int64)&v6[v7] )
        v11 = (size_t)&v6[v7];
      a2[2] = (char *)v11;
      v9 = (char *)realloc(*a2, v11);
      *a2 = v9;
      v6 = a2[1];
    }
    else
    {
      v9 = *a2;
    }
    v10 = a2 + 2;
    memmove(&v6[(_QWORD)v9], v4, v7);
    v12 = (size_t)&a2[1][v7];
    a2[1] = (char *)v12;
    v6 = (char *)v12;
  }
  else
  {
    v10 = a2 + 2;
  }
  if ( (unsigned __int64)(v6 + 1) >= *v10 )
  {
    v14 = 2LL * *v10;
    if ( v14 < (unsigned __int64)(v6 + 1) )
      v14 = (size_t)(v6 + 1);
    a2[2] = (char *)v14;
    v13 = (char *)realloc(*a2, v14);
    *a2 = v13;
    v6 = a2[1];
  }
  else
  {
    v13 = *a2;
  }
  v6[(_QWORD)v13] = 40;
  ++a2[1];
  v15 = (_BYTE *)a1[4];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 24LL))(v15, a2);
  if ( v15[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 32LL))(v15, a2);
  v16 = a2[1];
  v17 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v16 + 1) >= v17 )
  {
    v19 = 2 * v17;
    if ( v19 < (unsigned __int64)(v16 + 1) )
      v19 = (size_t)(v16 + 1);
    a2[2] = (char *)v19;
    result = (char *)realloc(*a2, v19);
    *a2 = result;
    v16 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v16[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
