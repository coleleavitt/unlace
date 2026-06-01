/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DECF0
// Address: 0x00000000000DECF0

//----- (00000000000DECF0) ----------------------------------------------------
char *__fastcall sub_DECF0(_QWORD *a1, char **a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  _BYTE *v8; // rbx
  char *v9; // rcx
  unsigned __int64 v10; // rsi
  char *result; // rax
  size_t v12; // rsi
  __int64 v13; // rdi
  const void *v14; // r15
  size_t v15; // r14
  size_t v16; // rsi
  char *v17; // rax
  size_t v18; // rsi

  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 1) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 1) )
      v7 = (size_t)(v4 + 1);
    a2[2] = (char *)v7;
    v6 = (char *)realloc(*a2, v7);
    *a2 = v6;
    v4 = a2[1];
  }
  else
  {
    v6 = *a2;
  }
  v4[(_QWORD)v6] = 40;
  ++a2[1];
  v8 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 24LL))(v8, a2);
  if ( v8[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 32LL))(v8, a2);
  v9 = a2[1];
  v10 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v9 + 1) >= v10 )
  {
    v12 = 2 * v10;
    if ( v12 < (unsigned __int64)(v9 + 1) )
      v12 = (size_t)(v9 + 1);
    a2[2] = (char *)v12;
    result = (char *)realloc(*a2, v12);
    *a2 = result;
    v9 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v9[(_QWORD)result] = 41;
  v13 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v13;
  v14 = (const void *)a1[3];
  v15 = a1[4] - (_QWORD)v14;
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
    result = (char *)memmove(&v17[v13], v14, v15);
    a2[1] += v15;
  }
  return result;
}
