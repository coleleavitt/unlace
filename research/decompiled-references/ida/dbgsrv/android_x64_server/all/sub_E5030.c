/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5030
// Address: 0x00000000000E5030

//----- (00000000000E5030) ----------------------------------------------------
_BYTE *__fastcall sub_E5030(_QWORD *a1, void **a2)
{
  _BYTE *v4; // rbx
  char *v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // rax
  size_t v8; // rsi
  __int64 v9; // rdi
  const void *v10; // r15
  size_t v11; // r14
  size_t v12; // rsi
  char *v13; // rax
  size_t v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  _BYTE *result; // rax
  size_t v18; // rsi

  v4 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v4[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, void **))(*(_QWORD *)v4 + 32LL))(v4, a2);
  v5 = (char *)a2[1];
  v6 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v5 + 2) >= v6 )
  {
    v8 = 2 * v6;
    if ( v8 < (unsigned __int64)(v5 + 2) )
      v8 = (size_t)(v5 + 2);
    a2[2] = (void *)v8;
    v7 = (char *)realloc(*a2, v8);
    *a2 = v7;
    v5 = (char *)a2[1];
  }
  else
  {
    v7 = (char *)*a2;
  }
  *(_WORD *)&v5[(_QWORD)v7] = 10272;
  v9 = (__int64)a2[1] + 2;
  a2[1] = (void *)v9;
  v10 = (const void *)a1[3];
  v11 = a1[4] - (_QWORD)v10;
  if ( v11 )
  {
    v12 = (size_t)a2[2];
    if ( v9 + v11 >= v12 )
    {
      v14 = 2 * v12;
      if ( v14 < v9 + v11 )
        v14 = v9 + v11;
      a2[2] = (void *)v14;
      v13 = (char *)realloc(*a2, v14);
      *a2 = v13;
      v9 = (__int64)a2[1];
    }
    else
    {
      v13 = (char *)*a2;
    }
    memmove(&v13[v9], v10, v11);
    v15 = (__int64)a2[1] + v11;
    a2[1] = (void *)v15;
    v9 = v15;
  }
  v16 = (unsigned __int64)a2[2];
  if ( v9 + 1 >= v16 )
  {
    v18 = 2 * v16;
    if ( v18 < v9 + 1 )
      v18 = v9 + 1;
    a2[2] = (void *)v18;
    result = realloc(*a2, v18);
    *a2 = result;
    v9 = (__int64)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v9] = 41;
  a2[1] = (char *)a2[1] + 1;
  return result;
}
