/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: winerr
// Address: 0x0000000100074B80

//----- (0000000100074B80) ----------------------------------------------------
char *__fastcall winerr(int a1)
{
  char **v2; // x19
  char *v3; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  char *v10; // x20
  size_t v11; // x0
  size_t v12; // x21
  unsigned __int64 v13; // x22
  char *v14; // x1

  v2 = (char **)sub_10006C130();
  v3 = strerror(a1);
  if ( v3 )
  {
    v10 = v3;
    v11 = strlen(v3);
    if ( v11 )
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = *v2;
      if ( (unsigned __int64)v2[2] < v11 + 1 )
      {
        v14 = (char *)qvector_reserve(v2, v14, v13, 1u);
        *v2 = v14;
      }
      v2[1] = (char *)v13;
      memmove(v14, v10, v12);
      (*v2)[v12] = 0;
    }
    else
    {
      v2[1] = nullptr;
    }
  }
  else
  {
    sub_10000295C(v2, "Unknown error, code: 0x%08X", v4, v5, v6, v7, v8, v9, a1);
  }
  return *v2;
}
// 100074C1C: variable 'v4' is possibly undefined
// 100074C1C: variable 'v5' is possibly undefined
// 100074C1C: variable 'v6' is possibly undefined
// 100074C1C: variable 'v7' is possibly undefined
// 100074C1C: variable 'v8' is possibly undefined
// 100074C1C: variable 'v9' is possibly undefined
