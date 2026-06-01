/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9530
// Address: 0x00000000000D9530

//----- (00000000000D9530) ----------------------------------------------------
void __fastcall sub_D9530(__int64 a1, void **a2)
{
  const void *v2; // r15
  size_t v3; // rbx
  char *v5; // rdi
  size_t v6; // rsi
  char *v7; // rax
  size_t v8; // rsi

  v2 = *(const void **)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24) - (_QWORD)v2;
  if ( v3 )
  {
    v5 = (char *)a2[1];
    v6 = (size_t)a2[2];
    if ( (unsigned __int64)&v5[v3] >= v6 )
    {
      v8 = 2 * v6;
      if ( v8 < (unsigned __int64)&v5[v3] )
        v8 = (size_t)&v5[v3];
      a2[2] = (void *)v8;
      v7 = (char *)realloc(*a2, v8);
      *a2 = v7;
      v5 = (char *)a2[1];
    }
    else
    {
      v7 = (char *)*a2;
    }
    memmove(&v5[(_QWORD)v7], v2, v3);
    a2[1] = (char *)a2[1] + v3;
  }
}
