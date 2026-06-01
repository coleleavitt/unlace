/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EC9D8
// Address: 0x00000000000EC9D8

//----- (00000000000EC9D8) ----------------------------------------------------
__int64 __fastcall sub_EC9D8(__int64 a1, char **a2)
{
  __int64 v2; // x8
  __int64 *v5; // x23
  unsigned __int64 v6; // x10
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  __int64 v10; // x10
  char *v11; // x0
  char *v12; // x0
  size_t v13; // x1
  __int64 v14; // x8
  _BYTE *v15; // x9
  _BYTE *v16; // x21
  size_t v17; // x22
  __int64 v18; // x10
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  char *v22; // x8
  unsigned __int64 v23; // x10
  char *v24; // x0
  char *v25; // x0
  size_t v26; // x1

  v2 = (__int64)a2[1];
  if ( v2 && (*a2)[v2 - 1] == 93 )
  {
    v5 = (__int64 *)(a2 + 2);
  }
  else
  {
    v5 = (__int64 *)(a2 + 2);
    v6 = (unsigned __int64)a2[2];
    if ( v2 + 1 >= v6 )
    {
      v8 = *a2;
      if ( 2 * v6 >= v2 + 1 )
        v9 = 2 * v6;
      else
        v9 = v2 + 1;
      a2[2] = (char *)v9;
      v7 = (char *)realloc(v8, v9);
      v2 = (__int64)a2[1];
      *a2 = v7;
    }
    else
    {
      v7 = *a2;
    }
    v7[v2] = 32;
    v2 = (__int64)(a2[1] + 1);
    a2[1] = (char *)v2;
  }
  v10 = *v5;
  if ( v2 + 1 >= (unsigned __int64)*v5 )
  {
    v12 = *a2;
    if ( 2 * v10 >= (unsigned __int64)(v2 + 1) )
      v13 = 2 * v10;
    else
      v13 = v2 + 1;
    a2[2] = (char *)v13;
    v11 = (char *)realloc(v12, v13);
    v2 = (__int64)a2[1];
    *a2 = v11;
  }
  else
  {
    v11 = *a2;
  }
  v11[v2] = 91;
  v14 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v14;
  v16 = *(_BYTE **)(a1 + 24);
  v15 = *(_BYTE **)(a1 + 32);
  if ( v15 )
  {
    if ( v16 )
    {
      v17 = v15 - v16;
      if ( v15 != v16 )
      {
        v18 = *v5;
        if ( v14 + v17 >= *v5 )
        {
          v20 = *a2;
          if ( 2 * v18 >= v14 + v17 )
            v21 = 2 * v18;
          else
            v21 = v14 + v17;
          a2[2] = (char *)v21;
          v19 = (char *)realloc(v20, v21);
          v14 = (__int64)a2[1];
          *a2 = v19;
        }
        else
        {
          v19 = *a2;
        }
        memmove(&v19[v14], v16, v17);
        a2[1] += v17;
      }
    }
  }
  else if ( v16 )
  {
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)v16 + 24LL))(*(_QWORD *)(a1 + 24), a2);
    if ( v16[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 32LL))(v16, a2);
  }
  v22 = a2[1];
  v23 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v22 + 1) >= v23 )
  {
    v25 = *a2;
    if ( 2 * v23 >= (unsigned __int64)(v22 + 1) )
      v26 = 2 * v23;
    else
      v26 = (size_t)(v22 + 1);
    a2[2] = (char *)v26;
    v24 = (char *)realloc(v25, v26);
    v22 = a2[1];
    *a2 = v24;
  }
  else
  {
    v24 = *a2;
  }
  v22[(_QWORD)v24] = 93;
  ++a2[1];
  return (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
}
// ECAE4: conditional instruction was optimized away because x9.8==0
