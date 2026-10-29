/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFA90
// Address: 0x00000000000DFA90

//----- (00000000000DFA90) ----------------------------------------------------
char *__fastcall sub_DFA90(__int64 a1, char **a2)
{
  const void *v4; // r12
  __int64 v5; // r15
  char *v6; // rdi
  size_t v7; // r15
  size_t v8; // rsi
  char *v9; // rax
  _QWORD *v10; // r13
  size_t v11; // rsi
  size_t v12; // r15
  char *v13; // rax
  size_t v14; // rsi
  char *v15; // rcx
  unsigned __int64 v16; // rsi
  char *v17; // rax
  size_t v18; // rsi
  char *v19; // rcx
  unsigned __int64 v20; // rsi
  char *result; // rax
  size_t v22; // rsi

  v4 = *(const void **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
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
  v6[(_QWORD)v13] = 60;
  ++a2[1];
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 32) + 24LL))(*(_QWORD *)(a1 + 32), a2);
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
  *(_WORD *)&v15[(_QWORD)v17] = 10302;
  a2[1] += 2;
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40), a2);
  v19 = a2[1];
  v20 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v19 + 1) >= v20 )
  {
    v22 = 2 * v20;
    if ( v22 < (unsigned __int64)(v19 + 1) )
      v22 = (size_t)(v19 + 1);
    a2[2] = (char *)v22;
    result = (char *)realloc(*a2, v22);
    *a2 = result;
    v19 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v19[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
