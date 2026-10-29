/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C850
// Address: 0x000000010004C850

//----- (000000010004C850) ----------------------------------------------------
char **__fastcall sub_10004C850(
        __int64 a1,
        char **a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char **result; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  size_t v17; // x21
  unsigned __int64 v18; // x22
  char *v19; // x0
  char *v20; // x8
  bool v21; // cf
  char *v22; // x8
  char *v23; // x22
  char *v24; // x1
  int v25; // w21
  char *v26; // x22
  char v27; // t1

  a2[1] = nullptr;
  if ( a3 )
    return sub_10000295C(
             a2,
             "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
             *(unsigned __int8 *)(a1 + 2080),
             *(unsigned __int8 *)(a1 + 2081),
             *(unsigned __int8 *)(a1 + 2082),
             *(unsigned __int8 *)(a1 + 2083),
             a7,
             a8,
             *(_BYTE *)(a1 + 2068));
  result = (char **)strlen((const char *)(a1 + 1034));
  if ( result )
  {
    v17 = (size_t)result;
    v18 = (unsigned __int64)result + 1;
    v19 = *a2;
    if ( (unsigned __int64)a2[2] < v18 )
    {
      v19 = (char *)qvector_reserve(a2, *a2, v18, 1u);
      *a2 = v19;
    }
    a2[1] = (char *)v18;
    result = (char **)memmove(v19, (const void *)(a1 + 1034), v17);
    (*a2)[v17] = 0;
    v20 = a2[1];
  }
  else
  {
    v20 = nullptr;
  }
  v21 = v20 != nullptr;
  v22 = v20 - 1;
  if ( v21 )
    v23 = v22;
  else
    v23 = nullptr;
  v24 = *a2;
  if ( a2[2] < v23 + 2 )
  {
    result = (char **)qvector_reserve(a2, v24, (unsigned __int64)(v23 + 2), 1u);
    v24 = (char *)result;
    *a2 = (char *)result;
  }
  a2[1] = v23 + 2;
  v23[(_QWORD)v24 + 1] = 0;
  v23[(_QWORD)*a2] = 124;
  v25 = *(unsigned __int16 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 8) )
  {
    v26 = (char *)(a1 + 10);
    do
    {
      v27 = *v26++;
      result = sub_10002B248(a2, "%02X", v11, v12, v13, v14, v15, v16, v27);
      --v25;
    }
    while ( v25 );
  }
  return result;
}
// 10004C9C0: variable 'v11' is possibly undefined
// 10004C9C0: variable 'v12' is possibly undefined
// 10004C9C0: variable 'v13' is possibly undefined
// 10004C9C0: variable 'v14' is possibly undefined
// 10004C9C0: variable 'v15' is possibly undefined
// 10004C9C0: variable 'v16' is possibly undefined
