/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005794C
// Address: 0x000000010005794C

//----- (000000010005794C) ----------------------------------------------------
char **__fastcall sub_10005794C(char ***a1)
{
  char **v2; // x8
  unsigned __int64 v3; // x22
  char **v4; // x20
  char **v5; // x21
  char **v6; // x0
  char **v7; // x22
  char **v8; // x23
  __int128 v9; // q0
  char **result; // x0

  v2 = a1[1];
  v3 = (unsigned __int64)a1[2];
  if ( v3 >= (unsigned __int64)v2 + 1 )
  {
    v4 = *a1;
  }
  else
  {
    v4 = (char **)qvector_reserve(a1, nullptr, (unsigned __int64)v2 + 1, 0x30u);
    v5 = a1[2];
    a1[2] = (char **)v3;
    v6 = *a1;
    v7 = a1[1];
    if ( (__int64)v7 - 1 >= 0 )
    {
      v8 = v4;
      do
      {
        *v8 = *v6;
        *v6 = nullptr;
        v8[1] = v6[1];
        v6[1] = nullptr;
        v8[2] = v6[2];
        v6[2] = nullptr;
        v9 = *(_OWORD *)(v6 + 3);
        *((_BYTE *)v8 + 40) = *((_BYTE *)v6 + 40);
        *(_OWORD *)(v8 + 3) = v9;
        v6 = sub_100009150(v6) + 6;
        v8 += 6;
        v7 = (char **)((char *)v7 - 1);
      }
      while ( v7 );
      v6 = *a1;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
    v2 = a1[1];
  }
  result = &v4[6 * (_QWORD)v2];
  *result = nullptr;
  result[1] = nullptr;
  result[2] = nullptr;
  result[3] = (char *)-1LL;
  result[4] = (char *)-1LL;
  *((_BYTE *)result + 40) = 0;
  a1[1] = (char **)((char *)a1[1] + 1);
  return result;
}
