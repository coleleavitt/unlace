/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8218
// Address: 0x00000000000E8218

//----- (00000000000E8218) ----------------------------------------------------
__int64 __fastcall sub_E8218(_QWORD *a1, char **a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  unsigned __int64 v6; // x9
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  _BYTE *v10; // x21
  char *v11; // x8
  unsigned __int64 v12; // x10
  char *v13; // x0
  char *v14; // x0
  size_t v15; // x1
  char *v16; // x8
  _BYTE *v17; // x21
  char *v18; // x8
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x9
  char *v21; // x0
  char *v22; // x0
  size_t v23; // x1
  unsigned __int8 *v24; // x21
  char *v25; // x8
  unsigned __int64 v26; // x10
  char *v27; // x0
  char *v28; // x0
  size_t v29; // x1
  char *v30; // x8
  __int64 result; // x0

  v2 = a2[1];
  v3 = (unsigned __int64)a2[2];
  v6 = (unsigned __int64)(v2 + 1);
  if ( (unsigned __int64)(v2 + 1) >= v3 )
  {
    v8 = *a2;
    if ( 2 * v3 >= v6 )
      v9 = 2 * v3;
    else
      v9 = (size_t)(v2 + 1);
    a2[2] = (char *)v9;
    v7 = (char *)realloc(v8, v9);
    v2 = a2[1];
    *a2 = v7;
    v6 = (unsigned __int64)(v2 + 1);
  }
  else
  {
    v7 = *a2;
  }
  a2[1] = (char *)v6;
  v2[(_QWORD)v7] = 91;
  v10 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 24LL))(v10, a2);
  if ( v10[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 32LL))(v10, a2);
  v11 = a2[1];
  v12 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v11 + 5) >= v12 )
  {
    v14 = *a2;
    if ( 2 * v12 >= (unsigned __int64)(v11 + 5) )
      v15 = 2 * v12;
    else
      v15 = (size_t)(v11 + 5);
    a2[2] = (char *)v15;
    v13 = (char *)realloc(v14, v15);
    v11 = a2[1];
    *a2 = v13;
  }
  else
  {
    v13 = *a2;
  }
  v16 = &v11[(_QWORD)v13];
  v16[4] = 32;
  *(_DWORD *)v16 = 774778400;
  a2[1] += 5;
  v17 = (_BYTE *)a1[3];
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
  if ( v17[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
  v18 = a2[1];
  v19 = (unsigned __int64)a2[2];
  v20 = (unsigned __int64)(v18 + 1);
  if ( (unsigned __int64)(v18 + 1) >= v19 )
  {
    v22 = *a2;
    if ( 2 * v19 >= v20 )
      v23 = 2 * v19;
    else
      v23 = (size_t)(v18 + 1);
    a2[2] = (char *)v23;
    v21 = (char *)realloc(v22, v23);
    v18 = a2[1];
    *a2 = v21;
    v20 = (unsigned __int64)(v18 + 1);
  }
  else
  {
    v21 = *a2;
  }
  a2[1] = (char *)v20;
  v18[(_QWORD)v21] = 93;
  v24 = (unsigned __int8 *)a1[4];
  if ( (unsigned int)v24[8] - 43 >= 2 )
  {
    v25 = a2[1];
    v26 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v25 + 3) >= v26 )
    {
      v28 = *a2;
      if ( 2 * v26 >= (unsigned __int64)(v25 + 3) )
        v29 = 2 * v26;
      else
        v29 = (size_t)(v25 + 3);
      a2[2] = (char *)v29;
      v27 = (char *)realloc(v28, v29);
      v25 = a2[1];
      *a2 = v27;
    }
    else
    {
      v27 = *a2;
    }
    v30 = &v25[(_QWORD)v27];
    v30[2] = 32;
    *(_WORD *)v30 = 15648;
    a2[1] += 3;
    v24 = (unsigned __int8 *)a1[4];
  }
  result = (*(__int64 (__fastcall **)(unsigned __int8 *, char **))(*(_QWORD *)v24 + 24LL))(v24, a2);
  if ( v24[9] != 1 )
    return (*(__int64 (__fastcall **)(unsigned __int8 *, char **))(*(_QWORD *)v24 + 32LL))(v24, a2);
  return result;
}
