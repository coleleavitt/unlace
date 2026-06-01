/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3AE0
// Address: 0x00000000000E3AE0

//----- (00000000000E3AE0) ----------------------------------------------------
_BYTE *__fastcall sub_E3AE0(__int64 a1, void **a2)
{
  char *v3; // rcx
  unsigned __int64 v4; // rsi
  void *v5; // rax
  size_t v6; // rsi
  _BYTE *result; // rax
  _BYTE *v8; // rdx
  size_t v9; // rbx
  const void *v10; // r15
  char *v11; // rdi
  size_t v12; // rsi
  char *v13; // rax
  size_t v14; // rsi

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = (char *)a2[1];
    v4 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v3 + 1) >= v4 )
    {
      v6 = 2 * v4;
      if ( v6 < (unsigned __int64)(v3 + 1) )
        v6 = (size_t)(v3 + 1);
      a2[2] = (void *)v6;
      v5 = realloc(*a2, v6);
      *a2 = v5;
      v3 = (char *)a2[1];
    }
    else
    {
      v5 = *a2;
    }
    v3[(_QWORD)v5] = 126;
    a2[1] = (char *)a2[1] + 1;
  }
  result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16));
  v9 = v8 - result;
  if ( v8 != result )
  {
    v10 = result;
    v11 = (char *)a2[1];
    v12 = (size_t)a2[2];
    if ( (unsigned __int64)&v11[v9] >= v12 )
    {
      v14 = 2 * v12;
      if ( v14 < (unsigned __int64)&v11[v9] )
        v14 = (size_t)&v11[v9];
      a2[2] = (void *)v14;
      v13 = (char *)realloc(*a2, v14);
      *a2 = v13;
      v11 = (char *)a2[1];
    }
    else
    {
      v13 = (char *)*a2;
    }
    result = memmove(&v11[(_QWORD)v13], v10, v9);
    a2[1] = (char *)a2[1] + v9;
  }
  return result;
}
// E3B3A: variable 'v8' is possibly undefined
