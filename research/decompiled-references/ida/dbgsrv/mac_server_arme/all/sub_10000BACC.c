/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BACC
// Address: 0x000000010000BACC

//----- (000000010000BACC) ----------------------------------------------------
char **__fastcall sub_10000BACC(char **a1, char *a2, va_list a3)
{
  char *v5; // x0
  int v6; // w0
  unsigned __int64 v7; // x21
  char *v8; // x1

  v5 = *a1;
  if ( v5 )
  {
    a1[1] = nullptr;
    qfree(v5);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  v6 = qvsnprintf(nullptr, 0, a2, a3);
  if ( v6 )
  {
    v7 = v6 + 1LL;
    v8 = *a1;
    if ( (unsigned __int64)a1[2] < v7 )
    {
      v8 = (char *)qvector_reserve(a1, v8, v7, 1u);
      *a1 = v8;
    }
    a1[1] = (char *)v7;
    qvsnprintf(v8, v7, a2, a3);
  }
  return a1;
}
