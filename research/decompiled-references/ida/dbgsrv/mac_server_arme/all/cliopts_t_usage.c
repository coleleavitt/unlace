/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_usage
// Address: 0x000000010006A20C

//----- (000000010006A20C) ----------------------------------------------------
void __fastcall __noreturn cliopts_t_usage(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // x26
  int (**v10)(const char *, ...); // x19
  char *v11; // x0
  const char *v12; // x0
  const char *v13; // x8
  __int64 v14; // x27
  __int64 v15; // x24
  char *v16; // x1
  unsigned __int64 v17; // x22
  char *v18; // x1
  unsigned __int64 v19; // x22
  const void *v20; // x23
  size_t v21; // x0
  size_t v22; // x24
  char *v23; // x1
  unsigned __int64 v24; // x22
  size_t v25; // x19
  unsigned __int64 v26; // x25
  char *v27; // x1
  unsigned __int64 v28; // x22
  char *v30; // [xsp+20h] [xbp-70h] BYREF
  unsigned __int64 v31; // [xsp+28h] [xbp-68h]
  unsigned __int64 v32; // [xsp+30h] [xbp-60h]

  v30 = nullptr;
  v31 = 0;
  v32 = 0;
  v9 = a1[1];
  if ( v9 )
    goto LABEL_14;
  while ( 1 )
  {
    if ( a1[9] )
      v10 = (int (**)(const char *, ...))a1[9];
    else
      v10 = &_printf;
    if ( a1[4] )
      v11 = (char *)a1[3];
    else
      v11 = &byte_10007AE40;
    v12 = qbasename(v11);
    if ( v31 )
      v13 = v30;
    else
      v13 = &byte_10007AE40;
    ((void (*)(const char *, ...))v10)("Usage: %s [options]\n%s", v12, v13);
    if ( (unsigned __int64)a1[7] >= 2 )
      ((void (*)(const char *, ...))v10)("\n%s\n", (const char *)a1[6]);
    qexit(a2);
    __break(1u);
LABEL_14:
    v14 = 0;
    do
    {
      v15 = *a1;
      if ( *(_BYTE *)(*a1 + v14) )
      {
        sub_10002B248(&v30, "  -%c%s", a3, a4, a5, a6, a7, a8, *(_BYTE *)(*a1 + v14));
      }
      else
      {
        v16 = v30;
        if ( v31 )
          v17 = v31 - 1;
        else
          v17 = 0;
        if ( v32 < v17 + 9 )
        {
          v16 = (char *)qvector_reserve(&v30, v30, v17 + 9, 1u);
          v30 = v16;
        }
        v31 = v17 + 9;
        v16[v17 + 8] = 0;
        *(_QWORD *)&v30[v17] = 0x2020202020202020LL;
      }
      if ( *(_QWORD *)(v15 + v14 + 8) )
        sub_10002B248(&v30, "  (--%s%s)", a3, a4, a5, a6, a7, a8, *(_QWORD *)(v15 + v14 + 8));
      v18 = v30;
      if ( v31 )
        v19 = v31 - 1;
      else
        v19 = 0;
      if ( v32 < v19 + 2 )
      {
        v18 = (char *)qvector_reserve(&v30, v30, v19 + 2, 1u);
        v30 = v18;
      }
      v31 = v19 + 2;
      v18[v19 + 1] = 0;
      v30[v19] = 32;
      v20 = *(const void **)(v15 + v14 + 16);
      if ( v20 )
      {
        v21 = strlen(*(const char **)(v15 + v14 + 16));
        v22 = v21;
        v23 = v30;
        if ( v31 )
          v24 = v31 - 1;
        else
          v24 = 0;
        v25 = v24 + v21;
        v26 = v24 + v21 + 1;
        if ( v32 < v26 )
        {
          v23 = (char *)qvector_reserve(&v30, v30, v26, 1u);
          v30 = v23;
        }
        v31 = v26;
        v23[v25] = 0;
        memmove(&v30[v24], v20, v22);
      }
      v27 = v30;
      if ( v31 )
        v28 = v31 - 1;
      else
        v28 = 0;
      if ( v32 < v28 + 2 )
      {
        v27 = (char *)qvector_reserve(&v30, v30, v28 + 2, 1u);
        v30 = v27;
      }
      v31 = v28 + 2;
      v27[v28 + 1] = 0;
      v30[v28] = 10;
      v14 += 40;
      --v9;
    }
    while ( v9 );
  }
}
// 10006A33C: variable 'a3' is possibly undefined
// 10006A33C: variable 'a4' is possibly undefined
// 10006A33C: variable 'a5' is possibly undefined
// 10006A33C: variable 'a6' is possibly undefined
// 10006A33C: variable 'a7' is possibly undefined
// 10006A33C: variable 'a8' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
