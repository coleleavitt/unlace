/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE430
// Address: 0x00000000000DE430

//----- (00000000000DE430) ----------------------------------------------------
const char *__fastcall sub_DE430(__int64 a1, void **a2)
{
  const char *v2; // r15
  const char *result; // rax
  const char *v4; // rbx
  size_t v5; // rbx
  char *v7; // rdi
  size_t v8; // rsi
  char *v9; // rax
  size_t v10; // rsi

  v2 = "true";
  if ( !*(_BYTE *)(a1 + 12) )
    v2 = "false";
  result = "";
  v4 = "";
  if ( !*(_BYTE *)(a1 + 12) )
    v4 = "";
  v5 = v4 - v2;
  if ( v5 )
  {
    v7 = (char *)a2[1];
    v8 = (size_t)a2[2];
    if ( (unsigned __int64)&v7[v5] >= v8 )
    {
      v10 = 2 * v8;
      if ( v10 < (unsigned __int64)&v7[v5] )
        v10 = (size_t)&v7[v5];
      a2[2] = (void *)v10;
      v9 = (char *)realloc(*a2, v10);
      *a2 = v9;
      v7 = (char *)a2[1];
    }
    else
    {
      v9 = (char *)*a2;
    }
    result = (const char *)memmove(&v7[(_QWORD)v9], v2, v5);
    a2[1] = (char *)a2[1] + v5;
  }
  return result;
}
