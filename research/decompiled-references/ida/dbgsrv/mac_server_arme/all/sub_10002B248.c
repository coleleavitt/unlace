/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B248
// Address: 0x000000010002B248

//----- (000000010002B248) ----------------------------------------------------
char **__fastcall sub_10002B248(
        char **a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  int v11; // w0
  char *v12; // x1
  char *v13; // x9
  bool v14; // cf
  char *v15; // x9
  char *v16; // x23
  size_t v17; // x21

  v11 = qvsnprintf(nullptr, 0, a2, &a9);
  if ( v11 )
  {
    v12 = *a1;
    v13 = a1[1];
    v14 = v13 != nullptr;
    v15 = v13 - 1;
    if ( v14 )
      v16 = v15;
    else
      v16 = nullptr;
    v17 = v11 + 1LL;
    if ( a1[2] < &v16[v17] )
    {
      v12 = (char *)qvector_reserve(a1, v12, (unsigned __int64)&v16[v17], 1u);
      *a1 = v12;
    }
    a1[1] = &v16[v17];
    qvsnprintf(&v16[(_QWORD)v12], v17, a2, &a9);
  }
  return a1;
}
