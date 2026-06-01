/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3BA0
// Address: 0x00000000000E3BA0

//----- (00000000000E3BA0) ----------------------------------------------------
_BYTE *__fastcall sub_E3BA0(__int64 a1, void **a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  void *v6; // rax
  size_t v7; // rsi
  __int64 v8; // rdi
  const void *v9; // r15
  size_t v10; // r14
  size_t v11; // rsi
  char *v12; // rax
  size_t v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // rsi
  _BYTE *result; // rax
  size_t v17; // rsi

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v4 = (char *)a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 5) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 5) )
      v7 = (size_t)(v4 + 5);
    a2[2] = (void *)v7;
    v6 = realloc(*a2, v7);
    *a2 = v6;
    v4 = (char *)a2[1];
  }
  else
  {
    v6 = *a2;
  }
  v4[(_QWORD)v6 + 4] = 58;
  *(_DWORD *)&v4[(_QWORD)v6] = 1768055131;
  v8 = (__int64)a2[1] + 5;
  a2[1] = (void *)v8;
  v9 = *(const void **)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 32) - (_QWORD)v9;
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
    result = realloc(*a2, v17);
    *a2 = result;
    v8 = (__int64)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v8] = 93;
  a2[1] = (char *)a2[1] + 1;
  return result;
}
