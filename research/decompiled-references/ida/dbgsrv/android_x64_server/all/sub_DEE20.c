/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DEE20
// Address: 0x00000000000DEE20

//----- (00000000000DEE20) ----------------------------------------------------
char *__fastcall sub_DEE20(__int64 a1, void **a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *result; // rax
  size_t v7; // rsi
  __int64 v8; // rdi
  const void *v9; // r15
  size_t v10; // r14
  size_t v11; // rsi
  char *v12; // rax
  size_t v13; // rsi

  v4 = (char *)a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 2) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 2) )
      v7 = (size_t)(v4 + 2);
    a2[2] = (void *)v7;
    result = (char *)realloc(*a2, v7);
    *a2 = result;
    v4 = (char *)a2[1];
  }
  else
  {
    result = (char *)*a2;
  }
  *(_WORD *)&v4[(_QWORD)result] = 28774;
  v8 = (__int64)a2[1] + 2;
  a2[1] = (void *)v8;
  v9 = *(const void **)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 24) - (_QWORD)v9;
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
    result = (char *)memmove(&v12[v8], v9, v10);
    a2[1] = (char *)a2[1] + v10;
  }
  return result;
}
