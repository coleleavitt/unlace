/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5CD4
// Address: 0x00000000000E5CD4

//----- (00000000000E5CD4) ----------------------------------------------------
__int64 __fastcall sub_E5CD4(__int64 a1, char **a2)
{
  __int64 v2; // x8
  unsigned __int64 v5; // x10
  unsigned __int64 *v6; // x21
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  unsigned __int64 v10; // x10
  char *v11; // x0
  char *v12; // x0
  size_t v13; // x1
  char *v14; // x8
  char *v15; // x9
  char *v16; // x8
  unsigned __int64 v17; // x10
  unsigned __int64 v18; // x9
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  char *v22; // x8
  _BYTE *v23; // x20
  __int64 result; // x0

  v2 = (__int64)a2[1];
  if ( *(_BYTE *)(a1 + 24) )
  {
    v6 = (unsigned __int64 *)(a2 + 2);
    v5 = (unsigned __int64)a2[2];
    if ( v2 + 2 >= v5 )
    {
      v8 = *a2;
      if ( 2 * v5 >= v2 + 2 )
        v9 = 2 * v5;
      else
        v9 = v2 + 2;
      a2[2] = (char *)v9;
      v7 = (char *)realloc(v8, v9);
      v2 = (__int64)a2[1];
      *a2 = v7;
    }
    else
    {
      v7 = *a2;
    }
    *(_WORD *)&v7[v2] = 14906;
    v2 = (__int64)(a2[1] + 2);
    a2[1] = (char *)v2;
  }
  else
  {
    v6 = (unsigned __int64 *)(a2 + 2);
  }
  v10 = *v6;
  if ( v2 + 6 >= *v6 )
  {
    v12 = *a2;
    if ( 2 * v10 >= v2 + 6 )
      v13 = 2 * v10;
    else
      v13 = v2 + 6;
    a2[2] = (char *)v13;
    v11 = (char *)realloc(v12, v13);
    v2 = (__int64)a2[1];
    *a2 = v11;
  }
  else
  {
    v11 = *a2;
  }
  v14 = &v11[v2];
  *((_WORD *)v14 + 2) = 25972;
  *(_DWORD *)v14 = 1701602660;
  v15 = a2[1];
  v16 = v15 + 6;
  a2[1] = v15 + 6;
  if ( *(_BYTE *)(a1 + 25) )
  {
    v17 = *v6;
    v18 = (unsigned __int64)(v15 + 9);
    if ( v18 >= *v6 )
    {
      v20 = *a2;
      if ( 2 * v17 >= v18 )
        v21 = 2 * v17;
      else
        v21 = v18;
      a2[2] = (char *)v21;
      v19 = (char *)realloc(v20, v21);
      v16 = a2[1];
      *a2 = v19;
    }
    else
    {
      v19 = *a2;
    }
    v22 = &v16[(_QWORD)v19];
    v22[2] = 32;
    *(_WORD *)v22 = 23899;
    a2[1] += 3;
  }
  v23 = *(_BYTE **)(a1 + 16);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v23 + 24LL))(v23, a2);
  if ( v23[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v23 + 32LL))(v23, a2);
  return result;
}
