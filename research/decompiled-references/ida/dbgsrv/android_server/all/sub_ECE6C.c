/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ECE6C
// Address: 0x00000000000ECE6C

//----- (00000000000ECE6C) ----------------------------------------------------
__int64 __fastcall sub_ECE6C(_QWORD *a1, char **a2)
{
  _BYTE *v2; // x9
  _BYTE *v3; // x22
  size_t v4; // x8
  size_t v7; // x21
  size_t v8; // x10
  __int64 *v9; // x23
  char *v10; // x0
  char *v11; // x0
  size_t v12; // x1
  __int64 v13; // x10
  unsigned __int64 v14; // x9
  char *v15; // x0
  char *v16; // x0
  size_t v17; // x1
  _BYTE *v18; // x20
  __int64 result; // x0

  v3 = (_BYTE *)a1[2];
  v2 = (_BYTE *)a1[3];
  v4 = (size_t)a2[1];
  v7 = v2 - v3;
  if ( v2 == v3 )
  {
    v9 = (__int64 *)(a2 + 2);
  }
  else
  {
    v9 = (__int64 *)(a2 + 2);
    v8 = (size_t)a2[2];
    if ( v4 + v7 >= v8 )
    {
      v11 = *a2;
      if ( 2 * v8 >= v4 + v7 )
        v12 = 2 * v8;
      else
        v12 = v4 + v7;
      a2[2] = (char *)v12;
      v10 = (char *)realloc(v11, v12);
      v4 = (size_t)a2[1];
      *a2 = v10;
    }
    else
    {
      v10 = *a2;
    }
    memmove(&v10[v4], v3, v7);
    v4 = (size_t)&a2[1][v7];
    a2[1] = (char *)v4;
  }
  v13 = *v9;
  v14 = v4 + 1;
  if ( v4 + 1 >= *v9 )
  {
    v16 = *a2;
    if ( 2 * v13 >= v14 )
      v17 = 2 * v13;
    else
      v17 = v4 + 1;
    a2[2] = (char *)v17;
    v15 = (char *)realloc(v16, v17);
    v4 = (size_t)a2[1];
    *a2 = v15;
    v14 = v4 + 1;
  }
  else
  {
    v15 = *a2;
  }
  a2[1] = (char *)v14;
  v15[v4] = 32;
  v18 = (_BYTE *)a1[4];
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v18 + 24LL))(v18, a2);
  if ( v18[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v18 + 32LL))(v18, a2);
  return result;
}
