/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E77D0
// Address: 0x00000000000E77D0

//----- (00000000000E77D0) ----------------------------------------------------
void *__fastcall sub_E77D0(__int64 a1, void **a2)
{
  void *result; // rax
  const void *v4; // r15
  size_t v5; // rbx
  char *v6; // rdi
  size_t v7; // rsi
  char *v8; // rax
  size_t v9; // rsi

  result = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v4 = *(const void **)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32) - (_QWORD)v4;
  if ( v5 )
  {
    v6 = (char *)a2[1];
    v7 = (size_t)a2[2];
    if ( (unsigned __int64)&v6[v5] >= v7 )
    {
      v9 = 2 * v7;
      if ( v9 < (unsigned __int64)&v6[v5] )
        v9 = (size_t)&v6[v5];
      a2[2] = (void *)v9;
      v8 = (char *)realloc(*a2, v9);
      *a2 = v8;
      v6 = (char *)a2[1];
    }
    else
    {
      v8 = (char *)*a2;
    }
    result = memmove(&v6[(_QWORD)v8], v4, v5);
    a2[1] = (char *)a2[1] + v5;
  }
  return result;
}
